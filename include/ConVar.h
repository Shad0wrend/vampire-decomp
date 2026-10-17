// ConVar (RTTI .?AVConVar@@): base ConCommandBase at +0x0 is not modelled; primary vtable 0x104974a0 has 13 slots.
#pragma once

class ConVar
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7(const char *value);
	virtual void vfunc8();
	virtual void vfunc9();
	virtual bool vfunc10(float *value);
	virtual void vfunc11(const char *value);
	virtual void vfunc12();

	char m_pad0004[0x24];	// 0x0004 .. 0x0027
	float m_fValue;
	int m_nValue;
};
