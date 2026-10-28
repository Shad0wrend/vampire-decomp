// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1022a060 size=0x6
#include "CSoundScheme.h"
namespace lifted {
extern char g_105b4090;
}
datamap_t * CSoundScheme::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105b4090);
}
// END FUNCTION

// FUNCTION: 0x1022a1d0 size=0x1e
#include "CSoundScheme.h"

void sub_100aa7b0(void *p);

// TARGET: CSoundScheme::vfunc5
CSoundScheme *CSoundScheme::vfunc5(unsigned int flags)
{
	sub_1000bccb();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1022a2d0 size=0x13
#include "CSoundScheme.h"
void __fastcall sub_10001f28(CSoundScheme *self);

// TARGET: CSoundScheme::vfunc103
void CSoundScheme::vfunc103()
{
	sub_10001f28(this);
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1022a300 size=0x33
#include "CSoundScheme.h"

extern char g_10750d78[];

struct CSoundLockView {
    void sub_100115f9(void *pOwner);
};

struct CSoundCallView {
    char pad0[0x454];
    unsigned char m_b454;
    void sub_100ac4e0(void *pFunc, float flTime, const char *pszContext);
};

// TARGET: CSoundScheme::vfunc113
void CSoundScheme::vfunc113()
{
    ((CSoundLockView *)g_10750d78)->sub_100115f9(this);
    if (((CSoundCallView *)this)->m_b454 != 0) {
        sub_1022b590(2.0f);
        return;
    }
    ((CSoundCallView *)this)->sub_100ac4e0(0, 0.0f, 0);
}
// END FUNCTION

// FUNCTION: 0x1022a350 size=0x11
#include "CSoundScheme.h"
namespace lifted {
int sub_1000fe5c();
}
void CSoundScheme::vfunc129()
{
    *(char *)((char *)this + 0x454) = *(char *)((char *)this + 0x455);
    lifted::sub_1000fe5c();
}
// END FUNCTION
