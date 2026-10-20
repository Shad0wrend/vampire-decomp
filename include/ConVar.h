// ConVar (RTTI .?AVConVar@@): base ConCommandBase at +0x0 is not modelled; primary vtable 0x104974a0 has 13 slots.
#pragma once

class ConVar
{
public:
	virtual ConVar *vfunc0(unsigned int flags);
	virtual char vfunc1();	// "IsCommand"-like test (a boolean answer in al)
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7(const char *value);
	virtual void vfunc8();
	virtual void vfunc9();
	virtual bool vfunc10(float *value);
	virtual void vfunc11(const char *value);	// "ConVar::ChangeStringValue": copies the old string to the stack when a change callback is set, stores the new string, calls the callback with the old one
	virtual void vfunc12();

	char m_pad0004[0x14];	// 0x0004 .. 0x0017
	unsigned int m_nFlags;	// 0x0018
	char m_pad001c[4];	// 0x001c
	char *m_pszString;	// 0x0020
	int m_nStringLength;	// 0x0024
	float m_fValue;
	int m_nValue;
	char m_pad0030[0x40 - 0x30];	// 0x0030 .. 0x003f
	void (*m_fnChangeCallback)(ConVar *pVar, const char *pOldString);	// 0x0040
	void sub_100108bb();	// as in CDataObjectAccessSystem (transplant)
};
