// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d3f80 size=0x20
#include "IClientMode.h"
namespace lifted {
extern char g_102346cc;
int sub_101d1296(int);
}
void * IClientMode::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_102346cc;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
