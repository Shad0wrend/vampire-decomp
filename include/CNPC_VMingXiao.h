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
};
