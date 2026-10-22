// CFire: declared by pcdecomp transplant for 0x10109c10 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CFire : public CBaseEntity
{
public:
	CFire *vfunc5(unsigned int flags);
	void vfunc123();	// slot 123 "DrawDebugGeometryOverlays"-like: while the fire burns (heat at +0x470 above 0, burn-out time at +0x464 ahead) draws its box (colour 0x58, 0xff, 0x80) and a "Heat" text line, else (unless sub_1010a8d0 holds) a dimmer box; then CBaseEntity::vfunc123
	bool sub_1010a8d0();	// stub 0x1000e4f8, asked when the fire is not burning
	void sub_100a0130();	// CBaseEntity::vfunc123, called directly (stub 0x10005880)
	CFire *sub_10109990();	// as in CKeepUpright (transplant)
	void vfunc180();
	void sub_1010b3c0();
	void sub_1010b5c0(float flHeat, int bInstant);	// adds heat to the fire (stub 0x10008a03)
	void sub_1010a370(int a, float b);	// creates the "firesmoke" entity of this fire (called with the field at +0x458 and a size float; the fields at +0x450 / +0x458 are modelled by the views of the sources)
	void sub_1010b470();	// the fire's think: burns out (sub_1010b9d0) once the burn-out time at +0x48c has passed, else lets the smoke entity at +0x450 fade (sub_1010a900 with the remaining time over the smoke's lifetime at +0x458); thinks again 0.1 seconds later
	void sub_1010b9d0();	// stub 0x1000147e: puts the fire out
	void sub_1010a900(float flFade);	// stub 0x10007432: plays the fire sounds with the volume scaled by flFade
	void sub_1010a7f0();	// lights the fire: sizes the entity from the fire size at +0x468 (a box a quarter of it wide and as tall), creates the smoke (sub_1010a370), fires the output at +0x494, installs the think function sub_1010b430 and runs it once
	void sub_1010b430();	// stub 0x1000d33c: thinks again 0.01 seconds later and refreshes the fire (slot 241)
};
