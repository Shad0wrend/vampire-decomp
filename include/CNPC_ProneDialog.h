// CNPC_ProneDialog: declared by pcdecomp transplant for 0x103a4d40 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CNPC_VHumanCombatant.h"

#include "Vector.h"

class CNPC_ProneDialog : public CNPC_VHumanCombatant
{
public:
	CNPC_ProneDialog *vfunc5(unsigned int flags);
	void sub_100123af();
	bool vfunc45(int unused, Vector vecStart, Vector vecEnd, unsigned int mask);	// slot 45: clips a ray from vecStart to vecEnd against this entity (engine trace slot 2); true when the ray hit this entity or missed everything (fraction 1.0 without a hit entity)
	char m_pad03e0[0x6664 - 0x3e0];
};
