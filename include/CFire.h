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
	void sub_1010a370(int a, float b);	// creates the "firesmoke" entity of this fire (called with the field at +0x458 and a size float; the fields at +0x450 / +0x458 are modelled by the views of the sources)
};
