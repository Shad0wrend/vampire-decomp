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
	bool sub_1006d9d0();	// CBaseEntity::GetFlags (as the shot mask); false when -1, else for every set bit i (0..3) the entity handle at +0x610+4*i must resolve; finally whether the handle at +0x630 is set
	bool sub_1006e130(const char *pszName, int a, int b);	// stub 0x1000d15c: sets up the shot named pszName (here "Follow"); false when it could not be set up
	void sub_1006e8e0();	// stub 0x10009868: finishes the set up after the first shot's target handle was stored

	char m_pad0004[0x8c];
	float m_flTime90;	// 0x0090
	char m_pad0094[0x5d0 - 0x94];
	unsigned int m_hTarget5d0;	// 0x05d0
	char m_pad05d4[0x610 - 0x5d4];
	unsigned int m_hShot610[4];	// 0x0610: entity handles, one per flag bit
	char m_pad0620[0x630 - 0x620];
	unsigned int m_hShot630;	// 0x0630
	float *sub_1030be50(float *out);	// provisional, like vfunc193 (transplant)
};
