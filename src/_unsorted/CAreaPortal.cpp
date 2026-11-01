// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010c310 size=0x6
namespace lifted {
extern char g_1056dbe0;
}
datamap_t *CAreaPortal::vfunc82()
{
    return (datamap_t *)&lifted::g_1056dbe0;
}
// END FUNCTION

// FUNCTION: 0x1010c3f0 size=0x1e
#include "CAreaPortal.h"

void sub_100aa7b0(void *p);

// TARGET: CAreaPortal::vfunc5
CAreaPortal *CAreaPortal::vfunc5(unsigned int flags)
{
	sub_100156b8();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010c420 size=0x8
#include "CAreaPortal.h"

void CAreaPortal::vfunc103()
{
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1010c520 size=0x29
struct CUnit1010c520 {
    void sub_1010c520(int a, int b, int c, int d);
    void sub_1010c5d0();
};

void CUnit1010c520::sub_1010c520(int a, int b, int c, int d)
{
    if (c == 1) {
        *(int *)((char *)this + 0x458) = c;
        sub_1010c5d0();
        return;
    }
    if (c == 0) {
        *(int *)((char *)this + 0x458) = c;
        sub_1010c5d0();
    }
}
// END FUNCTION

// FUNCTION: 0x1010c560 size=0x4c
#include <string.h>
#include <stdlib.h>

bool CAreaPortal::vfunc110(const char *key, const char *value)
{
	if (!strcmpi(key, "StartOpen"))
	{
		m_bStartOpen = atoi(value) != 0;
		return true;
	}
	return sub_1009e430(key, value);
}
// END FUNCTION

// FUNCTION: 0x1010c610 size=0x5
bool CAreaPortal::vfunc86(int a0, int a1, int a2, int a3, int a4)
{
    return 0;
}
// END FUNCTION
