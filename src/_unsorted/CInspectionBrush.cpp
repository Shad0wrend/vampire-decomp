// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fd070 size=0x6
#include "CInspectionBrush.h"
namespace lifted {
extern char g_10567028;
}
datamap_t *CInspectionBrush::vfunc82()
{
    return (datamap_t *)&lifted::g_10567028;
}
// END FUNCTION

// FUNCTION: 0x100fd100 size=0x13
#include "CInspectionBrush.h"
#include "CBaseEntitySlots.h"

void CInspectionBrush::vfunc103()
{
	((CBaseEntitySlots *)this)->slot104();
	sub_100fca60();
}
// END FUNCTION

// FUNCTION: 0x100fd130 size=0x3e
#include "CInspectionBrush.h"

extern int g_10708e44;
extern int g_10708e48;

// TARGET: CInspectionBrush::vfunc104
void CInspectionBrush::vfunc104()
{
    g_10708e44 = engine->vfunc17((const char *)"Inspection_Brush_Emitter", 0);
    g_10708e48 = engine->vfunc17((const char *)"Inspection_Brush_Insight_Emitter", 0);
    *(int *)((char *)this + 0x454) = g_10708e44;
}
// END FUNCTION

// FUNCTION: 0x100fd180 size=0xbb
#include "CInspectionBrush.h"
#include "CEnvParticle.h"
#include "ScopeTrace.h"

// TARGET: CInspectionBrush::vfunc86
char CInspectionBrush::vfunc86(int a, CInspectionBrushEdict *pEdict, int c, int d, int e)
{
    char r = ((CEnvParticle *)this)->vfunc86(a, (int)pEdict, c, d, e);
    if (r) {
        CBaseEntity *pEnt;
        {
            ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
            pEnt = (pEdict && pEdict->m_pUnknown) ? pEdict->m_pUnknown->vfunc4() : 0;
        }
        if (pEnt && *(int *)((char *)pEnt + 0xa8))
            sub_100fd270(*(int *)((char *)pEnt + 0xa8));
    }
    return r;
}
// END FUNCTION

// FUNCTION: 0x100fd560 size=0x1e
#include "CInspectionBrush.h"

void sub_100aa7b0(void *p);

// TARGET: CInspectionBrush::vfunc5
CInspectionBrush *CInspectionBrush::vfunc5(unsigned int flags)
{
	sub_10011ac7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
