// CTETParticle: particle temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTETParticle
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTETParticle *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3();
	virtual void vfunc4(int a, int b);	// the Create/Send step; called directly (as sub_100695e0) with the filter and delay of the Particle temp entity call

	void sub_1001267a();	// destructor body
	void sub_100695e0(int a, int b);	// slot 4 implementation, called directly

	char m_pad04[0x8];
	float m_vOrigin[3];	// 0x0c
	float m_vDirection[3];	// 0x18
	char m_bEntIndexFlag;	// 0x24
};
