// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fbf60 size=0x6
#include "CInspectionNode.h"
namespace lifted {
extern char g_10566e3c;
}
datamap_t *CInspectionNode::vfunc82()
{
    return (datamap_t *)&lifted::g_10566e3c;
}
// END FUNCTION

// FUNCTION: 0x100fc020 size=0x3e
#include "vampire.h"
#include "CInspectionNode.h"

extern int g_10708e3c;
extern int g_10708e40;

// TARGET: CInspectionNode::vfunc104
void CInspectionNode::vfunc104()
{
    g_10708e3c = engine->vfunc17((const char *)"Inspection_Emitter", 0);
    g_10708e40 = engine->vfunc17((const char *)"Inspection_Insight_Emitter", 0);
    *(int *)((char *)this + 0x454) = g_10708e3c;
}
// END FUNCTION

// FUNCTION: 0x100fc070 size=0x114
#include "CInspectionNode.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"
extern CGlobalEntityList *g_10566458;
extern char g_10543c6c[];
void sub_101cd940(void *pEnt);
struct SInspEntityUnk { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void *vfunc4(); };
struct SInspEdict { char m_pad[0x40]; SInspEntityUnk *m_pUnk; };
inline char *InspInstance(SInspEdict *edict)
{
	ScopeTrace trace(g_10543c6c, g_106b8540);
	return (edict && edict->m_pUnk) ? (char *)edict->m_pUnk->vfunc4() : 0;
}
inline CGlobalEntityList_Ent *InspLookup(unsigned int h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return s->m_pEntity;
	}
	return 0;
}
char CInspectionNode::vfunc86(int a, void *pEdict, int c, int d, int e)
{
	if (!InspLookup(m_hAttachEntity)) {
		sub_101cd940(this);
		return CEnvParticle::vfunc86(a, (int)pEdict, c, d, e);
	}
	char r = CEnvParticle::vfunc86(a, (int)pEdict, c, d, e);
	if (r) {
		char *pEnt = InspInstance((SInspEdict *)pEdict);
		if (pEnt && *(int *)(pEnt + 0xa8))
			sub_100fc1e0(*(int *)(pEnt + 0xa8));
	}
	return r;
}
// END FUNCTION

// FUNCTION: 0x100fd4a0 size=0x1e
#include "CInspectionNode.h"

void sub_100aa7b0(void *p);

// TARGET: CInspectionNode::vfunc5
CInspectionNode *CInspectionNode::vfunc5(unsigned int flags)
{
	sub_10011ac7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
