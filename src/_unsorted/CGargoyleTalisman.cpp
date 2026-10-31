// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f8fc0 size=0x3f
#include "CGargoyleTalisman.h"

struct CUnknownWeapon103f8fc0 {
    char *sub_10010ea6();
    void sub_100131ec(int a, int b);
};

struct CUnknownChar103f8fc0 {
    void sub_100091a6(int a, int b);
};

// TARGET: CGargoyleTalisman::vfunc298
void CGargoyleTalisman::vfunc298(int a, int b)
{
    if (a != 0) {
        ((CUnknownChar103f8fc0 *)a)->sub_100091a6(
            *(int *)(((CUnknownWeapon103f8fc0 *)this)->sub_10010ea6() + 0x4fed0),
            *(int *)(((CUnknownWeapon103f8fc0 *)this)->sub_10010ea6() + 0x4fec0));
    }
    ((CUnknownWeapon103f8fc0 *)this)->sub_100131ec(a, b);
}
// END FUNCTION

// FUNCTION: 0x103f9010 size=0x35
#include "CGargoyleTalisman.h"

// TARGET: CGargoyleTalisman::vfunc300
void CGargoyleTalisman::vfunc300()
{
    char *pChar = sub_10252240();
    if (pChar) {
        char *pOwner = sub_10010ea6();
        *(unsigned int *)(pChar + 0xe38) &= ~*(unsigned int *)(pOwner + 0x4fed0);
    }
    sub_10005b69();
}
// END FUNCTION

// FUNCTION: 0x103fbdd0 size=0x6
#include "CGargoyleTalisman.h"
namespace lifted {
extern char g_10943964;
}
int CGargoyleTalisman::vfunc80()
{
    return (int)&lifted::g_10943964;
}
// END FUNCTION

// FUNCTION: 0x103fbdf0 size=0x3
#include "CGargoyleTalisman.h"
int CGargoyleTalisman::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1040a0c0 size=0x1e
#include "CGargoyleTalisman.h"

void sub_100aa7b0(void *p);

// TARGET: CGargoyleTalisman::vfunc5
CGargoyleTalisman *CGargoyleTalisman::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
