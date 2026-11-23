// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e6e50 size=0x20
#include "IGameMovement.h"
namespace lifted {
extern char g_10234c38;
int sub_101d1296(int);
}
void * IGameMovement::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_10234c38;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
