// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100de630 size=0x6
#include "datamap.h"
#include "CTerrainMorph.h"
namespace lifted {
extern char g_10561290;
}
datamap_t *CTerrainMorph::vfunc82()
{
    return (datamap_t *)&lifted::g_10561290;
}
// END FUNCTION

// FUNCTION: 0x100de7a0 size=0x1e
#include "CTerrainMorph.h"

void sub_100aa7b0(void *p);

// TARGET: CTerrainMorph::vfunc5
CBaseEntity *CTerrainMorph::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
