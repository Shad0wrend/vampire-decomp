// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10245a40 size=0x36
#include "ConVar.h"

// TARGET: ConVar::ConVar
ConVar::ConVar(const char *pName, const char *pDefaultValue, int flags)
{
	vfunc12(pName, pDefaultValue, flags, 0, 0, 0.0f, 0, 0.0f, 0);
}
// END FUNCTION

// FUNCTION: 0x10245a90 size=0x1e
#include "ConVar.h"

// TARGET: ConVar::vfunc0
ConVar::Vfunc0Ret ConVar::vfunc0(unsigned int flags)
{
	sub_100108bb();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10245ac0 size=0x39
#include "ConVar.h"

ConVar::ConVar(const char *pName, const char *pDefaultValue, int flags, const char *pHelpString)
{
	vfunc12(pName, pDefaultValue, flags, pHelpString, 0, 0.0f, 0, 0.0f, 0);
}
// END FUNCTION

// FUNCTION: 0x10245b10 size=0x45
#include "ConVar.h"

// TARGET: ConVar::ConVar
ConVar::ConVar(const char *pName, const char *pDefaultValue, int flags, const char *pHelpString, bool bMin, float fMin, bool bMax, float fMax)
	: ConCommandBase()
{
	vfunc12(pName, pDefaultValue, flags, pHelpString, bMin, fMin, bMax, fMax, 0);
}
// END FUNCTION

// FUNCTION: 0x10245b80 size=0x3c
#include "ConVar.h"

// TARGET: ConVar::ConVar
ConVar::ConVar(const char *pName, const char *pDefaultValue, int flags, const char *pHelpString, void (*pCallback)(ConVar *, const char *))
{
	vfunc12(pName, pDefaultValue, flags, pHelpString, false, 0.0f, false, 0.0f, pCallback);
}
// END FUNCTION

// FUNCTION: 0x10245c40 size=0x28
#include "ConVar.h"
ConVar::~ConVar()
{
	if (m_pszString) {
		delete m_pszString;
		m_pszString = 0;
	}
	sub_10245580();
}
// END FUNCTION

// FUNCTION: 0x10245cb0 size=0x3
#include "ConVar.h"
char ConVar::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10245cd0 size=0x5
#include "ConVar.h"
#include "ConCommandBase.h"

// TARGET: ConVar::vfunc3
// the game's 0x10245cd0: a tail call (jmp) of ConCommandBase::vfunc3
void ConVar::vfunc3()
{
	ConCommandBase::vfunc3();
}
// END FUNCTION

// FUNCTION: 0x10245cf0 size=0x6e
#include "ConVar.h"
extern "C" double atof(const char *);
extern int (*g_109f388c)(char *, int, const char *, ...);

void ConVar::vfunc7(const char *value)
{
    float fNewValue = (float)atof(value);
    char tempVal[32];
    if (vfunc10(&fNewValue)) {
        g_109f388c(tempVal, 32, "%f", fNewValue);
        value = tempVal;
    }
    m_fValue = fNewValue;
    m_nValue = (int)m_fValue;
    vfunc11(value);
}
// END FUNCTION

// FUNCTION: 0x10245d80 size=0xad
#include "ConVar.h"

extern "C" void *__cdecl _alloca(unsigned int);
extern "C" void *__cdecl memcpy(void *, const void *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(memcpy, strlen)
void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

void ConVar::vfunc11(const char *tempVal)
{
	if (!(m_nFlags & 0x1000)) {
		int oldLen = m_nStringLength;
		char *pszOld = (char *)_alloca(oldLen);
		if (m_fnChangeCallback)
			memcpy(pszOld, m_pszString, oldLen);
		int len = strlen(tempVal) + 1;
		if (len > m_nStringLength) {
			if (m_pszString)
				operator delete(m_pszString);
			m_pszString = (char *)operator new(len);
			m_nStringLength = len;
		}
		memcpy(m_pszString, tempVal, len);
		if (m_fnChangeCallback)
			m_fnChangeCallback(this, pszOld);
	}
}
// END FUNCTION

// FUNCTION: 0x10245e60 size=0x45
// TARGET: ConVar::vfunc10
#include "ConVar.h"
bool ConVar::vfunc10(float *value)
{
	if (m_bHasMin && *value < m_fMinVal) {
		*value = m_fMinVal;
		return true;
	}
	if (m_bHasMax && *value > m_fMaxVal) {
		*value = m_fMaxVal;
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10245ed0 size=0x5f
#include "ConVar.h"
extern int (__cdecl *g_109f388c)(char *, int, const char *, ...);

void ConVar::vfunc8(float fNewValue)
{
    vfunc10(&fNewValue);
    m_fValue = fNewValue;
    m_nValue = (int)fNewValue;
    if (!(m_nFlags & 0x1000)) {
        char tempVal[32];
        g_109f388c(tempVal, sizeof(tempVal), "%f", fNewValue);
        vfunc11(tempVal);
    }
}
// END FUNCTION

// FUNCTION: 0x10245f50 size=0x68
extern int (*g_109f388c)(char *, int, const char *, ...);
struct SConVar {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual bool ClampValue(float &f);
    virtual void ChangeStringValue(const char *s);
    char pad[0x18 - 4];
    int m_nFlags;
    char pad2[0x28 - 0x1c];
    float m_fValue;
    int m_nValue;
    void sub_10245f50(int nValue);
};
// TARGET: SConVar::sub_10245f50
void SConVar::sub_10245f50(int nValue)
{
    float fValue = (float)nValue;
    if (ClampValue(fValue))
        nValue = (int)fValue;
    m_fValue = fValue;
    m_nValue = nValue;
    if (!(m_nFlags & 0x1000)) {
        char tempVal[32];
        g_109f388c(tempVal, sizeof(tempVal), "%d", nValue);
        ChangeStringValue(tempVal);
    }
}
// END FUNCTION

// FUNCTION: 0x10245fe0 size=0x99
#include "ConVar.h"
extern "C" double __cdecl atof(const char *);
extern "C" void *__cdecl memcpy(void *, const void *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(memcpy, strlen)
extern const char *g_105c4e74;

void ConVar::vfunc12(const char *pName, const char *pDefaultValue, int flags, const char *pHelpString, bool bMin, float fMin, bool bMax, float fMax, void (*pCallback)(ConVar *, const char *))
{
	if (!pDefaultValue)
		pDefaultValue = g_105c4e74;
	m_pszDefaultValue = pDefaultValue;
	m_nStringLength = strlen(m_pszDefaultValue) + 1;
	m_pszString = new char[m_nStringLength];
	memcpy(m_pszString, m_pszDefaultValue, m_nStringLength);
	m_bHasMin = bMin;
	m_fMinVal = fMin;
	m_bHasMax = bMax;
	m_fMaxVal = fMax;
	m_fnChangeCallback = pCallback;
	m_fValue = (float)atof(m_pszString);
	m_nValue = (int)m_fValue;
	sub_102455c0(pName, pHelpString, flags);
}
// END FUNCTION

// FUNCTION: 0x102460b0 size=0x2e
// TARGET: ConVar::vfunc6
#include "ConVar.h"

void ConVar::vfunc6(const char *value) {
    if (!m_pParent->vfunc1()) {
        vfunc7(value);
        if (this != m_pParent) {
            m_pParent->vfunc7(value);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x102460f0 size=0x46
#include "ConVar.h"
void ConVar::vfunc5(float fNewValue)
{
	if (!m_pParent->vfunc1()) {
		if (fNewValue != m_fValue)
			vfunc8(fNewValue);
		if (fNewValue != m_pParent->m_fValue)
			m_pParent->vfunc8(fNewValue);
	}
}
// END FUNCTION

// FUNCTION: 0x10246160 size=0x36
#include "ConVar.h"

// TARGET: ConVar::sub_10246160
void ConVar::sub_10246160(int nValue)
{
	if (!m_pParent->vfunc1())
	{
		if (nValue != m_nValue)
		{
			vfunc9(nValue);
		}
		if (nValue != m_pParent->m_nValue)
		{
			m_pParent->vfunc9(nValue);
		}
	}
}
// END FUNCTION
