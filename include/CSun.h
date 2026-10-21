// CSun: declared by pcdecomp transplant for 0x101c2530 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CSun : public CBaseEntity
{
public:
	CSun *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	CSun *sub_101c24b0();	// as in CKeepUpright (transplant)
	void vfunc113();	// 0x101c2560: direction to the target entity, normalised
	char m_pad03e0[0x450 - 0x3e0];
	Vector m_vecDir;	// 0x0450
};
