// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x102e0150 size=0x90
#include "CLogicAuto.h"
#include "CUnknown102e0150.h"

struct EntSub { void *ent; unsigned int serial; };
struct EntInfo { int pad; EntSub s; };
extern EntInfo *g_10566458;
extern float g_104454c4;
extern "C" __declspec(dllimport) void __cdecl DevWarning(int level, const char *fmt, ...);

struct CHandleLike {
	unsigned int m_index;
	void *Get() const
	{
		if (m_index == 0xffffffff)
			return 0;
		EntSub *s = &g_10566458[m_index & 0x1fff].s;
		if (s->serial == (m_index >> 13))
			return s->ent;
		return 0;
	}
};

struct CEnemyNode {
	char m_pad0[0x24];
	CHandleLike m_hEnemy;
	float m_flTime;
	char m_pad2c[0x34 - 0x2c];
	char m_bDefault;
	char m_pad35[3];
	CEnemyNode *m_pNext;
};

float CUnknown102e0150::sub_102e0150(void *pEnemy)
{
	if (pEnemy) {
		CEnemyNode *pNode = (CEnemyNode *)m_pHead;
		bool bFound = false;
		float flDefault = g_104454c4;
		if (pNode) {
			do {
				void *ent = pNode->m_hEnemy.Get();
				if (ent && pEnemy == ent)
					return pNode->m_flTime;
				if (pNode->m_bDefault == 1) {
					flDefault = pNode->m_flTime;
					bFound = true;
				}
				pNode = pNode->m_pNext;
			} while (pNode);
			if (bFound)
				return flDefault;
		}
		DevWarning(2, "Asking LastTimeSeen for enemy that's not in my memory!!\n");
	}
	return g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x102e0210 size=0x58
#include "CBaseEntity.h"
#include "CUnknown102e0150.h"
#include "CAI_MemoryListSaveRestoreOps.h"
#include "ehandle.h"
struct CMemNodeView
{
	char m_pad0000[0x24];
	EHANDLE m_hEnemy;	// 0x24
	char m_pad0028[0x35 - 0x28];
	char m_b35;	// 0x35
	char m_pad0036[2];
	CMemNodeView *m_pNext;	// 0x38
};

char CUnknown102e0150::sub_102e0210(int pEnemy)
{
	for (CMemNodeView *pNode = (CMemNodeView *)m_pHead; pNode; pNode = pNode->m_pNext)
	{
		CBaseEntity *pEnt = pNode->m_hEnemy.Get();
		if (pEnt && pEnemy == (int)pEnt)
			return pNode->m_b35;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102e0290 size=0x173
#include "CUnknown102e0150.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "Vector.h"

extern "C" __declspec(dllimport) void DevWarning(int, const char *, ...);

struct SEnemyNode
{
	char m_pad0000[0x0c];
	float m_x, m_y, m_z;	// 0x0c
	float m_x2, m_y2, m_z2;	// 0x18
	unsigned int m_hEnt;	// 0x24
	char m_pad0028[0x34 - 0x28];
	char m_bFlag;	// 0x34
	char m_pad0035[3];
	SEnemyNode *m_pNext;	// 0x38
};

extern CGlobalEntityList *g_10566458;
extern float g_1070d1b0[3];

inline CBaseEntity *LookupEnt(const unsigned int &h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13))
			return (CBaseEntity *)pSlot->m_pEntity;
	}
	return 0;
}

char CUnknown102e0150::sub_102e0290(CBaseEntity *pEnemy, Vector *pPos, Vector *pPos2)
{
	SEnemyNode *pNode = (SEnemyNode *)m_pHead;
	bool bFound = false;
	float lx = 0, ly = 0, lz = 0;
	while (pNode) {
		CBaseEntity *pNodeEnt = LookupEnt(pNode->m_hEnt);
		if (pNodeEnt && pEnemy == pNodeEnt) {
			pPos->x = pNode->m_x;
			pPos->y = pNode->m_y;
			pPos->z = pNode->m_z;
			pPos2->x = pNode->m_x2;
			pPos2->y = pNode->m_y2;
			pPos2->z = pNode->m_z2;
			return 1;
		}
		if (pNode->m_bFlag == 1) {
			lx = pNode->m_x;
			ly = pNode->m_y;
			lz = pNode->m_z;
			bFound = true;
		}
		pNode = pNode->m_pNext;
	}
	if (m_bUseHandleSink) {
		if (m_pHandleSink)
			m_pHandleSink->sub_10316bc0(pEnemy);
	} else {
		if (m_pSink)
			m_pSink->vfunc58(pEnemy);
	}
	if (bFound) {
		DevWarning(2, "Asking LastKnownPosition for enemy (%s) that's not in my memory (using danger pos)!!\n", pEnemy ? pEnemy->sub_100ab4f0() : "**NULL**");
		pPos->x = lx;
		pPos->y = ly;
		pPos->z = lz;
		pPos2->x = g_1070d1b0[0];
		pPos2->y = g_1070d1b0[1];
		pPos2->z = g_1070d1b0[2];
		return 1;
	}
	DevWarning(2, "Asking LastKnownPosition for enemy (%s) that's not in my memory!!\n", pEnemy ? pEnemy->sub_100ab4f0() : "**NULL**");
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102e0470 size=0x15c
#include "CUnknown102e0150.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "Vector.h"

#define V virtual void
#define S10(p) V p##0(); V p##1(); V p##2(); V p##3(); V p##4(); V p##5(); V p##6(); V p##7(); V p##8(); V p##9();
struct SMemObj {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4)
	V b0(); V b1(); V b2(); V b3(); V b4(); V b5(); V b6(); V b7();
	virtual void vfunc58(CBaseEntity *pEnemy);
};
struct SMemObj2 {
	void sub_10316bc0(CBaseEntity *pEnemy);
};
struct SMemNode {
	Vector m_pos;
	char m_pad0c[0x24 - 0xc];
	unsigned int m_hEnemy;	// 0x24
	char m_pad28[0x34 - 0x28];
	char m_flag;	// 0x34
	char m_pad35[3];
	SMemNode *m_pNext;	// 0x38
};
struct SMemList {
	SMemObj *m_pObj;	// 0x00
	SMemObj2 *m_pObj2;	// 0x04
	char m_bMode;	// 0x08
	char m_pad09[3];
	SMemNode *m_pHead;	// 0x0c
};

