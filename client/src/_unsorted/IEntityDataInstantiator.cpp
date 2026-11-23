// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1011b130 size=0x20
#include "IEntityDataInstantiator.h"
namespace lifted {
extern char g_10235b4c;
int sub_101d1296(int);
}
void * IEntityDataInstantiator::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_10235b4c;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
