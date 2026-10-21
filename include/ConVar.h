// ConVar (RTTI .?AVConVar@@): base ConCommandBase at +0x0 is not modelled; primary vtable 0x104974a0 has 13 slots.
#pragma once

class ConVar
{
public:
	ConVar(const char *pName, const char *pDefaultValue, int flags);	// "ConVar::ConVar" (stub 0x10006488, function 0x10245a40): base constructor, stores the vftable, then Create(name, default, flags, no help, no limits, no callback); a function-local static ConVar is built with it behind a guard byte
	~ConVar();	// "ConVar::~ConVar" (stub 0x100108bb): the atexit destroy of such a static jumps to it

	virtual ConVar *vfunc0(unsigned int flags);
	virtual char vfunc1();	// "IsCommand"-like test (a boolean answer in al)
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4(int nValue);	// "ConVar::SetValue( int )"
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7(const char *value);
	virtual void vfunc8();
	virtual void vfunc9();
	virtual bool vfunc10(float *value);
	virtual void vfunc11(const char *value);	// "ConVar::ChangeStringValue": copies the old string to the stack when a change callback is set, stores the new string, calls the callback with the old one
	virtual void vfunc12(const char *pName, const char *pDefaultValue, int flags, const char *pHelpString, bool bMin, float fMin, bool bMax, float fMax, void (*pCallback)(ConVar *, const char *));	// "ConVar::Create": stores the default string (an empty one when null), a heap copy of it, its length, the parsed float / int value and the limits, then ConCommandBase::Create(name, help, flags)

	ConVar *m_pParent;	// 0x0004
	char m_pad0008[0x10];	// 0x0008 .. 0x0017
	unsigned int m_nFlags;	// 0x0018
	const char *m_pszDefaultValue;	// 0x001c
	char *m_pszString;	// 0x0020
	int m_nStringLength;	// 0x0024
	float m_fValue;
	int m_nValue;
	bool m_bHasMin;	// 0x0030
	char m_pad0031[3];
	float m_fMinVal;	// 0x0034
	bool m_bHasMax;	// 0x0038
	char m_pad0039[3];
	float m_fMaxVal;	// 0x003c
	void (*m_fnChangeCallback)(ConVar *pVar, const char *pOldString);	// 0x0040
	void sub_100108bb();	// as in CDataObjectAccessSystem (transplant)
	void sub_102455c0(const char *pName, const char *pHelpString, int flags);	// ConCommandBase::Create, called directly (stub 0x1000de4f)
	void sub_10246160(int nValue);	// slot 4's implementation as called directly with an integer ("ConVar::SetValue( int )", stub 0x1000c5cc)

	int GetInt() { return m_pParent->vfunc1() ? 0 : m_pParent->m_nValue; }
	bool GetBool() { return GetInt() != 0; }
};
