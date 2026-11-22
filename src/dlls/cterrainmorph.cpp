// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 6 blocks
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

// FUNCTION: 0x100de650 size=0x5
int sub_100de690(void);
int g_106e860c = ((int (*)(int))sub_100de690)(0);
// END FUNCTION

// FUNCTION: 0x100de690 size=0x1a
namespace lifted {
extern int g_10561290;
extern int g_10561294;
extern char g_105612d4;
}
int sub_100de690()
{
    lifted::g_10561294 = 6;
    lifted::g_10561290 = (int)&lifted::g_105612d4;
    return (int)&lifted::g_10561290;
}
// END FUNCTION

// FUNCTION: 0x100de6c0 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_104541bc[];	// CTerrainMorph vftable
extern const char g_105615a0[];

// TARGET: tectonic
DLL_EXPORT CBaseEntity *tectonic()
{
	void *mem = sub_100aa720(0x48c);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_104541bc;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_105615a0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100de730 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_104541bc[];	// CTerrainMorph vftable
extern const char g_105615ac[];

// TARGET: env_terrainmorph
DLL_EXPORT CBaseEntity *env_terrainmorph()
{
	void *mem = sub_100aa720(0x48c);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_104541bc;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_105615ac);
	return p;
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
