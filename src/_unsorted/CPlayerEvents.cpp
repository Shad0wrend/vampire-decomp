// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102266a0 size=0x6
#include "CPlayerEvents.h"
namespace lifted {
extern char g_105b28c0;
}
datamap_t * CPlayerEvents::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105b28c0);
}
// END FUNCTION

// FUNCTION: 0x102270b0 size=0x30
#include "CPlayerEvents.h"
CPlayerEvents::CPlayerEvents() : CBaseEntity(0)
{
}
// END FUNCTION
