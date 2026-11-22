// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 19 blocks
#include "vampire.h"

// FUNCTION: 0x100b1090 size=0x71
#include "CNodeEnt.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNodeEnt::vfunc202(CBaseEntity *a)
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

// FUNCTION: 0x102d7290 size=0x8
#include "CBaseEntity.h"
#include "CAI_TestHull.h"
// TARGET: CAI_TestHull::vfunc117
char CAI_TestHull::vfunc117() { char c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return c & (char)0xfd; }
// END FUNCTION

// FUNCTION: 0x102d72b0 size=0x7
#include "CAI_TestHull.h"
namespace lifted {
extern float g_10462950;
}
float CAI_TestHull::vfunc522()
{
    return lifted::g_10462950;
}
// END FUNCTION

// FUNCTION: 0x102d72d0 size=0x7
#include "CAI_TestHull.h"
namespace lifted {
extern float g_10462950;
}
float CAI_TestHull::vfunc523()
{
    return lifted::g_10462950;
}
// END FUNCTION

// FUNCTION: 0x102d72f0 size=0x16b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCollisionProperty.h"
#include "CAI_TestHull.h"
int sub_102d6210(int index);
void sub_1000f36c(int a);
struct TestHullFields {
    char pad[0x1568];
    int m_nHull;
};
void CAI_TestHull::vfunc103()
{
    CBaseEntity *self = (CBaseEntity *)this;
    int mask = sub_1000d8b9();
    int idx = 0;
    if (mask > 0) {
        int m = sub_102d6210(0);
        while ((mask & m) == 0) {
            idx++;
            if (idx == 0x16) {
                sub_1000f36c(0);
                idx = 0;
                break;
            }
            m = sub_102d6210(idx);
        }
    }
    ((TestHullFields *)self)->m_nHull = idx;
    sub_1000dc29(0);
    const char *pName = self->m_name26c ? self->m_name26c : g_106b8540;
    CCollisionProperty *pCol = (CCollisionProperty *)((char *)self + 0x270);
    {
        ScopeTrace trace("CBaseEntity::SetSolid", pName);
        pCol->sub_100dc480(2);
    }
    {
        ScopeTrace trace("CBaseEntity::AddSolidFlags", self->m_name26c ? self->m_name26c : g_106b8540);
        pCol->sub_100dc580(pCol->m_usSolidFlags | 4);
    }
    self->vfunc93(4, 0);
    self->m_iHealth = 0x32;
    self->sub_100b3580(0x40000);
    *((char *)self + 0x5f44) = 0;
    self->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x102d74c0 size=0x12a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct CEnt5f44 : CBaseEntity
{
	char m_pad5f44[0x5f44 - sizeof(CBaseEntity)];
	char m_b5f44;
};
extern CEnt5f44 *g_10926a34;
extern void (__cdecl *g_109f362c)(const char *fmt);
extern void (__cdecl *g_109f3630)(const char *fmt);
extern char g_10538764[];	// type descriptor of CBaseEntity
extern char g_1060b0e0[];	// type descriptor of CAI_TestHull
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long vfDelta, void *pSrcType, void *pTargetType, int isReference);
CBaseEntity *sub_10136580(const char *classname);

// TARGET: sub_102d74c0
CEnt5f44 *sub_102d74c0()
{
	if (!g_10926a34) {
		CBaseEntity *pHull = (CBaseEntity *)__RTDynamicCast(sub_10136580("aitesthull"), 0, g_10538764, g_1060b0e0, 0);
		if (!pHull)
			g_109f362c("classname %s used to create wrong class type\n");
		g_10926a34 = (CEnt5f44 *)pHull;
		pHull->vfunc103();
		g_10926a34->sub_100b3580(0x2000);
	}
	if (g_10926a34->m_b5f44 == 1)
		g_109f3630("WARNING: TestHull used and never returned!\n");
	CBaseEntity *pEnt = g_10926a34;
	{
		ScopeTrace trace("CBaseEntity::RemoveSolidFlags", pEnt ? (pEnt->m_name26c ? pEnt->m_name26c : g_106b8540) : g_105387dc);
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pEnt + 0x270);
		pCol->sub_100dc580(pCol->m_usSolidFlags & ~4);
	}
	g_10926a34->m_b5f44 = 1;
	g_10926a34->sub_100b3b00();
	return g_10926a34;
}
// END FUNCTION

