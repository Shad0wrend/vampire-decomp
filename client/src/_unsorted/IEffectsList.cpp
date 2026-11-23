// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d9220 size=0x20
#include "IEffectsList.h"
namespace lifted {
extern char g_1023486c;
int sub_101d1296(int);
}
void * IEffectsList::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_1023486c;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
