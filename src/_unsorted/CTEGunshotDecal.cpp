// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10064010 size=0x48
#include "CTEGunshotDecal.h"
CTEGunshotDecal::CTEGunshotDecal(const char *name) : CBaseTempEntityHead(name)
{
    m_vecOrigin.x = 0;
    m_vecOrigin.y = 0;
    m_vecOrigin.z = 0;
    m_f24 = 0;
    m_f2c = 0;
    m_f3c = 0;
    m_f44 = 0;
    m_f40 = 0;
    m_f48 = 0;
    m_f30 = -1;
    m_f34 = 0x43;
    m_f38 = 1;
}
// END FUNCTION

// FUNCTION: 0x10064080 size=0x1e
#include "CTEGunshotDecal.h"

// TARGET: CTEGunshotDecal::vfunc2
CTEGunshotDecal *CTEGunshotDecal::vfunc2(unsigned int flags)
{
	sub_1001520d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100640d0 size=0x1
#include "CTEGunshotDecal.h"
void CTEGunshotDecal::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x100643a0 size=0x39
#include "CTEGunshotDecal.h"
#include "IVEngineServerFull.h"


void CTEGunshotDecal::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10064460 size=0x6
#include "CTEGunshotDecal.h"
namespace lifted {
extern char g_106c4274;
}
ServerClass * CTEGunshotDecal::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c4274);
}
// END FUNCTION
