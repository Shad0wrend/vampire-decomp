// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10216bc0 size=0x6
#include "CTriggerInventory.h"
namespace lifted {
extern char g_105ac944;
}
datamap_t * CTriggerInventory::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ac944);
}
// END FUNCTION

// FUNCTION: 0x10216d40 size=0x10
#include "CTriggerInventory.h"

// TARGET: CTriggerInventory::vfunc103
void CTriggerInventory::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION
