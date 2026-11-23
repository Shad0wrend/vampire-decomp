// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10034bf0 size=0x20
#include "IRecipientFilter.h"
namespace lifted {
extern char g_10226214;
int sub_101d1296(int);
}
void * IRecipientFilter::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_10226214;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