// FUNCTION: 0x102d7640 size=0xbe
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct CEnt5f44 : CBaseEntity
{
	char m_pad5f44[0x5f44 - sizeof(CBaseEntity)];
	char m_b5f44;
};
extern CEnt5f44 *g_10926a34;
extern char g_1070d1b0[];
void sub_101cf390(CBaseEntity *pEnt, char *a, char *b);

// TARGET: sub_102d7640
void sub_102d7640()
{
	g_10926a34->m_b5f44 = 0;
	CBaseEntity *pEnt = g_10926a34;
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", pEnt ? (pEnt->m_name26c ? pEnt->m_name26c : g_106b8540) : g_105387dc);
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pEnt + 0x270);
		pCol->sub_100dc580(pCol->m_usSolidFlags | 4);
	}
	sub_101cf390(g_10926a34, g_1070d1b0, g_1070d1b0);
	g_10926a34->sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x102d7730 size=0x1d
// TARGET: CUnk102d7730::sub_102d7730
struct CUnk102d7730
{
    char pad[0x1568];
    int m_1568;
    int m_156c;
    void sub_10273070(int a);
    void sub_102d7730(int a);
};
void CUnk102d7730::sub_102d7730(int a)
{
    m_1568 = a;
    m_156c = a;
    sub_10273070(1);
}
// END FUNCTION

// FUNCTION: 0x102d7760 size=0x26
// TARGET: CAI_TestHull::vfunc521
#include "CAI_TestHull.h"

void CAI_TestHull::vfunc521(int a, int b, int c)
{
	sub_1001484e(a, b, c, 1024.0f, 1024.0f, 1024.0f);
}
// END FUNCTION

// FUNCTION: 0x102d77a0 size=0x1f
namespace lifted {
extern char g_1049be30;
extern char g_1049be5c;
extern int g_10926a34;
int sub_1000c9cd();
}
struct CUnknown102d77a0 { int sub_102d77a0(); };
int CUnknown102d77a0::sub_102d77a0()
{
    *(int *)this = (int)&lifted::g_1049be5c;
    *(int *)((char *)this + 0x19b0) = (int)&lifted::g_1049be30;
    lifted::g_10926a34 = 0;
    return lifted::sub_1000c9cd();
}
// END FUNCTION

// FUNCTION: 0x102d77d0 size=0x1e
#include "CAI_TestHull.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_TestHull::vfunc5
CAI_TestHull *CAI_TestHull::vfunc5(unsigned int flags)
{
	sub_100033a0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
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

// FUNCTION: 0x102d7820 size=0x5
int sub_102d7860(void);
int g_10926a30 = ((int (*)(int))sub_102d7860)(0);
// END FUNCTION

// FUNCTION: 0x102d7860 size=0x1a
namespace lifted {
extern int g_1060aaf8;
extern int g_1060aafc;
extern char g_1060ab3c;
}
int sub_102d7860()
{
    lifted::g_1060aafc = 7;
    lifted::g_1060aaf8 = (int)&lifted::g_1060ab3c;
    return (int)&lifted::g_1060aaf8;
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

// FUNCTION: 0x102d7cd0 size=0x1e
extern int vt_1049c954[];

struct CUnk102d7cd0 {
	void *m_vptr;
	char m_pad0004[0x224 - 4];
	int m_224;
	void sub_100090fc(int a);
	CUnk102d7cd0 *sub_102d7cd0();
};

// TARGET: CUnk102d7cd0::sub_102d7cd0
CUnk102d7cd0 *CUnk102d7cd0::sub_102d7cd0()
{
	sub_100090fc(0);
	m_vptr = vt_1049c954;
	m_224 = 0;
	return this;
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
