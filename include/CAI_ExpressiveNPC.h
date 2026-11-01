// CAI_ExpressiveNPC: declared by pcdecomp transplant for 0x10260d70 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CAI_Expresser;

class CAI_ExpressiveNPC
{
public:
	CAI_ExpressiveNPC *vfunc5(unsigned int flags);
	void sub_1000aa51();
	CAI_Expresser *vfunc583();	// slot 583 "CreateExpresser": news a CAI_Expresser (0x70 bytes)
	bool vfunc424();	// slot 424 override of CAI_BaseNPC::CreateComponents: also creates the expresser

	char m_pad0000[0x5f44];
	int m_nSink;	// 0x5f44: the CAI_ExpresserSink sub-object (secondary vtable pointer)
	CAI_Expresser *m_pExpresser;	// 0x5f48
public:
	int vfunc512();	// slot 512 (+0x800): returns m_pExpresser (as an int; cast it to CAI_Expresser *)
	int vfunc484(const char *pszName, float flDelay, float flVolume, int nSoundLevel, int b);	// 0x10312ef0: ((CAI_Expresser *)vfunc512())->sub_10311f50(the same five arguments); the arguments are pushed before the slot call
	int vfunc584();
};
