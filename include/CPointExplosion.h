// CPointExplosion: declared by pcdecomp transplant for 0x10104bd0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members (no vptr is modelled, so the offsets below are the real ones).
#pragma once

class CPointExplosion
{
public:
	CPointExplosion *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void sub_10104650();	// looks the explosion parameter entity named at +0x450 up (FindEntityByName on the global entity list, dynamic_cast to CParamsExplosion); with it hands the origin (slot 217), the angles (slot 219), the parameter block of the entity and this entity to sub_10104730, else warns that the parameters were not found; then, when bit 0 of the flags at +0x204 is set, sub_101cd940(this)
	const char *sub_1000b5cd();	// stub 0x1000b5cd: CBaseEntity::GetDebugName

	char m_pad0000[0x204];
	unsigned int m_flags204;	// 0x204
	char m_pad0208[0x450 - 0x208];
	const char *m_name450;	// 0x450: the name of the explosion parameter entity
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
