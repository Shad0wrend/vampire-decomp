"""The PE parts the layout generates instead of taking them from an object (standard library only): config records in,
bytes out."""

from __future__ import annotations

import struct
from collections.abc import Callable, Iterable, Sequence
from typing import TYPE_CHECKING

if TYPE_CHECKING:
    from .cfg import Export, Imports, SectionRecord

MASK = 0xFFFFFFFF
JMP_REL32 = 0xE9  # the incremental link's stub: `jmp target`
STUB_SIZE = 5
DESCRIPTOR = 20  # bytes of an import descriptor; a zero one ends the table
BY_ORDINAL = 0x80000000  # a lookup or IAT word that imports by ordinal
EXPORT_DIRECTORY = 40  # bytes of the export directory before its tables
HIGHLOW = 0x3000  # a base relocation entry's type (IMAGE_REL_BASED_HIGHLOW) in its top 4 bits
CODEVIEW = 2 # IMAGE_DEBUG_TYPE_CODEVIEW
# the linker's DOS stub: print "This program cannot be run in DOS mode." and exit
DOS_STUB = (bytes.fromhex("0e1fba0e00b409cd21b8014ccd21") + b"This program cannot be run in DOS mode.\r\r\n$"
            + bytes(7))
DANS = 0x536E6144  # "DanS": the Rich header's first word before the key
DIRECTORIES = 16  # data directories in the optional header
OPTIONAL_HEADER = 96 + 8 * DIRECTORIES  # bytes of the optional header (PE32)
PE_HEADERS = 4 + 20 + OPTIONAL_HEADER  # the signature, the COFF header and the optional header
SECTION_HEADER = 40
CODE, INITIALIZED, UNINITIALIZED = 0x20, 0x40, 0x80  # IMAGE_SCN_CNT_*
# build.toml [identical]'s values pe_headers reads
HEADER_VALUES = ("pe_header", "timestamp", "characteristics", "linker", "os_version", "image_version",
                 "subsystem_version", "subsystem", "dll_characteristics", "stack", "heap", "section_align",
                 "file_align")


