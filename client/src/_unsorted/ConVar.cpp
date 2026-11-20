// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100df7a0 size=0xad
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

// FUNCTION: 0x100df850 size=0x45
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

// FUNCTION: 0x100dfa10 size=0x2e
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
