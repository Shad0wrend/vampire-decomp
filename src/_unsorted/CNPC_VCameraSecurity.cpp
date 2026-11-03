// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10369cf0 size=0x6
#include "CNPC_VCameraSecurity.h"
namespace lifted {
extern char g_1062f928;
}
datamap_t * CNPC_VCameraSecurity::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1062f928);
}
// END FUNCTION

// FUNCTION: 0x10369e40 size=0x1e
#include "CNPC_VCameraSecurity.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VCameraSecurity::vfunc5
CNPC_VCameraSecurity *CNPC_VCameraSecurity::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10369fb0 size=0x2d
#include "CNPC_VCameraSecurity.h"

struct CUnk100150c3
{
	char sub_100150c3(void *pOther);
};

// TARGET: CNPC_VCameraSecurity::vfunc363
bool CNPC_VCameraSecurity::vfunc363(CBaseEntity *pOther)
{
	CBaseEntity *pCamera = sub_10369e70();
	if (*(int *)((char *)pOther + 0xa8) != 0 && pCamera != 0)
	{
		if (((CUnk100150c3 *)pCamera)->sub_100150c3(pOther))
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10369ff0 size=0x2c
#include "CNPC_VCameraSecurity.h"

struct CUnk100137c3
{
	char sub_100137c3();
};

// TARGET: CNPC_VCameraSecurity::vfunc201
bool CNPC_VCameraSecurity::vfunc201(CBaseEntity *pOther, int a, int b, int c)
{
	CBaseEntity *pCamera = sub_10369e70();
	if (*(int *)((char *)pOther + 0xa8) != 0 && pCamera != 0)
	{
		if (((CUnk100137c3 *)pCamera)->sub_100137c3())
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1036a030 size=0x12
#include "CNPC_VCameraSecurity.h"

// TARGET: CNPC_VCameraSecurity::vfunc468
bool CNPC_VCameraSecurity::vfunc468(CBaseEntity *pEnt)
{
	if (pEnt->m_pA8 == 0)
		return false;
	return true;
}
// END FUNCTION
