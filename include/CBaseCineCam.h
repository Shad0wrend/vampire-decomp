// CBaseCineCam: cinematic camera entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CBaseCineCam
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CBaseCineCam *vfunc5(unsigned int flags);	// scalar deleting destructor
	float *vfunc193(float *out);	// as in CBaseEntity (transplant)
	bool sub_1006e6a0(int a, int b, int c, int d, int e);	// slot 86: true while the time at +0x90 is ahead of curtime, else whether the entity handle at +0x5d0 resolves and its edict (+0x2e0) is `b`, then sub_1006e890

	char m_pad0004[0x8c];
	float m_flTime90;	// 0x0090
	char m_pad0094[0x5d0 - 0x94];
	unsigned int m_hTarget5d0;	// 0x05d0
};
