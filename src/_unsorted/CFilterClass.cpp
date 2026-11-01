// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10107e10 size=0x3d
#include "CFilterClass.h"

extern char g_106b8540[];
int sub_1043e780(const char *, const char *);

bool CFilterClass::vfunc241(CBaseEntity *pEntity)
{
    const char *pEntName;

    if (pEntity == 0) {
        return false;
    }
    pEntName = *(const char **)((char *)pEntity + 0x11c);
    if (pEntName == 0) {
        pEntName = g_106b8540;
    }
    return sub_1043e780(*(const char **)((char *)this + 0x484) == 0 ? g_106b8540 : *(const char **)((char *)this + 0x484), pEntName) == 0;
}
// END FUNCTION

// FUNCTION: 0x10107e60 size=0x6
#include "CFilterClass.h"
namespace lifted {
extern char g_1056c4a0;
}
datamap_t *CFilterClass::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c4a0;
}
// END FUNCTION

// FUNCTION: 0x10108620 size=0x36
#include "CFilterClass.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CFilterClass *CFilterClass::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
