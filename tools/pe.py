"""A minimal PE reader for the build (standard library only): sections, bytes at a virtual address."""

from __future__ import annotations

import struct
from dataclasses import dataclass
from pathlib import Path


@dataclass(frozen=True)
class PESection:
    name: str
    va: int  # absolute virtual address
    size: int  # virtual size
    raw_offset: int
    raw_size: int
    characteristics: int = 0

    @property
    def executable(self) -> bool:
        return bool(self.characteristics & 0x20000000)  # IMAGE_SCN_MEM_EXECUTE


class PE:
    def __init__(self, path: Path):
        self.path = Path(path)
        self.data = b = self.path.read_bytes()
        if b[:2] != b"MZ":
            raise ValueError(f"{self.path}: not a PE file")
        pe = struct.unpack_from("<I", b, 0x3C)[0]
        if b[pe:pe + 4] != b"PE\0\0":
            raise ValueError(f"{self.path}: not a PE file")
        coff = pe + 4
        nsec, self.timestamp = struct.unpack_from("<HI", b, coff + 2)
        opt_size = struct.unpack_from("<H", b, coff + 16)[0]
        opt = coff + 20
        self.image_base = struct.unpack_from("<I", b, opt + 28)[0]
        self.checksum_offset = opt + 64
        ndirs = struct.unpack_from("<I", b, opt + 92)[0]
        self.directories = [struct.unpack_from("<II", b, opt + 96 + 8 * i) for i in range(min(ndirs, 16))]
        self.sections = []
        for i in range(nsec):
            o = opt + opt_size + 40 * i
            name = b[o:o + 8].rstrip(b"\0").decode("latin1")
            vsize, rva, raw_size, raw_offset = struct.unpack_from("<IIII", b, o + 8)
            flags = struct.unpack_from("<I", b, o + 36)[0]
            self.sections.append(PESection(name, self.image_base + rva, vsize or raw_size, raw_offset, raw_size, flags))

    def section_at(self, va: int) -> PESection | None:
        return next((s for s in self.sections if s.va <= va < s.va + s.size), None)

    def read(self, va: int, n: int) -> bytes:
        """Bytes at [va, va + n) as loaded in memory (zeros past a section's raw data)."""
        s = self.section_at(va)
        if s is None or n < 0 or va + n > s.va + s.size:
            raise ValueError(f"0x{va:08x}+0x{n:x} is outside the image's sections")
        start = va - s.va
        raw = self.data[s.raw_offset + start:s.raw_offset + min(start + n, s.raw_size)] if start < s.raw_size else b""
        return raw + bytes(n - len(raw))

    def offset(self, va: int) -> int | None:
        """The file offset of a virtual address inside a section's raw data, or None."""
        s = self.section_at(va)
        if s is None or va - s.va >= s.raw_size:
            return None
        return s.raw_offset + va - s.va

    def _cstring(self, va: int) -> str:
        out = bytearray()
        while True:
            chunk = self.read(va + len(out), 1)
            if chunk == b"\0":
                return out.decode("latin1")
            out += chunk

    def export_table(self) -> list[tuple[str, int, int]]:
        """(name, ordinal, virtual address) of each export by name."""
        rva = self.directories[0][0] if self.directories else 0
        if not rva:
            return []
        base = self.image_base
        first, _, count, functions, names, ordinals = struct.unpack_from("<IIIIII", self.read(base + rva, 40), 16)
        out = []
        for i in range(count):
            name = struct.unpack("<I", self.read(base + names + 4 * i, 4))[0]
            index = struct.unpack("<H", self.read(base + ordinals + 2 * i, 2))[0]
            target = struct.unpack("<I", self.read(base + functions + 4 * index, 4))[0]
            out.append((self._cstring(base + name), first + index, base + target))
        return out

    def exports(self) -> dict[str, int]:
        """Exported name -> ordinal."""
        return {name: ordinal for name, ordinal, _ in self.export_table()}

    def imports(self) -> dict[str, list[str]]:
        """Imported DLL (lower case) -> its names in table order (`#<ordinal>` for one imported by ordinal)."""
        rva = self.directories[1][0] if len(self.directories) > 1 else 0
        out: dict[str, list[str]] = {}
        while rva:
            lookup, _, _, name, first = struct.unpack("<IIIII", self.read(self.image_base + rva, 20))
            if not (lookup or name or first):
                break
            entries, at = [], self.image_base + (lookup or first)
            while True:
                word = struct.unpack("<I", self.read(at, 4))[0]
                if not word:
                    break
                entries.append(f"#{word & 0xFFFF}" if word & 0x80000000 else self._cstring(self.image_base + word + 2))
                at += 4
            out.setdefault(self._cstring(self.image_base + name).lower(), []).extend(entries)
            rva += 20
        return out
