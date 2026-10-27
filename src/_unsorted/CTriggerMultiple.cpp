// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c6780 size=0x6
#include "CTriggerMultiple.h"
namespace lifted {
extern char g_1059da9c;
}
datamap_t * CTriggerMultiple::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059da9c);
}
// END FUNCTION

// FUNCTION: 0x101c6860 size=0x38
// TARGET: CTriggerMultiple::vfunc103
#include "CTriggerMultiple.h"

void sub_10015212();

void CTriggerMultiple::vfunc103()
{
    ((CBaseEntity *)this)->CBaseEntity::vfunc103();
    sub_101c5080();
    if (*(float *)((char *)this + 0x500) == 0.0f) {
        *(float *)((char *)this + 0x500) = 0.2f;
    }
    *(void **)((char *)this + 0x1ec) = (void *)sub_10015212;
}
// END FUNCTION
