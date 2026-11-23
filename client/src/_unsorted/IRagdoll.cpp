// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10125440 size=0x20
#include "IRagdoll.h"
namespace lifted {
extern char g_10235ce4;
int sub_101d1296(int);
}
void * IRagdoll::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_10235ce4;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
