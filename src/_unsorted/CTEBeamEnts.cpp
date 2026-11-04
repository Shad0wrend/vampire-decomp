// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005b3a0 size=0x1e
#include "CTEBeamEnts.h"

// TARGET: CTEBeamEnts::vfunc2
CTEBaseBeam *CTEBeamEnts::vfunc2(unsigned int flags)
{
	sub_1000dcfb();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005b3f0 size=0xc6
#include "CTEBeamEnts.h"
#include "CBroadcastRecipientFilter.h"

extern short g_1088ae52;

void CTEBeamEnts::vfunc3(const float *pOrigin, const float *pAngles)
{
    m_n44 = 1;
    m_n48 = 0;
    m_nModelIndex = g_1088ae52;
    m_n14 = 0;
    m_n18 = 10;
    m_f1c = 2.0f;
    m_f20 = 1.0f;
    m_f2c = 1.0f;
    m_n30 = 127;
    m_n34 = 63;
    m_n38 = 0;
    m_n40 = 1;
    m_n3c = 150;
    CBroadcastRecipientFilter filter;
    vfunc4(&filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005b500 size=0x39
#include "CRecipientFilter.h"
#include "CTEBeamEnts.h"
#include "CTEMetalSparks.h"
#include "IVEngineServerFull.h"

void CTEBeamEnts::vfunc4(CRecipientFilter *pFilter, float flDelay)
{
	engine->vfunc103((int)pFilter, *(int *)&flDelay, this, ((CTEMetalSparks *)this)->vfunc0()->m_pTable, ((CTEMetalSparks *)this)->vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005b5c0 size=0x6
#include "CTEBeamEnts.h"
namespace lifted {
extern char g_106bf810;
}
ServerClass *CTEBeamEnts::vfunc0()
{
    return (ServerClass *)&lifted::g_106bf810;
}
// END FUNCTION

// FUNCTION: 0x1005b5e0 size=0x3
#include "CTEBeamEnts.h"
int CTEBeamEnts::vfunc1()
{
    return 0;
}
// END FUNCTION
