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
	void sub_1010b470();	// the fire's think: burns out (sub_1010b9d0) once the burn-out time at +0x48c has passed, else lets the smoke entity at +0x450 fade (sub_1010a900 with the remaining time over the smoke's lifetime at +0x458); thinks again 0.1 seconds later
	void sub_1010b9d0();	// stub 0x1000147e: puts the fire out
	void sub_1010a900(float flFade);	// stub 0x10007432: plays the fire sounds with the volume scaled by flFade
};
