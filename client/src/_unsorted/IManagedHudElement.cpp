// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005f0f0 size=0x20
#include "IManagedHudElement.h"
namespace lifted {
extern char g_1022a350;
int sub_101d1296(int);
}
void * IManagedHudElement::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_1022a350;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
