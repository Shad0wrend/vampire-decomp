// CBreakable: declared by pcdecomp transplant for 0x1010f240 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CBreakable
{
public:
	CBreakable *vfunc5(unsigned int flags);
	bool sub_1010efc0();	// stub 0x10012e1d: the dword at +0x454 is not 7
	void sub_1010ddc0(void *pEnt);	// scope-less breaker update (called when the dword at +0x454 is not 7): sets the angles of this entity to (pitch, the float at +0x450, roll), computes the forward vector of the angles into the global vector at 0x1070ba40 (AngleVectors), stores the handle of pEnt (-1 for null) at +0x458 and calls slot 241
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CBreakable::KeyValue", declared as a plain member: "material" (0..9, else 1) goes to +0x454, "gibmodel" to +0x460 (as a pooled string); "deadmodel", "shards" and "lip" are accepted and ignored; everything else goes to CBaseEntity::KeyValue

	char m_pad0000[0x454];
	int m_nMaterial;	// 0x454
	char m_pad0458[0x460 - 0x458];
	int m_iszGibModel;	// 0x460
};
