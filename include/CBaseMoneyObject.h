// CBaseMoneyObject: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

struct datamap_t;

class CBaseMoneyObject
{
public:
	char pad0[0x1ec];
	int m_unk1ec;
	char pad1f0[0x8d4 - 0x1f0];
	int m_n08d4;	// 0x8d4: 0 after the constructor
	void sub_103f42b0();	// the base constructor body (stub 0x1000d26f), called first by sub_103f5780
	CBaseMoneyObject *sub_103f5780();	// the constructor body: the base constructor, the vtable, then the dword at +0x8d4 is 0

	void vfunc305();
	CBaseMoneyObject *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10013a57();	// as in CPhysForce (transplant)
public:
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
	int vfunc298(int, int);
};
