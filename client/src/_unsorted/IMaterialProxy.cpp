// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004b0b0 size=0x20
#include "IMaterialProxy.h"
namespace lifted {
extern char g_10227c5c;
int sub_101d1296(int);
}
void * IMaterialProxy::vfunc3(char a0)
{
    *(int *)this = (int)&lifted::g_10227c5c;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
