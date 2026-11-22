"""A minimal i386 COFF object reader/writer for the build's fix-ups (standard library only).

It edits in place what the fix-ups need and nothing else: a section's name, a symbol's storage class, a new symbol
at the end of the symbol table. Section data and relocations are never moved, so `to_bytes()` of an unedited object
is the object itself."""

from __future__ import annotations

import struct
from dataclasses import dataclass, field

SCN_CNT_UNINITIALIZED_DATA = 0x00000080
SCN_LNK_NRELOC_OVFL = 0x01000000
SYM_CLASS_EXTERNAL = 2
SYM_CLASS_STATIC = 3
SYM_CLASS_WEAK_EXTERNAL = 105


class CoffError(ValueError):
    pass


@dataclass
class Reloc:
    offset: int
    symbol_index: int
    type: int


@dataclass
class Section:
    number: int
    name: str
    characteristics: int
    data: bytes
    relocations: list[Reloc] = field(default_factory=list)


@dataclass
class Symbol:
    index: int
    name: str
    value: int
    section_number: int
    type: int
    storage_class: int
    aux: bytes = b""  # the auxiliary records, 18 bytes each
    raw_name: bytes = b""  # the 8-byte name field as read (short name or string table offset)

    @property
    def is_defined(self) -> bool:
        return self.section_number > 0


class Coff:
    def __init__(self, raw: bytes, sections: list[Section], symbols: list[Symbol], sym_ptr: int, strings: bytes,
                 opt_size: int):
        self._raw = raw
        self.sections = sections
        self.symbols = symbols
        self._sym_ptr = sym_ptr
        self._strings = bytearray(strings)  # the string table without its 4-byte size
        self._opt_size = opt_size

    @classmethod
    def parse(cls, b: bytes) -> "Coff":
        if len(b) < 20:
            raise CoffError("file too small for a COFF header")
        machine, nsec, _, sym_ptr, nsyms, opt_size, _ = struct.unpack_from("<HHIIIHH", b, 0)
        if machine != 0x14C:
            raise CoffError(f"not an i386 object (machine 0x{machine:x})")
        strtab = sym_ptr + 18 * nsyms
        size = struct.unpack_from("<I", b, strtab)[0] if strtab + 4 <= len(b) else 0
        if strtab + size != len(b):
            raise CoffError("the symbol and string tables are not at the end of the file")
        strings = b[strtab + 4:strtab + size] if size else b""

        def name_at(offset: int) -> str:
            end = strings.index(b"\0", offset - 4)
            return strings[offset - 4:end].decode("latin1")

        sections = []
        for i in range(nsec):
            o = 20 + opt_size + 40 * i
            raw_name = b[o:o + 8].rstrip(b"\0")
            name = name_at(int(raw_name[1:])) if raw_name.startswith(b"/") else raw_name.decode("latin1")
            size_, data_ptr, reloc_ptr = struct.unpack_from("<III", b, o + 16)
            nrelocs = struct.unpack_from("<H", b, o + 32)[0]
            chars = struct.unpack_from("<I", b, o + 36)[0]
            data = bytes(size_) if chars & SCN_CNT_UNINITIALIZED_DATA else b[data_ptr:data_ptr + size_]
            first = 0
            if chars & SCN_LNK_NRELOC_OVFL and nrelocs == 0xFFFF:
                nrelocs, first = struct.unpack_from("<I", b, reloc_ptr)[0], 1
            relocs = [Reloc(*struct.unpack_from("<IIH", b, reloc_ptr + 10 * k)) for k in range(first, nrelocs)]
            sections.append(Section(i + 1, name, chars, data, relocs))

        symbols = []
        idx = 0
        while idx < nsyms:
            o = sym_ptr + 18 * idx
            raw = b[o:o + 8]
            name = name_at(struct.unpack_from("<I", raw, 4)[0]) if raw[:4] == b"\0\0\0\0" else \
                raw.rstrip(b"\0").decode("latin1")
            value, secnum, typ, sclass, naux = struct.unpack_from("<IhHBB", b, o + 8)
            symbols.append(Symbol(idx, name, value, secnum, typ, sclass, b[o + 18:o + 18 + 18 * naux], raw))
            idx += 1 + naux
        return cls(b, sections, symbols, sym_ptr, strings, opt_size)

    # edits

    def _string(self, text: str) -> int:
        """Offset of `text` in the string table (counting its 4-byte size), appended when new."""
        data = text.encode("latin1") + b"\0"
        found = self._strings.find(data)
        while found > 0 and self._strings[found - 1] != 0:  # only a whole string, not the tail of a longer one
            found = self._strings.find(data, found + 1)
        if found < 0:
            found = len(self._strings)
            self._strings += data
        return found + 4

    def set_section_name(self, number: int, name: str) -> None:
        self.sections[number - 1].name = name

    def set_storage_class(self, index: int, storage_class: int) -> None:
        self.symbol(index).storage_class = storage_class

    def add_symbol(self, name: str, section: int, value: int, storage_class: int, type_: int = 0) -> int:
        """A new symbol at the end of the table; existing indexes (and so relocations) stay as they are."""
        last = self.symbols[-1] if self.symbols else None
        index = last.index + 1 + len(last.aux) // 18 if last else 0
        self.symbols.append(Symbol(index, name, value, section, type_, storage_class))
        return index

    def symbol(self, index: int) -> Symbol:
        for s in self.symbols:
            if s.index == index:
                return s
        raise KeyError(index)

    def symbol_by_name(self, name: str) -> Symbol | None:
        return next((s for s in self.symbols if s.name == name), None)

    def to_bytes(self) -> bytes:
        out = bytearray(self._raw[:self._sym_ptr])
        for section in self.sections:
            o = 20 + self._opt_size + 40 * (section.number - 1)
            current = out[o:o + 8].rstrip(b"\0")
            was = self._name_of(current)
            if was != section.name:
                encoded = section.name.encode("latin1")
                field_ = encoded.ljust(8, b"\0") if len(encoded) <= 8 else f"/{self._string(section.name)}".encode()
                out[o:o + 8] = field_.ljust(8, b"\0")
        count = 0
        records = bytearray()
        for s in self.symbols:
            if s.raw_name:
                raw_name = s.raw_name
            elif len(s.name.encode("latin1")) <= 8:
                raw_name = s.name.encode("latin1").ljust(8, b"\0")
            else:
                raw_name = struct.pack("<II", 0, self._string(s.name))
            records += raw_name + struct.pack("<IhHBB", s.value, s.section_number, s.type, s.storage_class,
                                              len(s.aux) // 18) + s.aux
            count += 1 + len(s.aux) // 18
        struct.pack_into("<I", out, 12, count)
        return bytes(out + records + struct.pack("<I", 4 + len(self._strings)) + self._strings)

    def _name_of(self, raw: bytes) -> str:
        if raw.startswith(b"/"):
            offset = int(raw[1:]) - 4
            return self._strings[offset:self._strings.index(b"\0", offset)].decode("latin1")
        return raw.decode("latin1")