def _align(value: int, alignment: int) -> int:
    return -(-value // alignment) * alignment if alignment > 1 else value


def dos_header(e_lfanew: int) -> bytes:
    """The linker's 64-byte DOS header, its `e_lfanew` (at 0x3c) the PE header's offset."""
    head = struct.pack("<2s13H", b"MZ", 0x90, 3, 0, 4, 0, 0xFFFF, 0, 0xB8, 0, 0, 0, 0x40, 0)
    return head + bytes(0x3C - len(head)) + struct.pack("<I", e_lfanew)


def rich_key(data: bytes, start: int, entries: Iterable[Sequence[int]]) -> int:
    """The Rich header's key as link.exe computes it: the header's offset, plus each byte before it rotated left by
    its offset (e_lfanew's four bytes left out), plus each entry's `id << 16 | build` rotated left by its count."""
    def rol(value: int, n: int) -> int:
        n %= 32
        return ((value << n) | (value >> (32 - n))) & MASK
    key = start
    for i in range(start):
        if not 0x3C <= i < 0x40:
            key = (key + rol(data[i], i)) & MASK
    for product, build, count in entries:
        key = (key + rol(product << 16 | build, count)) & MASK
    return key


def rich_header(entries: list[tuple[int, int, int]], dos: bytes) -> bytes:
    """The Rich header that follows `dos` (the DOS header and stub) for its (id, build, count) entries: `DanS`, three
    pads, each entry's `id << 16 | build` and count, all XORed with the key (rich_key), then `Rich` and the key; b""
    for no entries."""
    if not entries:
        return b""
    key = rich_key(dos, len(dos), entries)
    words = [DANS, 0, 0, 0] + [w for product, build, count in entries for w in (product << 16 | build, count)]
    return struct.pack(f"<{len(words)}I", *(w ^ key for w in words)) + b"Rich" + struct.pack("<I", key)


def file_offsets(sections: Sequence[SectionRecord], e_lfanew: int, file_align: int) -> tuple[int, list[int], int]:
    """(SizeOfHeaders, each section's PointerToRawData, the end of the raw data) as the linker lays the file out: the
    headers through the section table rounded up to FileAlign, then each section's raw data in section order from a
    FileAlign multiple (PointerToRawData 0 for a section without raw data). The NB10 record follows the end."""
    cursor = headers = _align(e_lfanew + PE_HEADERS + SECTION_HEADER * len(sections), file_align)
    pointers = []
    for s in sections:
        if not s.raw_size:
            pointers.append(0)
            continue
        pointers.append(_align(cursor, file_align))
        cursor = pointers[-1] + s.raw_size
    return headers, pointers, cursor


def pe_headers(values: dict, sections: Sequence[SectionRecord], directories: Sequence[tuple[int, int]],
               entry_rva: int, image_base: int) -> bytes:
    """The PE signature, COFF header, optional header and section table. `values`: build.toml [identical]
    (HEADER_VALUES); computed: SizeOfCode, SizeOfInitializedData and SizeOfUninitializedData (each such section's
    virtual size rounded up to FileAlign, summed), BaseOfCode and BaseOfData (the first code and the first data
    section), SizeOfImage (the sections' virtual end rounded up to SectionAlign), SizeOfHeaders and the raw pointers
    (file_offsets); checksum 0. `directories`: (RVA, size) of each of the 16 data directories."""
    v = values
    file_align, section_align = v["file_align"], v["section_align"]
    headers, pointers, _ = file_offsets(sections, v["pe_header"], file_align)

    def size(flag: int) -> int:
        return sum(_align(s.vsize or s.raw_size, file_align) for s in sections if s.characteristics & flag)

    def base(test: Callable[[int], bool]) -> int:
        return next((s.addr - image_base for s in sections if test(s.characteristics)), 0)
    end = max((s.addr - image_base + (s.vsize or s.raw_size) for s in sections), default=headers)
    coff = struct.pack("<2H3I2H", 0x14C, len(sections), v["timestamp"], 0, 0, OPTIONAL_HEADER, v["characteristics"])
    optional = struct.pack(
        "<H2B9I6H4I2H6I", 0x10B, *v["linker"], size(CODE), size(INITIALIZED), size(UNINITIALIZED), entry_rva,
        base(lambda c: bool(c & CODE)), base(lambda c: bool(c & (INITIALIZED | UNINITIALIZED)) and not c & CODE),
        image_base, section_align, file_align, *v["os_version"], *v["image_version"], *v["subsystem_version"], 0,
        _align(end, section_align), headers, 0, v["subsystem"], v["dll_characteristics"], *v["stack"], *v["heap"], 0,
        DIRECTORIES)
    optional += b"".join(struct.pack("<II", rva, n) for rva, n in directories)
    table = b"".join(struct.pack("<8s6I2HI", s.name.encode("latin1"), s.vsize, s.addr - image_base, s.raw_size,
                                 pointer, 0, 0, 0, 0, s.characteristics) for s, pointer in zip(sections, pointers))
    return b"PE\0\0" + coff + optional + table


def stub(addr: int, target: int) -> bytes:
    """The incremental-link stub at `addr` that jumps to `target`: `E9` and the displacement from the next byte."""
    return bytes([JMP_REL32]) + struct.pack("<I", (target - (addr + STUB_SIZE)) & MASK)


def idata(imports: Imports, image_base: int) -> list[tuple[int, bytes, str]]:
    """(address, bytes, owner) of each part of the import directory, at the addresses config gives: the descriptors
    (lookup table RVA, 0, 0, DLL name RVA, IAT RVA per DLL, in descriptor order, then a zero descriptor); each DLL's
    lookup table and IAT (per import in index order its hint/name entry's RVA, or BY_ORDINAL | ordinal, then 0); each
    hint/name entry (u16 hint, the name, NUL, padded to an even length); each DLL's name (NUL-terminated). Nothing for
    an image without imports."""
    if not imports.descriptors and not imports.dlls:
        return []
    by_dll: dict[str, list] = {}
    for e in imports.entries:
        by_dll.setdefault(e.dll, []).append(e)
    descriptors = b"".join(struct.pack("<5I", d.lookup - image_base if d.lookup else 0, 0, 0, d.name_addr - image_base,
                                       d.iat - image_base) for d in imports.dlls)
    out = [(imports.descriptors, descriptors + bytes(DESCRIPTOR), "imports:descriptors")]
    for d in imports.dlls:
        entries = sorted(by_dll.get(d.dll, []), key=lambda e: e.index)
        words = [BY_ORDINAL | int(e.name[1:]) if e.entry is None else e.entry - image_base for e in entries]
        table = struct.pack(f"<{len(words) + 1}I", *words, 0)
        if d.lookup:
            out.append((d.lookup, table, f"imports:{d.dll}:lookup"))
        out.append((d.iat, table, f"imports:{d.dll}:iat"))
    for e in imports.entries:
        if e.entry is not None:
            entry = struct.pack("<H", e.hint) + e.name.encode("latin1") + b"\0"
            out.append((e.entry, entry + bytes(len(entry) & 1), f"imports:{e.dll}!{e.name}"))
    out += [(d.name_addr, d.dll.encode("latin1") + b"\0", f"imports:{d.dll}") for d in imports.dlls]
    return out


def export_directory(exports: list[Export], addr: int, timestamp: int, dll_name: str,
                     reference: Callable[[str], int], image_base: int) -> bytes:
    """The export directory at `addr` as VC6's linker writes it: the 40-byte directory, then the export address table
    (at each ordinal - base the RVA of `reference(symbol)`: a code export's stub), the name pointers and the ordinals
    (ordinal - base) in sorted name order, the DLL name, the names in sorted order (each NUL-terminated)."""
    named = sorted(exports, key=lambda e: e.name.encode("latin1"))
    base = min((e.ordinal for e in exports), default=1)
    count = max((e.ordinal for e in exports), default=base - 1) - base + 1
    functions = addr + EXPORT_DIRECTORY
    names = functions + 4 * count
    ordinals = names + 4 * len(named)
    strings = ordinals + 2 * len(named)
    text = dll_name.encode("latin1") + b"\0"
    pointers = []
    for e in named:
        pointers.append(strings + len(text) - image_base)
        text += e.name.encode("latin1") + b"\0"
    eat = [0] * count
    for e in exports:
        eat[e.ordinal - base] = (reference(e.symbol) - image_base) & MASK
    directory = struct.pack("<IIHHIIIIIII", 0, timestamp, 0, 0, strings - image_base, base, count, len(named),
                            functions - image_base, names - image_base, ordinals - image_base)
    return (directory + struct.pack(f"<{count}I", *eat) + struct.pack(f"<{len(named)}I", *pointers)
            + struct.pack(f"<{len(named)}H", *(e.ordinal - base for e in named)) + text)


def base_relocations(sites: Iterable[int], image_base: int) -> bytes:
    """The base relocation table as VC6's linker writes it: per 4 KB page with a site, ascending, a block (the page's
    RVA, the block's size, one HIGHLOW entry `0x3000 | offset` per site, ascending, and one 0x0000 entry when the
    count is odd). `sites`: the virtual addresses of the relocated words."""
    pages: dict[int, list[int]] = {}
    for rva in sorted({va - image_base for va in sites}):
        pages.setdefault(rva & ~0xFFF, []).append(HIGHLOW | (rva & 0xFFF))
    out = bytearray()
    for page, entries in pages.items():
        if len(entries) & 1:
            entries.append(0)
        out += struct.pack("<II", page, 8 + 2 * len(entries)) + struct.pack(f"<{len(entries)}H", *entries)
    return bytes(out)


def debug_directory(timestamp: int, size: int, file_offset: int) -> bytes:
    """One CodeView debug directory entry (28 bytes): its record of `size` bytes at `file_offset` in the file, not
    loaded (AddressOfRawData 0)."""
    return struct.pack("<IIHHIIII", 0, timestamp, 0, 0, CODEVIEW, size, 0, file_offset)


def nb10(signature: int, age: int, pdb: str) -> bytes:
    """The CodeView NB10 record: `NB10`, offset 0, the PDB's signature and age, its path NUL-terminated."""
    return b"NB10" + struct.pack("<III", 0, signature, age) + pdb.encode("latin1") + b"\0"
