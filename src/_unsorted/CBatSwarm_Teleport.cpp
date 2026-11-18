// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b1a40 size=0x6
#include "CBatSwarm_Teleport.h"
namespace lifted {
extern char g_1065071c;
}
datamap_t * CBatSwarm_Teleport::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1065071c);
}
// END FUNCTION

// FUNCTION: 0x103b1b00 size=0x1e
#include "CBatSwarm_Teleport.h"

void sub_100aa7b0(void *p);

// TARGET: CBatSwarm_Teleport::vfunc5
CBaseEntity *CBatSwarm_Teleport::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
