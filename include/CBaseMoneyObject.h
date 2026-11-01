// CBaseMoneyObject: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CBaseMoneyObject
{
public:
	char pad0[0x1ec];
	int m_unk1ec;
	char pad1f0[0x8d4 - 0x1f0];
	int m_n08d4;	// 0x8d4: 0 after the constructor
	void sub_103f42b0();	// the base constructor body (stub 0x1000d26f), called first by sub_103f5780

	void vfunc305();
	CBaseMoneyObject *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10013a57();	// as in CPhysForce (transplant)
public:
	int vfunc82();
	int vfunc298(int, int);
};
