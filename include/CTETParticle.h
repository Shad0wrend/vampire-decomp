// CTETParticle: particle temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTETParticle
{
public:
	CTETParticle *sub_10069430(int a);	// constructor (0x10069430): the temp entity base constructor (sub_10015334), then the vtable and the zeroed fields and the flag byte at +0x24

	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTETParticle *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const float *pOrigin, const float *pAngles);	// "CTETParticle::Test": stores the origin and the direction, looks up the "impact_test" resource (flag byte at +0x24), then creates the temp entity for a broadcast filter (slot 4)
	virtual void vfunc4(int a, int b);	// the Create/Send step; called directly (as sub_100695e0) with the filter and delay of the Particle temp entity call
	virtual void vfunc5();	// slot 5: the engine's vfunc0, then precaches the "impact_test" particle resource

	void sub_1001267a();	// destructor body
	void sub_100695e0(int a, int b);	// slot 4 implementation, called directly

	char m_pad04[0x8];
	float m_vOrigin[3];	// 0x0c
	float m_vDirection[3];	// 0x18
	char m_bEntIndexFlag;	// 0x24
};
