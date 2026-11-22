// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100a56b0 size=0x20
#include "CPlayerLocalPredictedData.h"
namespace lifted {
extern char g_1022e8dc;
int sub_101d1296(int);
}
void * CPlayerLocalPredictedData::vfunc0(char a0)
{
    *(int *)this = (int)&lifted::g_1022e8dc;
    if ((a0 & 1) != 0) {
        lifted::sub_101d1296((int)this);
    }
    return this;
}
// END FUNCTION
