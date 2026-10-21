// CFire: declared by pcdecomp transplant for 0x10109c10 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CFire : public CBaseEntity
{
public:
	CFire *vfunc5(unsigned int flags);
	CFire *sub_10109990();	// as in CKeepUpright (transplant)
	void vfunc180();
	void sub_1010b3c0();
	void sub_1010b5c0(float flHeat, int bInstant);	// adds heat to the fire (stub 0x10008a03)
};
