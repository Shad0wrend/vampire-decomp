// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10064a40 size=0x19
#include "CTEExplosiveGunshotDecal.h"

CTEExplosiveGunshotDecal::CTEExplosiveGunshotDecal(const char *name) : CTEGunshotDecal(name)
{
}
// END FUNCTION

// FUNCTION: 0x10064a70 size=0x1e
#include "CTEExplosiveGunshotDecal.h"

// TARGET: CTEExplosiveGunshotDecal::vfunc2
CBaseTempEntity *CTEExplosiveGunshotDecal::vfunc2(unsigned int flags)
{
	sub_10010f0a();
	if (flags & 1)
		operator delete(this);
	return (CBaseTempEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x10064ac0 size=0x1
#include "CTEExplosiveGunshotDecal.h"
void CTEExplosiveGunshotDecal::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x10064ae0 size=0x39
#include "CTEExplosiveGunshotDecal.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEExplosiveGunshotDecal::vfunc4(void *pFilter, int delay)
{
	engine->vfunc103((int)pFilter, delay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10064ba0 size=0x6
#include "CTEExplosiveGunshotDecal.h"
namespace lifted {
extern char g_106c41c8;
}
ServerClass *CTEExplosiveGunshotDecal::vfunc0()
{
    return (ServerClass *)&lifted::g_106c41c8;
}
// END FUNCTION

// FUNCTION: 0x10064bc0 size=0x3
#include "CTEExplosiveGunshotDecal.h"
int CTEExplosiveGunshotDecal::vfunc1()
{
    return 0;
}
// END FUNCTION
