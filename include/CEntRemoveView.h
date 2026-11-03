// CEntRemoveView: the entity-removal worker 0x101cd970 (a matched free function; its game mangling names this type,
// ?sub_101cd970@@YAXPAUCEntRemoveView@@@Z). The object is a CBaseEntity in layout: slot 116, flags at +0x268, slot 180,
// then slot 5(1).
#pragma once

struct CEntRemoveView;

void sub_101cd970(CEntRemoveView *pEnt);	// 0x101cd970: remove an entity (no effect when null or slot 116 answers true)
