// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10120e70 size=0x20
#include "IPrediction.h"
namespace lifted {
extern char g_10235c04;
int sub_101d1296(int);
}
void * IPrediction::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_10235c04;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
