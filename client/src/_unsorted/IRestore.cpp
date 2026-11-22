// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1012a200 size=0x20
#include "IRestore.h"
namespace lifted {
extern char g_1023653c;
int sub_101d1296(int);
}
void * IRestore::vfunc34(unsigned char a0)
{
    *(int *)this = (int)&lifted::g_1023653c;
    if ((*(char *)&a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
