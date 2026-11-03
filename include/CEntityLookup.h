// CEntityLookup: matched free entity-lookup helpers (no `this`) that had no shared declaration.
#pragma once

// 0x101193b0: the first live player (sub_10119390 gives the index, sub_101cd9e0(index) the entity).
// The game returns the entity pointer in eax; the matched provisional symbol says int, so cast the result
// to the entity type you need (e.g. (CEntityVSlots *)sub_101193b0()).
int sub_101193b0();
