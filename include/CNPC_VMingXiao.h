// CNPC_VMingXiao: declared by pcdecomp transplant for 0x10391390 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VMingXiao : public CBaseEntity
{
public:
	int vfunc546(int arg);
	int vfunc461();	// sets the task state at +0x5cc4 (and the source file/line markers at +0x1b3c/+0x1b40) from slots 158, 464 and 167
	char vfunc69(void *pOther);	// as in CNPC_VHengeyokai (transplant)
	char sub_1029b180(void *pOther);	// as in CNPC_VHengeyokai (transplant)
	char vfunc166(void *pOther);	// slot 166: false when pOther is one of the two handle arrays at +0x668c / +0x66a8 (six entries each), else true unless pOther's slot 164 says no
	bool sub_10397b40(void *pTentacle);	// claims a tentacle slot: false unless the tentacle (its index at +0x6660) is the entity of the handle at +0x66a8[index] and the time at +0x66a4 has passed; true when its flag byte (+0x6684[index]) is already set, else sets it provided none of the six slots (handles at +0x668c, flags at +0x6684) is in use
	CNPC_VMingXiao *sub_10390ee0();	// as in CKeepUpright (transplant)
	void sub_10397e00(CBaseEntity *pEnt);	// tells every tentacle (handles at +0x66a8, six entries) other than pEnt to go to pEnt's slot 217 position (sub_1039ef90)
	void vfunc448(int a);	// slot 448: state 3/4 only resets the motor's float at +0x1c to 180.0f, else sets the state to 0 and clears +0x6718; then the Troika base
	void sub_1029adb0(int a);	// CAI_BaseNPCTroika::vfunc448, called directly
	const char *vfunc408(int index);	// the attachment name of the body part 0x77..0x7e (xfr, xfl, xmr, xml, xbr, xbl, xsp, xmh), else the base's
	const char *sub_10011590(int index);	// CAI_BaseNPC::vfunc408 (jump stub)
	int sub_10396dc0();	// picks a schedule (0x15c / 0x15d) while the target handle at +0x6718 is alive and the state at +0x673c is 3 or 4, from conditions 0x7b / 0x7c; stamps the source file and line at +0x1b30 / +0x1b34
	char sub_10014df8(int condition);	// "HasCondition" (stub 0x10014df8), called directly
	int sub_10395650(int a, void *pWeapon);	// maps the weapon (flags from its slot 360 have bit 15 or 16) through sub_103952b0(a), else the state at +0x1594 to a small code via a jump table (1 -> -2, 4 -> 1, 5 -> 0, 6 -> 5, 7 -> 4, 8 -> 3, 9 -> 2, everything else -1)
	int sub_103952b0(int a);	// called through the stub at 0x10012f85
	int vfunc376(int act);	// slot 376 "CNPC_VMingXiao::TranslateActivity": 0x3d -> 0x3b, 0x3e -> 0x3c, 0x9f -> 0x9d, 0xa0 -> 0x9e, 0xa3 -> 0xa1, 0xa4 -> 0xa2, else the Troika base
	int sub_1000fb14(int act);	// CAI_BaseNPCTroika::vfunc376, called directly
	void sub_10398fd0();	// drops the target: kills the entity of the handle at +0x6738 (sub_101cd970) and clears it, clears the handle at +0x6718, slows the motor (sub_10013110(0.75f)) and resets the state at +0x673c to 0
	void sub_10013110(float flSpeed);	// stub 0x10013110 for 0x102c43b0
	void sub_1039aa20();	// when the time at +0x1560 plus a constant lies in the past: sets stat 0xf of the active stat list to 0 and runs sub_10273e80(0)
};
