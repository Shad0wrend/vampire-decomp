// CBaseMoneyObject: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CBaseMoneyObject
{
public:
	char pad0[0x1ec];
	int m_unk1ec;

	void vfunc305();
	CBaseMoneyObject *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10013a57();	// as in CPhysForce (transplant)
};
