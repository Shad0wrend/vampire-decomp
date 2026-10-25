// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
