// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10004e50 size=0x5
#include "IPrototypeAppEffect.h"
bool IPrototypeAppEffect::vfunc2(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10004e60 size=0x20
#include "IPrototypeAppEffect.h"
namespace lifted {
extern char g_101e5574;
int sub_101d1296(int);
}
void * IPrototypeAppEffect::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_101e5574;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
