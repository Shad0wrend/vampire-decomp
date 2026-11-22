// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10156f00 size=0x1e
#include "CVTraitEffectGroup_t.h"
namespace lifted {
int sub_10156f20();
int sub_101d1296(int);
}
CVTraitEffectGroup_t* CVTraitEffectGroup_t::vfunc0(unsigned int a0)
{
    int t0 = lifted::sub_10156f20();
    if ((*(char *)&a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
