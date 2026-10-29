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
};
