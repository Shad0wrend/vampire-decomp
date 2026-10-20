// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1038fbb0 size=0x98
#include "CTraceFilterManBatNoIBeamEntity.h"
extern "C" unsigned int __cdecl strlen(const char *);
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern char g_106b8540[];
#pragma intrinsic(strlen)

struct CNamedEnt {
	char m_pad[0x26c];
	const char *volatile m_iName;

	bool NameMatchesComplex(const char *pszNameOrWildcard)
	{
		unsigned int len = strlen(pszNameOrWildcard);
		if (len == 0)
			return m_iName == 0;
		if (pszNameOrWildcard[len - 1] != '*') {
			const char *pszName = m_iName;
			return _strcmpi(pszName ? pszName : g_106b8540, pszNameOrWildcard) == 0;
		}
		const char *pszName = m_iName;
		return _strnicmp(pszName ? pszName : g_106b8540, pszNameOrWildcard, len - 1) == 0;
	}
	bool NameMatches(const char *pszNameOrWildcard)
	{
		const char *pszName = m_iName;
		if (pszName && pszName == pszNameOrWildcard)
			return true;
		return NameMatchesComplex(pszNameOrWildcard);
	}
};

bool CTraceFilterManBatNoIBeamEntity::vfunc0(void *pHandleEntity, int contentsMask)
{
	if (((CNamedEnt *)pHandleEntity)->NameMatches("lbeam*"))
		return false;
	return CTraceFilterSimple::sub_101d31c0(pHandleEntity, contentsMask);
}
// END FUNCTION
