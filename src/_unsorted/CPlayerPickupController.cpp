// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040ce90 size=0x6
#include "CPlayerPickupController.h"
namespace lifted {
extern char g_106839a0;
}
datamap_t * CPlayerPickupController::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106839a0);
}
// END FUNCTION
