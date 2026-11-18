// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b1090 size=0x71
#include "CNodeEnt.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNodeEnt::vfunc202(int a)
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CLogicalPointEntity::SetOwnerEntity";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100b1130 size=0x74
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100b1130(CBaseEntity *self)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CLogicalPointEntity::GetOwnerEntity";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102d7800 size=0x6
#include "datamap.h"
#include "CNodeEnt.h"
namespace lifted {
extern char g_1060aaf8;
}
datamap_t * CNodeEnt::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1060aaf8);
}
// END FUNCTION

// FUNCTION: 0x102d7890 size=0x21
#include "CBaseEntity.h"
#include "CEntityMapData.h"
#include "CUnknown10136ec0.h"

extern int g_10926a38;

struct Helper
{
	void sub_102d7890(CEntityMapData *pArg);
};

// TARGET: Helper::sub_102d7890
void Helper::sub_102d7890(CEntityMapData *pArg)
{
	g_10926a38 = ((CUnknown10136ec0 *)pArg)->sub_10136ec0();
	((CBaseEntity *)this)->CBaseEntity::vfunc107(pArg);
}
// END FUNCTION

// FUNCTION: 0x102d78d0 size=0x329
#include "CNodeEnt.h"
#include "CUnknown102f47f0.h"
#include "CUnknown102f7970.h"
#include "CAI_Node.h"
#include "CEntityVSlots.h"
#include "engineserver.h"
#include "Tier1.h"
#include <string.h>

extern char g_105b6464[];
extern char g_106b8540[];
extern int g_10926a38;
extern int g_10926a3c;
extern char g_1093408c;
extern CUnknown102f47f0 *g_1093407c;
struct CNodeEntManager { char pad[0x454]; CUnknown102f7970 *m_pNetwork; };
extern CNodeEntManager *g_10934088;
struct CUnknown102f7940 { void sub_102f7940(); };
int sub_102d2f30(int a, int b, int c, int d);
void sub_101cd970(CBaseEntity *pEnt);

static inline bool IsClass(CNodeEnt *p, const char *s)
{
	return !strcmpi(p->m_classname11c ? p->m_classname11c : g_106b8540, s);
}

static inline CUnknown102fc5d0 *GetNode(CUnknown102f47f0 *pList, int id)
{
	if (id < 0 || id >= pList->m_nNodes) {
		g_106c994c++;
		return 0;
	}
	return pList->m_pNodes[id];
}

void CNodeEnt::vfunc103()
{
	sub_102d7d30();
	if (!strcmpi(m_classname11c ? m_classname11c : g_106b8540, "info_node_tzimisce"))
		m_classname11c = g_105b6464[0] ? g_105b6464 : 0;
	if (IsClass(this, "info_hint") || IsClass(this, "info_node_kick_over") || IsClass(this, "info_node_kick_at") || IsClass(this, "info_node_shoot_at")) {
		if (m_w450) {
			int name = (int)m_name26c;
			sub_102d2f30(name, (int)((CEntityVSlots *)this)->slot217(), g_10926a38, -1);
		} else
			g_109f3630("WARNING: Hint node with no hint type!\n");
	} else {
		int nHint = 0;
		if (m_w450 || m_n458) {
			int name = (int)m_name26c;
			nHint = sub_102d2f30(name, (int)((CEntityVSlots *)this)->slot217(), g_10926a38, g_10926a3c);
		}
		if (g_1093408c && !engine->vfunc12()) {
			if (nHint) {
				CUnknown102fc5d0 *pOld = GetNode(g_1093407c, g_10926a3c);
				if (pOld)
					pOld->m_fieldA0 = nHint;
			}
			g_10926a3c++;
			sub_101cd970(this);
			return;
		}
		g_10926a3c++;
		CUnknown102fc5d0 *pNode = g_1093407c->sub_102f47f0((const float *)((CEntityVSlots *)this)->slot217(), *(int *)((char *)((CEntityVSlots *)this)->slot219() + 4));
		pNode->m_fieldA0 = nHint;
		if (g_10934088->m_pNetwork->m_pIds)
			g_10934088->m_pNetwork->m_pIds[pNode->m_field04] = m_nId454;
		if (g_10934088->m_pNetwork->m_nNodeIds <= m_nId454)
			g_10934088->m_pNetwork->m_nNodeIds = m_nId454 + 1;
		if (engine->vfunc12()) {
			if (g_10934088->m_pNetwork->m_pPositions) {
				float *p = g_10934088->m_pNetwork->m_pPositions[pNode->m_field04];
				p[0] = pNode->m_vecX;
				p[1] = pNode->m_vecY;
				p[2] = pNode->m_vecZ;
			}
		}
		if (IsClass(this, "info_node_air") || IsClass(this, "info_node_air_hint"))
			pNode->m_field70 = 3;
		else if (IsClass(this, "info_node_climb"))
			pNode->m_field70 = 4;
		else
			pNode->m_field70 = 2;
		if (m_fDebugOverlays224 & 0x1000000) {
			((CUnknown102f7940 *)g_10934088->m_pNetwork)->sub_102f7940();
			pNode->m_field74 |= 0x20000000;
			((CAI_Node *)pNode)->sub_102fa510();
		}
	}
	sub_101cd970(this);
}
// END FUNCTION

// FUNCTION: 0x102d7d00 size=0x1e
#include "CNodeEnt.h"

void sub_100aa7b0(void *p);

// TARGET: CNodeEnt::vfunc5
CBaseEntity *CNodeEnt::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
