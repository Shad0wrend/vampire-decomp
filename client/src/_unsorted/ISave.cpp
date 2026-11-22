// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10128ee0 size=0x20
#include "ISave.h"
namespace lifted {
extern char g_10236404;
int sub_101d1296(int);
}
void * ISave::vfunc39(unsigned char a0)
{
    *(int *)this = (int)&lifted::g_10236404;
    if ((*(char *)&a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
