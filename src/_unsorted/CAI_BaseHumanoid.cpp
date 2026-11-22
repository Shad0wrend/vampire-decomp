// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10262430 size=0x37
// TARGET: CAI_BaseHumanoid::vfunc429
#include "CAI_BaseHumanoid.h"
#include "CAI_Navigator.h"

extern char vt_10499444[];
extern char vt_10499418[];

struct CAI_NavInitView
{
    void sub_100106d1(int pOuter);
};

CAI_Navigator *CAI_BaseHumanoid::vfunc429()
{
    char *p = (char *)operator new(0x6c);
    if (p != 0) {
        ((CAI_NavInitView *)p)->sub_100106d1((int)this);
        *(int *)p = (int)vt_10499444;
        *(int *)(p + 0x10) = (int)vt_10499418;
        *(p + 0x68) = 0;
        return (CAI_Navigator *)p;
    }
    return 0;
}
// END FUNCTION
