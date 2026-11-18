// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10107c20 size=0x96
#include "CFilterName.h"
#include "CBaseEntity.h"
extern char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
extern "C" int _strcmpi(const char *, const char *);
extern "C" int _strnicmp(const char *, const char *, unsigned int);

struct EntView
{
	char pad[0x26c];
	const char *m_iName;

	bool NameMatches(const char *p)
	{
		if (STRINGR(m_iName) == p)
			return true;
		unsigned int len = strlen(p);
		if (len == 0)
			return m_iName == 0;
		if (p[len - 1] != '*')
			return _strcmpi(STRINGR(m_iName), p) == 0;
		return _strnicmp(STRINGR(m_iName), p, len - 1) == 0;
	}
};

bool CFilterName::vfunc241(CBaseEntity *pEnt)
{
	const char *filter = *(const char **)((char *)this + 0x484);
	return ((EntView *)pEnt)->NameMatches(STRINGR(filter));
}
// END FUNCTION

// FUNCTION: 0x10107cf0 size=0x6
#include "datamap.h"
#include "CFilterName.h"
namespace lifted {
extern char g_1056c42c;
}
datamap_t *CFilterName::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c42c;
}
// END FUNCTION

// FUNCTION: 0x101085d0 size=0x36
#include "CFilterName.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CFilterName::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
