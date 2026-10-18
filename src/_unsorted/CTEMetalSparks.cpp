// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10059e10 size=0x2d
#include "CTEMetalSparks.h"

CTEMetalSparks::CTEMetalSparks(const char *name) : CBaseTempEntityHead(name)
{
	m_pos[0] = 0;
	m_pos[1] = 0;
	m_pos[2] = 0;
	m_dir[0] = 0;
	m_dir[1] = 0;
	m_dir[2] = 0;
}
// END FUNCTION

// FUNCTION: 0x10059e50 size=0x1e
#include "CTEMetalSparks.h"

// TARGET: CTEMetalSparks::vfunc2
CTEMetalSparks *CTEMetalSparks::vfunc2(unsigned int flags)
{
	sub_1000e340();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10059fe0 size=0x39
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

extern IVEngineServerFull *g_1070b22c;

void CTEMetalSparks::sub_10059fe0(int a, int b)
{
	g_1070b22c->PlaybackTempEntity(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION
