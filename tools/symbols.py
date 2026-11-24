"""One rule set for the game address of a symbol, shared by tools.verify and the layout tool.

config/addresses.txt keys are a global name, `<object>/<name>` (a static or an object's own copy) or
`<object>/#<section>` (a section's own symbol); config/aliases.txt maps a name to the name that has the address."""

from __future__ import annotations

import struct

from .coff import SYM_CLASS_STATIC, SYM_CLASS_WEAK_EXTERNAL, Symbol


def _is_section_symbol(sym: Symbol) -> bool:
    return bool(sym.aux) and sym.value == 0 and sym.name.startswith(".")


def scoped_key(obj_name: str, sym: Symbol) -> str:
    """The key a static or object-scoped entry uses: `obj/#n` for a section's symbol, else `obj/name`."""
    if _is_section_symbol(sym):
        return f"{obj_name}/#{sym.section_number}"
    return f"{obj_name}/{sym.name}"


class Addresses:
    def __init__(self, addresses: dict[str, int], aliases: dict[str, str]):
        self.addresses = addresses
        self.aliases = aliases

    def lookup(self, name: str) -> int | None:
        found = self.addresses.get(name)
        if found is None and name in self.aliases:
            found = self.addresses.get(self.aliases[name])
        return found

    def resolve(self, obj, sym: Symbol) -> int | None:
        """The game address of a symbol an object's relocation names, or None."""
        if sym.storage_class == SYM_CLASS_STATIC:
            return self.addresses.get(scoped_key(obj.name, sym))
        found = self.addresses.get(f"{obj.name}/{sym.name}")  # this object's copy of a constant the game has several of
        if found is None:
            found = self.lookup(sym.name)
        if found is None and sym.storage_class == SYM_CLASS_WEAK_EXTERNAL and len(sym.aux) >= 4:
            default = obj.symbols.get(struct.unpack_from("<I", sym.aux)[0])  # `??_E` -> its `??_G`
            found = self.lookup(default.name) if default is not None else None
        return found
