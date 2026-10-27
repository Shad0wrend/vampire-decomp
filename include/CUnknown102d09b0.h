// CUnknown102d09b0: the object a hint-driven NPC forwards an animation event to (class not known yet).
#pragma once

class CBaseEntity;

class CUnknown102d09b0
{
public:
	void sub_102d09b0(CBaseEntity *pNPC, int nIndex);	// the index 1..8 selects the record at +0x4e4 + 0x18 * index, handed to sub_100cd660(pNPC, this, 0) (stub 0x1001124d)
};