extern "C" __declspec(dllimport) void __cdecl DevWarning(int level, const char *fmt, ...);
extern CGlobalEntityList *g_10566458;
extern Vector g_1070d1b0;

Vector CUnknown102e0150::sub_102e0470(CBaseEntity *pEnemy)
{
	SMemList *self = (SMemList *)this;
	SMemNode *pNode = self->m_pHead;
	bool bFound = false;
	Vector last(0, 0, 0);
	for (; pNode; pNode = pNode->m_pNext) {
		unsigned int h = pNode->m_hEnemy;
		CGlobalEntityList_Slot *pSlot;
		if (h != (unsigned int)-1
			&& (pSlot = &g_10566458->m_Slots[h & 0x1fff], pSlot->m_Serial == (int)(h >> 13))
			&& pSlot->m_pEntity != 0
			&& (CGlobalEntityList_Ent *)pEnemy == pSlot->m_pEntity) {
			return pNode->m_pos;
		}
		if (pNode->m_flag == 1) {
			bFound = true;
			last = pNode->m_pos;
		}
	}
	if (self->m_bMode) {
		if (self->m_pObj2)
			self->m_pObj2->sub_10316bc0(pEnemy);
	} else if (self->m_pObj) {
		self->m_pObj->vfunc58(pEnemy);
	}
	if (bFound) {
		DevWarning(2, "Asking LastKnownPosition for enemy (%s) that's not in my memory (using danger pos)!!\n", pEnemy ? pEnemy->sub_100ab4f0() : "**NULL**");
		return last;
	}
	DevWarning(2, "Asking LastKnownPosition for enemy (%s) that's not in my memory!!\n", pEnemy ? pEnemy->sub_100ab4f0() : "**NULL**");
	return g_1070d1b0;
}
// END FUNCTION

// FUNCTION: 0x102e0630 size=0x85
#include "CUnknown102e0630.h"

struct EntInfo { void *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;
extern "C" __declspec(dllimport) void DevWarning(int level, const char *fmt, ...);

static inline void *LookupHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntInfo *e = &g_10566458->m_entries[h & 0x1fff];
		if (e->m_serial == (int)(h >> 13))
			return e->m_pEntity;
	}
	return 0;
}

int CUnknown102e0630::sub_102e0630(void *enemy)
{
	int value = 0;
	bool found = false;
	for (CUnknown102e0630Node *n = m_pHead; n; n = n->m_pNext) {
		void *e = LookupHandle(n->m_hEnemy);
		if (e && enemy == e)
			return n->m_value;
		if (n->m_flag == 1) {
			value = n->m_value;
			found = true;
		}
	}
	if (found)
		return value;
	DevWarning(2, "Asking LastNearestNodeCheated for enemy that's not in my memory!!\n");
	return -1;
}
// END FUNCTION

// FUNCTION: 0x102e06f0 size=0x21
struct CUnknown101e8c30Call_102e06f0
{
    float sub_101e8c30();
};
extern int g_10739d08[];

// TARGET: sub_102e06f0
int *__fastcall sub_102e06f0(int *self)
{
    float f = ((CUnknown101e8c30Call_102e06f0 *)g_10739d08)->sub_101e8c30();
    int z = 0;
    ((float *)self)[4] = f;
    self[3] = z;
    self[0] = z;
    self[1] = z;
    *((char *)self + 8) = 0;
    return self;
}
// END FUNCTION

// FUNCTION: 0x102e0730 size=0x24
#include "CUnknown102dfc10.h"

extern char g_10591ae8[];
extern char g_1060e390[];
int sub_100067f3(char *pszFormat, char *pszFile, int line);

struct CUnknown102e0730 {
	void sub_102e0730();
};

// TARGET: CUnknown102e0730::sub_102e0730
void CUnknown102e0730::sub_102e0730()
{
	int r = sub_100067f3(g_10591ae8, g_1060e390, 0x325);
	((CUnknown102dfc10 *)this)->sub_102dfc10(r);
}
// END FUNCTION
