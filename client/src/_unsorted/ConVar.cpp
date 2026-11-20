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
