// CPropSign (RTTI .?AVCPropSign@@): bases are not modelled yet, so the primary vtable slots up to
// the ones we need are placeholders that keep the slot numbers right.
#pragma once

struct CPropSignHandle
{
	unsigned int m_Index;
};

class CPropSign
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual CPropSign *vfunc5(unsigned int flags); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual bool vfunc32(void *pEntity); virtual void vfunc33(); virtual bool vfunc34(int a);
	virtual int vfunc35(int a);
	char m_pad0004[0x8c - 4];
	CPropSignHandle m_hAttached;	// +0x8c
	char m_pad0090[0x768 - 0x90];
	int m_field768;
	void sub_10001a0a();	// as in CPhysForce (transplant)
};
