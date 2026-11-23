// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010f220 size=0x20
#include "IMoveHelper.h"
namespace lifted {
extern char g_10235714;
int sub_101d1296(int);
}
void * IMoveHelper::vfunc14(char a0)
{
    *(int *)this = (int)&lifted::g_10235714;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
