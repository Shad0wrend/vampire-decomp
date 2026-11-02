// ConVar (RTTI .?AVConVar@@): base ConCommandBase at +0x0 is not modelled; primary vtable 0x104974a0 has 13 slots.
#pragma once

// ConCommandBase as far as the constructors show: its constructor (function 0x102454e0, stub 0x10007f3b) runs first, the
// ConVar vftable is stored after it. Modelled as an empty base so VC6 orders the constructor like the game; its fields
// are still declared in ConVar below.
class ConVar;

class ConCommandBase
{
public:
	ConCommandBase();	// stub 0x10007f3b
	virtual ConVar *vfunc0(unsigned int flags);	// slot 0 (the destructor); the base carries the vftable pointer at +0
};

class ConVar : public ConCommandBase
{
public:
	ConVar(const char *pName, const char *pDefaultValue, int flags);	// "ConVar::ConVar" (stub 0x10006488, function 0x10245a40): base constructor, stores the vftable, then Create(name, default, flags, no help, no limits, no callback); a function-local static ConVar is built with it behind a guard byte
	ConVar(const char *pName, const char *pDefaultValue, int flags, const char *pHelpString);	// function 0x10245ac0 (145 callers): base constructor, vftable, then Create(name, default, flags, help, no limits, no callback)
	ConVar(const char *pName, const char *pDefaultValue, int flags, const char *pHelpString, void (*pCallback)(ConVar *, const char *));	// function 0x10245b80: calls the ConCommandBase constructor (sub_10007f3b), stores the vftable, then Create(name, default, flags, help, no limits, callback)
	ConVar(const char *pName, const char *pDefaultValue, int flags, const char *pHelpString, bool bMin, float fMin, bool bMax, float fMax);	// function 0x10245b10: base constructor, vftable, then Create(..., min, max, no callback)
	ConVar *sub_10245bd0(const char *pName, const char *pDefaultValue, int flags, const char *pHelpString, bool bMin, float fMin, bool bMax, float fMax, void (*pCallback)(ConVar *, const char *));	// the full constructor written as a plain member (the real one stores the vftable after the base constructor call): the ConCommandBase constructor, the vftable, then Create with everything
	~ConVar();	// "ConVar::~ConVar" (stub 0x100108bb): the atexit destroy of such a static jumps to it

	typedef ConVar *Vfunc0Ret;	// slot 0's return type (ConCommandBase * once the base is ConCommandBase.h's)
	virtual Vfunc0Ret vfunc0(unsigned int flags);
	virtual char vfunc1();	// "IsCommand"-like test (a boolean answer in al)
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4(int nValue);	// "ConVar::SetValue( int )"
	virtual void vfunc5(float fNewValue);	// "ConVar::SetValue( float )": unless the parent answers slot 1 true, slot 8(value) on this and on the parent when their value differs
	virtual void vfunc6(const char *value);	// "ConVar::SetValue( string )"-like: unless the parent (+0x4) answers slot 1 true, slot 7(value) on this and on the parent (when it is another convar)
	virtual void vfunc7(const char *value);
	virtual void vfunc8(float fNewValue);	// "ConVar::SetValue( float )": slot 10 clamps the value, stores it and its int, then (unless flag 0x1000) formats it with "%f" and calls slot 11
	virtual void vfunc9(int nValue);	// slot 9 (0x24): takes the integer value; called by ConVar::SetValue( int ) on this and on the parent (the flagged convar)
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
	void sub_10245580();	// ConCommandBase destructor body (stub 0x100049d0), called directly
	void sub_10007f3b();	// ConCommandBase constructor (stub 0x10007f3b, jumps to 0x102454e0), called directly first by the constructors
	void sub_102455c0(const char *pName, const char *pHelpString, int flags);	// ConCommandBase::Create, called directly (stub 0x1000de4f)
	void sub_10246160(int nValue);	// slot 4's implementation as called directly with an integer ("ConVar::SetValue( int )", stub 0x1000c5cc)

	const char *GetString() { const char *psz = ""; if (!m_pParent->vfunc1()) { if (m_nFlags & 0x1000) return "FCVAR_NEVER_AS_STRING"; if (m_pParent->m_pszString) psz = m_pParent->m_pszString; } return psz; }
	int GetInt() { return m_pParent->vfunc1() ? 0 : m_pParent->m_nValue; }
	bool GetBool() { return GetInt() != 0; }
	float GetFloat() { return m_pParent->vfunc1() ? 0.0f : m_pParent->m_fValue; }
};
