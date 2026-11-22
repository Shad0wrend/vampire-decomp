// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x1029e750 size=0xbd
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"
#include "CBCCSlotViews.h"

char __fastcall sub_100a52a0(void *pEnt);	// CBaseEntity::EntityUnselectable (stub 0x10011e1e)

class CNpcSlot404View	// slot 404: asked about the other entity
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2) VIEW_SLOT100(3)
	VIEW_SLOT(400) VIEW_SLOT(401) VIEW_SLOT(402) VIEW_SLOT(403)
	virtual int vfunc404(CBaseEntity *pEnt);
};

int CAI_BaseNPCTroika::vfunc359(CBaseEntity *pEnt)
{
	if (sub_100a52a0(this))
		return -1;
	if (*(int *)((char *)this + 0x146c) > 0)
		return 4;
	if ((m_flags14bc & 0x80000) == 0x80000)
		return 3;
	switch (*(int *)((char *)this + 0x5cc0)) {
	case 2:
	case 0xb:
		return 1;
	case 3:
	case 0xe:
		return 7;
	case 5:
	case 6:
	case 8:
	case 9:
	case 10:
	case 0xd:
		return 0;
	case 7:
		return -1;
	default:
		if (pEnt && ((CNpcSlot404View *)this)->vfunc404(pEnt) == 1)
			return 2;
		return 5;
	}
}
// END FUNCTION

// FUNCTION: 0x1029e840 size=0x18e
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"

extern "C" char *strtok(char *, const char *);
extern "C" int sprintf(char *, const char *, ...);
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
extern void (*g_109f3650)(int, const char *, ...);	// DevMsg
const char *sub_100067f3(const char *pszFormat, const char *pszArg);	// stub of 0x101d3730
int sub_10007b12(CAI_BaseNPCTroika *pNPC, const char *pszNode);	// stub of 0x102d2900

#define VSTR(v) ((v).fieldType == 2 ? ((v).iszValue ? (v).iszValue : "") : (v).sub_10008805())

// TARGET: CAI_BaseNPCTroika::sub_1029e840
void CAI_BaseNPCTroika::sub_1029e840(inputdata_t *pInput)
{
	if (*(int *)((char *)this + 0x5cc0) == 7)
		return;
	char szMsg[256];
	char szArg[256];
	variant_t &v = pInput->value;
	Q_strncpy(szArg, VSTR(v), 256);
	char *pszSchedule = strtok(szArg, ", ");
	char *pszNode = strtok(0, ", ");
	if (pszNode && pszSchedule) {
		int nSchedule = sub_102c47e0(pszSchedule, sub_100067f3("(in InputWalkToNode (%s))", VSTR(v)));
		int nodes[2];
		nodes[0] = sub_10007b12(this, pszNode);
		if (nodes[0] == -1) {
			sprintf(szMsg, "ERROR: %s - Could not find node with id '%s' (in InputWalkToNode (%s))\n", sub_1000b5cd(), pszNode, VSTR(v));
			g_109f3650(1, szMsg);
			return;
		}
		nodes[1] = -1;
		sub_1029f460((char *)this + 0x658c, 0, 0, nSchedule, nodes, 1);
		return;
	}
	g_109f3650(1, "ERROR: %s - Argument to InputWalkToNode is in the wrong format.\nShould be 'Schedule Node'\n", sub_1000b5cd(), pszNode, VSTR(v));
}
// END FUNCTION

// FUNCTION: 0x1029ea40 size=0xbc
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"

extern "C" char *__cdecl strtok(char *, const char *);
extern char *(__cdecl *g_109f3890)(char *, const char *, int);
extern void (__cdecl *g_109f3650)(int, const char *, ...);
extern char g_106b8540[];

#define TV1(n) virtual void tv##n();
#define TV10(p) TV1(p##0) TV1(p##1) TV1(p##2) TV1(p##3) TV1(p##4) TV1(p##5) TV1(p##6) TV1(p##7) TV1(p##8) TV1(p##9)
#define TV100(p) TV10(p##0) TV10(p##1) TV10(p##2) TV10(p##3) TV10(p##4) TV10(p##5) TV10(p##6) TV10(p##7) TV10(p##8) TV10(p##9)

struct CTweakParamView	// the NPC's vtable up to slot 585
{
	TV100(a) TV100(b) TV100(c) TV100(d) TV100(e)
	TV10(f0) TV10(f1) TV10(f2) TV10(f3) TV10(f4) TV10(f5) TV10(f6) TV10(f7)
	TV1(g0) TV1(g1) TV1(g2) TV1(g3) TV1(g4)
	virtual void slot585(const char *pszName, const char *pszValue);

	const char *sub_100ab4f0();
};

inline const char *VariantString(variant_t *pValue)
{
	if (pValue->fieldType == 2)
		return pValue->iszValue ? pValue->iszValue : g_106b8540;
	return pValue->sub_10008805();
}

void CAI_BaseNPCTroika::sub_1029ea40(inputdata_t *pInput)
{
	CTweakParamView *p = (CTweakParamView *)this;
	char buf[256];
	variant_t *pValue = &pInput->value;
	g_109f3890(buf, VariantString(pValue), 256);
	char *pszName = strtok(buf, ", ");
	char *pszParam = strtok(0, ", ");
	if (pszName && pszParam) {
		p->slot585(pszName, pszParam);
		return;
	}
	g_109f3650(1, "ERROR: %s - Argument to ProcessTweakParam(%s) is in the wrong format.\nShould be 'Param Value'\n", p->sub_100ab4f0(), VariantString(pValue));
}
// END FUNCTION

// FUNCTION: 0x1029eb30 size=0x1d5
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"
#include "CVariantCopy.h"
#include <string.h>
#include <stdlib.h>

__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
__declspec(dllimport) void DevMsg(int level, const char *pMsg, ...);
extern char g_106b8540[];
int sub_103079c0(const char *pszName);

#define INPUT_STRING(v) ((v)->fieldType == 2 ? ((v)->iszValue ? (v)->iszValue : g_106b8540) : (v)->sub_10008805())

void CAI_BaseNPCTroika::sub_1029eb30(inputdata_t *pInput)
{
	if (m_n5cc0 == 7)
		return;
	variant_t *pValue = &pInput->value;
	char szBuf[256];
	Q_strncpy(szBuf, INPUT_STRING(pValue), 256);
	char *pszRepeat = strtok(szBuf, ", ");
	char *pszType = strtok(0, ", ");
	char *pszSched = strtok(0, ", ");
	if (!pszRepeat || !pszType) {
		DevMsg(1, "ERROR: %s - Argument to InputSetupPatrolType(%s) is in the wrong format.\nShould be 'RepeatCount PathType Schedule'\n", sub_1000b5cd(), INPUT_STRING(pValue));
		return;
	}
	int nRepeat = atoi(pszRepeat);
	if (nRepeat < 0) {
		DevMsg(1, "ERROR: %s - Could not get repeat type %s (in InputSetupPatrolType (%s))\n", sub_1000b5cd(), pszType, INPUT_STRING(pValue));
		return;
	}
	int nType = sub_103079c0(pszType);
	if (nType == -1) {
		DevMsg(1, "ERROR: %s - Could not get repeat type %s (in InputSetupPatrolType (%s))\n", sub_1000b5cd(), pszType, INPUT_STRING(pValue));
		return;
	}
	int nSched = sub_1029f370(pszSched);
	if (nSched == 0) {
		DevMsg(1, "ERROR: %s - Could not find schedule '%s' (in InputSetupPatrolType (%s))\n", sub_1000b5cd(), pszSched, INPUT_STRING(pValue));
		return;
	}
	sub_1029f460((char *)this + 0x658c, nRepeat, nType, nSched, 0, 1);
}
// END FUNCTION

// FUNCTION: 0x1029ed90 size=0x16c
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"

extern "C" int sprintf(char *, const char *, ...);
extern "C" char *strtok(char *, const char *);
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
extern "C" __declspec(dllimport) void DevMsg(int level, const char *pMsg, ...);

int sub_102d2900(CAI_BaseNPCTroika *pNPC, const char *pszName);

struct CTroikaPatrolFields
{
	char m_pad0000[0x5cc0];
	int m_nState;
};

static inline const char *VariantString(variant_t &v)
{
	return v.fieldType == 2 ? (v.iszValue ? v.iszValue : "") : v.sub_10008805();
}

// TARGET: CAI_BaseNPCTroika::sub_1029ed90
void CAI_BaseNPCTroika::sub_1029ed90(inputdata_t *pInput)
{
	char szBuf[256];
	int nodes[65];
	if (((CTroikaPatrolFields *)this)->m_nState != 7) {
		variant_t &v = pInput->value;
		Q_strncpy(szBuf, VariantString(v), 256);
		char *tok = strtok(szBuf, ", ");
		if (!tok) {
			char szMsg[256];
			sprintf((char *)"ERROR: %s - Argument to InputFollowPatrolPath(%s) is in the wrong format.\nShould be 'NodeID1 [NodeID2 [NodeID3 [...]]]'\n", sub_1000b5cd(), VariantString(v));
			DevMsg(1, szMsg);
			return;
		}
		int n = 0;
		do {
			nodes[n] = sub_102d2900(this, tok);
			if (nodes[n] == -1) {
				char szMsg[256];
				sprintf(szMsg, "ERROR: %s - Could not find node with id '%s' (in InputSetPatrolPath (%s))\n", sub_1000b5cd(), tok, VariantString(v));
				DevMsg(1, szMsg);
				return;
			}
			n++;
			tok = strtok(0, ", ");
		} while (tok);
		nodes[n] = -1;
		sub_1029f460((char *)this + 0x658c, 0, -1, 0, nodes, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1029ef60 size=0xf
struct CFwd1029ef60
{
	void sub_1029ef60(int a);
	void sub_1029f5d0(int a);
};

// TARGET: CFwd1029ef60::sub_1029ef60
void CFwd1029ef60::sub_1029ef60(int a)
{
	sub_1029f5d0((int)((char *)this + 0x658c));
}
// END FUNCTION

// FUNCTION: 0x1029ef80 size=0xae
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"
#include "CEntityVSlots.h"

struct TroikaSlots
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35) EVS10(36) EVS10(37) EVS10(38) EVS10(39)
	EVS10(40) EVS10(41) EVS10(42) EVS10(43) EVS10(44) EVS10(45) EVS10(46) EVS10(47) EVS10(48) EVS10(49)
	EVS10(50) EVS10(51) EVS10(52) EVS10(53) EVS10(54) EVS10(55) EVS10(56) EVS10(57) EVS10(58) EVS10(59)
	EVS10(60)
	EVS(610) EVS(611) EVS(612) EVS(613)
	virtual void slot614();
};

struct DialogPlayerView
{
	char m_pad0000[0xfe8];
	unsigned int m_hDialogPartner;	// 0xfe8
};

extern CGlobalEntityList *g_10566458;
extern float g_104454c4;
DialogPlayerView *sub_1000ac8b(int index);

// TARGET: CAI_BaseNPCTroika::sub_1029ef80
void CAI_BaseNPCTroika::sub_1029ef80(inputdata_t *pInput)
{
	DialogPlayerView *pPlayer = sub_1000ac8b(1);
	if (pPlayer) {
		unsigned int h = pPlayer->m_hDialogPartner;
		if (h != 0xffffffff) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
			if (pSlot->m_Serial == (int)(h >> 13) && pSlot->m_pEntity)
				return;
		}
		if (!sub_1033e2b0() && !(m_flags14bc & 0x10000000)) {
			*(float *)((char *)this + 0x5bac) = pInput->value.fieldType == 1 ? pInput->value.flValue : g_104454c4;
			sub_1000e4d5();
			((TroikaSlots *)this)->slot614();
			m_b6495 = 1;
			*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			*(int *)((char *)this + 0x1b34) = 0x2677;
			sub_102ae750(0x6d, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1029f060 size=0x8f
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CTroikaSlot614 {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
	S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6) S10(c7) S10(c8) S10(c9)
	S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6) S10(d7) S10(d8) S10(d9)
	S10(e0) S10(e1) S10(e2) S10(e3) S10(e4) S10(e5) S10(e6) S10(e7) S10(e8) S10(e9)
	S10(f0) S10(f1) S10(f2) S10(f3) S10(f4) S10(f5) S10(f6) S10(f7) S10(f8) S10(f9)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
	virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8(); virtual void g9();
	virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3();
	virtual void vfunc614();
};

struct CTroikaPlayerView {
	char m_pad[0xfe8];
	unsigned int m_hEnt;
};

struct CTroikaDbgView {
	char m_pad[0x1b30];
	const char *m_pszFile;
	int m_nLine;
};

CTroikaPlayerView *sub_101cd9e0(int index);

void CAI_BaseNPCTroika::sub_1029f060(int unused)
{
	CTroikaPlayerView *pPlayer = sub_101cd9e0(1);
	if (pPlayer) {
		unsigned int h = pPlayer->m_hEnt;
		if (h != 0xffffffff) {
			CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
			if (s->m_Serial == (int)(h >> 13) && s->m_pEntity)
				return;
		}
		if (!sub_1033e2b0() && !(m_flags14bc & 0x10000000)) {
			sub_1000e4d5();
			((CTroikaSlot614 *)this)->vfunc614();
			m_b6495 = 1;
			((CTroikaDbgView *)this)->m_pszFile = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			((CTroikaDbgView *)this)->m_nLine = 0x268e;
			sub_102ae750(0x6e, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1029f120 size=0xbd
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
#include "CUnknown102c0ca0.h"

struct CNpcSlot614View	// the NPC's virtual table up to slot 614
{
	CBP_V100(a) CBP_V100(b) CBP_V100(c) CBP_V100(d) CBP_V100(e) CBP_V100(f)
	CBP_V10(g0) CBP_V1(g10) CBP_V1(g11) CBP_V1(g12) CBP_V1(g13)
	virtual void vfunc614();
};

extern float g_104454c4;	// the file-scope zero
CBasePlayer *sub_101cd9e0(int index);

// TARGET: CAI_BaseNPCTroika::sub_1029f120
void CAI_BaseNPCTroika::sub_1029f120(inputdata_t *pInput)
{
	CBasePlayer *pPlayer = sub_101cd9e0(1);
	if (pPlayer && !EHandle_Get(*(unsigned int *)((char *)pPlayer + 0xfe8))
		&& !((CBaseCombatCharacter *)this)->sub_1033e2b0()
		&& !(*(unsigned int *)((char *)this + 0x14bc) & 0x10000000)
		&& !pPlayer->sub_10178170()) {
		*(float *)((char *)this + 0x5bac) = pInput->value.fieldType == 1 ? pInput->value.flValue : g_104454c4;
		((CUnknown102c0ca0 *)this)->sub_102c0ca0();
		((CNpcSlot614View *)this)->vfunc614();
		*(char *)((char *)this + 0x6495) = 0;
		*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		*(int *)((char *)this + 0x1b34) = 0x26a7;
		sub_102ae750(0x6d, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1029f210 size=0x2e
#include "CBCCSlotViews.h"
// TARGET: CUnknown1029f210View::sub_1029f210
extern const char g_105da024[];

struct CUnknown1029f210View
{
    VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2) VIEW_SLOT100(3) VIEW_SLOT100(4) VIEW_SLOT100(5)
    VIEW_SLOT10(60) VIEW_SLOT(610) VIEW_SLOT(611) VIEW_SLOT(612) VIEW_SLOT(613)
    virtual void vfunc614();
    char m_pad0004[0x1b30 - 4];
    const char *m_pszFile1b30;
    int m_nLine1b34;
    void sub_1000198d(int a, int b);
    void sub_1029f210(int unused);
};

void CUnknown1029f210View::sub_1029f210(int unused)
{
    vfunc614();
    m_pszFile1b30 = g_105da024;
    m_nLine1b34 = 0x26b5;
    sub_1000198d(0x6f, 0);
}
// END FUNCTION

// FUNCTION: 0x1029f250 size=0x31
#include "CBCCSlotViews.h"
// TARGET: CUnknown1029f250View::sub_1029f250
extern const char g_105da024[];

struct CUnknown1029f250View
{
    VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2) VIEW_SLOT100(3) VIEW_SLOT100(4) VIEW_SLOT100(5)
    VIEW_SLOT10(60) VIEW_SLOT(610) VIEW_SLOT(611) VIEW_SLOT(612) VIEW_SLOT(613)
    virtual void vfunc614();
    char m_pad0004[0x1b30 - 4];
    const char *m_pszFile1b30;
    int m_nLine1b34;
    void sub_1000198d(int a, int b);
    void sub_1029f250(int unused);
};

void CUnknown1029f250View::sub_1029f250(int unused)
{
    vfunc614();
    m_pszFile1b30 = g_105da024;
    m_nLine1b34 = 0x26c2;
    sub_1000198d(0xfa, 0);
}
// END FUNCTION

// FUNCTION: 0x1029f2a0 size=0x21
struct CFoo1029f2a0
{
	void sub_1029f2a0(char *p);
	void sub_1029f300(char v);
};

// TARGET: CFoo1029f2a0::sub_1029f2a0
void CFoo1029f2a0::sub_1029f2a0(char *p)
{
	sub_1029f300(*(int *)(p + 0x18) == 5 ? *(char *)(p + 8) : (char)0);
}
// END FUNCTION

// FUNCTION: 0x1029f2e0 size=0x7
struct CUnknown1029f2e0 { char sub_1029f2e0(); };
char CUnknown1029f2e0::sub_1029f2e0()
{
    return *(char *)((char *)this + 0x6080);
}
// END FUNCTION

// FUNCTION: 0x1029f300 size=0x28
struct CUnknown1029f300Vtbl
{
	void *m_slots[0x998 / 4];
	void (__fastcall *m_pfn998)(void *pThis);
};

struct CUnknown1029f300View
{
	char m_pad0000[0x6080];
	char m_b6080;
};

// TARGET: sub_1029f300
void __fastcall sub_1029f300(CUnknown1029f300View *self, int, char bEnabled)
{
	if (!bEnabled && self->m_b6080 == 1)
	{
		CUnknown1029f300Vtbl *pVtbl = *(CUnknown1029f300Vtbl **)self;
		pVtbl->m_pfn998(self);
	}
	self->m_b6080 = bEnabled;
}
// END FUNCTION

// FUNCTION: 0x1029f340 size=0x1a
int sub_10412520(int a);

// TARGET: sub_1029f340
int __stdcall sub_1029f340(int a)
{
	if (a == 0) {
		return -1;
	}
	return sub_10412520(a);
}
// END FUNCTION

// FUNCTION: 0x1029f370 size=0xbc
#include "CAI_BaseNPCTroika.h"

extern "C" int sprintf(char *, const char *, ...);
extern void (__cdecl *g_109f3650)(int level, const char *pszFormat, ...);	// tier0 DevMsg / DevWarning with a level
int sub_102cadb0(const char *pszName);

// TARGET: CAI_BaseNPCTroika::sub_1029f370
int CAI_BaseNPCTroika::sub_1029f370(const char *pszName)
{
	char szName[256];
	int nSchedule = sub_102cadb0(pszName);
	if (nSchedule == -1) {
		sprintf(szName, "SCHED_%s", pszName);
		nSchedule = sub_102cadb0(szName);
		if (nSchedule == -1) {
			sprintf(szName, "SCHED_TROIKA_%s", pszName);
			nSchedule = sub_102cadb0(szName);
			if (nSchedule == -1) {
				g_109f3650(1, "ERROR: %s - Could not find schedule '%s'\n", sub_1000b5cd(), szName);
				return 0;
			}
		}
	}
	CAI_CondOwner *pOwner = vfunc580();
	int nLocal = pOwner->sub_102ea280(nSchedule);
	if (nLocal != -1)
		return nLocal;
	g_109f3650(1, "ERROR: %s - Could not convert schedule '%s' to local\n", sub_1000b5cd(), pszName);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1029f460 size=0x115
#include "CAI_BaseNPCTroika.h"

struct CPatrolPath
{
	int m_n0000;
	int m_nSchedule;	// 0x04
	int m_n0008;	// 0x08

	void sub_10307aa0();	// stub 0x10013f07: resets the path
	void sub_10307b40(int a);	// stub 0x1000d95e: stores the argument at +0
	void sub_10307b60();	// stub 0x10010320
	void sub_10307bf0(int node);	// stub 0x10013e80: adds the node id
};

struct CPatrolHolder
{
	char m_bOwned;	// 0x00
	char m_pad0001[3];
	CPatrolPath *m_pPath;	// 0x04
};

struct CTroikaPatrolUnit : CAI_BaseNPCTroika
{
	void sub_1029f650(void *pHolder);	// stub 0x100151f4
};

__declspec(dllimport) void DevMsg(const char *pszFormat, ...);
CPatrolPath *sub_10307d30();	// stub 0x10005a60: creates a patrol path

void CAI_BaseNPCTroika::sub_1029f460(void *pHolder, int a, int b, int c, int *pNodes, char bFlag)
{
	if (*(int *)((char *)this + 0x5cc0) == 7)
		return;
	CPatrolHolder *pH = (CPatrolHolder *)pHolder;
	if (!pH)
		return;
	if (bFlag)
	{
		if (!pH->m_pPath)
		{
			pH->m_pPath = sub_10307d30();
			pH->m_bOwned = 1;
		}
		if (!pH->m_pPath)
		{
			DevMsg("Failed to create patrol path for %s\n", sub_1000b5cd());
			return;
		}
		pH->m_pPath->sub_10307aa0();
		pH->m_pPath->m_n0008 = a;
		pH->m_pPath->sub_10307b40(b);
	}
	else if (!pH->m_pPath)
	{
		pH->m_pPath = sub_10307d30();
		pH->m_bOwned = 1;
		pH->m_pPath->sub_10307aa0();
		pH->m_pPath->m_n0008 = 0;
		pH->m_pPath->sub_10307b40(0);
	}
	if (pNodes)
	{
		while (*pNodes != -1)
		{
			pH->m_pPath->sub_10307bf0(*pNodes);
			pNodes++;
		}
	}
	pH->m_pPath->sub_10307b60();
	if (c)
		pH->m_pPath->m_nSchedule = c;
	if (pH->m_pPath->m_nSchedule)
	{
		((CTroikaPatrolUnit *)this)->sub_1029f650((char *)this + 0x658c);
		*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		*(int *)((char *)this + 0x1b34) = 0x27a1;
		sub_102ae750(pH->m_pPath->m_nSchedule, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1029f5d0 size=0x27
struct SNPCTroikaRef_t
{
	char bValid;
	void *pData;
};

void sub_100157da(void *p);

void __stdcall sub_1029f5d0(SNPCTroikaRef_t *pRef)
{
	if (pRef != 0 && pRef->pData != 0)
	{
		pRef->bValid = 0;
		sub_100157da(pRef->pData);
		pRef->pData = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1029f610 size=0x2e
#include "CAI_BaseNPCTroika.h"
#include "CAI_TroikaLink.h"
bool CAI_BaseNPCTroika::sub_1029f610(void *pHolder)
{
	CTroikaReqHolder *pH = (CTroikaReqHolder *)pHolder;
	if (pH && pH->m_pReq)
	{
		CTroikaBits *pBits = *(CTroikaBits **)((char *)m_p5d34 + 0x2c);
		if (pH->m_pReq->sub_10307ac0(pBits))
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1029f650 size=0x44
#include "CAI_BaseNPCTroika.h"
struct CAI_NavNodeView { char m_pad[0x46c]; int m_n46c; };
char CAI_BaseNPCTroika::sub_1029f650(void *pHolder)
{
	m_b65a0 = 0;
	CAI_NavNodeView *pNode = (CAI_NavNodeView *)sub_1029f6c0(pHolder);
	if (pNode) {
		if (pNode->m_n46c > enginerandom->vfunc2(0, 99))
			m_b65a0 = 1;
	}
	return m_b65a0;
}
// END FUNCTION

// FUNCTION: 0x1029f6c0 size=0x4a
#include "CAI_BaseNPCTroika.h"
#include "CAI_TroikaLink.h"

extern int g_106c994c;

// TARGET: CAI_BaseNPCTroika::sub_1029f6c0
int CAI_BaseNPCTroika::sub_1029f6c0(void *pArg)
{
	CTroikaPickHolder *pHolder = (CTroikaPickHolder *)pArg;
	if (!pHolder)
		return 0;
	CTroikaPick *pPick = pHolder->m_pPick;
	if (!pPick)
		return 0;
	int iNode = pPick->m_aNodes[pPick->m_iCur];
	if (iNode == -1)
		return 0;
	CTroikaNodeObjNet *pNet = (CTroikaNodeObjNet *)((CTroikaNav *)m_p5d34)->m_pNet;
	if (iNode >= 0 && iNode < pNet->m_nNodes) {
		CTroikaNodeObj *pObj = pNet->m_ppNodes[iNode];
		if (pObj)
			return pObj->m_nValue;
	} else {
		g_106c994c++;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1029f730 size=0x33
struct CLazyTroikaView {
    char pad0[0x659c];
    int m_n659c;
    unsigned char m_b65a0;
    int sub_1000e64c(int a);
    int sub_1029f730(int a);
};

// TARGET: CLazyTroikaView::sub_1029f730
int CLazyTroikaView::sub_1029f730(int a)
{
    if (m_b65a0 == 0)
        return 0;
    int v = m_n659c;
    if (v == 0) {
        v = sub_1000e64c(a);
        m_n659c = v;
    }
    return v;
}
// END FUNCTION

// FUNCTION: 0x1029f780 size=0x55
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

struct S1029f780Rec { char pad[0x468]; const char *m_pszName; };
struct S1029f780Ent { char pad[0xb0]; int m_nB0; };

// TARGET: CAI_BaseNPCTroika::sub_1029f780
int CAI_BaseNPCTroika::sub_1029f780(int a)
{
	if (!m_n6300) {
		S1029f780Rec *pRec = (S1029f780Rec *)sub_1029f730(a);
		if (pRec) {
			const char *name = pRec->m_pszName;
			if (!name)
				name = g_106b8540;
			S1029f780Ent *pEnt = (S1029f780Ent *)g_106eb5d8.sub_100f7770(0, name, 0, 0);
			if (pEnt)
				m_n6300 = pEnt->m_nB0;
		}
		return m_n6300;
	}
	return m_n6300;
}
// END FUNCTION

// FUNCTION: 0x1029f800 size=0x32
#include "CAI_BaseNPCTroika.h"
#include "CDevFlagObj.h"

extern CDevFlagObj *g_10924a6c;

// TARGET: CAI_BaseNPCTroika::vfunc21
void CAI_BaseNPCTroika::vfunc21(int a)
{
	sub_102bf5d0(a);
	++m_n6064;
	g_10924a6c->vfunc1();
	sub_10269a20(0xa);
}
// END FUNCTION

// FUNCTION: 0x1029f850 size=0x25
#include "CAI_BaseNPCTroika.h"

struct CUnknown10924a6c
{
	virtual void a0();
	virtual void vfunc1();
};

extern CUnknown10924a6c *g_10924a6c;

// TARGET: CAI_BaseNPCTroika::vfunc22
void CAI_BaseNPCTroika::vfunc22(int a)
{
	sub_102bf5d0(a);
	g_10924a6c->vfunc1();
	sub_100041b0(10);
}
// END FUNCTION

// FUNCTION: 0x1029f890 size=0x25
#include "CAI_BaseNPCTroika.h"

struct CUnknown102bf5d0
{
    void sub_102bf5d0(int a);
};

struct CUnknown10924a6c
{
    virtual void a0();
    virtual void vfunc1();
};

extern CUnknown10924a6c *g_10924a6c;

struct CUnknown1029f890
{
    void sub_1029f890(int a);
};

// TARGET: CUnknown1029f890::sub_1029f890
void CUnknown1029f890::sub_1029f890(int a)
{
    ((CUnknown102bf5d0 *)this)->sub_102bf5d0(a);
    g_10924a6c->vfunc1();
    ((CAI_BaseNPCTroika *)this)->sub_100041b0(10);
}
// END FUNCTION

// FUNCTION: 0x1029f8d0 size=0xe
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPCTroikaView6028
{
	char m_pad[0x6028];
	void sub_1028b160();
};

void CAI_BaseNPCTroika::vfunc24(int unused)
{
	CAI_BaseNPCTroikaView6028 *p = (CAI_BaseNPCTroikaView6028 *)((char *)this + 0x6028);
	p->sub_1028b160();
}
// END FUNCTION

// FUNCTION: 0x1029f8f0 size=0x32
#include "CAI_BaseNPCTroika.h"
#include "CDevFlagObj.h"

extern CDevFlagObj *g_10924a6c;

// TARGET: CAI_BaseNPCTroika::vfunc27
void CAI_BaseNPCTroika::vfunc27(int a)
{
	sub_102bf5d0(a);
	g_10924a6c->vfunc1();
	sub_10269a20(0xa);
	vfunc600(a);
}
// END FUNCTION

// FUNCTION: 0x1029f940 size=0xc1
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc590
char CAI_BaseNPCTroika::vfunc590()
{
	if (!sub_1028a190())
		return 0;
	int state = *(int *)((char *)this + 0xfec);
	switch (state)
	{
	case 1: case 9: case 0x13: case 0x30: case 0x4b: case 0x4d: case 0x51:
	case 0x73: case 0x74: case 0x75: case 0x76: case 0x77: case 0x78: case 0x79: case 0x7a:
	case 0x7b: case 0x7c: case 0x7d: case 0x7e: case 0x7f: case 0x80: case 0x81: case 0x82:
	case 0x83: case 0x84: case 0x85: case 0x86: case 0x87: case 0x88: case 0x89: case 0x8a:
	case 0xcb5: case 0xd25: case 0x1121: case 0x1157: case 0x1158:
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1029fa50 size=0xd9
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CDevFlagObj.h"
extern CDevFlagObj *g_10924a6c;
// TARGET: CAI_BaseNPCTroika::vfunc316
void CAI_BaseNPCTroika::vfunc316(void *pEnt, char bFlagA, char bFlagB)
{
	g_10924a6c->vfunc1();
	sub_10269a20(10);
	if (pEnt) {
		if (bFlagA && ((CBaseCombatCharacter *)pEnt)->sub_10345760((const Vector *)vfunc217()) && ((CBaseCombatCharacter *)this)->sub_10345d00() && vfunc325()) {
			g_10924a6c->vfunc1();
			sub_10269a20(12);
			if (vfunc590()) {
				m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
				m_nLine1b34 = 0x28e0;
				sub_102ae750(0xd5, 0);
			}
		}
		if (bFlagB && ((CBaseCombatCharacter *)this)->sub_10345d00() && vfunc324()) {
			g_10924a6c->vfunc1();
			sub_10269a20(13);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1029fb70 size=0x44
#include "CAI_BaseNPCTroika.h"

struct CUnknown10924a6c
{
	virtual void vfunc0();
	virtual void vfunc1();
};
extern CUnknown10924a6c *g_10924a6c;

bool CAI_BaseNPCTroika::vfunc317(int unused)
{
	g_10924a6c->vfunc1();
	sub_100041b0(10);
	if (sub_10269c70(12)) {
		g_10924a6c->vfunc1();
		sub_100041b0(12);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1029fbe0 size=0xcd
#include "CBaseCombatWeapon.h"
#include "CEntityVSlots.h"

struct ThreatNpcView : CEntityVSlots
{
    void sub_10344f80(const Vector *pDir, int mode, int flag);	// stub 0x1000a713
};
struct ThreatRecView
{
    char pad0000[8];
    Vector m_vecPos;	// 0x08
    char pad0014[0x94 - 0x14];
    CEntityVSlots *m_pEnt94;	// 0x94
    CBaseCombatWeapon *m_pWeapon98;	// 0x98
};
struct ThreatEntView : CEntityVSlots
{
    char pad[0x9c - 4];
    void *m_pObj9c;
};
struct WeaponRollView
{
    char pad[0x404];
    float m_flNear404;
    float m_flFar408;
};

// TARGET: sub_1029fbe0
void __fastcall sub_1029fbe0(ThreatNpcView *pThis, int unused, int a, ThreatRecView *pRec)
{
    Vector vecDir = *pThis->slot217() - pRec->m_vecPos;
    float flDist = VectorNormalize(vecDir);
    if (pRec->m_pWeapon98 && pRec->m_pEnt94 && ((ThreatEntView *)pRec->m_pEnt94)->m_pObj9c)
    {
        WeaponRollView *pRoll = (WeaponRollView *)pRec->m_pWeapon98->sub_102517e0();
        if (flDist < pRoll->m_flNear404)
        {
            pThis->sub_10344f80(&vecDir, 2, 0);
            return;
        }
        if (flDist < pRoll->m_flFar408)
            pThis->sub_10344f80(&vecDir, 0, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x1029fcf0 size=0x89
#include "CAI_BaseNPCTroika.h"

extern float g_1049a1c0;
extern float g_1049a1c4;

struct CTroikaKindObj { int sub_103498b0(); };

char CAI_BaseNPCTroika::sub_1029fcf0(int a, CBaseEntity *pEnt, int b)
{
	if (!pEnt)
		return 0;
	if (!sub_1028a190())
		return 0;
	if (((CTroikaKindObj *)pEnt)->sub_103498b0() != 3) {
		*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		*(int *)((char *)this + 0x1b34) = 0x2939;
		sub_102ae750(0xd7, 0);
	} else {
		*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		*(int *)((char *)this + 0x1b34) = 0x2935;
		sub_102ae750(0xd8, 0);
	}
	float fDelay = (g_1049a1c0 - g_1049a1c4) + g_1049a1c4;
	*(float *)((char *)this + 0x1564) = fDelay + gpGlobals->curtime;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1029fdb0 size=0x5e
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
struct CTroikaOther { int sub_10349830(); };
extern float g_1049a1bc, g_1049a1b8;
bool CAI_BaseNPCTroika::vfunc319(int a, CBaseEntity *pOther, int c)
{
    sub_10272650(((CBaseCombatCharacter *)this)->sub_10345f10());
    float f = 0;
    if (pOther && ((CTroikaOther *)pOther)->sub_10349830() == 2)
        f = 1.0f;
    float flDelay = (g_1049a1bc - g_1049a1b8) * f + g_1049a1b8;
    *(float *)((char *)this + 0x1564) = flDelay + gpGlobals->curtime;
    return true;
}
// END FUNCTION

// FUNCTION: 0x1029fe30 size=0xa
#include "ConVar.h"
ConVar g_109245e0("npc_hit_buildup_amount", "2", 0);
// END FUNCTION

// FUNCTION: 0x1029fec0 size=0x51
#include "CAI_BaseNPCTroika.h"

struct CUnk109245e4 {
    virtual void vfunc0();
    virtual char vfunc1();
    char m_pad[0x2c - 4];
    int m_n2c;
};
extern CUnk109245e4 *g_109245e4;

struct CArg326 {
    char m_pad[0xba];
    char m_b;
};
struct CTroika326View {
    char m_pad[0x6064];
    int m_n6064;
};

bool CAI_BaseNPCTroika::vfunc326(CBaseEntity *pEnt, int b)
{
    if (sub_1000e494(pEnt, b)) {
        int n;
        if (g_109245e4->vfunc1())
            n = 0;
        else
            n = g_109245e4->m_n2c;
        if (((CTroika326View *)this)->m_n6064 <= n || ((CArg326 *)pEnt)->m_b == 2)
            return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1029ff40 size=0x1eb
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CUnknown101d7520.h"
#include "vampire.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "AITrace.h"
#include "CDevFlagObj.h"
#include "Vector.h"
#include "CBaseHandle.h"

CBaseEntity *sub_100ab250(void *pEdict);

extern CDevFlagObj *g_10924a6c;
extern float g_104454c4;
extern float g_1049a1d0;

void CAI_BaseNPCTroika::sub_1029ff40(CBaseEntity *pOther)
{
	if (!(!(!(!m_bJumping)))) { CBaseEntity *pEntity;
	CBaseEntity *pSelf = (CBaseEntity *)this;
	{
		void *pent = engine->vfunc38(0);
		ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
		if (!pent)
			pent = engine->vfunc38(0);
		pEntity = sub_100ab250(pent);
	}

	if (!pOther->sub_100b5110() && pEntity != pOther)
	{
		CAI_BaseNPCTroika *pNPC = pOther->m_pNPC98;
		if (!pNPC)
			return;
		g_10924a6c->vfunc1();
		sub_100041b0(0x37);
		m_h6010 = *((IHandleEntity *)pNPC)->vfunc1();
		return;
	} else { CGameTrace trace;
	sub_1003e250(&trace);

	Vector vecNormal; vecNormal = *(Vector *)trace.m_planeNormal;
	if (0.70710677f > (g_104454c4 * (*(trace.m_planeNormal + 1) + trace.m_planeNormal[0]) + trace.m_planeNormal[2]))
	{
		char flags = (char)(pSelf->m_flags268 >> 12);
		if ((flags & 1) != 0)
			pSelf->sub_100b1d10();

		Vector vecVelocity = pSelf->m_vecVelocity3bc;
		if (vecVelocity.LengthSqr() > g_1049a1d0 * g_1049a1d0)
		{
			VectorNormalize(vecVelocity);
			if (DotProduct(vecNormal, vecVelocity) < -0.70710677f)
			{
				g_10924a6c->vfunc1();
				sub_100041b0(0x36);
			}
		}
	} } } else return;
}
// END FUNCTION

// FUNCTION: 0x102a01b0 size=0xaa
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"

struct TroikaSlots
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35) EVS10(36) EVS10(37) EVS10(38) EVS10(39)
	EVS10(40) EVS10(41) EVS10(42) EVS10(43) EVS10(44) EVS10(45) EVS10(46) EVS10(47) EVS10(48) EVS10(49)
	EVS10(50) EVS10(51) EVS10(52) EVS10(53) EVS10(54) EVS10(55) EVS10(56) EVS10(57) EVS10(58) EVS10(59)
	EVS10(60)
	EVS(610) EVS(611) EVS(612) EVS(613)
	virtual void slot614();
};

// TARGET: CAI_BaseNPCTroika::vfunc320
char CAI_BaseNPCTroika::vfunc320(int a, int b)
{
	if (!sub_1028a190() || sub_102c1170())
		return 0;
	int act = sub_10271ff0(b, 0);
	if (sub_1008dd30(act, -1) < 0)
		return 0;
	*(int *)((char *)this + 0x6068) = b;
	((TroikaSlots *)this)->slot614();
	*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
	*(int *)((char *)this + 0x1b34) = 0x29b5;
	if (sub_10344da0(b)) {
		sub_102a0290(a, b);
		sub_102ae750(0x14d, 0);
		return 1;
	}
	sub_102ae750(0x14c, 0);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x102a0290 size=0x190
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"

void sub_10139550(const Vector *pAngles, Vector *pForward);

extern float g_1049a1d8;
extern float g_1049a1dc;
extern float g_1049a1e0;
extern float g_1049a1e4;

struct SpeedEntView
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18)
	CAI_NPC_V10(19) CAI_NPC_V10(20)
	CAI_NPC_V(210) CAI_NPC_V(211) CAI_NPC_V(212) CAI_NPC_V(213) CAI_NPC_V(214) CAI_NPC_V(215) CAI_NPC_V(216)
	virtual const Vector &GetAbsOrigin();
	virtual void vfunc218();
	virtual const Vector &GetAbsAngles();

	float sub_10346070();
	char m_pad0004[0x268 - 4];
	unsigned int m_iEFlags;	// 0x268
	char m_pad026c[0x3bc - 0x26c];
	Vector m_vecAbsVelocity;	// 0x3bc
	char m_pad03c8[0xfec - 0x3c8];
	int m_nActivity;	// 0xfec
	char m_pad0ff0[0x6004 - 0xff0];
	Vector m_vecMoveDir;	// 0x6004

	int IsEFlagSet(int bit) const { return (m_iEFlags >> bit) & 1; }
	const Vector &GetAbsVelocity()
	{
		if ((bool)((m_iEFlags >> 12) & 1))
			((CBaseEntity *)this)->sub_100b1d10();
		return m_vecAbsVelocity;
	}
};

// TARGET: CAI_BaseNPCTroika::sub_102a0290
void CAI_BaseNPCTroika::sub_102a0290(int a, int b)
{
	SpeedEntView *pTarget = (SpeedEntView *)a;
	SpeedEntView *pThis = (SpeedEntView *)this;
	float flScale = 5.0f;
	char bMoving = 0;
	if (pTarget)
	{
		flScale = pTarget->sub_10346070();
		int act = pTarget->m_nActivity;
		bMoving = sub_10344da0(act);
	}
	if (!pTarget)
	{
		Vector vecAngles = pThis->GetAbsAngles();
		sub_10139550(&vecAngles, &pThis->m_vecMoveDir);
		pThis->m_vecMoveDir = -pThis->m_vecMoveDir;
	}
	else if (bMoving)
	{
		flScale = 1.0f;
		pThis->m_vecMoveDir = pTarget->GetAbsVelocity();
	}
	else
	{
		pThis->m_vecMoveDir = pThis->GetAbsOrigin() - pTarget->GetAbsOrigin();
	}
	pThis->m_vecMoveDir.z = 0;
	VectorNormalize(pThis->m_vecMoveDir);
	float f = 1.0f;
	if (pTarget)
		f = flScale * 0.1f;
	float flSpeed = (g_1049a1dc - g_1049a1d8) * f + g_1049a1d8;
	float flZ = (g_1049a1e4 - g_1049a1e0) * f + g_1049a1e0;
	pThis->m_vecMoveDir = pThis->m_vecMoveDir * flSpeed;
	pThis->m_vecMoveDir.z = flZ;
}
// END FUNCTION

// FUNCTION: 0x102a0490 size=0x302
#include "CAI_BaseNPCTroika.h"
#include "UTIL_Trace.h"
#include <math.h>
struct CPod3 { int a, b, c; };

// TARGET: CAI_BaseNPCTroika::sub_102a0490
bool CAI_BaseNPCTroika::sub_102a0490(Vector *pOut)
{
	static const float kDist = 50.0f;

	if (!sub_10014df8(0x36))
		return false;

	CGameTrace tr;
	sub_1003e250(&tr);

	*pOut = *(Vector *)tr.m_planeNormal;

	Vector vecDir = -*pOut;
	vecDir.z = 0;
	VectorNormalize(vecDir);
	Vector vecFwd = vecDir * kDist;
	Vector vecRight;
	CrossProduct(Vector(0, 0, 1), vecDir, vecRight);
	VectorNormalize(vecRight);
	vecFwd *= kDist;

	float flPrev = 0;
	for (int i = 0; i < 5; i++)
	{
		Vector vecStart; { const CPod3 *pc = (const CPod3 *)(vfunc217()); int a = pc->a; int b = pc->b; CPod3 *pd = (CPod3 *)&vecStart; pd->b = b; pd->a = a; pd->c = pc->c; }
		Vector vecOfs = vecRight * g_105d1030[i * 2];
		vecStart += vecOfs;
		vecStart.z += g_105d1030[i * 2 + 1];
		Vector vecEnd = vecStart + vecFwd;
		UTIL_TraceLine_Calls(vecStart, vecEnd, 0x201400b, this, 0, &tr);
		if (!(tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid))
			return false;
		if (DotProduct(*pOut, *(Vector *)tr.m_planeNormal) < 0.9659258f)
			return false;
		float f = kDist * tr.m_fraction;
		if (i == 0)
			flPrev = f;
		else if ((float)fabs(f - flPrev) >= 3.0f)
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x102a0870 size=0x80
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CTroikaPartnerBuf { CTroikaPartnerBuf() {} char data[0x54]; };

struct CTroikaPartnerView {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
	S10(c0) S10(c1) S10(c2) S10(c3) S10(c4) S10(c5) S10(c6) S10(c7) S10(c8) S10(c9)
	S10(d0) S10(d1)
	virtual void vfunc320(void *pNPC, int index);
	char m_pad[0xfec - 4];
	int m_nState;
	bool sub_10344da0(int state);
	int sub_103449b0(const CTroikaPartnerBuf &buf, void *pNPC, void *p);
};

struct CTroikaOwnerView {
	char m_pad[0x98];
	CTroikaPartnerView *m_pPartner;
};

// TARGET: CAI_BaseNPCTroika::sub_102a0870
void CAI_BaseNPCTroika::sub_102a0870()
{
	if (sub_10014df8(0x37)) {
		CTroikaOwnerView *e = (CTroikaOwnerView *)EHandle_Get(m_h6010);
		if (e) {
			CTroikaPartnerView *p = e->m_pPartner;
			if (p && !p->sub_10344da0(pcd_stage(p->m_nState))) {
				int index = p->sub_103449b0(CTroikaPartnerBuf(), this, 0);
				if (index >= 0)
					p->vfunc320(this, index);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102a0910 size=0x1e
#include "CAI_BaseNPCTroika.h"

#define CVS(n) virtual void s##n();
#define CVS10(p) CVS(p##0) CVS(p##1) CVS(p##2) CVS(p##3) CVS(p##4) CVS(p##5) CVS(p##6) CVS(p##7) CVS(p##8) CVS(p##9)

struct CBaseNPCTroikaSlots600
{
	CVS10(0) CVS10(1) CVS10(2) CVS10(3) CVS10(4) CVS10(5) CVS10(6) CVS10(7) CVS10(8) CVS10(9)
	CVS10(10) CVS10(11) CVS10(12) CVS10(13) CVS10(14) CVS10(15) CVS10(16) CVS10(17) CVS10(18) CVS10(19)
	CVS10(20) CVS10(21) CVS10(22) CVS10(23) CVS10(24) CVS10(25) CVS10(26) CVS10(27) CVS10(28) CVS10(29)
	CVS10(30) CVS10(31) CVS10(32) CVS10(33) CVS10(34) CVS10(35) CVS10(36) CVS10(37) CVS10(38) CVS10(39)
	CVS10(40) CVS10(41) CVS10(42) CVS10(43) CVS10(44) CVS10(45) CVS10(46) CVS10(47) CVS10(48) CVS10(49)
	CVS10(50) CVS10(51) CVS10(52) CVS10(53) CVS10(54) CVS10(55) CVS10(56) CVS10(57) CVS10(58) CVS10(59)
	virtual void s600(int a);
};

void CAI_BaseNPCTroika::vfunc322(int a)
{
	sub_102bf5d0(a);
	((CBaseNPCTroikaSlots600 *)this)->s600(a);
}
// END FUNCTION

// FUNCTION: 0x102a0940 size=0x1c7
// TARGET: ?vfunc435@CAI_BaseNPCTroika@@UAEXPAX@Z
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "CUnknown1027d990.h"
#include "CUnknown102ee270.h"
#include "CUnknown102e0a60.h"
#include "CUnknown101e3af0.h"

extern CGlobalEntityList *g_10566458;
extern unsigned char g_10739a64;
extern CUnknown101e3af0 g_10739a4c;
void sub_1018e910(void *pThis);

struct CUnk1026d160X
{
	void sub_1026d160();
};

struct CSetAttackExtentsSlot
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(const float *pExtents);
};

void CAI_BaseNPCTroika::vfunc435(void *pSchedule)
{
	CAI_BaseNPC::vfunc435(pSchedule);
	m_flags14bc |= 0x80000004;

	if ((~m_flags14b8 & 8) != 0) {
		if (((CUnknown1027d990 *)this)->sub_1027d990() != 3
			&& ((CUnknown1027d990 *)this)->sub_1027d990() != 1)
			((CUnknown102ee270 *)m_p5d34)->sub_102ee270();

		sub_102b53d0(1, "Leaving interesting place (OnScheduleChange)");
		m_n6300 = 0;
		m_n659c = 0;
		((CUnknown102e0a60 *)m_pMotor5d44)->sub_102e0a60(0x43340000);
		m_b1a40 = 0;
		m_flGoalTolerance = 0;
		m_flInsideInterruptDistanceSqr = 0;
		m_flOutsideInterruptDistanceSqr = 0;
		m_flInterruptTime = 0;
		((CBaseHandle &)m_hMoveTargetEnt) = (IHandleEntity *)0;

		if (((CGlobalEntityList *)g_10566458)->sub_100290c0(&m_h5d24))
			((CEntityVSlots *)this)->slot532(8);

		m_flags14b8 &= 0xbbf4b97e;
		m_flags14bc &= 0x77fff14f;
		if (m_flags14bc & 0x1000) {
			m_flags14bc &= 0x7fffefff;
			((CUnk1026d160X *)this)->sub_1026d160();
		}

		if ((m_flags14bc & 1) == 1) {
			float *pExtents = (float *)((char *)this + 0x65d0);
			((CSetAttackExtentsSlot *)this)->v15(pExtents);
			pExtents[0] = -1.0f;
			pExtents[1] = -1.0f;
			pExtents[2] = -1.0f;
			m_flags14bc &= 0x7ffffffe;
		}

		*((char *)m_pMotor5d44 + 0x28) = 0;
		m_flDesiredMoveYaw = 0;
		m_bWaitFinishedSet = 0;
	}

	if (m_flags14bc & 0x40000000) {
		if (g_10739a64)
			g_10739a4c.sub_101e3c80((CBaseCombatCharacter *)this, 1);
		sub_1018e910(this);
		m_b63d8 = 0;
	}

	m_flags14bc &= 0x3fffffff;
	m_flags14b8 &= 0xd7ffffff;
	if (m_flags5d8c & 0x2000)
		m_flags5d8c &= 0xffffdfff;
}
// END FUNCTION

// FUNCTION: 0x102a0b90 size=0x1b
struct CUnknown102a0b90 { int sub_102a0b90(int); };
int CUnknown102a0b90::sub_102a0b90(int a0)
{
    *(int *)((char *)this + 0x14b8) = (*(int *)((char *)this + 0x14b8)) | 4;
    *(int *)((char *)this + 0x630c) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x102a0bc0 size=0xb2
#include "CAI_BaseNPCTroika.h"
#include "CAI_TroikaLink.h"

struct CGlobalVars_102a0bc0
{
	char m_pad0000[0xc];
	float curtime;	// 0x0c
};
extern CGlobalVars_102a0bc0 *g_1070b228;
extern int g_106c994c;

static __inline CTroikaNav *NavOf(CAI_BaseNPCTroika *pNPC)
{
	return (CTroikaNav *)pNPC->m_p5d34;
}

// TARGET: CAI_BaseNPCTroika::sub_102a0bc0
bool CAI_BaseNPCTroika::sub_102a0bc0(void *pLinkArg)
{
	CTroikaLink *pLink = (CTroikaLink *)pLinkArg;
	if (!pLink || pLink->m_iNode < 0)
		return false;
	CTroikaLinkRef *pRef = pLink->m_pRef;
	if (!pRef || !(pLink->m_nFlags & 4))
		return false;
	if (NavOf(this)->sub_102ee620() != 8)
		return false;
	CTroikaNodeNet *pNet = NavOf(this)->m_pNet;
	CTroikaNode *pNode;
	if (pLink->m_iNode >= 0 && pLink->m_iNode < pNet->m_nNodes)
		pNode = pNet->m_ppNodes[pLink->m_iNode];
	else {
		g_106c994c++;
		pNode = 0;
	}
	CTroikaCand *pCand = pNode->sub_102f96e0(pRef->m_id);
	if (!pCand)
		return false;
	if (!(pCand->m_nMask & (0x10 << (((int)g_1070b228->curtime >> 4) & 3))))
		return false;
	sub_102a0b90(pCand);
	return true;
}
// END FUNCTION

// FUNCTION: 0x102a0cb0 size=0x46
#include "CAI_BaseNPCTroika.h"
struct CDevFlagObj102a0cb0 {
	virtual void v0();
	virtual void vfunc1();
};
extern CDevFlagObj102a0cb0 *g_10924a6c;

bool CAI_BaseNPCTroika::sub_102a0cb0(CAI_BaseNPCTroika *pOther)
{
	if (pOther && pOther != this) {
		g_10924a6c->vfunc1();
		sub_10269a20(0x10);
		g_10924a6c->vfunc1();
		pOther->sub_10269a20(0x10);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102a0d20 size=0x139
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct S102a0d20Navigator
{
	int sub_102ee620();
};

struct S102a0d20Table
{
	char m_pad[0x64];
	unsigned int m_nFlags;
};

struct S10924a6c
{
	virtual void v0();
	virtual void v1();
};

extern S10924a6c *g_10924a6c;

struct CTroikaUnit102a0d20 : CAI_BaseNPCTroika
{
	void sub_102a0d20();
};

// TARGET: sub_102a0d20
void CTroikaUnit102a0d20::sub_102a0d20()
{
	CBaseEntity *pEntity = (CBaseEntity *)this;
	ScopeTrace trace("CAI_BaseNPCTroika::UpdatePedestrianInfo", pEntity ? (STRINGR_F(pEntity->m_name26c)) : g_105387dc);
	if (((S102a0d20Navigator *)m_p5d34)->sub_102ee620() == 8) {
		sub_10015839(0x10);
		sub_10015839(0x12);
		sub_10015839(0x13);
		float flTime = gpGlobals->curtime;
		if (((unsigned char)(m_flags14b8 >> 2) & 1) && flTime > m_f6318) {
			m_f6318 = flTime + 1.0f;
			int mask = 0x10 << (((int)flTime >> 4) & 3);
			if (((S102a0d20Table *)m_p630c)->m_nFlags & mask) {
				g_10924a6c->v1();
				sub_100041b0(0x13);
				return;
			}
			g_10924a6c->v1();
			sub_100041b0(0x12);
			m_flags14b8 &= 0xfffffffb;
			return;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102a0eb0 size=0xb
void __fastcall sub_100037e2(void *);
void __fastcall sub_102a0eb0(char *self)
{
	sub_100037e2(*(void **)(self + 0x5d34));
}
// END FUNCTION

// FUNCTION: 0x102a0ed0 size=0xa7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPCTroika.h"
#include "ScopeTrace.h"

struct CStandChecker
{
	int sub_102e7270(int a, int b, int c, int d, int e, int f);
};

int CAI_BaseNPCTroika::sub_102a0ed0(int a, int b, int c, int d)
{
	ScopeTrace trace("CAI_BaseNPCTroika::CanStandAt", this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc);
	*((char *)this + 0x63da) = 1;
	CStandChecker *p = *(CStandChecker **)((char *)this + 0x5d40);
	int r = p->sub_102e7270(a, b, c, d, 0, 0);
	*((char *)this + 0x63da) = 0;
	return r;
}
// END FUNCTION

// FUNCTION: 0x102a0fb0 size=0x1aa
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CAI_MoveProbe.h"
#include "CCollisionProperty.h"
#include "CTraceFilterNav.h"
#include "CGameTrace.h"
#include "CVProfile.h"
#include "ScopeTrace.h"

struct CMoveProbeOuter
{
	char pad0000[0x368];
	int m_n368;
};

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void sub_1026e940(const float *start, const float *end, const float *mins, const float *maxs, unsigned int mask, void *pFilter, CGameTrace *pTrace, char bFlag);

struct CMoveProbeView : CAI_MoveProbe
{
	void TraceHull(const float *vecStart, const float *vecEnd, const float *hullMin, const float *hullMax, unsigned int mask, CGameTrace *pResult)
	{
		g_109f3648->EnterScope("CAI_MoveProbe_TraceHull", 0, "Unaccounted", false);
		CTraceFilterNav filter;
		filter.sub_102e30d0((int)m_pOuter, ((CMoveProbeOuter *)m_pOuter)->m_n368);
		sub_1026e940(vecStart, vecEnd, hullMin, hullMax, mask, &filter, pResult, 1);
		g_109f3648->ExitScope();
	}
};

struct CTraceView : CGameTrace
{
	bool DidHit() const { return m_fraction < 1 || m_allsolid || m_startsolid; }
};

struct CIsAreaClearView : CAI_BaseNPCTroika
{
	const char *const &name26c() { return *(const char **)((char *)this + 0x26c); }
	CCollisionProperty *coll() { return (CCollisionProperty *)((char *)this + 0x270); }
	const char *GetDebugName() { return this ? STRINGR(name26c()) : g_105387dc; }
};

// TARGET: CNPC_VMingXiaoTentacle::sub_102a0fb0
bool CNPC_VMingXiaoTentacle::sub_102a0fb0(void *vecPosition, int collisionMask, float *pMins, float *pMaxs)
{
	CIsAreaClearView *t = (CIsAreaClearView *)this;
	ScopeTrace trace("CAI_BaseNPCTroika::IsAreaClear", t->GetDebugName());
	const float *mins = pMins ? pMins : (float *)t->coll()->vfunc1();
	const float *maxs = pMaxs ? pMaxs : (float *)t->coll()->vfunc2();
	CTraceView tr;
	CMoveProbeView *pProbe = (CMoveProbeView *)t->m_pMoveProbe5d40;
	t->m_b63da = 1;
	pProbe->TraceHull((float *)vecPosition, (float *)vecPosition, mins, maxs, collisionMask, &tr);
	t->m_b63da = 0;
	if (tr.DidHit())
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x102a11d0 size=0x182
#include "CCollisionProperty.h"
#include "CGameTrace.h"
#include "UTIL_Trace.h"
#include "CAI_BaseNPCTroika.h"

bool CAI_BaseNPCTroika::sub_102a11d0(const Vector &vecEnd)
{
	CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
	Vector mins = *(Vector *)pColl->vfunc1();
	Vector maxs = *(Vector *)pColl->vfunc2();
	mins.x = mins.x * 2;
	mins.y = mins.y * 2;
	mins.z = -6.0f;
	maxs.x = maxs.x * 2;
	maxs.y = maxs.y * 2;
	maxs.z = 6.0f;
	CGameTrace tr;
	UTIL_TraceHull(vfunc192(), vecEnd, mins, maxs, 0x2000000, this, 0, &tr, 1, 0);
	if ((tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid) && tr.m_pEnt && *(int *)((char *)tr.m_pEnt + 0x94) && vfunc404(tr.m_pEnt) != 1)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x102a13d0 size=0x3f
struct T { char pad[0x5dc]; int kind; };
struct N { char pad[0x5ddc]; T *t; char pad2[0x63fd - 0x5de0]; char flag; };
int __fastcall sub_102a13d0(N *n)
{
	if (n->t) {
		switch (n->t->kind) {
		case 100: return 0x1110;
		case 101: return 0x110c;
		case 0x27d8: return n->flag ? 0x111d : 0x111e;
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x102a1420 size=0x35
struct Obj {
	char pad[0x5dc];
	int type;
};
struct N {
	char pad[0x5ddc];
	Obj *pObj;
	char pad2[0x63fd - 0x5ddc - 4];
	char flag;
};

int __fastcall sub_102a1420(N *p)
{
	if (p->pObj) {
		switch (p->pObj->type) {
		case 100: return 0x1111;
		case 101: return 0x110d;
		case 0x27d8: return 0x1118;
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x102a1470 size=0x3f
struct Obj {
	char pad[0x5dc];
	int type;
};
struct N {
	char pad[0x5ddc];
	Obj *pObj;
	char pad2[0x63fd - 0x5ddc - 4];
	char flag;
};

int __fastcall sub_102a1470(N *p)
{
	if (p->pObj) {
		switch (p->pObj->type) {
		case 100: return 0x1112;
		case 101: return 0x110e;
		case 0x27d8: return p->flag ? 0x1119 : 0x111a;
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x102a14c0 size=0x3f
struct Obj {
	char pad[0x5dc];
	int type;
};
struct N {
	char pad[0x5ddc];
	Obj *pObj;
	char pad2[0x63fd - 0x5ddc - 4];
	char flag;
};

int __fastcall sub_102a14c0(N *p)
{
	if (p->pObj) {
		switch (p->pObj->type) {
		case 100: return 0x1113;
		case 101: return 0x3f;
		case 0x27d8: return p->flag ? 0x111b : 0x111c;
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x102a1510 size=0x35
struct Obj {
	char pad[0x5dc];
	int type;
};
struct N {
	char pad[0x5ddc];
	Obj *pObj;
	char pad2[0x63fd - 0x5ddc - 4];
	char flag;
};

int __fastcall sub_102a1510(N *p)
{
	if (p->pObj) {
		switch (p->pObj->type) {
		case 100: return 0x1111;
		case 101: return 0x110d;
		case 0x27d8: return 0x55;
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x102a1560 size=0x16
struct Obj {
	char pad[0x5dc];
	int type;
};
struct N {
	char pad[0x5ddc];
	Obj *pObj;
	char pad2[0x63fd - 0x5ddc - 4];
	char flag;
	void sub_10289ee0(int id);
};

// sub_102a13d0: the game compiled it before this function, in the same unit, so VC6 knows which registers it keeps;
// the block's own copy, in a namespace of its own: no second definition of the game's name.
namespace block_102a1560 {
int __fastcall sub_102a13d0(N *p)
{
	if (p->pObj) {
		switch (p->pObj->type) {
		case 100: return 0x1110;
		case 101: return 0x110c;
		case 0x27d8: return p->flag ? 0x111d : 0x111e;
		}
	}
	return -1;
}
}
using namespace block_102a1560;

// TARGET: sub_102a1560
bool __fastcall sub_102a1560(N *p)
{
	int id = sub_102a13d0(p);
	if (id != -1) {
		p->sub_10289ee0(id);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102a1590 size=0x16
struct Obj {
	char pad[0x5dc];
	int type;
};
struct N {
	char pad[0x5ddc];
	Obj *pObj;
	char pad2[0x63fd - 0x5ddc - 4];
	char flag;
	void sub_10289ee0(int id);
};

// sub_102a1420: the game compiled it before this function, in the same unit, so VC6 knows which registers it keeps;
// the block's own copy, in a namespace of its own: no second definition of the game's name.
namespace block_102a1590 {
int __fastcall sub_102a1420(N *p)
{
	if (p->pObj) {
		switch (p->pObj->type) {
		case 100: return 0x1111;
		case 101: return 0x110d;
		case 0x27d8: return 0x1118;
		}
	}
	return -1;
}
}
using namespace block_102a1590;

// TARGET: sub_102a1590
bool __fastcall sub_102a1590(N *p)
{
	int id = sub_102a1420(p);
	if (id != -1) {
		p->sub_10289ee0(id);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102a15c0 size=0x16
struct Obj {
	char pad[0x5dc];
	int type;
};
struct N {
	char pad[0x5ddc];
	Obj *pObj;
	char pad2[0x63fd - 0x5ddc - 4];
	char flag;
	void sub_10289ee0(int id);
};

// sub_102a1470: the game compiled it before this function, in the same unit, so VC6 knows which registers it keeps;
// the block's own copy, in a namespace of its own: no second definition of the game's name.
namespace block_102a15c0 {
int __fastcall sub_102a1470(N *p)
{
	if (p->pObj) {
		switch (p->pObj->type) {
		case 100: return 0x1112;
		case 101: return 0x110e;
		case 0x27d8: return p->flag ? 0x1119 : 0x111a;
		}
	}
	return -1;
}
}
using namespace block_102a15c0;

// TARGET: sub_102a15c0
bool __fastcall sub_102a15c0(N *p)
{
	int id = sub_102a1470(p);
	if (id != -1) {
		p->sub_10289ee0(id);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102a15f0 size=0x16
struct Obj {
	char pad[0x5dc];
	int type;
};
struct N {
	char pad[0x5ddc];
	Obj *pObj;
	char pad2[0x63fd - 0x5ddc - 4];
	char flag;
	void sub_10289ee0(int id);
};

// sub_102a14c0: the game compiled it before this function, in the same unit, so VC6 knows which registers it keeps;
// the block's own copy, in a namespace of its own: no second definition of the game's name.
namespace block_102a15f0 {
int __fastcall sub_102a14c0(N *p)
{
	if (p->pObj) {
		switch (p->pObj->type) {
		case 100: return 0x1113;
		case 101: return 0x3f;
		case 0x27d8: return p->flag ? 0x111b : 0x111c;
		}
	}
	return -1;
}
}
using namespace block_102a15f0;

// TARGET: sub_102a15f0
bool __fastcall sub_102a15f0(N *p)
{
	int id = sub_102a14c0(p);
	if (id != -1) {
		p->sub_10289ee0(id);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102a1620 size=0x16
struct Obj {
	char pad[0x5dc];
	int type;
};
struct N {
	char pad[0x5ddc];
	Obj *pObj;
	char pad2[0x63fd - 0x5ddc - 4];
	char flag;
	void sub_10289ee0(int id);
};

// sub_102a1510: the game compiled it before this function, in the same unit, so VC6 knows which registers it keeps;
// the block's own copy, in a namespace of its own: no second definition of the game's name.
namespace block_102a1620 {
int __fastcall sub_102a1510(N *p)
{
	if (p->pObj) {
		switch (p->pObj->type) {
		case 100: return 0x1111;
		case 101: return 0x110d;
		case 0x27d8: return 0x55;
		}
	}
	return -1;
}
}
using namespace block_102a1620;

// TARGET: sub_102a1620
bool __fastcall sub_102a1620(N *p)
{
	int id = sub_102a1510(p);
	if (id != -1) {
		p->sub_10289ee0(id);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102a1650 size=0x1c7
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CAI_MoveProbe.h"
#include "Vector.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#define M_PI_F ((float)(M_PI))
#define DEG2RAD( x  )  ( (float)(x) * (float)(M_PI_F / 180.f) )
struct CAI_MoveProbeV : CAI_MoveProbe
{
	bool MoveLimit(int navType, const Vector &vecStart, const Vector &vecEnd, unsigned int collisionMask, const CBaseEntity *pTarget, AIMoveTrace_t *pMove = 0) { return sub_102e6d70(navType, &vecStart.x, &vecEnd.x, collisionMask, pTarget, 100.0f, 0, pMove, 0, 0); }
};

struct CAI_BaseNPCTroikaV : CAI_BaseNPCTroika
{
	bool sub_102a1650(int navType, float flAngle, float flScale);
};

inline void GargSinCos(float radians, float *sine, float *cosine)
{
	__asm
	{
		fld dword ptr [radians]
		fsincos
		mov edx, dword ptr [cosine]
		mov eax, dword ptr [sine]
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

bool CAI_BaseNPCTroikaV::sub_102a1650(int navType, float flAngle, float flScale)
{
	float s, c;
	GargSinCos(DEG2RAD(flAngle), &s, &c);
	Vector dir(c, s, 0.0f);

	Vector vecOrigin = *((CEntityVSlots *)this)->slot217();
	Vector vecEnd = vecOrigin + m_vec6290 * dir.x * 40.0f * flScale + m_vecRight * dir.y * 64.0f * flScale;

	AIMoveTrace_t trace;
	return ((CAI_MoveProbeV *)m_pMoveProbe5d40)->MoveLimit(0, vecOrigin, vecEnd, 0x202400b, 0, &trace);
}
// END FUNCTION

// FUNCTION: 0x102a18a0 size=0x42
#include "CAI_BaseNPCTroika.h"
struct CAI_FloatParam { int m_n0; float m_flValue; };
void CAI_BaseNPCTroika::sub_102a18a0(const CAI_FloatParam *pParam)
{
	if (pParam->m_flValue > 0.0f)
		m_f5db4 = gpGlobals->curtime + pParam->m_flValue;
	else
		m_f5db4 = gpGlobals->curtime + 1000.0f;
}
// END FUNCTION

// FUNCTION: 0x102a1910 size=0x6348
#include "vampire_all.h"
#include "Vector.h"
#include "QAngle.h"
#include "Ray_t.h"
#include "CTraceFilterSimple.h"
#include "CGameTrace.h"
#include <math.h>

#define SCHED_FILE "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"
#define F(T, off) (*(T *)((char *)this + (off)))
#define FP(p, T, off) (*(T *)((char *)(p) + (off)))
#ifndef max
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))
#endif

struct CSTV;
struct HintV;
struct SoundV {
	const Vector *sub_101b99d0();
 int m_hOwner; int m_pad04; int m_iVolume; char m_pad0c[0x20 - 0xc]; Vector m_vecOrigin; };
struct EnemiesV {
	float sub_102e0150(CSTV *pEnemy);	// LastTimeSeen
	char sub_102e0290(CSTV *pEnemy, Vector *pA, Vector *pB);
	void sub_102dfd90(CSTV *pEnemy);
 Vector sub_102dfed0(CSTV *pEnemy); };
struct StrT
{
	const char *p;
	bool sub_10288510(const StrT &other) const;	// operator!=
	StrT *sub_10288540();	// NULL_STRING temporary
	const char *sub_100cd640() const;	// ToCStr
};
struct Task_t { int iTask; float flTaskData; };

struct EntSlot { CSTV *pEnt; int serial; int pad; };
struct EntListV { int pad; EntSlot slots[0x2000]; CSTV *sub_100290c0(const int *pHandle); };
extern EntListV *g_10566458;

struct EHView
{
	bool sub_102c6460(void *p) const;
	CSTV *sub_102c64d0() const;
	CSTV *sub_102c6420() const;
	bool sub_102c63b0(void *p) const;
	CSTV *sub_102c6370() const;

	unsigned int m_Index;
	CSTV *Get() const
	{
		if (m_Index != 0xffffffff)
		{
			const EntSlot *s = &g_10566458->slots[m_Index & 0x1fff];
			if (s->serial == (int)(m_Index >> 13))
				return s->pEnt;
		}
		return 0;
	}
	bool IsNull() const { return Get() == 0; }
	CSTV *sub_1028acc0() const;	// operator-> (out of line)
	CSTV *sub_100d15d0() const;	// operator-> (out of line)
	CSTV *sub_100d1590() const;	// operator T* (out of line)
	void sub_1028ac80(CSTV *p);	// operator=
	bool sub_1028ac10(CSTV *p) const;	// operator!=
};

struct HintV
{
	void sub_102d0910(CSTV *pNpc);

	bool sub_102d1350(CSTV *pNpc);	// Lock
	void sub_102d1420(float f);	// Unlock
	float sub_102d12e0();	// Yaw
	Vector sub_102d11f0();	// GetDirection
	void sub_102d1180(CSTV *pNpc, Vector *pOut);	// GetPosition
};

struct NavGoal;
struct NavV
{
	const Vector *sub_102ee140();
	bool sub_102f2ea0();
	bool sub_102edae0(const Vector &pos, float minDist, float maxDist, Vector *pOut);
	bool sub_102edbb0(const Vector &pos, float minDist, float maxDist, Vector *pOut);
	bool sub_102edd50(const Vector &threat, const Vector &eye, const Vector &avoid, float minDist, float maxDist, Vector *pOut, CSTV *pEnt);
	bool sub_102ed9c0(const Vector &target, const Vector &eye, float minDist, float maxDist, float blockTime, const Vector *pDir, int a, Vector *pOut);
	bool sub_102ee300(CSTV *pNpc, Vector *pA, Vector *pB, float f, Vector *pOut);

	bool sub_102ee6a0();	// IsGoalActive
	bool sub_102ee270();	// ClearGoal
	bool sub_102ecd20(const NavGoal &goal, int flags);	// SetGoal
	void sub_102ee410(int act);	// SetArrivalActivity
	void sub_102ee530(const Vector &dir);	// SetArrivalDirection
	void sub_102ee550(const QAngle &ang);	// SetArrivalDirection
	bool sub_102edae0(const Vector &pos, int a, float dist, Vector *pOut);	// FindBackAwayPos
	bool sub_102edc80(const Vector &threat, const Vector &eye, float minDist, float maxDist, Vector *pOut, CSTV *pEnt);	// FindCoverPos
	bool sub_102edaa0(const Vector &target, const Vector &eye, float minDist, float maxDist, float blockTime, int a, Vector *pOut);	// FindLos
	const Vector *sub_102ee5e0();	// GetCurWaypointPos
	float sub_102f2fc0();
	void sub_102f2fe0(float f);
	void sub_102ee250(int act);	// SetMovementActivity
	int sub_102ee620();	// GetGoalType
	bool sub_102ee2e0();
	void sub_102ee2c0();
	bool sub_102ed940(float f, const Vector &v, int c);	// SetRandomGoal
	void sub_102ee1c0(float f);	// SetGoalTolerance
	void sub_102886f0(float f);	// SetMaxRouteRebuildTime
	bool sub_102ed540(float minDist, float maxDist, int c);	// SetWanderGoal
};

struct MotorV
{
	void sub_102e1e20(int n);
	void sub_102a99c0(char value);

	char m_pad00[0x1c];
	int m_1c;
	char m_pad20[8];
	char m_28;
	char m_pad29[3];
	float m_2c;
	float m_30;
	float m_34;
	float sub_102e0a80(float yaw);
	void sub_102e2020(const Vector &pos, int b);	// SetIdealYawToTarget
	float sub_102e1f90();	// DeltaIdealYaw
	void sub_10288670(float yaw);	// SetIdealYaw (out of line)
	void SetIdealYaw(float yaw)
	{
		if (m_28)
		{
			if (yaw >= 180.0f)
				yaw -= 180.0f;
			else
				yaw += 180.0f;
		}
		if (m_1c == 0x43340000)
			m_34 = yaw;
		else
			m_34 = sub_102e0a80(yaw);
	}
};
void __fastcall sub_102e0b40(MotorV *p);

struct GV { char m_pad00[0xc]; float curtime; };
extern GV *g_1070b228;
struct RandomV { virtual void v0(); virtual float RandomFloat(float a, float b); };
extern RandomV *g_1070b244;
struct EngineTraceV { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void TraceRay(Ray_t *pRay, unsigned int mask, CTraceFilterSimple *pFilter, CGameTrace *pTrace); };
extern EngineTraceV *g_1070b254;
struct DbgCvarV {
	int P1GetInt() { return vfunc1() ? 0 : m_n2c; }
 virtual void v0(); virtual char vfunc1(); char m_pad04[0x28]; int m_n2c; };
extern DbgCvarV *g_10738964;
void sub_10146570(const float *pStart, const float *pEnd, int r, int g, int b, int bNoDepth, float flDuration);
struct GEntListV { CSTV *sub_100f7770(CSTV *pStart, const char *pszName, CSTV *pSearching, CSTV *pActivator); };
extern GEntListV g_106eb5d8;
extern CSTV *g_10923a30;	// AIN_DEF_TARGET
extern Vector g_10934060;	// vec3_invalid
extern Vector g_1093404c;
extern Vector g_1070d1b0;	// vec3_origin
extern char g_106b8540[];
extern void (__cdecl *g_109f3658)(int level, const char *fmt, ...);	// DevWarning
extern void (__cdecl *g_109f3650)(int level, const char *fmt, ...);	// DevMsg
extern void (__cdecl *g_109f3630)(const char *fmt, ...);	// Msg
HintV *sub_102d1af0(CSTV *pNpc, int hintType, int flags, float radius, Vector *pOrigin, float *pDist);
void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
int sub_1025d760(const char *psz);
bool sub_10288560(const char *a, const char *b);
float sub_10288590(float a);
CSTV *__fastcall sub_1032e7b0(CSTV *p);

inline float UTIL_AngleMod(float a)
{
	a = (360.0f / 65536) * ((int)(a * (65536.0f / 360.0f)) & 65535);
	return a;
}

extern float g_1049a160;
extern float g_1049a164;
extern float g_104454c4;
extern float g_104454c0;
#define AIN_DEF_TOLERANCE g_1049a160
#define AIN_HULL_TOLERANCE g_1049a164

struct NavGoal
{
	NavGoal(int type_ = 0, int activity_ = -1, float tolerance_ = AIN_DEF_TOLERANCE, unsigned flags_ = 0, CSTV *pTarget_ = g_10923a30)
		: type(type_), dest(g_1093404c), destNode(-1), activity(activity_), arrivalActivity(-1), arrivalSequence(-1),
		  tolerance(tolerance_), flags(flags_), pTarget(pTarget_), arrivalDirection(g_10934060), m38(0.0f), m3c(0) {}
	NavGoal(const Vector &dest_, int activity_ = -1, float tolerance_ = AIN_DEF_TOLERANCE, unsigned flags_ = 0, CSTV *pTarget_ = g_10923a30)
		: type(4), dest(dest_), destNode(-1), activity(activity_), arrivalActivity(-1), arrivalSequence(-1),
		  tolerance(tolerance_), flags(flags_), pTarget(pTarget_), arrivalDirection(g_10934060), m38(0.0f), m3c(0) {}
	NavGoal(int type_, const Vector &dest_, int activity_ = -1, float tolerance_ = AIN_DEF_TOLERANCE, unsigned flags_ = 0, CSTV *pTarget_ = g_10923a30)
		: type(type_), dest(dest_), destNode(-1), activity(activity_), arrivalActivity(-1), arrivalSequence(-1),
		  tolerance(tolerance_), flags(flags_), pTarget(pTarget_), arrivalDirection(g_10934060), m38(0.0f), m3c(0) {}

	int type;
	Vector dest;
	int destNode;
	int activity;
	int arrivalActivity;
	int arrivalSequence;
	float tolerance;
	unsigned flags;
	CSTV *pTarget;
	Vector arrivalDirection;
	float m38;
	int m3c;
};


struct Vector2D
{
	float x, y;
	Vector2D &operator/=(float fl) { float oofl = g_104454c0 / fl; x *= oofl; y *= oofl; return *this; }
	float Length() const { return (float)FastSqrt(x * x + y * y); }
};
inline Vector2D &AsVector2D(Vector &v) { return *(Vector2D *)&v; }
inline const Vector2D &AsVector2D(const Vector &v) { return *(const Vector2D *)&v; }
inline float Vector2DNormalize(Vector2D &v)
{
	float l = v.Length();
	if (l != g_104454c4)
	{
		v /= l;
	}
	else
	{
		v.x = v.y = 0;
	}
	return l;
}
inline float DotProduct2D(const Vector2D &a, const Vector2D &b) { return a.x * b.x + a.y * b.y; }
#define SV(n) virtual void s##n();

extern float g_1049a1ac;	// AIN_DEF_TOLERANCE (this unit)
extern float g_1049a1b0;	// AIN_HULL_TOLERANCE (this unit)
extern CSTV *g_10923dd8;	// AIN_DEF_TARGET (this unit)
struct P1_NavGoal : NavGoal
{
	P1_NavGoal(int type_ = 0, int activity_ = -1, float tolerance_ = g_1049a1ac, unsigned flags_ = 0, CSTV *pTarget_ = g_10923dd8)
		: NavGoal(type_, activity_, tolerance_, flags_, pTarget_) {}
	P1_NavGoal(const Vector &dest_, int activity_ = -1, float tolerance_ = g_1049a1ac, unsigned flags_ = 0, CSTV *pTarget_ = g_10923dd8)
		: NavGoal(dest_, activity_, tolerance_, flags_, pTarget_) {}
	P1_NavGoal(int type_, const Vector &dest_, int activity_ = -1, float tolerance_ = g_1049a1ac, unsigned flags_ = 0, CSTV *pTarget_ = g_10923dd8)
		: NavGoal(type_, dest_, activity_, tolerance_, flags_, pTarget_) {}
};
struct P1_MoveTrace { int d[14]; P1_MoveTrace() { memset(this, 0, sizeof(*this)); } };
struct P1_Probe
{
	bool sub_102e7880(const Vector *pPos, unsigned int fMask, float flUp, float flDown, Vector *pGround, CSTV **ppEnt);
	bool sub_102e6d70(int navType, const Vector *pStart, const Vector *pEnd, unsigned int mask, CSTV *pTarget, float pct, unsigned char flags, P1_MoveTrace *pTrace, int a9, int a10);
};
struct P1_Path { bool sub_102da0d0(CSTV *pNpc, Vector *pOut, int n); };
P1_Path *sub_102db590(CSTV *pNpc);
#include <string.h>
struct P1_Bits { unsigned int b0 : 1; };
struct P1_CVar { void *vt; DbgCvarV *m_pParent; int GetInt() { return m_pParent->vfunc1() ? 0 : m_pParent->m_n2c; } };
extern P1_CVar g_10924678;
extern P1_CVar g_10924630;
struct P1_CVarObj { int sub_1005f190(); };
extern P1_CVarObj g_10738960;
float sub_101d2c70(const Vector *pVec);
Vector sub_101d2f40(float flYaw);
void sub_101cd940(CSTV *p);
void sub_10142aa0(const Vector &origin, const Vector &mins, const Vector &maxs, int r, int g, int b, int a, float flDuration);
extern float g_1049a1ac;
extern float g_1049a1b0;
extern CSTV *g_10923dd8;
extern int g_106c994c;
extern void (__cdecl *g_109f364c)(const char *fmt, ...);
float sub_102d61b0(int hull);
struct P2_EH : EHView
{
	P2_EH(const P2_EH &o) { m_Index = o.m_Index; }
};
struct P2_Random { virtual void v0(); virtual float RandomFloat(float a, float b); virtual int RandomInt(int a, int b); };
inline int P2_RandomInt(int a, int b) { return ((P2_Random *)g_1070b244)->RandomInt(a, b); }
struct P2_Goal
{
	P2_Goal(int type_ = 0, int activity_ = -1, float tolerance_ = g_1049a1ac, unsigned flags_ = 0, CSTV *pTarget_ = g_10923dd8)
		: type(type_), dest(g_1093404c), destNode(-1), activity(activity_), arrivalActivity(-1), arrivalSequence(-1),
		  tolerance(tolerance_), flags(flags_), pTarget(pTarget_), arrivalDirection(g_10934060), m38(0.0f), m3c(0) {}
	P2_Goal(const Vector &dest_, int activity_ = -1, float tolerance_ = g_1049a1ac, unsigned flags_ = 0, CSTV *pTarget_ = g_10923dd8)
		: type(4), dest(dest_), destNode(-1), activity(activity_), arrivalActivity(-1), arrivalSequence(-1),
		  tolerance(tolerance_), flags(flags_), pTarget(pTarget_), arrivalDirection(g_10934060), m38(0.0f), m3c(0) {} // 1
	P2_Goal(int type_, const Vector &dest_, int activity_ = -1, float tolerance_ = g_1049a1ac, unsigned flags_ = 0, CSTV *pTarget_ = g_10923dd8)
		: type(type_), dest(dest_), destNode(-1), activity(activity_), arrivalActivity(-1), arrivalSequence(-1),
		  tolerance(tolerance_), flags(flags_), pTarget(pTarget_), arrivalDirection(g_10934060), m38(0.0f), m3c(0) {} // 2
	int type;
	Vector dest;
	int destNode;
	int activity;
	int arrivalActivity;
	int arrivalSequence;
	float tolerance;
	unsigned flags;
	CSTV *pTarget;
	Vector arrivalDirection;
	float m38;
	int m3c;
};
struct P2_GoalRaw
{
	int type; // r
	Vector dest; // r
	int destNode; // r
	int activity; // r
	int arrivalActivity; // r
	int arrivalSequence; // r
	float tolerance; // r
	unsigned flags; // r
	CSTV *pTarget; // r
	Vector arrivalDirection; // r
	float m38; // r
	int m3c; // r
};
struct P2_Nav { bool sub_102ecd20(const P2_Goal &goal, int flags); bool sub_102ecd20(P2_GoalRaw *pGoal, int flags); void sub_102ee1c0(int f); void sub_102f2fe0(int f); };
struct P2_Pick { char pad[0x10]; int m_iCur; int m_aNodes[1]; };
struct P2_Node { Vector sub_102fb0d0(int hull); };
struct P2_NodeList { int m_nCount; P2_Node **m_pp; };
struct P2_PathFinder
{
	bool sub_10306700(CSTV *pEnt, const Vector *pStart, const Vector *pTarget, float flMaxDist);
	bool sub_10306f60(CSTV *pEnt, const Vector *pStart, const Vector *pTarget, float flMaxDist, Vector *pOut);
};
extern "C" void *__cdecl __RTDynamicCast(void *inptr, long vfDelta, void *srcType, void *targetType, int isReference);
extern char g_1055f710[];
extern char g_105da324[];
template<int O, class T> struct P3_At { char pad[O]; T v; };
#include "CVDmg_t.h"
#include "CUnknown101c26d0.h"

#include <math.h>
namespace block_102a1910 {
#pragma auto_inline(off)
struct RayInit : Ray_t { void sub_1004f7a0(const float *pStart, const float *pEnd); };
void RayInit::sub_1004f7a0(const float *pStart, const float *pEnd)
{
    VectorSubtract(*(const Vector *)pEnd, *(const Vector *)pStart, *(Vector *)m_Delta);
    m_IsSwept = ((Vector *)m_Delta)->LengthSqr() != 0;
    m_StartOffset[2] = 0;
    m_StartOffset[1] = 0;
    m_StartOffset[0] = 0;
    m_IsRay = true;
    m_Extents[2] = 0;
    m_Extents[1] = 0;
    m_Extents[0] = 0;
    m_Start[0] = pStart[0];
    m_Start[1] = pStart[1];
    m_Start[2] = pStart[2];
    m_b32 = 0;
    m_n34 = 0;
    m_b33 = 0;
}
struct Ray_tViewH { Vector m_Start; Vector m_Delta; Vector m_StartOffset; Vector m_Extents; bool m_IsRay; bool m_IsSwept; char m_b32; char m_b33; float m_f34; };
struct RayHull : Ray_t { void sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b); };
void RayHull::sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b)
{
	const Vector &end = *(const Vector *)pEnd;
	Ray_tViewH *r = (Ray_tViewH *)this;
	const Vector &mins = *(const Vector *)pMins;
	const Vector &maxs = *(const Vector *)pMaxs;
	VectorSubtract(end, start, r->m_Delta);
	r->m_IsSwept = (r->m_Delta.LengthSqr() != 0.0f);
	VectorSubtract(maxs, mins, r->m_Extents);
	r->m_Extents *= 0.5f;
	r->m_IsRay = (r->m_Extents.LengthSqr() < 1e-6);
	VectorAdd(mins, maxs, r->m_StartOffset);
	r->m_StartOffset *= 0.5f;
	VectorAdd(start, r->m_StartOffset, r->m_Start);
	r->m_StartOffset *= -1.0f;
	r->m_b32 = b;
	r->m_b33 = 0;
	r->m_f34 = 0.0f;
	if (a && !r->m_IsRay) {
		r->m_f34 = (float)sqrt((r->m_Extents.x * r->m_Extents.x) + (r->m_Extents.y * r->m_Extents.y));
		if (1e-6 < r->m_f34)
			r->m_b33 = 1;
	}
}
#pragma auto_inline(on)
}
using namespace block_102a1910;
struct P3_Vec : Vector
{
	void *sub_1002c900();	// out-of-line Vector()
	Vector &sub_1003e4b0(const Vector &v);	// operator=
	Vector sub_10146190(const Vector &v) const;	// operator-
	Vector sub_100a19c0(float f) const;	// operator*
	Vector sub_1011e060(const Vector &v) const;	// operator+
	float sub_102a9540(const Vector *o) const;	// Dot
	float sub_102a9570(const Vector *o) const;	// DistTo
	void sub_1010e530(float minVal, float maxVal);	// Random
	P3_Vec Sub(const Vector &v) const { P3_Vec res; res.sub_1002c900(); VectorSubtract(*this, v, res); return res; }
	float LS() const { return x * x + (y * y + z * z); }
};
struct P3_Ang { float sub_102a9600(int i); };
struct P3_Rand { virtual void v0(); virtual float RandomFloat(float a, float b); virtual int RandomInt(int a, int b); };
struct P3_Layer { float f; char pad[0x2c]; };
struct P3_EH { unsigned int i; P3_EH(); CSTV *sub_100d1590() const; };
struct P3_H
{
	unsigned int m_Index;
	int sub_102a9620() const;	// GetSerialNumber (out of line)
	void Set(CSTV *p);
	CSTV *Get() const
	{
		if (m_Index != 0xffffffff)
		{
			const EntSlot *s = &g_10566458->slots[m_Index & 0x1fff];
			if (s->serial == sub_102a9620())
				return s->pEnt;
		}
		return 0;
	}
};
struct P3_Dmg : CVDmg_t { void sub_102a9690(int v); };
struct P3_Wp { P3_Wp *sub_102a9ee0(); const Vector *sub_102a9f00(); };
struct P3_Path { P3_Wp *sub_102a9f20(); };
struct P3_Nav { P3_Path *sub_102a9c60(); const Vector *sub_102ee140(); };
struct P4_Trace; struct P3_Probe { char sub_102e6d70(int navType, const Vector *pStart, const Vector *pEnd, int mask, int pTarget, float pct, int flags, unsigned int *pTrace, int a4, int a5); void sub_102a99e0(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, unsigned mask, P4_Trace *pTrace, int a, int b); };
struct P3_Cs { void sub_102ca2a0(int nType, CSTV *pSource, Vector vecPos, int nLevel, float flDuration, CSTV *pOffender, CSTV *pOwner, char bExternal); };
extern P3_Cs *g_109253f8;
struct P3_Tbl { int sub_102a9ea0(int i); char sub_102a9ec0(int i); };
extern P3_Tbl g_1072bc20;
struct P3_CvF { float sub_102a9640(); };
extern P3_CvF g_10924a18;
extern float g_1049a1ac;
extern CSTV *g_10923dd8;
extern float (__fastcall *g_1057966c)(Vector *pThis);
unsigned int *__fastcall sub_102a9890(unsigned int *p);
const Vector *__fastcall sub_102a96f0(CSTV *p);
void sub_101bac90(int type, const Vector *pOrigin, int volume, float flDuration, char a, CSTV *pOwner);
bool __fastcall sub_102a1560(CSTV *p);
bool __fastcall sub_102a1590(CSTV *p);
bool __fastcall sub_102a15c0(CSTV *p);
bool __fastcall sub_102a15f0(CSTV *p);
char *__fastcall sub_102a9c40(HintV *p);
struct P4_Vec : Vector { P4_Vec *sub_1002c900(); float sub_102a9570(const Vector &o) const; Vector sub_100a19c0(int f) const; };
struct P4_Ang { float x, y, z; P4_Ang *sub_102a95c0(); float *sub_102a95e0(int i); };
struct P4_Trace { char m_pad00[0x2c]; float fraction; char m_pad30[0x54 - 0x30]; P4_Trace *sub_102a9670(); };
struct P4_Goal { int type; Vector dest; int destNode; int activity; int arrivalActivity; int arrivalSequence; float tolerance; unsigned flags; CSTV *pTarget; Vector arrivalDirection; float m38; int m3c; P4_Goal *sub_102a9c80(int type, int act, float tol, unsigned flags, CSTV *pTarget); P4_Goal *sub_102a9d20(const Vector &dest, int act, float tol, unsigned flags, CSTV *pTarget); P4_Goal *sub_102a9dc0(int type, const Vector &dest, int act, float tol, unsigned flags, CSTV *pTarget, float f, int n); };
struct P4_Rand { virtual void v0(); virtual float RandomFloat(float a, float b); virtual int RandomInt(int a, int b); };
struct P4_HL { int sub_1025df40(CSTV *pNpc, CSTV *pEnemy); };
struct P4_CvRef { float sub_102a9640(); };
extern P4_CvRef g_10924890;
struct P4_ActSnd { void sub_101f5950(CSTV *p, int n, int k, float a, float b); };
extern P4_ActSnd g_1073dc28;
typedef P3_Probe P4_Probe;
struct P4_Out { void sub_100cd660(CSTV *pActivator, CSTV *pCaller, float flDelay); };
struct P4_Squad { void sub_103161a0(CSTV *p); };
struct P4_MotorVt { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void vfunc6(const Vector &v); };
extern float g_1049a1ac;
extern float g_1049a1b0;
extern float g_1049a1b4;
extern CSTV *g_10923dd8;
bool __fastcall sub_102a1560(CSTV *p);
bool __fastcall sub_102a1620(CSTV *p);
const char *__fastcall sub_102a9860(const Task_t *p);
void sub_1018e790(CSTV *p, const char *psz);
void sub_1018e910(CSTV *p);
void sub_1018e9d0(CSTV *p, int n);
void sub_1018eab0(CSTV *p, bool b);
int sub_1018eb50(CSTV *p, float f);
void sub_1018ecf0(CSTV *p, float f);
void sub_1018ec20(CSTV *p, float f);
extern double g_10449280;
extern float g_104492dc;
struct CSTV
{
	SV(0)
	virtual const unsigned int *vfunc1();
	SV(2) SV(3) SV(4) SV(5) SV(6) SV(7) SV(8) SV(9) SV(10) SV(11)
	SV(12) SV(13) SV(14)
	virtual void vfunc15(const Vector &v);
	virtual Vector vfunc16();
	SV(17) SV(18) SV(19) SV(20) SV(21) SV(22) SV(23) SV(24) SV(25) SV(26)
	SV(27) SV(28) SV(29) SV(30) SV(31) SV(32) SV(33) SV(34) SV(35) SV(36)
	SV(37) SV(38) SV(39) SV(40) SV(41) SV(42) SV(43) SV(44) SV(45) SV(46)
	SV(47) SV(48) SV(49) SV(50) SV(51) SV(52) SV(53) SV(54) SV(55) SV(56)
	SV(57) SV(58) SV(59) SV(60) SV(61) SV(62) SV(63) SV(64) SV(65)
	virtual void vfunc66();
	virtual void vfunc67();
	SV(68) SV(69) SV(70) SV(71) SV(72) SV(73) SV(74) SV(75) SV(76) SV(77)
	SV(78) SV(79) SV(80) SV(81) SV(82) SV(83) SV(84) SV(85) SV(86) SV(87)
	SV(88) SV(89) SV(90) SV(91) SV(92) SV(93)
	virtual int vfunc94();
	SV(95) SV(96) SV(97) SV(98) SV(99) SV(100) SV(101) SV(102) SV(103) SV(104)
	SV(105) SV(106) SV(107) SV(108) SV(109) SV(110) SV(111) SV(112) SV(113) SV(114)
	SV(115) SV(116) SV(117) SV(118) SV(119) SV(120) SV(121) SV(122) SV(123) SV(124)
	SV(125) SV(126) SV(127) SV(128) SV(129) SV(130) SV(131) SV(132) SV(133) SV(134)
	SV(135) SV(136) SV(137) SV(138) SV(139) SV(140) SV(141)
	virtual void vfunc142(void *pInfo);
	SV(143) SV(144) SV(145) SV(146) SV(147) SV(148) SV(149) SV(150) SV(151) SV(152)
	SV(153) SV(154) SV(155) SV(156) SV(157) SV(158) SV(159) SV(160) SV(161) SV(162)
	SV(163) SV(164) SV(165) SV(166)
	virtual CSTV *vfunc167();
	virtual CSTV *vfunc168();
	SV(169) SV(170) SV(171) SV(172) SV(173) SV(174) SV(175) SV(176) SV(177) SV(178)
	SV(179) SV(180) SV(181) SV(182) SV(183) SV(184) SV(185) SV(186) SV(187) SV(188)
	SV(189) SV(190) SV(191)
	virtual Vector vfunc192();
	virtual Vector vfunc193();
	SV(194) SV(195) SV(196) SV(197) SV(198)
	virtual void vfunc199(Vector *pVel, void *pAng);
	SV(200) SV(201) SV(202) SV(203) SV(204) SV(205) SV(206) SV(207)
	virtual void vfunc208(int n);
	SV(209) SV(210) SV(211) SV(212) SV(213) SV(214) SV(215)
	virtual void vfunc216(Vector *pGround);
	virtual Vector *vfunc217();
	SV(218)
	virtual QAngle *vfunc219();
	virtual Vector *vfunc220();
	virtual QAngle *vfunc221();
	SV(222) SV(223) SV(224) SV(225) SV(226) SV(227) SV(228) SV(229) SV(230) SV(231)
	SV(232) SV(233) SV(234) SV(235) SV(236) SV(237) SV(238) SV(239) SV(240) SV(241)
	SV(242)
	virtual void vfunc243(int n);
	virtual int vfunc244(int n);
	SV(245) SV(246) SV(247) SV(248) SV(249) SV(250)
	virtual bool vfunc251();
	SV(252) SV(253) SV(254) SV(255) SV(256) SV(257) SV(258) SV(259) SV(260) SV(261)
	SV(262) SV(263) SV(264) SV(265)
	virtual void vfunc266();
	SV(267) SV(268) SV(269) SV(270)
	virtual int vfunc271(int n);
	SV(272) SV(273)
	virtual void vfunc274(int n);
	SV(275) SV(276) SV(277) SV(278) SV(279) SV(280) SV(281) SV(282) SV(283) SV(284)
	SV(285) SV(286) SV(287) SV(288) SV(289) SV(290) SV(291) SV(292) SV(293) SV(294)
	virtual bool vfunc295(CSTV *p);
	SV(296) SV(297) SV(298) SV(299) SV(300) SV(301) SV(302) SV(303)
	virtual void vfunc304();
	SV(305) SV(306) SV(307) SV(308) SV(309)
	virtual void vfunc310(int n);
	virtual void vfunc311(int a, int b, int seq);
	SV(312) SV(313) SV(314) SV(315) SV(316) SV(317) SV(318) SV(319) SV(320) SV(321)
	SV(322) SV(323) SV(324) SV(325)
	virtual void vfunc326();
	virtual void vfunc327();
	SV(328) SV(329) SV(330) SV(331) SV(332) SV(333) SV(334) SV(335) SV(336) SV(337)
	SV(338) SV(339) SV(340) SV(341) SV(342) SV(343) SV(344)
	virtual float vfunc345(const char *pszName, float flValue, int n);
	SV(346) SV(347) SV(348) SV(349) SV(350) SV(351) SV(352) SV(353) SV(354) SV(355)
	SV(356) SV(357) SV(358) SV(359)
	virtual unsigned int vfunc360();
	SV(361) SV(362) SV(363)
	virtual bool vfunc364(const Vector &v);
	SV(365) SV(366) SV(367)
	virtual Vector vfunc368();
	SV(369) SV(370) SV(371)
	virtual void vfunc372(int a, int b, int c);
	SV(373) SV(374) SV(375) SV(376) SV(377) SV(378) SV(379) SV(380) SV(381) SV(382)
	SV(383) SV(384) SV(385) SV(386)
	virtual void vfunc387();
	SV(388) SV(389) SV(390) SV(391) SV(392) SV(393) SV(394) SV(395) SV(396) SV(397)
	SV(398) SV(399) SV(400) SV(401) SV(402) SV(403) SV(404) SV(405) SV(406) SV(407)
	SV(408) SV(409) SV(410) SV(411) SV(412) SV(413)
	virtual void vfunc414(CSTV *p);
	SV(415) SV(416) SV(417)
	virtual float vfunc418(float f);
	SV(419) SV(420) SV(421) SV(422) SV(423) SV(424) SV(425) SV(426) SV(427) SV(428)
	SV(429) SV(430) SV(431) SV(432) SV(433) SV(434) SV(435) SV(436) SV(437) SV(438)
	SV(439) SV(440) SV(441) SV(442) SV(443) SV(444) SV(445) SV(446) SV(447)
	virtual void vfunc448(int code);
	virtual const char *vfunc449(int task);
	SV(450) SV(451) SV(452) SV(453) SV(454) SV(455) SV(456) SV(457) SV(458) SV(459)
	SV(460) SV(461) SV(462) SV(463)
	virtual int vfunc464();
	SV(465) SV(466) SV(467) SV(468) SV(469) SV(470) SV(471) SV(472) SV(473)
	virtual SoundV *vfunc474();
	virtual SoundV *vfunc475();
	SV(476) SV(477) SV(478) SV(479) SV(480) SV(481) SV(482) SV(483) SV(484) SV(485)
	SV(486) SV(487)
	virtual void vfunc488();
	virtual void vfunc489();
	virtual void vfunc490();
	virtual void vfunc491();
	virtual void vfunc492();
	SV(493) SV(494) SV(495) SV(496) SV(497) SV(498) SV(499) SV(500) SV(501) SV(502)
	SV(503) SV(504) SV(505) SV(506) SV(507)
	virtual void vfunc508(int n);
	SV(509) SV(510) SV(511) SV(512) SV(513) SV(514) SV(515) SV(516) SV(517) SV(518)
	SV(519) SV(520) SV(521)
	virtual float vfunc522();
	SV(523) SV(524) SV(525) SV(526) SV(527)
	virtual void vfunc528();
	SV(529)
	virtual bool vfunc530(CSTV *pEnt);
	SV(531) SV(532) SV(533) SV(534) SV(535) SV(536) SV(537) SV(538) SV(539) SV(540)
	virtual EnemiesV *vfunc541();
	SV(542) SV(543) SV(544) SV(545) SV(546) SV(547) SV(548) SV(549)
	virtual float vfunc550();
	SV(551) SV(552) SV(553) SV(554) SV(555) SV(556) SV(557) SV(558) SV(559) SV(560)
	SV(561) SV(562)
	virtual void vfunc563(CSTV *pEnemy, Vector *pDest, float *pTol, float *pOut);
	SV(564) SV(565) SV(566)
	virtual int vfunc567(int hintType);
	SV(568)
	virtual int vfunc569(HintV *pHint);
	SV(570) SV(571)
	virtual void vfunc572();
	SV(573) SV(574) SV(575) SV(576) SV(577) SV(578) SV(579) SV(580) SV(581) SV(582)
	SV(583)
	virtual void vfunc584(CSTV *pNpc, StrT isz, bool b);
	SV(585)
	virtual P2_EH vfunc586();
	SV(587) SV(588) SV(589) SV(590) SV(591) SV(592) SV(593) SV(594) SV(595) SV(596)
	SV(597) SV(598) SV(599) SV(600) SV(601) SV(602)
	virtual float vfunc603(float *pDist, float *pMax);

	void sub_10273e80(char b);	// TaskComplete
	void sub_10272650(int act);	// SetIdealActivity
	void sub_10289ee0(int act);	// ResetIdealActivity
	void *sub_102cc1f0(int type);	// GetScheduleOfType
	void sub_10280e50(void *pSched);	// SetSchedule
	bool sub_102784a0(const Vector &eye, CSTV *pEnt);	// FindLateralCover
	int sub_10289fe0();	// GetScriptCustomMoveActivity
	int sub_1008dc40(int act, int b);	// TranslateActivity
	int sub_1008f7b0(const char *psz);	// LookupSequence
	void sub_10279cc0(CSTV *p);	// SetTarget
	void sub_10274080(CSTV *p);	// RememberUnreachable
	int sub_10265970();	// GetSmallFlinchActivity
	int sub_1027a6c0();	// GetStoppedActivity
	int sub_10092270(const char *psz);	// LookupPoseParameter
	void sub_100ad320(Vector *pForward, Vector *pRight, Vector *pUp);	// GetVectors
	bool sub_10094eb0(int seq);	// HasMovement
	int sub_10288610();	// GetSequence
	void sub_1027f270(int state);
	void sub_102885d0(const Vector *pOrigin);	// SetLocalOrigin
	MotorV *sub_10288650();	// GetMotor
	NavV *sub_10288630();	// GetNavigator
	const QAngle *sub_102885f0();	// GetLocalAngles
	CSTV *sub_10333ad0(const Vector &range);	// Weapon_FindUsable
	bool sub_10337230();
	bool sub_10337300();
	bool sub_10273180(char b);	// SetHullSizeSmall
	void sub_101a8cf0(int n);	// DelayStart

	MotorV *GetMotor() { return F(MotorV *, 0x5d44); }
	NavV *GetNavigator() { return F(NavV *, 0x5d34); }
	bool FindCoverFrom(const Vector &threat, Vector *pOut) { return GetNavigator()->sub_102edc80(threat, vfunc193(), 0, vfunc550(), pOut, this); }
	void sub_102827f0(const Task_t *pTask);
	void sub_102726a0();
	P1_Probe *GetMoveProbe() { return F(P1_Probe *, 0x5d40); }
	void sub_102bf7e0();
	void sub_102bf770();
	void sub_10295ab0(float flDelay);
	void sub_1009b060(const Vector &vecExtents);
	void sub_102b53d0(int a, const char *psz);
	float sub_102c5730(CSTV *pWeapon);
	float sub_10252450(int index);
	void sub_102b6120(Vector *pVec, int a);
	void sub_102aa640(void *pHolder);
	void sub_102aa9e0(void *pHolder);
	int sub_102c1400();
	void sub_101072b0(int n);
	void sub_10280a50();
	int sub_10271ff0(int act, int *pOut);
	char *sub_102517e0();
	const char *sub_100ab4f0();
	void sub_102a98e0(unsigned int flags);
	void sub_10272130(int act, int *pSeq, int *pA, int *pB);
	int sub_10099250(int activity, float flDivisor, int b);
	void sub_102b52a0(char bClearTarget, char bDead);
	void sub_1026d050();
	void sub_102a9800(unsigned int flags);
	void sub_102a97a0(unsigned int flags);
	void sub_102a97d0(unsigned int flags);
	void sub_102a9830(unsigned int flags);
	void sub_10297940(const Vector *pPosition);
	void sub_102a18a0(const Task_t *pTask);
	void sub_1033c6b0(unsigned int flags);
	int sub_10295460(int act, char bFlag);
	P3_Probe *sub_102a98c0();
	CSTV *sub_102a9960();
	bool sub_102b6120(Vector *pPos, char bFlag);
	void sub_102b6890(CSTV *pEnt);
	char sub_10278c80();
	void sub_102ae310();
	bool sub_102a9e80();	// m_570
	float sub_102a9e60();	// GetLocalAngles().y (out of line)
	HintV *sub_1029f730(int *p);
	CSTV *sub_1029f780(int *p);
	void sub_102a9f40(CSTV *p, HintV *pHint, int n);
	int sub_10271ff0(int act, int b);
	int sub_102a9770(unsigned int flags);
	bool sub_102a1650(int act, float yaw, int f);
	void sub_102a9940(float yaw);
	const Vector &sub_102a9710();	// CollisionProp()->OBBMins()
	const Vector &sub_102a9730();	// CollisionProp()->OBBMaxs()
	void sub_102a9750(int n);
	void sub_102a96b0(const Vector &v);
	void sub_100b2770(const Vector &v);
	void sub_1027d9b0(int n);
	void sub_102a99a0(char b);
	int sub_10345480();
	void sub_102c4e80();
	void sub_102c41b0(const char *psz, int a, int b, int c);
	void sub_10092610(const char *psz, Vector &pos, P4_Ang &ang);
	void sub_1026d130();
	void sub_1026d160();
	P4_Squad *sub_102a9910();
	void sub_102c4c50(Vector *pOut, int n, Vector *a, Vector *b);
	void sub_102a1910(const Task_t *pTask);
};

#define NAV F(NavV *, 0x5d34)
#define MOTOR GetMotor()
#define HINT F(HintV *, 0x5ddc)
#define CURTIME g_1070b228->curtime
#define TASKFAIL(code, line) { F(const char *, 0x1b44) = SCHED_FILE; F(int, 0x1b48) = line; vfunc448((int)(code)); }
#define TaskComplete() sub_10273e80(0)
#define TARGETH F(EHView, 0x5ce4)
#define CINEH F(EHView, 0x5d74)
#define WEAPON(f) FP(sub_1032e7b0(this), float, f)

#define SETSTATE(v, line) { F(const char *, 0x1b3c) = SCHED_FILE; F(int, 0x1b40) = line; F(int, 0x5cc4) = v; }
#define P1_HULL g_1049a1b0
#define P2NAV F(P2_Nav *, 0x5d34)
#define P2RAND ((P2_Random *)g_1070b244)
#define FM(T, off) ((P3_At<off, T> *)this)->v
#define P3_LAYER(i) ((P3_At<0x740, P3_Layer[15]> *)this)->v[i].f
inline void P3_H::Set(CSTV *p)
{
	if (p)
		m_Index = *p->vfunc1();
	else
		m_Index = 0xffffffff;
}

// TARGET: CSTV::sub_102a1910
inline Vector EyePosition(CSTV *p) { return *p->vfunc220() + FP(p, Vector, 0x184); }

inline void UTIL_TraceLine_Calls(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, IHandleEntity *ignore, int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	((RayInit *)&ray)->sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter(ignore, collisionGroup);
	g_1070b254->TraceRay(&ray, mask, &traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570(ptr->m_startpos, ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

void CSTV::sub_102a1910(const Task_t *pTask)
{
	switch (pTask->iTask)
	{
	case 167:
		{
			if (sub_1032e7b0(this))
			{
				if (g_10924678.GetInt())
					sub_1032e7b0(this)->vfunc67();
				else
					sub_1032e7b0(this)->vfunc66();
			}
			Vector vecPos = *vfunc217();
			vecPos.x += g_1070b244->RandomFloat(-200, 200);
			vecPos.y += g_1070b244->RandomFloat(-200, 200);
			sub_10142aa0(vecPos, Vector(-2, -2, -2), Vector(2, 2, 2), 0xc0, 0xff, 0xc0, 0, 2.0f);
			sub_102e0b40(MOTOR);
			MOTOR->sub_102e2020(vecPos, 0);
			vfunc572();
			break;
		}
	case 168:
		switch (g_10924630.GetInt())
		{
		case 1:
			sub_10289ee0(5);
			break;
		case 2:
			sub_10289ee0(0x1118);
			break;
		case 3:
			sub_10289ee0(0x19);
			break;
		case 4:
			sub_10289ee0(0x58);
			break;
		default:
			sub_10289ee0(1);
			break;
		}
		TaskComplete();
		break;
	case 6:
		{
			int n;
			F(const char *, 0x1b3c) = SCHED_FILE;
			F(int, 0x1b40) = 0x2dff;
			F(int, 0x5cc4) = n = (int)pTask->flTaskData;
			if (F(P1_Bits, 0x5b84).b0 == 1)
			{
				switch (n)
				{
				case 1:
					SETSTATE(0xb, 0x2e05);
					break;
				case 3:
					SETSTATE(0xb, 0x2e06);
					break;
				}
			}
			else if (F(char, 0x65f6) && n == 3)
			{
				SETSTATE(1, 0x2e0e);
			}
			TaskComplete();
			break;
		}
	case 75:
		{
			int act = (int)pTask->flTaskData;
			if (act)
				sub_10272650(act);
			else
				F(int, 0xfec) = 0;
			FM(float, 0x5db4) = CURTIME + 1.0f;
			if (vfunc464() == 4)
				sub_102726a0();
			break;
		}
	case 90:
		{
			float flDist = vfunc418(pTask->flTaskData);
			Vector backPos;
			if (!GetNavigator()->sub_102edae0(F(Vector, 0x5dd0), flDist, 64.0f, &backPos))
				TASKFAIL(7, 0x2e3f)
			else if (GetNavigator()->sub_102ecd20(P1_NavGoal(backPos, 0x13), 0))
				TaskComplete();
			else
				TASKFAIL(0xc, 0x2e4a);
			break;
		}
	case 110:
		{
			if (GetNavigator()->sub_102ee2e0())
				sub_102bf7e0();
			if (GetNavigator()->sub_102ee620() == 0)
			{
				F(char, 0x1a40) = 0;
				TaskComplete();
				GetNavigator()->sub_102ee270();
			}
			else if (!GetNavigator()->sub_102ee6a0())
			{
				F(char, 0x1a40) = 0;
				sub_10272650(sub_1027a6c0());
				TaskComplete();
			}
			else if (GetNavigator()->sub_102f2ea0())
			{
				F(char, 0x1a40) = 0;
				TaskComplete();
			}
			else
			{
				F(char, 0x1a40) = 1;
				vfunc528();
			}
			const float &flUntil = FM(float, 0x65dc);
			if (CURTIME <= flUntil)
			{
				Vector vecGround;
				CSTV *pGround;
				if (GetMoveProbe()->sub_102e7880(GetNavigator()->sub_102ee140(), 0x202400b, 1.0f, -1024.0f, &vecGround, &pGround))
				{
					if (pGround && FP(pGround, int, 0x94) == 0)
						vfunc216(&vecGround);
					else
						vfunc448(0xe);
				}
				else
					vfunc448(0x1a);
			}
			break;
		}
	case 166:
		sub_102bf770();
		TaskComplete();
		break;
	case 164:
		F(P1_Path *, 0x62ec) = sub_102db590(this);
		if (F(P1_Path *, 0x62ec))
		{
			if (F(P1_Path *, 0x62ec)->sub_102da0d0(this, &F(Vector, 0x62f0), 1))
				TaskComplete();
			else
			{
				F(P1_Path *, 0x62ec) = 0;
				TASKFAIL(0x22, 0x2eaa);
			}
		}
		else
			TASKFAIL(0x22, 0x2eaf);
		break;
	case 165:
		if (F(P1_Path *, 0x62ec))
		{
			P1_NavGoal goal(8, F(Vector, 0x62f0));
			if (GetNavigator()->sub_102ecd20(goal, 0))
				TaskComplete();
			else
				TASKFAIL(0xc, 0x2ecb);
		}
		else
			TASKFAIL(0x22, 0x2ed0);
		break;
	case 160:
		{
			CSTV *pEnemy = (vfunc167() == 0) ? this : vfunc167();
			if (sub_102784a0(pEnemy->vfunc193(), pEnemy))
			{
				FM(float, 0x5cf0) = CURTIME + pTask->flTaskData;
				TaskComplete();
			}
			else
			{
				Vector coverPos;
				if (GetNavigator()->sub_102edc80(*pEnemy->vfunc220(), pEnemy->vfunc193(), 0, 150.0f, &coverPos, pEnemy))
				{
					{
						P1_NavGoal goal(6, coverPos, 0x13, P1_HULL);
						GetNavigator()->sub_102ecd20(goal, 0);
					}
					FM(float, 0x5cf0) = CURTIME + pTask->flTaskData;
				}
				else
					TASKFAIL(8, 0x2ef8);
			}
			break;
		}
	case 162:
		{
			Vector coverPos;
			if (GetNavigator()->sub_102edc80(F(Vector, 0x5dd0), F(Vector, 0x5dd0), 32.0f, vfunc550(), &coverPos, this))
			{
				P1_NavGoal goal(coverPos, 0x13, P1_HULL);
				GetNavigator()->sub_102ecd20(goal, 0);
				FM(float, 0x5cf0) = CURTIME + pTask->flTaskData;
			}
			else
				TASKFAIL(8, 0x2f0b);
			break;
		}
	case 161:
		{
			CSTV *pEnemy = (vfunc167() == 0) ? this : vfunc167();
			if (sub_102784a0(pEnemy->vfunc193(), pEnemy))
			{
				FM(float, 0x5cf0) = CURTIME + pTask->flTaskData;
				TaskComplete();
			}
			else
			{
				Vector coverPos;
				if (GetNavigator()->sub_102edd50(*pEnemy->vfunc220(), pEnemy->vfunc193(), F(Vector, 0x6290), 0, vfunc550() * 0.25f, &coverPos, pEnemy))
				{
					{
						P1_NavGoal goal(6, coverPos, 0x13, P1_HULL);
						GetNavigator()->sub_102ecd20(goal, 0);
					}
					FM(float, 0x5cf0) = CURTIME + pTask->flTaskData;
				}
				else
					TASKFAIL(8, 0x2f32);
			}
			break;
		}
	case 163:
		{
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x2f3c);
				return;
			}
			Vector vecEnemy = vfunc541()->sub_102dfed0(vfunc167());
			float flMaxRange = 2000;
			float flMinRange = 0;
			if (sub_1032e7b0(this))
			{
				flMaxRange = max(WEAPON(0x8c0), WEAPON(0x8c4));
				flMinRange = min(WEAPON(0x8b8), WEAPON(0x8bc));
			}
			const float &flTooFar = FM(float, 0x5de4);
			if (flMaxRange > flTooFar)
				flMaxRange = flTooFar;
			float flLastSeen = vfunc541()->sub_102e0150(vfunc167());
			Vector posLos;
			bool bFound;
			if (CURTIME - flLastSeen < 2.0f)
			{
				Vector vecForward;
				sub_10139610(*vfunc167()->vfunc219(), &vecForward, 0, 0);
				bFound = GetNavigator()->sub_102ed9c0(vecEnemy, vecEnemy + FP(vfunc167(), Vector, 0x184), flMinRange, flMaxRange, 1.0f, &vecForward, 0, &posLos);
			}
			else
			{
				bFound = GetNavigator()->sub_102edaa0(vecEnemy, vecEnemy + FP(vfunc167(), Vector, 0x184), flMinRange, flMaxRange, 1.0f, 0, &posLos);
			}
			if (bFound)
			{
				P1_NavGoal goal(posLos, 0x13, P1_HULL);
				GetNavigator()->sub_102ecd20(goal, 2);
				GetNavigator()->sub_102ee530(vecEnemy - goal.dest);
			}
			else
				TASKFAIL(0xb, 0x2f71);
			break;
		}
	case 131:
	case 132:
		{
			CSTV *pEnemy = vfunc167();
			if (!pEnemy)
				pEnemy = this;
			Vector coverPos;
			float flMinDist = vfunc418(pTask->flTaskData);
			float flMaxDist = flMinDist + 8192.0f;
			float flMidDist = (flMaxDist + flMinDist) * 0.5f;
			if (HINT)
				sub_10295ab0(1.0f);
			HINT = sub_102d1af0(this, 0x2774, 2, flMaxDist, 0, 0);
			if (HINT)
			{
				if (!HINT->sub_102d1350(this))
					HINT = 0;
				else
				{
					Vector vecHint;
					HINT->sub_102d1180(this, &vecHint);
					if (GetNavigator()->sub_102ecd20(P1_NavGoal(vecHint, 0x13), 0))
					{
						F(Vector, 0x65d0) = vfunc16();
						sub_1009b060(Vector(40, 40, 80));
						TaskComplete();
					}
					else
						sub_10295ab0(5.0f);
				}
			}
			if (!HINT)
			{
				if (pTask->iTask == 0x84)
					F(int, 0x14b8) |= 0x200;
				bool bFound = GetNavigator()->sub_102edc80(*pEnemy->vfunc220(), pEnemy->vfunc193(), flMidDist, flMaxDist, &coverPos, pEnemy);
				if (!bFound)
					bFound = GetNavigator()->sub_102edc80(*pEnemy->vfunc220(), pEnemy->vfunc193(), flMinDist, flMaxDist, &coverPos, pEnemy);
				if (bFound)
					{
						P1_NavGoal goal(6, coverPos, 0x13, P1_HULL);
						GetNavigator()->sub_102ecd20(goal, 0);
					}
				else
					TASKFAIL(0x18, 0x2fe8);
			}
			break;
		}
	case 133:
		{
			float flMinDist = vfunc418(pTask->flTaskData);
			float flMaxDist = flMinDist + 8192.0f;
			F(int, 0x14b8) |= 0x200;
			Vector vecPos = F(Vector, 0x5dd0);
			Vector vecEye = vecPos + F(Vector, 0x184);
			Vector coverPos;
			bool bFound = GetNavigator()->sub_102edc80(vecPos, vecEye, (flMaxDist + flMinDist) * 0.5f, flMaxDist, &coverPos, this);
			if (!bFound)
				bFound = GetNavigator()->sub_102edc80(vecPos, vecEye, flMinDist, flMaxDist, &coverPos, this);
			if (bFound)
			{
				P1_NavGoal goal(6, coverPos, 0x13, P1_HULL);
				GetNavigator()->sub_102ecd20(goal, 0);
			}
			else
				TASKFAIL(0x18, 0x3023);
			break;
		}
	case 134:
		{
			CSTV *pTarget = F(EHView, 0x647c).Get();
			if (pTarget)
			{
				Vector vecTarget = *pTarget->vfunc217();
				Vector vecMe = *vfunc217();
				Vector vecDelta = vecMe - vecTarget;
				float flYaw = sub_101d2c70(&vecDelta);
				flYaw += g_1070b244->RandomFloat(-45, 45);
				float flDist = FM(float, 0x6484);
				Vector vecGoal = sub_101d2f40(flYaw) * flDist + vecMe;
				P1_MoveTrace moveTrace;
				if (GetMoveProbe()->sub_102e6d70(0, &vecMe, &vecGoal, 0x202400b, 0, 100.0f, 0, &moveTrace, 0, 0))
					{
						P1_NavGoal goal(vecGoal, 0x13, P1_HULL);
						GetNavigator()->sub_102ecd20(goal, 0);
					}
				else
					TASKFAIL(7, 0x304c);
			}
			else
				TASKFAIL(0x29, 0x3051);
			break;
		}
	case 135:
		{
			CSTV *pTarget = F(EHView, 0x647c).Get();
			if (pTarget)
			{
				Vector vecTarget; vecTarget = *pTarget->vfunc217();
				Vector vecPos;
				if (GetNavigator()->sub_102edae0(vecTarget, (FM(float, 0x6488) - 10.0f), 50000.0f, &vecPos))
					{
						P1_NavGoal goal(vecPos, 0x13, P1_HULL);
						GetNavigator()->sub_102ecd20(goal, 0);
					}
				else
					TASKFAIL(7, 0x306a);
			}
			else
				TASKFAIL(0x29, 0x306f);
			break;
		}
	case 136:
		{
			CSTV *pTarget = F(EHView, 0x647c).Get();
			if (pTarget)
			{
				Vector vecTarget = *pTarget->vfunc217();
				Vector vecPos;
				if (GetNavigator()->sub_102edbb0(vecTarget, (FM(float, 0x6488) - 10.0f), 50000.0f, &vecPos))
					{
						P1_NavGoal goal(vecPos, 0x13, P1_HULL);
						GetNavigator()->sub_102ecd20(goal, 0);
					}
				else
					TASKFAIL(7, 0x3087);
			}
			else
				TASKFAIL(0x29, 0x308c);
			break;
		}
	case 220:
		{
			CSTV *pPlayer = F(EHView, 0x628c).Get();
			TaskComplete();
			if (pPlayer)
			{
				const float &flMax = FM(float, 0x6264);
				if (!(vfunc418(pTask->flTaskData) <= flMax))
					break;
				CGameTrace tr;
				UTIL_TraceLine_Calls(EyePosition(pPlayer), EyePosition(this), 0x4091, (IHandleEntity *)this, 0, &tr);
				if (tr.m_fraction == g_10449280)
					break;
			}
			sub_102b53d0(0, "Leaving interesting place (TASK_DIE_IF_PLAYER_CANT_SEE)");
			sub_101cd940(this);
			break;
		}
	case 221:
		F(int, 0x14b8) |= 0x440a0000;
		sub_10289ee0(0x1050);
		break;
	case 222:
		sub_10289ee0(0x1052);
		break;
	case 176:
	case 177:
		{
			CSTV *pWeapon = sub_1032e7b0(this);
			if (!pWeapon)
			{
				TaskComplete();
				break;
			}
			int idx = 0;
			if (pTask->iTask == 177)
				idx = 1;
			FM(float, 0x5db4) = pWeapon->sub_10252450(idx);
			FM(float, 0x5db4) += sub_102c5730(pWeapon);
			if (FM(float, 0x5db4) <= CURTIME)
				TaskComplete();
			else if (!F(int, 0x5ddc))
				sub_10289ee0(5);
			break;
		}
	case 15:
		{
			if (vfunc530(vfunc167()))
			{
				TASKFAIL(0xc, 0x3101);
				return;
			}
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x3109);
				return;
			}
			if (P2NAV->sub_102ecd20(P2_Goal(2), 0))
				TaskComplete();
			else
			{
				g_109f3658(2, "GetPathToEnemy failed!!\n");
				sub_10274080(vfunc167());
				TASKFAIL(0xc, 0x311a);
			}
			break;
		}
	case 121:
		{
			CSTV *pEnt = vfunc586().Get();
			if (!pEnt)
			{
				TASKFAIL(0x21, 0x3127);
				return;
			}
			if (GetNavigator()->sub_102ecd20(P1_NavGoal(7), 0))
				TaskComplete();
			else
			{
				g_109f3658(2, "GetPathToBestUnknown failed!!\n");
				sub_10274080(pEnt);
				TASKFAIL(0xc, 0x3134);
			}
			break;
		}
	case 22:
		{
			if (!HINT)
			{
				TASKFAIL(4, 0x314a);
			}
			else
			{
				Vector vHintPos;
				sub_102b6120(&vHintPos, 0);
				P2NAV->sub_102ecd20(P2_Goal(vHintPos, 0x13), 0);
			}
			break;
		}
	case 47:
		sub_102e0b40(MOTOR);
		if (FP(HINT, int, 0x5dc) == 0x27d8)
		{
			if (F(char, 0x63fd))
				MOTOR->SetIdealYaw(HINT->sub_102d12e0() + 45.0f);
			else
				MOTOR->SetIdealYaw(HINT->sub_102d12e0() - 45.0f);
		}
		else
			MOTOR->SetIdealYaw(HINT->sub_102d12e0());
		vfunc572();
		break;
	case 122:
		sub_102aa640(&F(char, 0x658c));
		break;
	case 123:
		sub_102aa640(&F(char, 0x6594));
		break;
	case 124:
		{
			P2_Pick *pPick = F(P2_Pick *, 0x6590);
			if (!pPick)
			{
				TASKFAIL(0x1d, 0x3186);
				return;
			}
			int iNode = pPick->m_aNodes[pPick->m_iCur];
			if (iNode == -1)
				break;
			P2_NodeList *pList = FP(NAV, P2_NodeList *, 0x2c);
			P2_Node *pNode;
			if (iNode < 0 || iNode >= pList->m_nCount)
			{
				g_106c994c++;
				pNode = 0;
			}
			else
				pNode = pList->m_pp[iNode];
			P2_Goal goal(pNode->sub_102fb0d0(F(int, 0x1568)));
			if (P2NAV->sub_102ecd20(goal, 2))
				TaskComplete();
			else
			{
				g_109f3658(2, "%s can't reach patrol point\n", sub_100ab4f0());
				TASKFAIL(0xc, 0x31a0);
			}
			break;
		}
	case 125:
		sub_102aa9e0(&F(char, 0x658c));
		break;
	case 126:
		sub_102aa9e0(&F(char, 0x6594));
		break;
	case 174:
		{
			CSTV *pTarget = vfunc168();
			Vector *pv = 0;
			Vector tmp;
			if (pTarget)
			{
				tmp = *pTarget->vfunc217();
				pv = &tmp;
			}
			P2_PathFinder *pPath = F(P2_PathFinder *, 0x5d3c);
			if (pPath->sub_10306700(this, vfunc217(), pv, 256.0f))
				TaskComplete();
			else
				TASKFAIL(0x20, 0x31cd);
			break;
		}
	case 175:
		{
			CSTV *pTarget = vfunc168();
			Vector *pv = 0;
			Vector tmp;
			if (pTarget)
			{
				tmp = *pTarget->vfunc217();
				pv = &tmp;
			}
			P2_PathFinder *pPath = F(P2_PathFinder *, 0x5d3c);
			if (pPath->sub_10306f60(this, vfunc217(), pv, 256.0f, &F(Vector, 0x645c)))
				TaskComplete();
			else
				TASKFAIL(0x20, 0x31e8);
			break;
		}
	case 196:
		if (!(int)pTask->flTaskData)
			F(int, 0x14b8) &= ~8;
		else
			F(int, 0x14b8) |= 8;
		TaskComplete();
		break;
	case 127:
	case 128:
		{
			CSTV *pEnemy = vfunc167();
			if (!pEnemy)
			{
				TASKFAIL(6, 0x3205);
				return;
			}
			float flDist = pTask->flTaskData;
			if (pTask->iTask == 128)
				flDist = g_1070b244->RandomFloat(flDist * 0.5f, flDist);
			Vector vecA, vecB;
			if (vfunc541()->sub_102e0290(pEnemy, &vecA, &vecB))
			{
				Vector vecDest;
				bool bOk = GetNavigator()->sub_102ee300(this, &vecA, &vecB, flDist, &vecDest);
				P2_Goal goal(vecDest);
				float flOut = FM(float, 0x6320);
				vfunc563(pEnemy, &goal.dest, &goal.tolerance, &flOut);
				if (bOk && P2NAV->sub_102ecd20(goal, 2))
				{
					NAV->sub_102ee1c0(flOut);
					NAV->sub_102f2fe0(flOut);
					TaskComplete();
				}
				else
				{
					g_109f3658(2, "GetDirectedPathToEnemyLKP failed!!\n");
					sub_10274080(vfunc167());
					TASKFAIL(0xc, 0x3235);
				}
			}
			else
				TASKFAIL(6, 0x323a);
			break;
		}
	case 129:
		{
			CSTV *pEnemy = vfunc167();
			if (pEnemy == 0)
			{
				TASKFAIL(6, 0x3245);
				return;
			}
			Vector vecA, vecB;
			if (vfunc541()->sub_102e0290(pEnemy, &vecA, &vecB))
			{
				Vector vecEnemy;
				if (GetNavigator()->sub_102ee300(this, &vecA, &vecB, pTask->flTaskData, &vecEnemy))
				{
					float flMaxRange = 2000;
					float flMinRange = 0;
					if (sub_1032e7b0(this))
					{
						flMaxRange = max(WEAPON(0x8c0), WEAPON(0x8c4));
						flMinRange = min(WEAPON(0x8b8), WEAPON(0x8bc));
					}
					const float &flTooFar = FM(float, 0x5de4);
					if (flMaxRange > flTooFar)
						flMaxRange = flTooFar;
					Vector posLos;
					if (GetNavigator()->sub_102edaa0(vecEnemy, vecEnemy + FP(vfunc167(), Vector, 0x184), flMinRange, flMaxRange, 1.0f, 0, &posLos))
					{
						P1_NavGoal goal(posLos, 0x13, P1_HULL);
						GetNavigator()->sub_102ecd20(goal, 2);
					}
				}
				else
					TASKFAIL(0xb, 0x3271);
			}
			else
				TASKFAIL(6, 0x3276);
			break;
		}
	case 78:
		{
			FM(float, 0x6320) = sub_102d61b0(F(int, 0x1568)) * 0.5;
			float f = vfunc418(pTask->flTaskData) + FM(float, 0x6320);
			FM(float, 0x6320) = f;
			NAV->sub_102ee1c0(f);
			NAV->sub_102f2fe0(FM(float, 0x6320));
			TaskComplete();
			break;
		}
	case 79:
		{
			float f = vfunc418(pTask->flTaskData);
			FM(float, 0x6320) = f;
			NAV->sub_102ee1c0(f);
			NAV->sub_102f2fe0(FM(float, 0x6320));
			TaskComplete();
			break;
		}
	case 159:
		{
			int hull = 0;
			CSTV *pEnemy = vfunc167();
			if (pEnemy && FP(pEnemy, char *, 0x9c))
				hull = FP(FP(pEnemy, char *, 0x9c), int, 0x1568);
			if (sub_1032e7b0(this))
			{
				FM(float, 0x6320) = sub_102d61b0(hull) * 0.5;
				float f = WEAPON(0x8c0) * pTask->flTaskData + FM(float, 0x6320);
				FM(float, 0x6320) = f;
				NAV->sub_102ee1c0(f);
				NAV->sub_102f2fe0(FM(float, 0x6320));
				TaskComplete();
			}
			else
			{
				FM(float, 0x6320) = sub_102d61b0(hull) * 0.5;
				NAV->sub_102ee1c0(FM(float, 0x6320) = vfunc418(pTask->flTaskData) + FM(float, 0x6320));
				NAV->sub_102f2fe0(FM(float, 0x6320));
				TaskComplete();
			}
			break;
		}
	case 46:
		{
			Vector vecEnemyLKP;
			if (F(EHView, 0x5ba8).Get())
				vecEnemyLKP = *F(EHView, 0x5ba8).Get()->vfunc217();
			else
				vecEnemyLKP = vfunc541()->sub_102dfed0(vfunc167());
			if (!vfunc364(vecEnemyLKP))
			{
				sub_102e0b40(MOTOR);
				MOTOR->sub_102e2020(vecEnemyLKP, 0);
				vfunc572();
			}
			else
				TaskComplete();
			break;
		}
	case 52:
		if (sub_1032e7b0(this) && (~F(int, 0x14bc) & 0x8000))
		{
			CSTV *pWeapon = sub_1032e7b0(this);
			F(int, 0x6490) = P2_RandomInt(FP(pWeapon->sub_102517e0(), int, 0x3a4), FP(pWeapon->sub_102517e0(), int, 0x3a8));
		}
		else
			F(int, 0x6490) = 1;
		break;
	case 53:
		FM(float, 0x5d9c) = CURTIME;
		sub_10289ee0(0x1b);
		break;
	case 62:
		sub_10289ee0(0x5e);
		break;
	case 63:
		sub_10289ee0(0x5f);
		break;
	case 54:
	case 55:
		{
			sub_102e0b40(MOTOR);
			CSTV *pWeapon = sub_1032e7b0(this);
			if (pWeapon && (pWeapon->vfunc360() & 0x18000))
			{
				FM(float, 0x5d9c) = CURTIME;
				if (pTask->iTask != 0x37)
					pWeapon->vfunc326();
				else
					pWeapon->vfunc327();
			}
			else
				TASKFAIL(0x1f, 0x3302);
			sub_10280a50();
			break;
		}
	case 154:
		{
			sub_102e0b40(MOTOR);
			CSTV *pWeapon = sub_1032e7b0(this);
			CSTV *pMelee = (CSTV *)__RTDynamicCast(pWeapon, 0, g_1055f710, g_105da324, 0);
			if (pWeapon && ((unsigned char)(pWeapon->vfunc360() >> 30) & 1) && pMelee)
			{
				FM(float, 0x5d9c) = CURTIME;
				pMelee->vfunc372(0x53, 0, 0);
			}
			else
				TASKFAIL(0x1f, 0x331d);
			sub_10280a50();
			break;
		}
	case 197:
		if (vfunc167())
		{
			vfunc541()->sub_102dfd90(vfunc167());
			TaskComplete();
			return;
		}
		TASKFAIL(6, 0x3333);
		break;
	case 198:
		if (TARGETH.Get())
		{
			vfunc541()->sub_102dfd90(TARGETH.Get());
			TaskComplete();
		}
		else
			TASKFAIL(1, 0x3341);
		break;
	case 199:
		{
			if (vfunc167() == 0)
			{
				TASKFAIL(6, 0x334c);
				return;
			}
			P2_Goal goal(*vfunc167()->vfunc220(), -1, g_1049a1ac, 2);
			if (P2NAV->sub_102ecd20(goal, 0))
				TaskComplete();
			else
			{
				g_109f3658(2, "GetPathToEnemy failed!!\n");
				TASKFAIL(0xc, 0x335a);
			}
			break;
		}
	case 185:
		{
			int n = sub_102c1400();
			if (n == -1)
			{
				TaskComplete();
				break;
			}
			vfunc310(n);
			sub_102e0b40(MOTOR);
			MOTOR->sub_102e1e20(-1);
			break;
		}
	case 186:
	case 188:
		FM(float, 0x5db4) = CURTIME + pTask->flTaskData;
		break;
	case 187:
	case 189:
		FM(float, 0x5db4) = g_1070b244->RandomFloat(0, pTask->flTaskData) + CURTIME;
		break;
	case 190:
		{
			int n = (int)pTask->flTaskData;
			if (n >= 0 && n < 2)
			{
				sub_101072b0(n);
				TaskComplete();
			}
			else
			{
				g_109f364c("Invalid event expression: %d\n", n);
				TaskComplete();
			}
			break;
		}
	case 207:
		{
			int n = (int)vfunc418(pTask->flTaskData);
			FM(float, 0x6324) = (float)(n * n);
			TaskComplete();
			break;
		}
	case 208:
		{
			int n = (int)vfunc418(pTask->flTaskData);
			FM(float, 0x6328) = (float)(n * n);
			TaskComplete();
			break;
		}
	case 211:
		FM(float, 0x632c) = CURTIME + pTask->flTaskData;
		TaskComplete();
		break;
	case 212:
		FM(float, 0x632c) += g_1070b244->RandomFloat(0, pTask->flTaskData);
		TaskComplete();
		break;
	case 213:
		FM(float, 0x632c) = 0;
		TaskComplete();
		break;
	case 214:
		{
			float f = vfunc418(pTask->flTaskData);
			int act;
			if (FP(NAV, float, 0x14) >= f * f)
				act = sub_10271ff0(0x13, 0);
			if (sub_1008dc40(act, -1) == -1)
				act = sub_10271ff0(9, 0);
			NAV->sub_102ee250(act);
			F(int, 0x5d8c) &= ~2;
			TaskComplete();
			break;
		}
	case 215:
		{
			int act;
			if ((F(int, 0x60b4) == 1 || F(int, 0x60b4) == 16) && (act = sub_10271ff0(0x13, 0)) != -1 && sub_1008dc40(act, -1) != -1)
				;
			else
				act = sub_10271ff0(9, 0);
			NAV->sub_102ee250(act);
			F(int, 0x5d8c) &= ~2;
			TaskComplete();
			break;
		}
	case 219:
		FM(float, 0x6320) = 160.0f;
		FM(float, 0x6320) += vfunc418(pTask->flTaskData);
		NAV->sub_102ee1c0(FM(float, 0x6320) * 0.5);
		NAV->sub_102f2fe0(FM(float, 0x6320));
		TaskComplete();
		break;
	case 216:
		{
			F(P3_H, 0x6240).Set(F(EHView, 0x628c).Get());
			NavGoal goal(0, -1, g_1049a1ac, 0, g_10923dd8);
			goal.type = 4;
			((P3_Vec &)goal.dest).sub_1003e4b0(*F(P3_H, 0x6240).Get()->vfunc220());
			goal.pTarget = F(EHView, 0x6240).sub_100d1590();
			sub_10288630()->sub_102ecd20(goal, 0);
			break;
		}
	case 217:
		{
			if (F(EHView, 0x628c).sub_102c6460(0))
			{
				vfunc448(0x17);
				break;
			}
			if (((P3_Vec *)vfunc220())->sub_102a9570(F(EHView, 0x628c).sub_102c64d0()->vfunc220()) < FM(float, 0x5bac) && sub_1008dc40(9, -1) != -1)
			{
				sub_10288630()->sub_102ee250(9);
				sub_102a98e0(2);
				TaskComplete();
			}
			else if (sub_1008dc40(0x13, -1) != -1)
			{
				sub_10288630()->sub_102ee250(0x13);
				sub_102a98e0(2);
				TaskComplete();
			}
			else
				vfunc448(0x15);
			break;
		}
	case 218:
		{
			CSTV *pEnt = F(EHView, 0x628c).sub_102c6420();
			if (pEnt && vfunc295(pEnt))
			{
				pEnt->vfunc414(this);
				TaskComplete();
			}
			else
				TaskComplete();
			break;
		}
	case 224:
		vfunc310(0x1089);
		break;
	case 225:
		{
			int act = (int)pTask->flTaskData;
			int iSeq, a, b;
			sub_10272130(act, &iSeq, &a, &b);
			if (iSeq <= 0)
				TaskComplete();
			else
				vfunc310(act);
			break;
		}
	case 226:
		{
			int iGesture = (int)pTask->flTaskData - 1;
			int iLayer = vfunc271(iGesture);
			float flCycle = 0;
			if (iLayer != -1)
			{
				flCycle = P3_LAYER(iLayer);
				vfunc274(iGesture);
			}
			int iSeq, a, b;
			sub_10272130(iGesture + 1, &iSeq, &a, &b);
			if (iSeq <= 0)
			{
				TaskComplete();
				return;
			}
			else
			{
				vfunc310(iGesture + 1);
				FM(float, 0x6f8) = flCycle;
			}
			break;
		}
	case 227:
		{
			int iGesture = (int)pTask->flTaskData - 1;
			int iLayer = vfunc271(iGesture);
			float flCycle = 0;
			if (iLayer != -1)
			{
				flCycle = P3_LAYER(iLayer);
				vfunc274(iGesture);
			}
			int iSeq, a, b;
			sub_10272130(iGesture + 1, &iSeq, &a, &b);
			if (iSeq <= 0)
				TaskComplete();
			else
			{
				vfunc310(iGesture + 1);
				FM(float, 0x6f8) = flCycle;
			}
			break;
		}
	case 228:
		{
			int act = (int)pTask->flTaskData;
			if (sub_1008dc40(act, -1) >= 0)
				sub_10099250(act, 2.45f, 0);
			TaskComplete();
			break;
		}
	case 229:
		{
			int iDamage = (int)pTask->flTaskData;
			if (iDamage < 0)
				iDamage = F(int, 0xfdc);
			P3_Dmg dmg;
			dmg.sub_101fa960((CVDmgSource_t *)this);
			dmg.sub_101fa8d0(1, 0x80, iDamage);
			dmg.sub_102a9690(1);
			CUnknown101c26d0 info;
			info.sub_101c26d0(this, this, 1.0f, 0, 0, (int)&dmg, -1);
			vfunc142(&info);
			dmg.sub_101fa680();
			TaskComplete();
			break;
		}
	case 230:
		{
			int act = (int)pTask->flTaskData;
			if (act == 0x1097)
				F(int, 0x6414) = ((P3_Rand *)g_1070b244)->RandomInt(0, 2) * 3;
			sub_10272650(F(int, 0x6414) + act);
			break;
		}
	case 231:
		{
			int act = (int)pTask->flTaskData;
			if (act == 0x1097)
				F(int, 0x6414) = ((P3_Rand *)g_1070b244)->RandomInt(0, 2) * 3;
			sub_10289ee0(F(int, 0x6414) + act);
			break;
		}
	case 236:
		{
			int act = ((P3_Rand *)g_1070b244)->RandomInt(0, 1) * 3 + 0x106a;
			sub_1008dc40(act, -1);
			sub_10272650(act);
			break;
		}
	case 237:
	case 238:
		{
			int act = F(int, 0xfec) + 1;
			if (act)
				sub_10272650(act);
			else
				F(int, 0xfec) = 0;
			break;
		}
	case 239:
		{
			int act = 0x108d;
			switch (F(int, 0xfd4))
			{
			case 5:
				act = 0x108d;
				break;
			case 6:
				act = 0x108e;
				break;
			case 12:
				act = 0x108f;
				break;
			}
			sub_10272650(act);
			break;
		}
	case 240:
		{
			int act = 0x1090;
			switch (F(int, 0xfd4))
			{
			case 5:
				act = 0x1090;
				break;
			case 6:
				act = 0x1091;
				break;
			case 12:
				act = 0x1092;
				break;
			}
			sub_10272650(act);
			break;
		}
	case 241:
		F(int, 0x6068) = (int)pTask->flTaskData;
		TaskComplete();
		break;
	case 242:
		vfunc387();
		TaskComplete();
		break;
	case 243:
		vfunc304();
		TaskComplete();
		break;
	case 244:
		sub_102b52a0(1, 1);
		TaskComplete();
		break;
	case 245:
		sub_1026d050();
		sub_102a9800(0x80800000);
		TaskComplete();
		break;
	case 246:
		{
			float flDuration = pTask->flTaskData;
			g_109253f8->sub_102ca2a0(2, this, *sub_102a96f0(this), 2, flDuration, 0, this, 0);
			int iVolume = g_1072bc20.sub_102a9ea0(0x1b);
			char bExternal = g_1072bc20.sub_102a9ec0(0x1b);
			sub_101bac90(8, sub_102a96f0(this), iVolume, 10.0f, bExternal, this);
			TaskComplete();
			break;
		}
	case 247:
		{
			if (!sub_10288630()->sub_102ee6a0())
			{
				g_109f3658(2, "No route to face!\n");
				TASKFAIL(0xc, 0x3599);
				break;
			}
			P3_Wp *pWaypoint = ((P3_Nav *)sub_10288630())->sub_102a9c60()->sub_102a9f20();
			if (pWaypoint)
			{
				P3_Wp *pLast = pWaypoint->sub_102a9ee0();
				if (pLast)
					pWaypoint = pLast;
				sub_102e0b40(sub_10288650());
				sub_10288650()->sub_102e2020(*pWaypoint->sub_102a9f00(), 0);
				if (sub_10278c80())
					TaskComplete();
			}
			else
				TASKFAIL(0xc, 0x35b9);
			break;
		}
	case 248:
	case 249:
		{
			SoundV *pSound = vfunc474();
			if (pSound)
			{
				sub_10297940(pSound->sub_101b99d0());
				sub_102a18a0(pTask);
			}
			else
				TASKFAIL(0x12, 0x35cb);
			break;
		}
	case 250:
		{
			P3_Vec vec;
			vec.sub_1002c900();
			vec.sub_1010e530(-100.0f, 100.0f);
			sub_10297940(&vec);
			sub_102a18a0(pTask);
			break;
		}
	case 251:
		if (F(EHView, 0x628c).sub_102c6420())
		{
			sub_10297940(F(EHView, 0x628c).sub_102c64d0()->vfunc217());
			sub_102a18a0(pTask);
		}
		else
			TASKFAIL(0x17, 0x35e2);
		break;
	case 252:
		{
			CSTV *pEnt = vfunc586().sub_100d1590();
			if (pEnt)
			{
				sub_10297940(pEnt->vfunc217());
				sub_102a18a0(pTask);
			}
			else if (F(EHView, 0x608c).sub_1028ac10(0))
			{
				sub_10297940(&F(Vector, 0x6090));
				sub_102a18a0(pTask);
			}
			else
				TASKFAIL(0x21, 0x35f7);
			break;
		}
	case 253:
		{
			CSTV *pEnt = F(EHView, 0x65c0).sub_100d1590();
			if (pEnt)
			{
				sub_10297940(pEnt->vfunc217());
				sub_102a18a0(pTask);
			}
			else
				TASKFAIL(0x21, 0x3607);
			break;
		}
	case 254:
		{
			switch (F(int, 0x63e4))
			{
			case 0:
				sub_10272650(1);
				break;
			case 1:
				sub_10272650(0x1100);
				break;
			case 2:
				sub_10272650(0x1101);
				break;
			case 3:
				sub_10272650(0x1102);
				break;
			case 4:
				sub_10272650(0x1103);
				break;
			case 5:
				sub_10272650(0x1104);
				break;
			case 6:
				sub_10272650(0x1105);
				break;
			case 7:
				sub_10272650(0x1106);
				break;
			case 8:
				sub_10272650(0x1107);
				break;
			default:
				sub_10272650(1);
				break;
			}
			float flYaw = ((P3_Ang *)sub_102885f0())->sub_102a9600(1);
			sub_102a97a0(0x8000000);
			sub_102e0b40(sub_10288650());
			sub_10288650()->sub_10288670(flYaw - FM(float, 0x63e8));
			sub_102a18a0(pTask);
			break;
		}
	case 255:
		{
			float flOffset;
			switch (F(int, 0x63e4))
			{
			case 0:
				sub_10272650(1);
				flOffset = 0;
				break;
			case 1:
				sub_10272650(0x1100);
				flOffset = 0;
				break;
			case 2:
				sub_10272650(0x1101);
				flOffset = 45;
				break;
			case 3:
				sub_10272650(0x1102);
				flOffset = 90;
				break;
			case 4:
				sub_10272650(0x1103);
				flOffset = 135;
				break;
			case 5:
				sub_10272650(0x1104);
				flOffset = -45;
				break;
			case 6:
				sub_10272650(0x1105);
				flOffset = -90;
				break;
			case 7:
				sub_10272650(0x1106);
				flOffset = -135;
				break;
			case 8:
				sub_10272650(0x1107);
				flOffset = 180;
				break;
			default:
				sub_10272650(1);
				flOffset = 0;
				break;
			}
			float flYaw = ((P3_Ang *)sub_102885f0())->sub_102a9600(1);
			sub_102a97a0(0x8000000);
			sub_102e0b40(sub_10288650());
			sub_10288650()->sub_10288670(flYaw + flOffset);
			sub_102a18a0(pTask);
			break;
		}
	case 256:
		{
			int flags = *(const int *)&pTask->flTaskData;
			if (!(flags & 0x80000000))
			{
				sub_102a97a0(flags);
				TaskComplete();
			}
			else
			{
				sub_102a9800(flags);
				TaskComplete();
			}
			break;
		}
	case 258:
		sub_1033c6b0(1 << *(const int *)&pTask->flTaskData);
		TaskComplete();
		break;
	case 257:
		{
			int flags = *(const int *)&pTask->flTaskData;
			if (!(flags & 0x80000000))
			{
				sub_102a97d0(flags);
				TaskComplete();
			}
			else
			{
				sub_102a9830(flags);
				TaskComplete();
			}
			break;
		}
	case 259:
		{
			int act = sub_10271ff0(0x1093, 0);
			if (sub_1008dc40(act, -1) == -1)
				act = sub_10271ff0(0x13, 0);
			sub_10288630()->sub_102ee250(act);
			sub_102a98e0(2);
			TaskComplete();
			break;
		}
	case 260:
		{
			int act = 0x1115;
			if (sub_10295460(act, 0) == -1)
				act = 9;
			sub_10288630()->sub_102ee250(act);
			sub_102a98e0(2);
			TaskComplete();
			break;
		}
	case 261:
		{
			int act = sub_10271ff0(0x1115, 0);
			if (sub_1008dc40(act, -1) == -1)
				act = sub_10271ff0(9, 0);
			sub_10288630()->sub_102ee250(act);
			sub_102a98e0(2);
			TaskComplete();
			break;
		}
	case 294:
		{
			int act = sub_10271ff0(0x1121, 0);
			if (sub_1008dc40(act, -1) == -1)
				act = sub_10271ff0(9, 0);
			sub_10288630()->sub_102ee250(act);
			sub_102a98e0(2);
			TaskComplete();
			break;
		}
	case 295:
		{
			float flBase = g_10924a18.sub_102a9640();
			FM(float, 0x6320) = flBase;
			float flTolerance = g_1070b244->RandomFloat(0, vfunc418(pTask->flTaskData)) + FM(float, 0x6320);
			FM(float, 0x6320) = flTolerance;
			sub_10288630()->sub_102ee1c0(flTolerance);
			sub_10288630()->sub_102f2fe0(FM(float, 0x6320));
			TaskComplete();
			break;
		}
	case 262:
		if (pTask->flTaskData == g_104454c4)
		{
			sub_10288650()->sub_102a99c0(0);
			TaskComplete();
		}
		else
		{
			sub_10288650()->sub_102a99c0(1);
			TaskComplete();
		}
		break;
	case 263:
		{
			Vector vecGoal = *((P3_Nav *)sub_10288630())->sub_102ee140();
			Vector vecOrigin = *vfunc217();
			Vector vecDelta = ((P3_Vec &)vecGoal).sub_10146190(vecOrigin);
			float flDistSqr = (vecDelta.y * vecDelta.y) + (vecDelta.x * vecDelta.x);
			if (flDistSqr >= 4096.0f && flDistSqr <= 12100.0f)
			{
				vecDelta.z = 0;
				g_1057966c(&vecDelta);
				float flDot = ((P3_Vec &)vecDelta).sub_102a9540(&F(Vector, 0x629c));
				if (flDot > 0.98)
				{
					sub_102a97a0(0x4000);
					sub_10272650(0x110b);
					return;
				}
				if (flDot < -0.98)
				{
					sub_102a97a0(0x4000);
					sub_10272650(0x110a);
					break;
				}
			}
			TaskComplete();
			break;
		}
	case 264:
		{
			Vector vecStart = *vfunc217();
			vecStart.z += vfunc522() * 0.5f;
			Vector vecRight = ((P3_Vec &)vecStart).sub_1011e060(((P3_Vec &)F(Vector, 0x629c)).sub_100a19c0(60.0f));
			Vector vecLeft = ((P3_Vec &)vecStart).sub_10146190(((P3_Vec &)F(Vector, 0x629c)).sub_100a19c0(60.0f));
			if (sub_10295460(0x110b, 0) != -1)
			{
				unsigned int moveTrace[14];
				sub_102a9890(moveTrace);
				if (sub_102a98c0()->sub_102e6d70(0, &vecStart, &vecRight, 0x202400b, 0, 100.0f, 0, moveTrace, 0, 0))
				{
					sub_102a97a0(0x4000);
					sub_10272650(0x110b);
					return;
				}
			}
			if (sub_10295460(0x110a, 0) != -1)
			{
				unsigned int moveTrace[14];
				sub_102a9890(moveTrace);
				if (sub_102a98c0()->sub_102e6d70(0, &vecStart, &vecLeft, 0x202400b, 0, 100.0f, 0, moveTrace, 0, 0))
				{
					sub_102a97a0(0x4000);
					sub_10272650(0x110a);
					return;
				}
			}
			TASKFAIL(0xe, 0x3736);
			break;
		}
	case 265:
		{
			Vector vecStart = *vfunc217();
			vecStart.z += vfunc522() * 0.5f;
			Vector vecEnd = ((P3_Vec &)vecStart).sub_1011e060(((P3_Vec &)F(Vector, 0x6290)).sub_100a19c0(96.0f));
			if (sub_10295460(0xf1d, 0) != -1)
			{
				unsigned int moveTrace[14];
				sub_102a9890(moveTrace);
				if (sub_102a98c0()->sub_102e6d70(0, &vecStart, &vecEnd, 0x202400b, 0, 100.0f, 0, moveTrace, 0, 0))
				{
					sub_102a97a0(0x4000);
					sub_10272650(0xf1d);
					break;
				}
			}
			TASKFAIL(0xe, 0x3759);
			break;
		}
	case 266:
		if (!sub_102a1560(this))
			TaskComplete();
		break;
	case 267:
		sub_102a1590(this);
		TaskComplete();
		break;
	case 268:
		if (!sub_102a15c0(this))
			TaskComplete();
		break;
	case 269:
		{
			sub_102a15f0(this);
			P3_Vec vecPos;
			vecPos.sub_1002c900();
			if (F(EHView, 0x5ba8).sub_1028ac10(0))
				vecPos.sub_1003e4b0(*F(EHView, 0x5ba8).sub_100d15d0()->vfunc217());
			else if (sub_102a9960() == vfunc167())
				vecPos.sub_1003e4b0(vfunc541()->sub_102dfed0(vfunc167()));
			else
				TaskComplete();
			if (!vfunc364(vecPos))
			{
				sub_102e0b40(sub_10288650());
				sub_10288650()->sub_102e2020(vecPos, 0);
			}
			else
				TaskComplete();
			break;
		}
	case 270:
		if (HINT)
		{
			P3_Vec vecPos;
			vecPos.sub_1002c900();
			sub_102b6120(&vecPos, 0);
			sub_102885d0(&vecPos);
			TaskComplete();
		}
		else
			TASKFAIL(4, 0x37aa);
		break;
	case 271:
		if (HINT)
		{
			sub_10289ee0(0xc84);
			HINT->sub_102d0910(this);
			sub_10295ab0(60.0f);
		}
		else
			TASKFAIL(4, 0x37bd);
		break;
	case 272:
		if (HINT)
		{
			sub_10289ee0(0xc84);
			if (*sub_102a9c40(HINT) != 0)
			{
				F(EHView, 0x643c).sub_1028ac80(g_106eb5d8.sub_100f7770(0, sub_102a9c40(HINT), 0, 0));
				if (F(EHView, 0x643c).sub_102c63b0(0))
					g_109f3630("Warning: Kick hint (%s) is trying to find a physics object (%s) that is not found.\n ");
			}
			if (F(EHView, 0x643c).sub_1028ac10(0))
			{
				const Vector &vecObj = *F(EHView, 0x643c).sub_100d15d0()->vfunc217();
				const Vector &vecMe = *vfunc217();
				if (((const P3_Vec &)vecMe).Sub(vecObj).LS() <= 16384.0f)
					sub_102b6890(F(EHView, 0x643c).sub_102c6370());
				else
					g_109f3630("Warning: Kick hint (%s) is trying to kick a physics object (%s) that is too far away.\n ");
				F(EHView, 0x643c).sub_1028ac80(0);
			}
			HINT->sub_102d0910(this);
			sub_10295ab0(60.0f);
		}
		else
			TASKFAIL(4, 0x37f4);
		break;
	case 273:
		{
			EHView &h = F(EHView, 0x643c);
			if (h.sub_1028ac10(0))
			{
				if (vfunc167())
				{
					CSTV *pTarget = h.sub_100d15d0();
					CSTV *pEnemy = vfunc167();
					Vector dir = pEnemy->vfunc217()->sub_10146190(*pTarget->vfunc217());
					dir.NormalizeInPlace();
					P4_Goal goal;
					goal.sub_102a9c80(10, -1, g_1049a1ac, 0, g_10923dd8);
					goal.type = 4;
					CSTV *pTarget2 = h.sub_100d15d0();
					goal.dest.sub_1003e4b0(pTarget2->vfunc217()->sub_10146190(dir.sub_100a19c0(64.0f)));
					goal.pTarget = 0;
					sub_10288630()->sub_102ecd20(*(NavGoal *)&goal, 0);
				}
				else
					TASKFAIL(6, 0x380d);
			}
			else
				TASKFAIL(0x25, 0x3812);
			break;
		}
	case 274:
		if (F(EHView, 0x643c).sub_1028ac10(0))
			TaskComplete();
		else
			TASKFAIL(0x25, 0x381f);
		break;
	case 275:
		{
			EHView &h = F(EHView, 0x643c);
			if (h.sub_1028ac10(0))
			{
				sub_10289ee0(0xc84);
				sub_102b6890(h.sub_102c6370());
				h.sub_1028ac80(0);
			}
			else
				TASKFAIL(0x25, 0x3832);
			break;
		}
	case 178:
		if (F(CSTV *, 0x62ec))
		{
			sub_102ae310();
			if (F(CSTV *, 0x62ec)->sub_102a9e80())
			{
				sub_102e0b40(sub_10288650());
				sub_10288650()->sub_10288670(sub_10288590(F(CSTV *, 0x62ec)->sub_102a9e60()));
			}
			else
				TaskComplete();
		}
		else
			TASKFAIL(0x22, 0x3848);
		break;
	case 179:
		{
			HintV *pHint = sub_1029f730(&F(int, 0x658c));
			CSTV *pEnt = sub_1029f780(&F(int, 0x658c));
			if (pEnt)
			{
				if (pEnt->sub_102a9e80())
				{
					sub_102e0b40(sub_10288650());
					sub_10288650()->sub_10288670(pHint->sub_102d12e0());
				}
				else
				{
					F(int, 0x6300) = 0;
					F(int, 0x659c) = 0;
					TaskComplete();
				}
			}
			else
				TaskComplete();
			break;
		}
	case 180:
		F(int, 0x6308) = -1;
		if (F(CSTV *, 0x62ec))
			sub_102a9f40(F(CSTV *, 0x62ec), 0, 1);
		else
			TASKFAIL(0x22, 0x3874);
		break;
	case 181:
		{
			HintV *pHint = sub_1029f730(&F(int, 0x658c));
			CSTV *pEnt = sub_1029f780(&F(int, 0x658c));
			if (pEnt)
				sub_102a9f40(pEnt, pHint, 0);
			else
				TaskComplete();
			break;
		}
	case 182:
		sub_10288630()->sub_102ee250(sub_10271ff0(1, 0));
		break;
	case 183:
		sub_10288630()->sub_102ee250(sub_10271ff0(9, 0));
		break;
	case 184:
		if (F(int, 0x6308) != -1)
			sub_10289ee0(F(int, 0x6308));
		else
		{
			sub_102a97d0(0x20000000);
			TaskComplete();
		}
		break;
	case 276:
		{
			CSTV *pEnt = vfunc168();
			if (pEnt && !vfunc530(pEnt))
			{
				P4_Goal goal;
				goal.sub_102a9d20(vfunc541()->sub_102dfed0(pEnt), -1, g_1049a1ac, 0, g_10923dd8);
				float flMax = sub_10288630()->sub_102f2fc0();
				vfunc563(pEnt, &goal.dest, &goal.tolerance, &flMax);
				if (sub_10288630()->sub_102ecd20(*(NavGoal *)&goal, 2))
				{
					sub_10288630()->sub_102f2fe0(flMax);
					TaskComplete();
				}
				else
				{
					g_109f3658(2, "GetPathToLastEnemyLKP failed!!\n");
					sub_10274080(pEnt);
					TASKFAIL(0xc, 0x38d8);
				}
			}
			else
				TASKFAIL(0xc, 0x38c3);
			break;
		}
	case 277:
		{
			CSTV *pEnemy = vfunc168();
			if (!pEnemy)
				pEnemy = this;
			if (sub_102784a0(pEnemy->vfunc193(), pEnemy))
			{
				FM(float, 0x5cf0) = CURTIME + pTask->flTaskData;
				TaskComplete();
			}
			else
			{
				P4_Vec coverPos;
				coverPos.sub_1002c900();
				if (sub_10288630()->sub_102edc80(*pEnemy->vfunc217(), pEnemy->vfunc193(), 0, vfunc550(), &coverPos, pEnemy))
				{
					P4_Goal goal;
					goal.sub_102a9dc0(6, coverPos, 0x13, g_1049a1b0, 0, g_10923dd8, g_1049a1b4, 0);
					sub_10288630()->sub_102ecd20(*(NavGoal *)&goal, 0);
					if (HINT)
					{
						sub_10288630()->sub_102ee410(vfunc569(HINT));
						sub_10288630()->sub_102ee530(HINT->sub_102d11f0());
					}
					FM(float, 0x5cf0) = CURTIME + pTask->flTaskData;
				}
				else
					TASKFAIL(8, 0x3907);
			}
			break;
		}
	case 139:
	case 293:
		TaskComplete();
		break;
	case 278:
		if (sub_102a9770(0x40000))
			TaskComplete();
		else
			sub_10289ee0(0x55);
		break;
	case 279:
		if (sub_102a9770(0x40000))
			TaskComplete();
		else
			sub_102a1620(this);
		break;
	case 280:
		if (sub_102a9770(0x40000))
			TaskComplete();
		else if (!sub_102a1560(this))
			sub_102a1620(this);
		break;
	case 281:
		FM(float, 0x6330) = pTask->flTaskData;
		F(bool, 0x6334) = 1;
		TaskComplete();
		break;
	case 282:
		FM(float, 0x6330) += g_1070b244->RandomFloat(0, pTask->flTaskData);
		TaskComplete();
		break;
	case 283:
	case 284:
		{
			int act = (pTask->iTask == 284) ? 0x14 : 0x10;
			if (sub_10295460(act, 0) == -1)
			{
				int act2 = (pTask->iTask == 284) ? 0x13 : 9;
				if (sub_102a1650(act2, 180.0f, F(int, 0x6330)))
				{
					sub_102a9940(180.0f);
					{ float t = CURTIME; F(float, 0x5db4) = t + F(float, 0x6330); }
					sub_10289ee0(act2);
				}
				else
					TASKFAIL(0x15, 0x396f);
			}
			else
			{
				Vector pos = *vfunc217();
				pos.z += vfunc522() * 0.5f;
				Vector end = pos.sub_10146190(((const P4_Vec &)F(Vector, 0x6290).sub_100a19c0(50.0f)).sub_100a19c0(F(int, 0x6330)));
				P4_Trace tr;
				tr.sub_102a9670();
				sub_102a98c0()->sub_102a99e0(pos, end, sub_102a9710(), sub_102a9730(), 0x202400b, &tr, 1, 0);
				if (tr.fraction == 1.0f)
				{
					{ float t = CURTIME; F(float, 0x5db4) = t + F(float, 0x6330); }
					sub_10289ee0(act);
				}
				else
					TASKFAIL(0xe, 0x3997);
			}
			break;
		}
	case 290:
		{
			int i = 0;
			if (sub_10295460(0x1121, 0) == -1)
			{
				TASKFAIL(0x15, 0x39a7);
				i = 1000;
			}
			int dir = F(P4_HL *, 0x65e8)->sub_1025df40(this, vfunc167());
			if (dir == 0)
				dir = ((P4_Rand *)g_1070b244)->RandomInt(0, 1) ? -1 : 1;
			for (; i < 2; i++)
			{
				float yaw = g_1070b244->RandomFloat(dir * 80.0f, dir * 120.0f);
				if (sub_102a1650(0x1121, yaw, F(int, 0x6330)))
				{
					sub_102a9940(yaw);
					{ float t = CURTIME; F(float, 0x5db4) = t + F(float, 0x6330); }
					sub_10289ee0(0x1121);
					return;
				}
				dir = -dir;
			}
			if (i != 1000)
				TASKFAIL(0xe, 0x39d5);
			break;
		}
	case 291:
	case 292:
		{
			int i = 0; int act = 0x1121;
			float flDist = vfunc418(pTask->flTaskData);
			CSTV *pEnt = vfunc168();
			
			float flEnemyDist = 0;
			if (pEnt)
				flEnemyDist = ((P4_Vec *)vfunc217())->sub_102a9570(*pEnt->vfunc217());
			else
			{
				TASKFAIL(6, 0x39ec);
				i = 1000;
			}
			if (g_10924890.sub_102a9640() > 0)
				flDist = g_10924890.sub_102a9640();
			if (flDist == g_104492dc && sub_1032e7b0(this))
				flDist = WEAPON(0x8c0) * 0.75 + WEAPON(0x8b8) * 0.25f;
			if (sub_10295460(act, 0) == -1)
			{
				act = 9;
				if (sub_10295460(act, 0) == -1)
				{
					TASKFAIL(0x15, 0x3a06);
					return;
				}
			}
			for (; i < 2; i++)
			{
				float yaw = vfunc603(&flEnemyDist, &flDist);
				if (sub_102a1650(act, yaw, F(int, 0x6330)))
				{
					sub_102a9940(yaw);
					{ float t = CURTIME; F(float, 0x5db4) = t + F(float, 0x6330); }
					sub_10289ee0(act);
					return;
				}
			}
			if (i != 1000)
				TASKFAIL(0xe, 0x3a30);
			break;
		}
	case 146:
		vfunc266();
		sub_10289ee0(F(int, 0x6068));
		break;
	case 147:
		vfunc266();
		sub_102a9750(F(int, 0x64b8));
		sub_102a96b0(F(Vector, 0x6004));
		sub_100b2770(F(Vector, 0x6004));
		vfunc208(0);
		sub_1027d9b0(1);
		sub_102a99a0(1);
		sub_10289ee0(F(int, 0x6068));
		break;
	case 148:
		{
			int seq = sub_10345480();
			if (seq >= 0)
				vfunc311(0x8f, 0x8f, seq);
			else
				sub_10289ee0(0x8f);
			break;
		}
	case 150:
		FM(float, 0x6014) = CURTIME + 0.01f;
		break;
	case 151:
		sub_102c4e80();
		sub_100b2770(F(Vector, 0x6004));
		break;
	case 149:
	case 152:
		sub_102c41b0("impact_dust_emitter", 0, 0, 0);
		break;
	case 153:
		{
			P4_Vec pos;
			pos.sub_1002c900();
			P4_Ang ang;
			ang.sub_102a95c0();
			sub_10092610("Bip01 Spine2", pos, ang);
			FM(float, 0x6018) = CURTIME;
			F(Vector, 0x601c).sub_1003e4b0(pos);
			break;
		}
	case 156:
		vfunc492();
		sub_10272650(0x1082);
		break;
	case 157:
		sub_10272650(0x1083);
		break;
	case 158:
		sub_10272650(0x1084);
		break;
	case 155:
		FM(float, 0x606c) = CURTIME;
		TaskComplete();
		break;
	case 285:
		sub_102e0b40(sub_10288650());
		sub_10288650()->sub_10288670(sub_10288590(*F(P4_Ang, 0x5dc4).sub_102a95e0(1)));
		break;
	case 286:
		g_1073dc28.sub_101f5950(this, (int)pTask->flTaskData, 2, 1.0f, 1.25f);
		TaskComplete();
		break;
	case 287:
		{
			P4_Vec pos;
			pos.sub_1002c900();
			Vector eye = F(Vector, 0x5dd0).sub_1011e060(F(Vector, 0x184));
			if (sub_10288630()->sub_102edaa0(F(Vector, 0x5dd0), eye, 0, 4096.0f, 1.0f, 1, &pos))
				sub_10288630()->sub_102ecd20(*(NavGoal *)P4_Goal().sub_102a9d20(pos, 0x13, g_1049a1b0, 0, g_10923dd8), 0);
			else
				TASKFAIL(0xb, 0x3ac1);
			break;
		}
	case 289:
		if (pTask->flTaskData != g_104454c4)
		{
			sub_102a9800(0x80000001);
			F(Vector, 0x65d0).sub_1003e4b0(vfunc16());
			vfunc15(Vector().sub_100f2f90(60.0f, 60.0f, 80.0f));
		}
		else
		{
			vfunc15(F(Vector, 0x65d0));
			F(Vector, 0x65d0).sub_1003e4b0(Vector().sub_100f2f90(-1.0f, -1.0f, -1.0f));
			sub_102a9830(0x80000001);
		}
		TaskComplete();
		break;
	case 296:
		{
			FM(float, 0x5db4) = CURTIME + FM(float, 0x6330);
			int act;
			switch (((P4_Rand *)g_1070b244)->RandomInt(0, 1))
			{
			case 0:
				act = 1;
				break;
			case 1:
				act = 3;
				break;
			}
			sub_10289ee0(sub_10271ff0(act, 0));
			break;
		}
	case 297:
		FM(float, 0x5bac) = vfunc418(pTask->flTaskData);
		TaskComplete();
		break;
	case 298:
		FM(float, 0x5bac) += vfunc418(pTask->flTaskData);
		TaskComplete();
		break;
	case 301:
		FM(float, 0x5bac) -= g_1070b244->RandomFloat(0, vfunc418(pTask->flTaskData));
		TaskComplete();
		break;
	case 300:
		FM(float, 0x5bac) -= vfunc418(pTask->flTaskData);
		TaskComplete();
		break;
	case 299:
		FM(float, 0x5bac) += g_1070b244->RandomFloat(0, vfunc418(pTask->flTaskData));
		TaskComplete();
		break;
	case 302:
		sub_102e0b40(sub_10288650());
		sub_10288650()->sub_102e2020(F(Vector, 0x5dd0), 0);
		vfunc572();
		break;
	case 305:
		if (pTask->flTaskData != g_104454c4)
		{
			sub_102a9800(0x80001000);
			sub_1026d130();
			F(P4_Out, 0x5fd4).sub_100cd660(this, this, 0);
		}
		else
		{
			sub_1026d160();
			sub_102a9830(0x80001000);
			F(P4_Out, 0x5fec).sub_100cd660(this, this, 0);
		}
		TaskComplete();
		break;
	case 140:
		sub_10289ee0(0x1155);
		break;
	case 311:
		if (sub_10295460(F(int, 0x65e4), 1))
			sub_10289ee0(F(int, 0x65e4));
		else
			vfunc448(0x15);
		break;
	case 312:
		{
			P4_Squad *pSquad = sub_102a9910();
			if (pSquad && vfunc167())
				pSquad->sub_103161a0(vfunc167());
			TaskComplete();
			break;
		}
	case 313:
		sub_102e0b40(sub_10288650());
		sub_10289ee0(0x2b);
		break;
	case 314:
		{
			P4_Vec v;
			v.sub_1002c900();
			sub_102a9750(F(int, 0x64b8));
			sub_102c4c50(&v, F(int, 0x64b4), &F(Vector, 0x649c), &F(Vector, 0x64a8));
			((P4_MotorVt *)sub_10288650())->vfunc6(v);
			sub_1027d9b0(1);
			sub_102a99a0(1);
			break;
		}
	case 315:
		sub_102e0b40(sub_10288650());
		sub_10289ee0(0x30);
		break;
	case 316:
		sub_102e0b40(sub_10288650());
		sub_10289ee0(0x32);
		break;
	case 317:
		F(bool, 0x63d8) = pTask->flTaskData != g_104454c4;
		break;
	case 318:
		sub_1018e790(this, sub_102a9860(pTask));
		TaskComplete();
		break;
	case 319:
		sub_1018e910(this);
		TaskComplete();
		break;
	case 320:
		sub_1018e9d0(this, (int)pTask->flTaskData);
		TaskComplete();
		break;
	case 321:
		sub_1018eab0(this, pTask->flTaskData != g_104454c4);
		TaskComplete();
		break;
	case 322:
		if (sub_1018eb50(this, pTask->flTaskData))
			TaskComplete();
		break;
	case 323:
		sub_1018ecf0(this, pTask->flTaskData);
		TaskComplete();
		break;
	case 324:
		sub_1018ec20(this, pTask->flTaskData);
		TaskComplete();
		break;
	case 325:
		vfunc243(vfunc244(0));
		TaskComplete();
		break;
	case 326:
		F(Vector, 0x5db8).sub_1003e4b0(F(Vector, 0x62a8));
		F(Vector, 0x5dc4).sub_1011d2e0(F(Vector, 0x62b4));
		TaskComplete();
		break;
	case 327:
		{
			P4_Vec coverPos;
			coverPos.sub_1002c900();
			EHView &h = F(EHView, 0x5b7c);
			if (h.sub_100d1590())
			{
				Vector pos = *h.sub_100d15d0()->vfunc217();
				Vector eye = h.sub_100d15d0()->vfunc193();
				if (sub_10288630()->sub_102edc80(pos, eye, 32.0f, vfunc550(), &coverPos, this))
				{
					P4_Goal goal;
					goal.sub_102a9d20(coverPos, 0x13, g_1049a1b0, 0, g_10923dd8);
					sub_10288630()->sub_102ecd20(*(NavGoal *)&goal, 0);
					FM(float, 0x5cf0) = CURTIME + pTask->flTaskData;
				}
				else
					TASKFAIL(8, 0x3bdb);
			}
			else
				TASKFAIL(0x21, 0x3be0);
			break;
		}
	case 328:
		{
			EHView &h = F(EHView, 0x5b7c);
			if (h.sub_100d1590())
			{
				sub_10297940(h.sub_100d15d0()->vfunc217());
				sub_102a18a0(pTask);
			}
			else
				TASKFAIL(0x21, 0x3bee);
			break;
		}
	case 232:
		F(int, 0x200) = 1;
		TaskComplete();
		break;
	case 329:
		{
			int act = (int)pTask->flTaskData;
			if (sub_10295460(act, 0) == -1)
			{
				act = 0x1d;
				if (sub_10295460(act, 0) == -1)
					act = 1;
			}
			sub_10272650(act);
			if (act == 1)
				TaskComplete();
			break;
		}
	default:
		sub_102827f0(pTask);
		break;
	case 5:
	case 234:
	case 235:
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x102a9540 size=0x13
struct CVector2Dot {
    float m_x;
    float m_y;
    float sub_102a9540(const CVector2Dot *other);
};

// TARGET: sub_102a9540
float CVector2Dot::sub_102a9540(const CVector2Dot *other)
{
    return other->m_x * m_x + other->m_y * m_y;
}
// END FUNCTION

// FUNCTION: 0x102a9570 size=0x38
// TARGET: sub_102a9570
#include "Vector.h"

float __fastcall sub_102a9570(Vector *a, int unused, Vector *b)
{
    float dx = a->x - b->x;
    float dy = a->y - b->y;
    float dz = a->z - b->z;
    float sum = dz * dz + dx * dx;
    return FastSqrt(sum + dy * dy);
}
// END FUNCTION

// FUNCTION: 0x102a95c0 size=0x3
struct CUnknown102a95c0 { void * sub_102a95c0(); };
void * CUnknown102a95c0::sub_102a95c0()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x102a95e0 size=0xa
struct CUnknown102a95e0 { int a[1]; int *sub_102a95e0(int i); };
// TARGET: CUnknown102a95e0::sub_102a95e0
int *CUnknown102a95e0::sub_102a95e0(int i) { return &a[i]; }
// END FUNCTION

// FUNCTION: 0x102a9600 size=0xa
struct CUnknown102a9600 { float a[1]; float sub_102a9600(int i); };
// TARGET: CUnknown102a9600::sub_102a9600
float CUnknown102a9600::sub_102a9600(int i) { return a[i]; }
// END FUNCTION

// FUNCTION: 0x102a9620 size=0x6
struct CUnknown102a9620 { int sub_102a9620(); };
int CUnknown102a9620::sub_102a9620()
{
    return (unsigned)(*(int *)this) >> 0xd;
}
// END FUNCTION

// FUNCTION: 0x102a9640 size=0x1f
struct CUnk102a9640Obj
{
    virtual void vfunc0();
    virtual char vfunc1();
    char pad[0x28 - 4];
    float m_28;
};
struct CUnk102a9640
{
    char pad[4];
    CUnk102a9640Obj *m_4;
    float sub_102a9640();
};
float CUnk102a9640::sub_102a9640()
{
    if (m_4->vfunc1())
    {
        return 0.0f;
    }
    return m_4->m_28;
}
// END FUNCTION

// FUNCTION: 0x102a9670 size=0x3
struct CUnknown102a9670 { void * sub_102a9670(); };
void * CUnknown102a9670::sub_102a9670()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x102a9690 size=0xa
struct CUnknown102a9690 { int p[3]; int a; void sub_102a9690(int v); };
// TARGET: CUnknown102a9690::sub_102a9690
void CUnknown102a9690::sub_102a9690(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x102a96b0 size=0x21
// TARGET: sub_102a96b0
void __fastcall sub_102a96b0(char *self, int dummy, const int *v)
{
    *(int *)(self + 0x3d4) = v[0];
    *(int *)(self + 0x3d8) = v[1];
    *(int *)(self + 0x3dc) = v[2];
}
// END FUNCTION

// FUNCTION: 0x102a96f0 size=0x8
struct TroikaStub;
struct TroikaStubVtbl { void (__fastcall *f[256])(TroikaStub *); };
struct TroikaStub { TroikaStubVtbl *vt; };

void __fastcall sub_102a96f0(TroikaStub *o)
{
	o->vt->f[220](o);
}
// END FUNCTION

// FUNCTION: 0x102a9710 size=0xf
struct CSecondaryThunkBase { virtual void vfunc0(); virtual int vfunc1(); virtual int vfunc2(); };
struct CThunkOwnerTroika { int sub_102a9710(); };
// TARGET: CThunkOwnerTroika::sub_102a9710
int CThunkOwnerTroika::sub_102a9710()
{
    return ((CSecondaryThunkBase *)((char *)this + 0x270))->vfunc1();
}
// END FUNCTION

// FUNCTION: 0x102a9730 size=0xf
struct CSecondaryThunkBase { virtual void vfunc0(); virtual int vfunc1(); virtual int vfunc2(); };
struct CThunkOwnerTroika { int sub_102a9730(); };
// TARGET: CThunkOwnerTroika::sub_102a9730
int CThunkOwnerTroika::sub_102a9730()
{
    return ((CSecondaryThunkBase *)((char *)this + 0x270))->vfunc2();
}
// END FUNCTION

// FUNCTION: 0x102a9750 size=0xd
#include "CUnknown102a9750.h"
void CUnknown102a9750::sub_102a9750(int value)
{
	m_unk3ec = value;
}
// END FUNCTION

// FUNCTION: 0x102a9770 size=0x14
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::sub_102a9770
bool CAI_BaseNPCTroika::sub_102a9770(unsigned int flags)
{
	return (m_flags14b8 & flags) == 0;
}
// END FUNCTION

// FUNCTION: 0x102a97a0 size=0x15
#include "CAI_BaseNPCTroika.h"

void CAI_BaseNPCTroika::sub_102a97a0(unsigned int flags)
{
	*(unsigned int *)(m_pad0004 + 0x14b8 - 4) |= flags;
}
// END FUNCTION

// FUNCTION: 0x102a97d0 size=0x17
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::sub_102a97d0(unsigned int flags)
{
	*(unsigned int *)((char *)this + 0x14b8) &= ~flags;
}
// END FUNCTION

// FUNCTION: 0x102a9800 size=0x15
#include "CAI_BaseNPCTroika.h"

void CAI_BaseNPCTroika::sub_102a9800(unsigned int flags)
{
	*(unsigned int *)(m_pad0004 + 0x14bc - 4) |= flags;
}
// END FUNCTION

// FUNCTION: 0x102a9830 size=0x17
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::sub_102a9830(unsigned int flags)
{
	*(unsigned int *)((char *)this + 0x14bc) &= ~flags;
}
// END FUNCTION

// FUNCTION: 0x102a9860 size=0x15
#include "CUnknown1024b2d0.h"
struct CUnknown102a9860
{
	char m_pad0000[4];
	CUnknown1024b2d0Id m_id4;
};

extern CUnknown1024b2d0 g_10936b74;

// TARGET: sub_102a9860
const char *__fastcall sub_102a9860(CUnknown102a9860 *self)
{
	return g_10936b74.sub_1024b830(self->m_id4);
}
// END FUNCTION

// FUNCTION: 0x102a9890 size=0x12
unsigned int *__fastcall sub_102a9890(unsigned int *p)
{
    int i;
    for (i = 0; i < 14; i++) {
        p[i] = 0;
    }
    return p;
}
// END FUNCTION

// FUNCTION: 0x102a98c0 size=0x7
struct CUnknown102a98c0 { int sub_102a98c0(); };
int CUnknown102a98c0::sub_102a98c0()
{
    return *(int *)((char *)this + 0x5d40);
}
// END FUNCTION

// FUNCTION: 0x102a98e0 size=0x17
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::sub_102a98e0(unsigned int flags)
{
	*(unsigned int *)((char *)this + 0x5d8c) &= ~flags;
}
// END FUNCTION

// FUNCTION: 0x102a9910 size=0x14
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::sub_102a9910
int CAI_BaseNPCTroika::sub_102a9910()
{
	int n = *(int *)((char *)this + 0x5bb0);
	if (n <= 0)
	{
		return *(int *)((char *)this + 0x5da4);
	}
	else
	{
		return 0;
	}
}
// END FUNCTION

// FUNCTION: 0x102a9940 size=0xd
#include "CUnknown102a9750.h"
void CUnknown102a9750::sub_102a9940(int value)
{
	m_unk63ec = value;
}
// END FUNCTION

// FUNCTION: 0x102a9960 size=0x2d
#include "CBaseEntity.h"
#include "CBasePlayer.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	unsigned int m_serial;
	int m_pad;
};

struct EntList {
	int m_hdr;
	EntInfo m_entries[1];
};

extern EntList *g_10566458;

CBaseEntity *CBasePlayer::sub_102a9960()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x6448);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13))
			return info->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102a99a0 size=0xd
#include "CUnknown102a9750.h"
void CUnknown102a9750::sub_102a99a0(char value)
{
	m_unk6498 = value;
}
// END FUNCTION

// FUNCTION: 0x102a99c0 size=0xa
#include "CUnknown102a99c0.h"
void CUnknown102a99c0::sub_102a99c0(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x102a99e0 size=0x1d9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CAI_MoveProbe.h"
#include "CGameTrace.h"
#include "CTraceFilterNav.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "CVProfile.h"
#include "Ray_t.h"
#include "ScopeTrace.h"
#include "UTIL_Trace.h"

struct CTraceFilterNavGround102e3290
{
	int m_pad[5];
	CTraceFilterNavGround102e3290 *sub_102e3290(int a, int b);
};

struct CMoveProbeOuter
{
	char pad0000[0x368];
	int m_n368;
};

void CAI_MoveProbe::sub_102a99e0(const Vector &vecStart, const float *vecEnd, const float *vecMins, const float *vecMaxs, unsigned int collisionMask, CGameTrace *pTrace, int a6, char bGround)
{
	CVProfile *pProfile = g_109f3648;
	if (pProfile->m_enabled || !pProfile->m_bAtRoot) {
		if (pProfile->m_pCurNode->m_pszName != "CAI_MoveProbe_TraceHull")
			pProfile->m_pCurNode = pProfile->m_pCurNode->GetSubNode("CAI_MoveProbe_TraceHull", 0, "Unaccounted");
		pProfile->m_pCurNode->EnterScope();
		pProfile->m_bAtRoot = false;
	}
	if (bGround) {
		CTraceFilterNav filter;
		((CTraceFilterNavGround102e3290 *)&filter)->sub_102e3290((int)m_pOuter, ((CMoveProbeOuter *)m_pOuter)->m_n368);
		ScopeTrace scope("UTIL_TraceHull", g_106b8540);
		Ray_t ray;
		ray.sub_1006dec0(vecStart, vecEnd, vecMins, vecMaxs, a6, 0);
		g_1070b254->vfunc4(&ray, collisionMask, (CTraceFilterNoCharacterCollide *)&filter, pTrace);
		if (g_10738960.sub_1005f190())
			sub_10146570((const Vector *)&pTrace->m_startpos, (const Vector *)&pTrace->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
	} else {
		CTraceFilterNav filter;
		filter.sub_102e30d0((int)m_pOuter, ((CMoveProbeOuter *)m_pOuter)->m_n368);
		ScopeTrace scope("UTIL_TraceHull", g_106b8540);
		Ray_t ray;
		ray.sub_1006dec0(vecStart, vecEnd, vecMins, vecMaxs, a6, 0);
		g_1070b254->vfunc4(&ray, collisionMask, (CTraceFilterNoCharacterCollide *)&filter, pTrace);
		if (g_10738960.sub_1005f190())
			sub_10146570((const Vector *)&pTrace->m_startpos, (const Vector *)&pTrace->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
	}
	g_109f3648->ExitScopeInlined();
}
// END FUNCTION

// FUNCTION: 0x102a9c40 size=0x10
extern char g_106b8540[];

// TARGET: sub_102a9c40
char *__fastcall sub_102a9c40(char *pThis)
{
	char *p = *(char **)(pThis + 0x468);
	if (p == 0)
	{
		p = g_106b8540;
	}
	return p;
}
// END FUNCTION

// FUNCTION: 0x102a9c60 size=0x4
struct CUnknown102a9c60 { int sub_102a9c60(); };
int CUnknown102a9c60::sub_102a9c60()
{
    return *(int *)((char *)this + 0x30);
}
// END FUNCTION

// FUNCTION: 0x102a9c80 size=0x77
struct Vec3 { int x, y, z; };
extern Vec3 g_1093404c;
extern Vec3 g_10934060;
struct Obj {
    int f0;
    Vec3 v4;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    Vec3 v2c;
    int f38;
    int f3c;
    Obj *sub_102a9c80(int a1, int a2, int a3, int a4, int a5);
};

Obj *Obj::sub_102a9c80(int a1, int a2, int a3, int a4, int a5)
{
    f0 = a1;
    v4 = g_1093404c;
    f14 = a2;
    f10 = -1;
    f18 = -1;
    f1c = -1;
    f20 = a3;
    f24 = a4;
    f28 = a5;
    v2c = g_10934060;
    f38 = 0;
    f3c = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x102a9d20 size=0x73
#include "AI_NavGoal_t.h"
#include "CBaseEntity.h"
#include "Vector.h"
extern Vector g_10934060;	// vec3_invalid

AI_NavGoal_t::AI_NavGoal_t(const Vector &dest, Activity activity, float tolerance, unsigned flags, CBaseEntity *pTarget)
    : type(GOALTYPE_LOCATION), dest(dest), destNode(-1), activity(activity), arrivalActivity(ACT_INVALID), arrivalSequence(-1),
      tolerance(tolerance), flags(flags), pTarget(pTarget), arrivalDirection(g_10934060), m_n38(0), m_n3c(0)
{
}
// END FUNCTION

// FUNCTION: 0x102a9dc0 size=0x72
struct Vec3 { int x, y, z; };
extern Vec3 g_10934060;
struct Obj {
    int f0;
    Vec3 v4;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    Vec3 v2c;
    int f38;
    int f3c;
    Obj *sub_102a9dc0(int a1, Vec3 *a2, int a3, int a4, int a5, int a6, int a7, int a8);
};

Obj *Obj::sub_102a9dc0(int a1, Vec3 *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    f0 = a1;
    v4 = *a2;
    f14 = a3;
    f10 = -1;
    f18 = -1;
    f1c = -1;
    f20 = a4;
    f24 = a5;
    f28 = a6;
    v2c = g_10934060;
    f38 = 0;
    f3c = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x102a9e60 size=0xc
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1)
	virtual void g0();
	virtual char *target();
};

float __fastcall sub_102a9e60(CSlots *self)
{
	return *(float *)(self->target() + 4);
}
// END FUNCTION

// FUNCTION: 0x102a9e80 size=0x7
struct CUnknown102a9e80 { char sub_102a9e80(); };
char CUnknown102a9e80::sub_102a9e80()
{
    return *(char *)((char *)this + 0x570);
}
// END FUNCTION

// FUNCTION: 0x102a9ea0 size=0xa
struct CUnknown102a9ea0 { int a[1]; int sub_102a9ea0(int i); };
// TARGET: CUnknown102a9ea0::sub_102a9ea0
int CUnknown102a9ea0::sub_102a9ea0(int i) { return a[i]; }
// END FUNCTION

// FUNCTION: 0x102a9ec0 size=0xe
#include "CAI_BaseNPCTroika.h"
char CAI_BaseNPCTroika::sub_102a9ec0(int index)
{
	return *((char *)this + index + 0x88);
}
// END FUNCTION

// FUNCTION: 0x102a9ee0 size=0x4
struct CUnknown102a9ee0 { int sub_102a9ee0(); };
int CUnknown102a9ee0::sub_102a9ee0()
{
    return *(int *)((char *)this + 0x30);
}
// END FUNCTION

// FUNCTION: 0x102a9f00 size=0x3
struct CUnknown102a9f00 { void * sub_102a9f00(); };
void * CUnknown102a9f00::sub_102a9f00()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x102a9f20 size=0x4
struct CUnknown102a9f20 { int sub_102a9f20(); };
int CUnknown102a9f20::sub_102a9f20()
{
    return *(int *)((char *)this + 0x24);
}
// END FUNCTION

// FUNCTION: 0x102a9f40 size=0x23c
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_InterestingPlace.h"
#include "CAI_Motor.h"
#include "CAI_Hint.h"
#include "COutputEvent.h"
#include "CEntityVSlots.h"

class CUnk102da7c0
{
public:
	void sub_102da7c0(void *p, char a, char b);
};

class CUnknown102dae70
{
public:
	void *sub_102dae70();
};

struct COwnerView;
void * __fastcall sub_102daea0(COwnerView *p);
float __fastcall sub_102d12e0(void *p);
int __cdecl sub_10412520(int n);
void __cdecl sub_10411f90();
void __fastcall sub_102e0b40(float *p);

extern void (*g_109f364c)(const char *pszFmt, ...);

void CAI_BaseNPCTroika::sub_102a9f40(CAI_InterestingPlace *pPlace, CAI_Hint *pHint, char bFlag)
{
	((CUnk102da7c0 *)pPlace)->sub_102da7c0(this, bFlag, 1);
	((COutputEvent *)((char *)this + 0x5f74))->sub_100cd660(pPlace, this, 0);
	m_b62e8 = 1;
	const char *pszName = (const char *)((CUnknown102dae70 *)pPlace)->sub_102dae70();
	if (*pszName)
	{
		int activity = sub_10412520((int)pszName);
		if (activity == -1)
		{
			sub_10411f90();
			g_109f364c("Can not find interest into activity '%s' in the activity list.  Defaulting to ACT_IDLE.\n", pszName);
			activity = 1;
		}
		m_flags14b8 |= 0x20000000;
		m_n6304 = 1;
		CAI_BaseNPC::sub_10289ee0(activity);
		m_flNextInterestChangeTime = -1.0f;
	}
	else
	{
		const char *pszActivity = (const char *)sub_102daea0((COwnerView *)pPlace);
		int activity = sub_10412520((int)pszActivity);
		if (activity == -1)
		{
			sub_10411f90();
			g_109f364c("Can not find interest activity '%s' in the activity list.  Defaulting to ACT_IDLE.\n", pszActivity);
			activity = 1;
		}
		m_n6304 = 2;
		CAI_BaseNPC::sub_10289ee0(activity);
		m_flNextInterestChangeTime = enginerandom->vfunc1(2.0f, 10.0f) + gpGlobals->curtime;
	}
	m_f5db4 = enginerandom->vfunc1(pPlace->m_fMinStayTime, pPlace->m_fMaxStayTime) + gpGlobals->curtime;
	sub_102e0b40((float *)*(void **)((char *)this + 0x5d44));
	if (pPlace->m_bMatchOrientation)
	{
		if (pHint)
		{
			CAI_Motor *pMotor = *(CAI_Motor **)((char *)this + 0x5d44);
			float flYaw = sub_102d12e0(pHint);
			if (pMotor->m_28)
			{
				if (flYaw >= 180.0f)
					flYaw -= 180.0f;
				else
					flYaw += 180.0f;
			}
			if (pMotor->m_1c == 0x43340000)
				pMotor->m_34 = flYaw;
			else
				pMotor->m_34 = pMotor->sub_102e0a80(flYaw);
			return;
		}
		Vector *pAngles = ((CEntityVSlots *)pPlace)->slot221();
		float flYaw = (float)(unsigned short)(int)(pAngles->y * 182.04445f) * 0.005493164f;
		CAI_Motor *pMotor = *(CAI_Motor **)((char *)this + 0x5d44);
		if (pMotor->m_28)
		{
			if ((float)(unsigned short)(int)(pAngles->y * 182.04445f) * 0.005493164f >= 180.0f)
				flYaw = (float)(unsigned short)(int)(pAngles->y * 182.04445f) * 0.005493164f - 180.0f;
			else
				flYaw = (float)(unsigned short)(int)(pAngles->y * 182.04445f) * 0.005493164f + 180.0f;
		}
		if (pMotor->m_1c == 0x43340000)
			pMotor->m_34 = flYaw;
		else
			pMotor->m_34 = pMotor->sub_102e0a80(flYaw);
	}
}
// END FUNCTION

// FUNCTION: 0x102aa210 size=0x34b
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CUnknown10290040.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_Motor.h"
#include "CEntityVSlots.h"
#include <string.h>

struct CUnk102dcc20;
struct CUnknown102db760 {
	CUnk102dcc20 *sub_102db760();
	const char *sub_1000b5cd();
};
struct CUnknown102daef0 {
	const char *sub_102daef0();
};
struct CUnk102dcc20 {
	CEntityVSlots *sub_102dcc20();
	char m_pad[0x514];
	char m_b514;
	bool ShouldFace() const { return m_b514 != 0; }
};
struct CBCCUnit : CBaseCombatCharacter {
	void sub_103281b0(const char *pszBone, int a, int b);
};
const char *__fastcall sub_102daea0(void *p);
const char *sub_1025d730(int act);
int sub_10412520(const char *name);
void sub_10411f90();
extern int g_1094afe8[];
__declspec(dllimport) void DevMsg(const char *pMsg, ...);
__declspec(dllimport) void DevWarning(const char *pMsg, ...);
__declspec(dllimport) int Q_strnicmp(const char *s1, const char *s2, int n);

struct CTroikaView {
	char m_pad0[0x65c];
	char m_b65c;
	char m_b65d;
	char m_pad1[0x14bc - 0x65e];
	unsigned int m_flags14bc;
	char m_pad2[0x5d44 - 0x14c0];
	CAI_Motor *m_pMotor;
	char m_pad3[0x63d4 - 0x5d48];
	float m_f63d4;
	CAI_Motor *GetMotor() { return m_pMotor; }
};

// TARGET: CAI_BaseNPCTroika::sub_102aa210
char CAI_BaseNPCTroika::sub_102aa210(void *pInterest)
{
	CTroikaView *v = (CTroikaView *)this;
	bool bOut = false;
	bool bFlag = vfunc251();
	if (*(int *)&v->m_f63d4 != 0xbf800000 && v->m_b65d) {
		if (gpGlobals->curtime >= v->m_f63d4 && v->m_b65c)
			bFlag = true;
	} else if (vfunc251()) {
		switch (m_n6304) {
		case 1:
			m_n6304 = 2;
			bFlag = true;
			break;
		case 2:
			bFlag = true;
			break;
		case 3:
			m_flags14b8 &= 0xdfffffff;
			((CBCCUnit *)this)->sub_103281b0("Bip01", 0, 1);
			m_f5db4 = gpGlobals->curtime;
			if ((v->m_flags14bc & 8) == 8) {
				bOut = true;
				v->m_flags14bc &= 0x7ffffff7;
			}
			break;
		default:
			bFlag = true;
			break;
		}
	}
	CUnk102dcc20 *tgt = ((CUnknown102db760 *)pInterest)->sub_102db760();
	if (tgt) {
		const char *name = sub_1025d730(pcd_stage(m_nState0fec));
		if (name) {
			if (Q_strnicmp(sub_102daea0(pInterest), name, strlen(name)))
				bFlag = true;
			CEntityVSlots *ent = tgt->sub_102dcc20();
			if (ent && ent != (CEntityVSlots *)this) {
				sub_10279cc0((CBaseEntity *)ent);
				if (tgt->ShouldFace()) {
					v->GetMotor()->sub_102e2020((const float *)ent->slot217(), 0);
					if (!((CUnknown10290040 *)this)->sub_10278c80()) {
						float f = *(float *)&v->GetMotor()->m_38 * 0.75;
						v->GetMotor()->sub_102e1e20((int)(f < 1.0f ? 1.0f : f));
					}
				}
			}
		} else {
			for (int i = 10; i; i--) {
				int act = m_nState0fec;
				DevMsg("****  ERROR!!! FIX THIS!!! Failed to match name to activity %d for interesting place '%s'.\n", act, ((CUnknown102db760 *)pInterest)->sub_1000b5cd());
				DevMsg("****                       It needs to be added to game_shared/all_activities.inc\n");
				DevMsg("****                       Best guess at activity name...'%s'.\n", &g_1094afe8[m_nState0fec * 0x11]);
			}
		}
	}
	if (bFlag) {
		const char *s = sub_102daea0(pInterest);
		int act = sub_10412520(s);
		if (act == -1) {
			sub_10411f90();
			DevWarning("Can not find interest activity '%s' in the activity list.  Defaulting to ACT_IDLE.\n", s);
			act = 1;
		}
		if (act != m_nState0fec || !v->m_b65d)
			sub_10289ee0(act);
		v->m_f63d4 = enginerandom->vfunc1(2.0f, 10.0f) + gpGlobals->curtime;
	}
	if (gpGlobals->curtime >= m_f5db4 || (v->m_flags14bc & 8) == 8) {
		if ((m_flags14b8 & 0x20000000) == 0x20000000) {
			bool bStart = false;
			switch (m_n6304) {
			case 1:
				break;
			case 2:
				bStart = true;
				break;
			case 3:
				break;
			default:
				bStart = true;
				break;
			}
			if (bStart)
			{
				const char *s = ((CUnknown102daef0 *)pInterest)->sub_102daef0();
				int act = sub_10412520(s);
				if (act == -1) {
					sub_10411f90();
					DevWarning("Can not find interest outof activity '%s' in the activity list.  Defaulting to ACT_IDLE.\n", s);
					act = 1;
				}
				m_n6304 = 3;
				sub_10289ee0(act);
				v->m_f63d4 = -1.0f;
				m_f5db4 = gpGlobals->curtime + 0.5f;
			}
		} else {
			bOut = true;
		}
	}
	v->GetMotor()->sub_102e1e20(-1);
	return bOut;
}
// END FUNCTION

// FUNCTION: 0x102aa640 size=0x1b0
#include "CAI_Navigator.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_TroikaLink.h"
#include "Vector.h"
struct AI_NavGoal_t
{
	int m_iType;
	Vector m_vecDest;
	int m_nNodeID;
	int m_hTarget;
	int m_nArrivalSeq;
	int m_nArrivalAct;
	float m_flSpeed;
	int m_nFlags;
	int m_n28;
	Vector m_vec2c;
	int m_n38;
	int m_n3c;
};

extern int g_106c994c;
extern int g_10923dd8;
extern Vector g_10934060;
extern float g_1049a1ac;
extern void (*g_109f3658)(int, const char *, ...);

void CAI_BaseNPCTroika::sub_102aa640(CTroikaPickHolder *pTask)
{
	CAI_NavProvider *pNode;
	CAI_NavProviderList *pList;
	Vector vecPos;
	Vector *pPos;
	int n28;
	float flSpeed;
	AI_NavGoal_t goal;
	int iNode;

	if ( pTask != 0 && pTask->m_pPick != 0 )
	{
		iNode = pTask->m_pPick->m_aNodes[pTask->m_pPick->m_iCur];
		if ( iNode != -1 )
		{
			pList = m_p5d34->m_pProviders;
			if ( iNode < 0 || iNode >= pList->m_nCount )
			{
				g_106c994c++;
				pNode = 0;
			}
			else
			{
				pNode = pList->m_ppItems[iNode];
			}

			if ( pNode != 0 )
			{
				n28 = g_10923dd8;
				flSpeed = g_1049a1ac;
				pPos = pNode->sub_102fb0d0(&vecPos, *(int *)((char *)this + 0x1568));

				goal.m_iType = 4;
				goal.m_vecDest = *pPos;
				goal.m_nNodeID = -1;
				goal.m_hTarget = -1;
				goal.m_nArrivalSeq = -1;
				goal.m_nArrivalAct = -1;
				goal.m_flSpeed = flSpeed;
				goal.m_nFlags = 0;
				goal.m_n28 = n28;
				goal.m_vec2c = g_10934060;
				goal.m_n38 = 0;
				goal.m_n3c = 0;

				if ( m_p5d34->sub_102ecd20(&goal, 2) )
				{
					sub_10273e80(0);
				}
				else
				{
					g_109f3658(2, "%s can't reach patrol point\n", sub_1000b5cd());
					m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
					m_nLine1b48 = 0x3d55;
					vfunc448(0xc);
				}
			}
			else
			{
				m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
				m_nLine1b48 = 0x3d60;
				vfunc448(0x1d);
			}
		}
		else
		{
			m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			m_nLine1b48 = 0x3d65;
			vfunc448(0x1d);
		}
	}
	else
	{
		m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		m_nLine1b48 = 0x3d39;
		vfunc448(0x1d);
	}
}
// END FUNCTION

// FUNCTION: 0x102aa860 size=0x12b
#include "CAI_BaseNPCTroika.h"
#include "CAI_TroikaLink.h"

extern int g_10923dd8;
extern Vector g_10934060;
struct CTaskPathList_102aa860 { char m_pad0000[0x10]; int m_iCur; int m_aIds[1]; };
struct CTaskPath_102aa860 { int m_pad0; CTaskPathList_102aa860 *m_pList; };
struct CTaskReq_102aa860 {
	int type;
	Vector pos;
	int a[4];
	float flValue;
	int b;
	int c;
	Vector org;
	int d;
	int e;
	CTaskReq_102aa860(int t, const Vector &v, float f, int val)
	{
		type = t;
		pos = v;
		a[0] = -1;
		a[1] = -1;
		a[2] = -1;
		a[3] = -1;
		flValue = f;
		b = 0;
		c = val;
		org = g_10934060;
		d = 0;
		e = 0;
	}
};
struct CNPCView_102aa860 {
	char m_pad0000[0x1568];
	int m1568;
	char m_pad156c[0x1b44 - 0x156c];
	const char *pFile;
	int nLine;
	char m_pad1b4c[0x5d34 - 0x1b4c];
	void *m5d34;
};
struct CTroikaNodeU : CTroikaNode { Vector sub_102fb0d0(int id); };
struct CTroikaNavU : CTroikaNav { void sub_102ecd20(CTaskReq_102aa860 *p, int n); };
extern int g_106c994c;
float sub_102d61b0(int);

// TARGET: sub_102aa860
void __fastcall sub_102aa860(CAI_BaseNPCTroika *pThis, int, CTaskPath_102aa860 *pPath)
{
	CNPCView_102aa860 *p = (CNPCView_102aa860 *)pThis;
	if (pPath && pPath->m_pList) {
		CTaskPathList_102aa860 *pList = pPath->m_pList;
		int iNode = pList->m_aIds[pList->m_iCur];
		if (iNode != -1) {
			CTroikaNodeNet *pNet = ((CTroikaNav *)p->m5d34)->m_pNet;
			CTroikaNode *pNode;
			if (iNode >= 0 && iNode < pNet->m_nNodes)
				pNode = pNet->m_ppNodes[iNode];
			else {
				g_106c994c++;
				pNode = 0;
			}
			CTaskReq_102aa860 req(4, ((CTroikaNodeU *)pNode)->sub_102fb0d0(p->m1568), sub_102d61b0(p->m1568), g_10923dd8);
			((CTroikaNavU *)p->m5d34)->sub_102ecd20(&req, 0);
		}
	} else {
		p->pFile = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		p->nLine = 0x3d73;
		pThis->vfunc448(0x1d);
	}
}
// END FUNCTION

// FUNCTION: 0x102aa9e0 size=0x5f
#include "CAI_BaseNPCTroika.h"
#include "CStepWalker.h"
struct CPatrolHolderView {
	char m_b0;
	char m_pad01[3];
	CStepWalker *m_pWalker;	// 0x04
};
void CAI_BaseNPCTroika::sub_102aa9e0(void *pHolder)
{
	CPatrolHolderView *p = (CPatrolHolderView *)pHolder;
	if (p && p->m_pWalker) {
		if (p->m_pWalker->sub_10307b80())
			sub_1029f5d0(p);
		sub_1029f650(p);
		sub_10273e80(0);
		return;
	}
	*(const char **)((char *)this + 0x1b44) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
	*(int *)((char *)this + 0x1b48) = 0x3d9c;
	vfunc448(0x1d);
}
// END FUNCTION

// FUNCTION: 0x102aaa60 size=0xcc
#include "CAI_BaseNPCTroika.h"

struct TroikaHintView
{
	char m_pad0000[0x5dc];
	int m_nType;	// 0x5dc
};

struct GlobalVarsView
{
	char m_pad0000[0xc];
	float curtime;	// 0x0c
};
extern GlobalVarsView *g_1070b228;

// TARGET: CAI_BaseNPCTroika::sub_102aaa60
bool CAI_BaseNPCTroika::sub_102aaa60(int unused)
{
	*(float *)((char *)this + 0x5d9c) = g_1070b228->curtime;
	TroikaHintView *pHint = *(TroikaHintView **)((char *)this + 0x5ddc);
	if (pHint) {
		switch (pHint->m_nType) {
		case 100:
			if (sub_102b5de0()) {
				sub_10289ee0(0x1114);
				return true;
			}
			return false;
		case 101:
			if (sub_102b5de0()) {
				sub_10289ee0(0x110f);
				return true;
			}
			return false;
		case 0x27d8:
			if (sub_102b5de0()) {
				if (*(char *)((char *)this + 0x63fd))
					sub_10289ee0(0x111f);
				else
					sub_10289ee0(0x1120);
				return true;
			}
			return false;
		default:
			if (!sub_10014df8(99))
				goto sched;
			return false;
		}
	} else if (!sub_10014df8(99)) {
sched:
		sub_10289ee0(0x19);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102aab70 size=0x126
#include "CAI_BaseNPCTroika.h"
#include "CAI_Motor.h"
#include "CUnknown102e0150.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

static inline CGlobalEntityList_Ent *LookupEntity(unsigned int h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return s->m_pEntity;
	}
	return 0;
}

void CAI_BaseNPCTroika::sub_102aab70(int unused)
{
	Vector vecPos;
	if (m_flags14bc & 0x10) {
		if (vfunc167()) {
			vfunc541()->sub_102dfed0(&vecPos, (CBaseEntity *)vfunc167());
			if (!vfunc364((const float *)&vecPos))
				(*(CAI_Motor **)((char *)this + 0x5d44))->sub_102e20b0((const float *)&vecPos, -2.0f);
		}
	} else if (m_flags14bc & 0x20) {
		if (LookupEntity(*(volatile unsigned int *)((char *)this + 0x5ce4))) {
			Vector *pOrigin = ((CEntityVSlots *)LookupEntity(*(unsigned int *)((char *)this + 0x5ce4)))->slot217();
			vecPos = *pOrigin;
			if (!vfunc364((const float *)&vecPos))
				(*(CAI_Motor **)((char *)this + 0x5d44))->sub_102e20b0((const float *)&vecPos, -2.0f);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102aacf0 size=0x1c9c
#include "CNPC_VTzimisce.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CAI_BaseNPCTroika.h"
#include "CVDmg_t.h"
#include "CVStatList_t.h"
#include "globalvars.h"
#include "Vector.h"
#include "ehandle.h"

extern float g_104454c4;
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

// same-unit callees compiled before this function (VC6 knows they keep ecx / edx)
struct NT_Obj { char pad[0x5dc]; int type; };
struct NT_N { char pad[0x5ddc]; NT_Obj *pObj; char pad2[0x63fd - 0x5ddc - 4]; char flag; };
#pragma auto_inline(off)
namespace block_102aacf0 {
int __fastcall sub_102a13d0(NT_N *n)
{
	if (n->pObj) {
		switch (n->pObj->type) {
		case 100: return 0x1110;
		case 101: return 0x110c;
		case 0x27d8: return n->flag ? 0x111d : 0x111e;
		}
	}
	return -1;
}
int __fastcall sub_102a1510(NT_N *p)
{
	if (p->pObj) {
		switch (p->pObj->type) {
		case 100: return 0x1111;
		case 101: return 0x110d;
		case 0x27d8: return 0x55;
		}
	}
	return -1;
}
}
#pragma auto_inline(on)
using namespace block_102aacf0;
bool __fastcall sub_102a1620(NT_N *p);
bool __fastcall sub_102a15c0(NT_N *p);

struct Bits204 { unsigned int a : 10; unsigned int b10 : 1; };
struct Bits268 { unsigned int a : 12; unsigned int b12 : 1; };
struct TaskV { int iTask; float flTaskData; };

#define TV_V(n) virtual void tv##n();
#define TV_V10(p) TV_V(p##0) TV_V(p##1) TV_V(p##2) TV_V(p##3) TV_V(p##4) TV_V(p##5) TV_V(p##6) TV_V(p##7) TV_V(p##8) TV_V(p##9)

struct EntV
{
	TV_V10(0) TV_V10(1) TV_V10(2) TV_V10(3) TV_V10(4) TV_V10(5) TV_V10(6) TV_V10(7) TV_V10(8) TV_V10(9)
	TV_V10(10) TV_V10(11) TV_V10(12) TV_V10(13) TV_V10(14) TV_V10(15) TV_V10(16) TV_V10(17) TV_V10(18) TV_V10(19)
	TV_V10(20) TV_V(210) TV_V(211) TV_V(212) TV_V(213) TV_V(214) TV_V(215) TV_V(216)
	virtual Vector *slot217();
	TV_V(218) TV_V(219)
	TV_V10(22) TV_V10(23) TV_V(240) TV_V(241)
	virtual void slot242();
	TV_V(243) TV_V(244) TV_V(245) TV_V(246) TV_V(247) TV_V(248) TV_V(249)
	TV_V10(25) TV_V10(26) TV_V10(27) TV_V10(28) TV_V10(29) TV_V10(30)
	TV_V(310) TV_V(311) TV_V(312) TV_V(313) TV_V(314)
	virtual void slot315();
	void sub_100fbbb0(float time);
	char m_pad0004[0x484 - 4];
	int m_484;
};

struct MotorV
{
	TV_V(0) TV_V(1) TV_V(2) TV_V(3) TV_V(4) TV_V(5) TV_V(6) TV_V(7)
	virtual void slot8();
	char m_pad0004[0x30 - 4];
	int m_30;
	void sub_102e20b0(const float *pPosition, float flWeight);
	void sub_102e1e20(int yawSpeed);
	void sub_102e1c10(float flIdealYaw, float flYawSpeed);
};

struct NavV
{
	int sub_102ee620();
	char sub_102ee6a0();
	bool sub_102f2ea0();
	char sub_102ee270();
	void sub_102ee250(int value);
};

struct EnemiesV
{
	Vector sub_102dfed0(EntV *pEnemy);
};

struct DmgElemV { char b[0x4c]; };
struct DmgVecV { DmgElemV *m_pMemory; int m_nAlloc; int m_nGrow; int m_Size; };

struct InfoV
{
	InfoV *sub_101c26d0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
	int m_0[4];
	Vector m_vecForce;	// 0x10
	char m_pad1c[0x4c - 0x1c];
};

struct NpcV
{
	bool Bit268_12() { bool b = (*(unsigned int *)((char *)this + 0x268) >> 12) & 1; return b; }
	MotorV *GetMotor() { return *(MotorV **)((char *)this + 0x5d44); }
	bool IsWait6014() { return gpGlobals->curtime >= *(float *)((char *)this + 0x6014); }
	bool Bit204_10() { bool b = (*(unsigned int *)((char *)this + 0x204) >> 10) & 1; return b; }
	bool IsWaitA() { return gpGlobals->curtime >= *(float *)((char *)this + 0x5db4); }
	int GetSequence() { return *(int *)((char *)this + 0x6f0); }
	bool IsActivityStarted() { return (GetSequence() == *(int *)((char *)this + 0x5ccc)); }
	bool IsWaitB() { return !(gpGlobals->curtime < *(float *)((char *)this + 0x5db4)); }

	TV_V(0) TV_V(1) TV_V(2) TV_V(3) TV_V(4) TV_V(5) TV_V(6) TV_V(7) TV_V(8) TV_V(9)
	TV_V(10) TV_V(11) TV_V(12) TV_V(13) TV_V(14) TV_V(15) TV_V(16) TV_V(17) TV_V(18) TV_V(19)
	TV_V(20) TV_V(21) TV_V(22) TV_V(23) TV_V(24) TV_V(25) TV_V(26) TV_V(27) TV_V(28) TV_V(29)
	TV_V(30) TV_V(31) TV_V(32) TV_V(33) TV_V(34) TV_V(35) TV_V(36) TV_V(37) TV_V(38) TV_V(39)
	TV_V(40) TV_V(41) TV_V(42) TV_V(43) TV_V(44) TV_V(45) TV_V(46) TV_V(47) TV_V(48) TV_V(49)
	TV_V(50) TV_V(51) TV_V(52) TV_V(53) TV_V(54) TV_V(55) TV_V(56) TV_V(57) TV_V(58) TV_V(59)
	TV_V(60) TV_V(61) TV_V(62) TV_V(63) TV_V(64) TV_V(65) TV_V(66) TV_V(67) TV_V(68) TV_V(69)
	TV_V(70) TV_V(71) TV_V(72) TV_V(73) TV_V(74) TV_V(75) TV_V(76)
	virtual void slot77();
	TV_V(78) TV_V(79) TV_V(80) TV_V(81) TV_V(82) TV_V(83) TV_V(84) TV_V(85) TV_V(86) TV_V(87)
	TV_V(88) TV_V(89) TV_V(90) TV_V(91) TV_V(92) TV_V(93) TV_V(94) TV_V(95) TV_V(96) TV_V(97)
	TV_V(98) TV_V(99) TV_V(100) TV_V(101) TV_V(102) TV_V(103) TV_V(104) TV_V(105) TV_V(106) TV_V(107)
	TV_V(108) TV_V(109) TV_V(110) TV_V(111) TV_V(112) TV_V(113) TV_V(114) TV_V(115) TV_V(116) TV_V(117)
	TV_V(118) TV_V(119) TV_V(120) TV_V(121) TV_V(122) TV_V(123) TV_V(124) TV_V(125) TV_V(126) TV_V(127)
	TV_V(128) TV_V(129) TV_V(130) TV_V(131) TV_V(132) TV_V(133) TV_V(134) TV_V(135) TV_V(136) TV_V(137)
	TV_V(138) TV_V(139) TV_V(140) TV_V(141) TV_V(142) TV_V(143)
	virtual void slot144(InfoV *pInfo);
	TV_V(145) TV_V(146) TV_V(147) TV_V(148) TV_V(149) TV_V(150) TV_V(151) TV_V(152) TV_V(153) TV_V(154)
	TV_V(155) TV_V(156) TV_V(157)
	virtual char slot158();
	TV_V(159) TV_V(160) TV_V(161) TV_V(162) TV_V(163) TV_V(164) TV_V(165) TV_V(166)
	virtual EntV *slot167();
	TV_V(168) TV_V(169) TV_V(170) TV_V(171) TV_V(172) TV_V(173) TV_V(174) TV_V(175) TV_V(176) TV_V(177)
	TV_V(178) TV_V(179) TV_V(180) TV_V(181) TV_V(182) TV_V(183) TV_V(184) TV_V(185) TV_V(186) TV_V(187)
	TV_V(188) TV_V(189) TV_V(190) TV_V(191) TV_V(192) TV_V(193) TV_V(194) TV_V(195) TV_V(196) TV_V(197)
	virtual Vector *slot198();
	TV_V(199) TV_V(200) TV_V(201) TV_V(202) TV_V(203) TV_V(204) TV_V(205) TV_V(206) TV_V(207) TV_V(208)
	TV_V(209) TV_V(210) TV_V(211) TV_V(212) TV_V(213) TV_V(214) TV_V(215) TV_V(216)
	virtual Vector *slot217();
	virtual void slot218(Vector *pAngles);
	virtual Vector *slot219();
	TV_V(220) TV_V(221) TV_V(222) TV_V(223) TV_V(224) TV_V(225) TV_V(226) TV_V(227) TV_V(228) TV_V(229)
	TV_V(230) TV_V(231) TV_V(232) TV_V(233) TV_V(234) TV_V(235) TV_V(236) TV_V(237) TV_V(238) TV_V(239)
	TV_V(240) TV_V(241) TV_V(242) TV_V(243) TV_V(244) TV_V(245) TV_V(246) TV_V(247) TV_V(248) TV_V(249)
	TV_V(250)
	virtual char slot251();
	TV_V(252) TV_V(253) TV_V(254) TV_V(255) TV_V(256) TV_V(257) TV_V(258) TV_V(259) TV_V(260) TV_V(261)
	TV_V(262) TV_V(263) TV_V(264) TV_V(265) TV_V(266) TV_V(267) TV_V(268) TV_V(269) TV_V(270) TV_V(271)
	TV_V(272) TV_V(273) TV_V(274) TV_V(275) TV_V(276) TV_V(277) TV_V(278) TV_V(279) TV_V(280) TV_V(281)
	TV_V(282) TV_V(283) TV_V(284) TV_V(285) TV_V(286) TV_V(287) TV_V(288) TV_V(289) TV_V(290) TV_V(291)
	TV_V(292) TV_V(293) TV_V(294) TV_V(295) TV_V(296) TV_V(297) TV_V(298) TV_V(299) TV_V(300) TV_V(301)
	TV_V(302) TV_V(303) TV_V(304) TV_V(305) TV_V(306) TV_V(307) TV_V(308) TV_V(309)
	virtual void slot310(int a);
	virtual void slot311(int a, int b, int c);
	TV_V(312) TV_V(313) TV_V(314) TV_V(315) TV_V(316) TV_V(317) TV_V(318) TV_V(319) TV_V(320) TV_V(321)
	TV_V(322) TV_V(323) TV_V(324) TV_V(325) TV_V(326) TV_V(327) TV_V(328) TV_V(329) TV_V(330) TV_V(331)
	TV_V(332) TV_V(333) TV_V(334) TV_V(335) TV_V(336) TV_V(337) TV_V(338) TV_V(339) TV_V(340) TV_V(341)
	TV_V(342) TV_V(343) TV_V(344) TV_V(345) TV_V(346) TV_V(347) TV_V(348) TV_V(349) TV_V(350) TV_V(351)
	TV_V(352) TV_V(353) TV_V(354) TV_V(355) TV_V(356) TV_V(357) TV_V(358) TV_V(359) TV_V(360) TV_V(361)
	TV_V(362) TV_V(363)
	virtual char slot364(Vector *pPos);
	TV_V(365) TV_V(366) TV_V(367) TV_V(368) TV_V(369) TV_V(370) TV_V(371) TV_V(372) TV_V(373) TV_V(374)
	TV_V(375) TV_V(376) TV_V(377) TV_V(378) TV_V(379) TV_V(380) TV_V(381) TV_V(382) TV_V(383) TV_V(384)
	TV_V(385) TV_V(386) TV_V(387) TV_V(388) TV_V(389) TV_V(390) TV_V(391) TV_V(392) TV_V(393) TV_V(394)
	TV_V(395) TV_V(396) TV_V(397) TV_V(398) TV_V(399) TV_V(400) TV_V(401)
	virtual void slot402();
	virtual void slot403();
	TV_V(404) TV_V(405) TV_V(406) TV_V(407) TV_V(408) TV_V(409) TV_V(410) TV_V(411) TV_V(412) TV_V(413)
	TV_V(414) TV_V(415) TV_V(416) TV_V(417) TV_V(418) TV_V(419) TV_V(420) TV_V(421) TV_V(422) TV_V(423)
	TV_V(424) TV_V(425) TV_V(426) TV_V(427) TV_V(428) TV_V(429) TV_V(430) TV_V(431) TV_V(432) TV_V(433)
	TV_V(434) TV_V(435) TV_V(436) TV_V(437) TV_V(438) TV_V(439) TV_V(440) TV_V(441) TV_V(442) TV_V(443)
	TV_V(444) TV_V(445) TV_V(446) TV_V(447)
	virtual void slot448(int code);
	TV_V(449) TV_V(450) TV_V(451) TV_V(452) TV_V(453) TV_V(454) TV_V(455) TV_V(456) TV_V(457) TV_V(458)
	TV_V(459) TV_V(460) TV_V(461) TV_V(462) TV_V(463) TV_V(464) TV_V(465) TV_V(466) TV_V(467) TV_V(468)
	TV_V(469) TV_V(470) TV_V(471) TV_V(472) TV_V(473) TV_V(474) TV_V(475) TV_V(476) TV_V(477) TV_V(478)
	TV_V(479) TV_V(480) TV_V(481) TV_V(482) TV_V(483) TV_V(484) TV_V(485) TV_V(486) TV_V(487) TV_V(488)
	TV_V(489) TV_V(490) TV_V(491) TV_V(492) TV_V(493) TV_V(494) TV_V(495) TV_V(496) TV_V(497) TV_V(498)
	TV_V(499) TV_V(500) TV_V(501) TV_V(502) TV_V(503) TV_V(504) TV_V(505) TV_V(506) TV_V(507) TV_V(508)
	TV_V(509) TV_V(510) TV_V(511) TV_V(512) TV_V(513) TV_V(514) TV_V(515) TV_V(516) TV_V(517) TV_V(518)
	TV_V(519) TV_V(520) TV_V(521) TV_V(522) TV_V(523) TV_V(524) TV_V(525) TV_V(526) TV_V(527)
	virtual void slot528();
	TV_V(529) TV_V(530) TV_V(531) TV_V(532) TV_V(533) TV_V(534) TV_V(535) TV_V(536) TV_V(537) TV_V(538)
	TV_V(539) TV_V(540)
	virtual EnemiesV *slot541();
	TV_V(542) TV_V(543) TV_V(544) TV_V(545) TV_V(546) TV_V(547) TV_V(548) TV_V(549) TV_V(550) TV_V(551)
	TV_V(552) TV_V(553) TV_V(554) TV_V(555) TV_V(556) TV_V(557) TV_V(558) TV_V(559) TV_V(560) TV_V(561)
	TV_V(562) TV_V(563) TV_V(564) TV_V(565) TV_V(566) TV_V(567) TV_V(568) TV_V(569) TV_V(570) TV_V(571)
	virtual void slot572();
	TV_V(573) TV_V(574) TV_V(575) TV_V(576) TV_V(577) TV_V(578) TV_V(579) TV_V(580) TV_V(581) TV_V(582)
	TV_V(583) TV_V(584) TV_V(585) TV_V(586) TV_V(587)
	virtual void slot588();
	TV_V(589) TV_V(590)
	virtual char slot591();
	TV_V(592) TV_V(593) TV_V(594) TV_V(595) TV_V(596) TV_V(597) TV_V(598) TV_V(599) TV_V(600) TV_V(601)
	TV_V(602) TV_V(603) TV_V(604) TV_V(605) TV_V(606) TV_V(607) TV_V(608) TV_V(609) TV_V(610) TV_V(611)
	TV_V(612) TV_V(613)
	virtual void slot614();
	TV_V(615)
	virtual void slot616();

	// direct callees (resolved by their sub_ address)
	void sub_10273e80(char flag);
	bool sub_10280a50();
	void sub_10289ee0(int activity);
	bool sub_10269aa0(int condition);
	void sub_10269b50(int condition);
	int sub_10271ff0(int act, int *pOut);
	int sub_1027a6c0();
	void sub_10272650(int act);
	int sub_10295460(int act, char b);
	char sub_10278c80();
	int sub_1027d990();
	void sub_1027d9b0(char b);
	void sub_10288780(void *pTask);
	char sub_102a0490(Vector *pDir);
	void sub_102a0870();
	char sub_102aa210(void *pInterest);
	void sub_102aa860(void *pPath);
	bool sub_102aaa60(void *pTask);
	void sub_102aab70(void *pTask);
	void *sub_1029f780(void *pPath);
	void sub_102ae750(int a, int b);
	void sub_102b53d0(int a, const char *pszWhy);
	int sub_102c1400();
	char sub_102c2430();
	char sub_102c4eb0();
	void sub_102c4e30();
	int sub_100b3700();
	void sub_100b1d10();
	int sub_1008dc40(int a, int b);
	char *sub_1008d990(int seq);
	void sub_10092610(int a, int b, int c);
	void sub_100a1250(const void *pInfo);
	void sub_103392c0(EntV *pKiller, int a, int b);
	void sub_103281b0(int boneName, char a, char b);
	void sub_1033d4b0();
	EntV *sub_1032e7b0();
	int sub_103454c0();
	int sub_10345480();
	void sub_102c4e80();
};

struct HolderV { void sub_102da600(char *pObj, char bValid, char bNotify); };
struct OutputV { void sub_100cd660(void *pActivator, void *pCaller, float flDelay); };

bool sub_101d1a90(EntV *pEye, NpcV *pNpc);
float sub_101d2c70(const Vector *v);
int sub_10412520(char *p);
void sub_10139970(const Vector &forward, Vector &angles);
float sub_10252450_dummy();
struct WeaponV { float sub_10252450(int i); };

struct CVDmgD : CVDmg_t { ~CVDmgD() { sub_101fa680(); } };
#define WD(o) (!(gpGlobals->curtime < F(float, o)))
#define F(T, o) (*(T *)((char *)this + (o)))
#define ME ((NpcV *)this)
#define MOTOR F(MotorV *, 0x5d44)
#define NAV F(NavV *, 0x5d34)
#define TaskComplete() ME->sub_10273e80(0)
#define IsActivityFinished() ME->slot251()
#define FacingIdeal() ME->sub_10278c80()
#define TaskFail(code, line) { F(const char *, 0x1b44) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"; F(int, 0x1b48) = line; ME->slot448(code); }
#define HTARGET (*(CHandle<EntV> *)&F(int, 0x5ba8))
#define HANDLE(o) (*(CHandle<EntV> *)&F(int, o))
#define LKP() ME->slot541()->sub_102dfed0(ME->slot167())

void CAI_BaseNPCTroika::vfunc444(void *pTaskRaw)
{
	TaskV *pTask = (TaskV *)pTaskRaw;
	switch (pTask->iTask)
	{
	case 0xdd:	// TASK_KNOCKOUT
		if (IsActivityFinished())
			TaskComplete();
		return;
	case 0x4b:	// TASK_SET_ACTIVITY
		if (ME->IsActivityStarted())
		{
			TaskComplete();
			break;
		}
		if (ME->IsWaitA())
			TaskComplete();
		break;
	case 2: case 0x67: case 0x68:	// TASK_WAIT, TASK_WAIT_RANDOM, TASK_WAIT_INDEFINITE
		ME->sub_102aab70(pTask);
	default:
		ME->sub_10288780(pTask);
		break;
	case 0xed:	// TASK_DO_COMFORT_LOOP
		break;
	case 5:	// TASK_WAIT_PVS
		if (ME->Bit204_10() || ME->sub_102c2430())
		{
			TaskComplete();
			return;
		}
		if (sub_101d1a90(HANDLE(0x628c).Get(), ME))
		{
			ME->slot614();
			F(float, 0x178) = gpGlobals->curtime;
			F(float, 0x6254) = gpGlobals->curtime;
			F(float, 0x6258) = gpGlobals->curtime;
			F(float, 0x625c) = gpGlobals->curtime;
			F(float, 0x6260) = gpGlobals->curtime;
			TaskComplete();
			return;
		}
		break;
	case 0x2b: case 0x31:	// TASK_FACE_IDEAL, TASK_FACE_TARGET
		if (!(F(int, 0x5d8c) & 0x2000))
			ME->slot572();
		ME->sub_10288780(pTask);
		break;
	case 0x12e:
		if (!(F(int, 0x5d8c) & 0x2000))
			ME->slot572();
		MOTOR->sub_102e1e20(-1);
		if (FacingIdeal())
			TaskComplete();
		break;
	case 0x2e:	// TASK_FACE_ENEMY
	{
		if (!(F(int, 0x5d8c) & 0x2000))
			ME->slot572();
		Vector vecTarget; if (HTARGET) vecTarget = *HTARGET->slot217(); else vecTarget = LKP();
		MOTOR->sub_102e20b0(&vecTarget.x, -1.0f);
		if (FacingIdeal())
			TaskComplete();
		break;
	}
	case 0x6e:	// TASK_WAIT_FOR_MOVEMENT
	{
		bool fTimeExpired = (pTask->flTaskData != g_104454c4 && pTask->flTaskData < gpGlobals->curtime - F(float, 0x5c4c));
		if (!fTimeExpired && NAV->sub_102ee620())
		{
			if (!NAV->sub_102ee6a0())
			{
				F(char, 0x1a40) = 0;
				ME->sub_10272650(ME->sub_1027a6c0());
				TaskComplete();
				break;
			}
			if (NAV->sub_102f2ea0())
			{
				F(char, 0x1a40) = 0;
				TaskComplete();
				break;
			}
			ME->slot528();
			return;
		}
		F(char, 0x1a40) = 0;
		TaskComplete();
		NAV->sub_102ee270();
		return;
	}
	case 0x7a:	// TASK_GET_PATH_TO_PATROL_POINT
		ME->sub_102aa860(&F(char, 0x658c));
		return;
	case 0x7b:	// TASK_GET_PATH_TO_PATROL_POINT_HUNT
		ME->sub_102aa860(&F(char, 0x6594));
		return;
	case 0xa7:
		if (!(F(int, 0x5d8c) & 0x2000))
			ME->slot572();
		MOTOR->sub_102e1e20(-1);
		if (FacingIdeal())
			TaskComplete();
		break;
	case 0xde:	// TASK_UNKNOCKOUT
		if (IsActivityFinished())
		{
			int act = F(int, 0xff0);
			switch (act)
			{
			case 0x1068:
				TaskComplete();
				F(unsigned int, 0x14b8) &= 0xbbf5ffff;
				return;
			case 0x1052:
				act = 0x1068;
				break;
			default:
				act = 0x1068;
				break;
			}
			ME->sub_10289ee0(act);
			return;
		}
		break;
	case 0x34:	// TASK_RANGE_ATTACK1
	{
		ME->sub_10280a50();
		Vector vecTarget; if (HTARGET) vecTarget = *HTARGET->slot217(); else vecTarget = LKP();
		MOTOR->sub_102e20b0(&vecTarget.x, -2.0f);
		if (F(int, 0x6490) > 0)
		{
			WeaponV *pWeapon = (WeaponV *)ME->sub_1032e7b0();
			if (!pWeapon)
				TaskComplete();
			if (gpGlobals->curtime >= pWeapon->sub_10252450(0))
			{
				F(int, 0x6490)--;
				if (!ME->sub_102aaa60(pTask))
				{
					TaskComplete();
					break;
				}
			}
			break;
		}
		if (IsActivityFinished())
			TaskComplete();
		break;
	}
	case 0x35: case 0x3e: case 0x3f:	// TASK_RANGE_ATTACK2, TASK_SPECIAL_ATTACK1, TASK_SPECIAL_ATTACK2
	{
		ME->sub_10280a50();
		Vector vecTarget; if (HTARGET) vecTarget = *HTARGET->slot217(); else vecTarget = LKP();
		MOTOR->sub_102e20b0(&vecTarget.x, -2.0f);
	}
	case 0x93:	// TASK_MELEE_FLYING_KNOCKBACK_INTO, TASK_DO_JUMP_ACTIVITY
		if (IsActivityFinished())
			TaskComplete();
		break;
	case 0x36: case 0x37: case 0x8c: case 0x9a:	// TASK_MELEE_ATTACK1/2, TASK_MELEE_DODGE_ATTACK, TASK_MELEE_KICK
		ME->sub_10280a50();
		if (ME->slot167() && ME->slot591())
		{
			Vector vecEnemy; vecEnemy = *ME->slot167()->slot217();
			MOTOR->sub_102e20b0(&vecEnemy.x, -2.0f);
		}
		if (IsActivityFinished())
			TaskComplete();
		break;
	case 0xb9:	// TASK_RUN_DIALOG
	{
		int act = ME->sub_102c1400();
		if (act == -1)
		{
			TaskComplete();
			ME->sub_10269b50(0x6f);
			return;
		}
		ME->slot310(act);
		MOTOR->sub_102e1e20(-1);
		return;
	}
	case 0xba: case 0xbb:	// TASK_RUN_DISPOSITION, TASK_RUN_DISPOSITION_RANDOM
		ME->slot588();
		if (ME->IsWaitA())
			TaskComplete();
		return;
	case 0xbc: case 0xbd:	// TASK_SPECIAL_IDLE_ACTIVITY, TASK_SPECIAL_IDLE_ACTIVITY_RANDOM
		if (HANDLE(0x628c).Get() && F(float, 0x6264) <= 128.0f && ME->sub_10269aa0(0x5a))
		{
			if (IsActivityFinished())
			{
				if (ME->sub_1008dc40(0x10f7, -1) == -1)
					ME->sub_10289ee0(0x10f7);
				else
					ME->slot588();
			}
		}
		else
			ME->slot588();
		if (ME->IsWaitA())
			TaskComplete();
		break;
	case 0xe0:	// TASK_DO_JUMP_ACTIVITY
		if (IsActivityFinished())
			TaskComplete();
		break;
	case 0xe1:	// TASK_DO_LOOP_ACTIVITY
	{
		int act = (int)pTask->flTaskData;
		if (F(char, 0xfd8) && IsActivityFinished())
		{
			TaskComplete();
			break;
		}
		ME->slot310(act);
		return;
	}
	case 0xe2: case 0x149:	// TASK_DO_BLEND_ACTIVITY, TASK_PLAY_DEATH_SEQUENCE
		ME->sub_10280a50();
		if (IsActivityFinished())
			TaskComplete();
		break;
	case 0xe3:	// TASK_DO_BLEND_LOOP_ACTIVITY
	{
		int act = (int)pTask->flTaskData;
		if (F(char, 0xfd8) && IsActivityFinished())
		{
			TaskComplete();
			break;
		}
		ME->slot310(act);
		return;
	}
	case 0xe6:
		ME->sub_10280a50();
		if (IsActivityFinished())
			TaskComplete();
		break;
	case 0xe7:	// TASK_SET_COWER
		if (ME->IsActivityStarted())
			TaskComplete();
		break;
	case 0x54: case 0x55: case 0x56:	// TASK_PLAY_*SEQUENCE_FACE_ENEMY, TASK_PLAY_SEQUENCE_FACE_TARGET
	{
		Vector vecTarget;
		if (pTask->iTask == 0x56)
			vecTarget = *HANDLE(0x5ce4)->slot217();
		else if (HTARGET)
			vecTarget = *HTARGET->slot217();
		else if (ME->slot167())
			vecTarget = LKP();
		else
			goto noface;
		ME->GetMotor()->sub_102e1c10(sub_101d2c70(&(vecTarget - *ME->slot217())), -2.0f);
	noface:
		ME->sub_10280a50();
		if (IsActivityFinished())
			TaskComplete();
		return;
	}
	case 0x11d:
		if (!(F(int, 0x5d8c) & 0x2000))
			ME->slot572();
		MOTOR->sub_102e1e20(-1);
		if (FacingIdeal())
			TaskComplete();
		break;
	case 0xf7:	// TASK_FACE_NEXT_NODE
		if (!(F(int, 0x5d8c) & 0x2000))
			ME->slot572();
		MOTOR->sub_102e1e20(-1);
		if (FacingIdeal())
			TaskComplete();
		break;
	case 4: case 0xb0: case 0xb1:	// TASK_WAIT_FACE_ENEMY, TASK_WAIT_ATTACK_TIME1/2
	{
		Vector vecTarget;
		if (HTARGET)
			vecTarget = *HTARGET->slot217();
		else if (ME->slot167())
			vecTarget = LKP();
		else
			TaskFail(6, 0x407c);
		if (!ME->slot364(&vecTarget))
			MOTOR->sub_102e20b0(&vecTarget.x, -2.0f);
		if (ME->IsWaitA())
			TaskComplete();
		break;
	}
	case 0xf8: case 0xf9: case 0xfa: case 0xfb: case 0xfc: case 0xfd: case 0xfe: case 0xff: case 0x148:	// TASK_LOOK_AT_*, TASK_UNLOOK_AT*
		MOTOR->sub_102e1e20(-1);
		if ((ME->IsWaitA() || IsActivityFinished()) && FacingIdeal())
		{
			F(unsigned int, 0x14b8) &= 0xf7ffffff;
			TaskComplete();
			return;
		}
		break;
	case 0x107: case 0x108: case 0x109:	// TASK_ATTEMPT_DIVE*
		if (IsActivityFinished())
		{
			if (F(int, 0xff0) == 0xf1d)
			{
				ME->sub_10272650(0x1052);
				return;
			}
			F(unsigned int, 0x14b8) &= 0xffffbfff;
			TaskComplete();
			return;
		}
		break;
	case 0x10a: case 0x10b: case 0x10c:	// TASK_PLAY_COVER_INTO/IDLE/OUTOF
		ME->sub_102aab70(pTask);
	case 0x92: case 0xee: case 0xef: case 0xf0: case 0x10f: case 0x110: case 0x113:
		ME->sub_10280a50();
		if (IsActivityFinished())
			TaskComplete();
		return;
	case 0x10d:	// TASK_PLAY_COVER_AIM
	{
		ME->sub_10280a50();
		Vector vecTarget;
		if (HTARGET)
			vecTarget = *HTARGET->slot217();
		else if (HANDLE(0x6448).Get() == ME->slot167())
			vecTarget = LKP();
		else
			TaskComplete();
		MOTOR->sub_102e20b0(&vecTarget.x, -1.0f);
		if (FacingIdeal())
			TaskComplete();
		break;
	}
	case 0xec:
		ME->sub_10280a50();
		if (IsActivityFinished())
			TaskComplete();
		break;
	case 0xb2:	// TASK_FACE_INTEREST
		if (F(void *, 0x62ec))
		{
			if (!(F(int, 0x5d8c) & 0x2000))
				ME->slot572();
			MOTOR->sub_102e1e20(-1);
			if (FacingIdeal())
				TaskComplete();
			return;
		}
		TaskFail(0x22, 0x4105);
		return;
	case 0xb3:	// TASK_FACE_PATROL_INTEREST
		if (ME->sub_1029f780(&F(char, 0x658c)))
		{
			if (!(F(int, 0x5d8c) & 0x2000))
				ME->slot572();
			MOTOR->sub_102e1e20(-1);
			if (FacingIdeal())
			{
				F(int, 0x6300) = 0;
				F(int, 0x659c) = 0;
				TaskComplete();
				return;
			}
			break;
		}
		TaskComplete();
		return;
	case 0xb4:	// TASK_DO_INTEREST_ACTIVITY
		if (F(char *, 0x62ec))
		{
			if (ME->sub_102aa210(F(char *, 0x62ec)))
			{
				if (F(char *, 0x62ec)[0x571])
				{
					EntV *pWeapon = ME->sub_1032e7b0();
					if (pWeapon)
						pWeapon->slot315();
				}
				ME->sub_102b53d0(1, "Leaving interesting place (RunTask-WaitFinished)");
				TaskComplete();
				return;
			}
		}
		else
		{
			TaskFail(0x23, 0x4141);
			return;
		}
		break;
	case 0xb5:	// TASK_DO_PATROL_INTEREST_ACTIVITY
	{
		char *pInterest = (char *)ME->sub_1029f780(&F(char, 0x658c));
		if (pInterest)
		{
			if (ME->sub_102aa210(pInterest))
			{
				if (pInterest[0x571])
				{
					EntV *pWeapon = ME->sub_1032e7b0();
					if (pWeapon)
						pWeapon->slot315();
				}
				if (F(char, 0x62e8))
					((OutputV *)&F(char, 0x5f8c))->sub_100cd660(F(void *, 0x6300), this, 0);
				F(HolderV *, 0x6300)->sub_102da600((char *)this, 0, F(char, 0x62e8));
				F(int, 0x6300) = 0;
				F(int, 0x659c) = 0;
				F(char, 0x62e8) = 0;
				TaskComplete();
				return;
			}
		}
		else
		{
			TaskComplete();
			return;
		}
		break;
	}
	case 0xb6: case 0xb7:	// TASK_DO_LOITER_ACTIVITY, TASK_DO_INTERACT_ACTIVITY
		if (IsActivityFinished())
		{
			NAV->sub_102ee250(ME->sub_10271ff0(9, 0));
			TaskComplete();
			break;
		}
		break;
	case 0xb8:	// TASK_DO_INTEREST_DEATH_ACTIVITY
		if (IsActivityFinished())
		{
			F(unsigned int, 0x14b8) &= 0xdfffffff;
			ME->sub_103281b0((int)"Bip01", 0, 1);
			TaskComplete();
			break;
		}
		break;
	case 0xea:	// TASK_DIE_EXPLODE_GIB
		ME->sub_1033d4b0();
	case 0x5f: case 0xe9: case 0xeb:	// TASK_DIE, TASK_DIE_GIB, TASK_DIE_DUE_TO_PLAYER
		if ((IsActivityFinished() && F(float, 0x6f8) >= 1.0) || F(int, 0xff0) == 1)
		{
			EntV *pKiller = HANDLE(0x628c).Get();
			if (pTask->iTask == 0xe9 || pTask->iTask == 0x5f)
				pKiller = (EntV *)this;
			if (F(int, 0x200) == 1)
				F(int, 0x200) = 0;
			ME->sub_103392c0(pKiller, 0, 0);
			if (pTask->iTask == 0xe9 || pTask->iTask == 0xea)
				ME->slot402();
			if (pTask->iTask == 0xeb && pTask->flTaskData != g_104454c4)
				ME->slot77();
		}
		break;
	case 0xdf:	// TASK_DIE_IMMEDIATE
		ME->sub_103392c0(0, 0, 0);
		return;
	case 0x116:	// TASK_RESOLVE_BOTCH
		if (IsActivityFinished())
		{
			TaskComplete();
			F(unsigned int, 0x14b8) &= 0xfffbffff;
			return;
		}
		break;
	case 0x117:	// TASK_RESOLVE_BOTCH_IN_COVER
		if (IsActivityFinished())
		{
			TaskComplete();
			F(unsigned int, 0x14b8) &= 0xfffbffff;
			break;
		}
		break;
	case 0x118:	// TASK_RESOLVE_BOTCH_OUT_OF_COVER
		if (IsActivityFinished())
		{
			int act = F(int, 0xff0);
			if (act == sub_102a13d0((NT_N *)this))
			{
				sub_102a1620((NT_N *)this);
				return;
			}
			if (act == sub_102a1510((NT_N *)this))
			{
				if (pTask->flTaskData != g_104454c4)
				{
					sub_102a15c0((NT_N *)this);
					return;
				}
				TaskComplete();
				F(unsigned int, 0x14b8) &= 0xfffbffff;
				return;
			}
			TaskComplete();
			F(unsigned int, 0x14b8) &= 0xfffbffff;
			return;
		}
		break;
	case 0x11b: case 0x11c: case 0x123:	// TASK_STEP_BACK, TASK_STEP_BACK_RUN, TASK_CIRCLE_ENEMY
		ME->sub_10280a50();
		if (ME->slot167())
		{
			Vector vecEnemy = *ME->slot167()->slot217();
			MOTOR->sub_102e20b0(&vecEnemy.x, -1.0f);
		}
		if (ME->IsWaitA())
		{
			F(int, 0x63ec) = 0;
			TaskComplete();
			break;
		}
		break;
	case 0x122: case 0x124:	// TASK_MELEE_CIRCLE_ENEMY, TASK_CIRCLE_ENEMY_FULLCYCLE
		ME->sub_10280a50();
		if (ME->slot167())
		{
			Vector vecEnemy = *ME->slot167()->slot217();
			MOTOR->sub_102e20b0(&vecEnemy.x, -1.0f);
		}
		if (IsActivityFinished())
		{
			if (ME->IsWaitA() || ME->sub_10269aa0(0xe))
			{
				F(int, 0x63ec) = 0;
				TaskComplete();
				return;
			}
			int act = 0x1121;
			if (ME->sub_10295460(act, 0) == -1)
			{
				act = 9;
				if (ME->sub_10295460(act, 0) == -1)
					TaskFail(0x15, 0x4255);
			}
			ME->sub_10289ee0(act);
			return;
		}
		break;
	case 0x96:	// TASK_MELEE_FLYING_KNOCKBACK_WALL_HIT
		if (ME->IsWait6014())
		{
			ME->sub_102ae750(0x14f, 0);
			return;
		}
		break;
	case 0x97:	// TASK_MELEE_FLYING_KNOCKBACK_WALL_FALL
	{
		char *pSeqDesc = ME->sub_1008d990(F(int, 0x6f0));
		if (pSeqDesc && sub_10412520(pSeqDesc + *(int *)(pSeqDesc + 4)) == 0x91 && IsActivityFinished())
		{
			int n = ME->sub_103454c0();
			if (n >= 0)
				ME->slot311(0x92, 0x92, n);
			else
				ME->sub_10289ee0(0x92);
		}
		if (!(ME->sub_1027d990() == 1 && (ME->sub_100b3700() & 1)))
		{
			MOTOR->m_30 = 0;
			if (ME->Bit268_12())
				ME->sub_100b1d10();
			if (!(F(float, 0x3c4) < g_104454c4 && ME->sub_102c4eb0()))
				break;
		}
		{
			int n = ME->sub_103454c0();
			MOTOR->slot8();
			ME->sub_1027d9b0(0);
			F(char, 0x6498) = 0;
			if (n >= 0)
				ME->slot311(0x93, 0x93, n);
			else
				ME->sub_10289ee0(0x93);
			TaskComplete();
			break;
		}
		break;
	}
	case 0x98:
		ME->sub_10280a50();
		if (IsActivityFinished())
			TaskComplete();
		break;
	case 0x9c:	// TASK_ON_FIRE_INTO
		if (IsActivityFinished())
		{
			TaskComplete();
			return;
		}
		ME->sub_10280a50();
		return;
	case 0x9d:	// TASK_ON_FIRE_LOOP
		if (IsActivityFinished())
		{
			{
				DmgVecV &vec = F(DmgVecV, 0x65a8);
				while (vec.m_Size)
				{
					ME->sub_100a1250(vec.m_pMemory);
					if (vec.m_Size > 0)
					{
						memmove(vec.m_pMemory, &vec.m_pMemory[vec.m_Size - 1], sizeof(DmgElemV));
						--vec.m_Size;
					}
				}
			}
			if (ME->slot158())
			{
				for (int i = 0; i < 0x12; i++)
				{
					CHandle<EntV> &h = ((CHandle<EntV> *)&F(int, 0xff8))[i];
					if (h.Get() && h->m_484)
					{
						h->slot242();
						h->sub_100fbbb0(2.0f);
					}
				}
			}
			ME->slot616();
			TaskComplete();
			return;
		}
		ME->sub_10280a50();
		return;
	case 0x9e:	// TASK_ON_FIRE_OUTOF
		if (IsActivityFinished())
		{
			TaskComplete();
			return;
		}
		ME->sub_10280a50();
		return;
	case 0x128:	// TASK_MELEE_CHEER
	{
		ME->sub_10280a50();
		Vector vecTarget;
		if (HTARGET)
			vecTarget = *HTARGET->slot217();
		else if (ME->slot167())
			vecTarget = LKP();
		else
			TaskFail(6, 0x4304);
		if (!ME->slot364(&vecTarget))
			MOTOR->sub_102e20b0(&vecTarget.x, -2.0f);
		if (ME->IsWaitA() && IsActivityFinished())
			TaskComplete();
		break;
	}
	case 0x137:	// TASK_PLAY_COMBAT_START_SEQUENCE
		ME->sub_10280a50();
		if (ME->slot167())
		{
			Vector vecEnemy = *ME->slot167()->slot217();
			MOTOR->sub_102e20b0(&vecEnemy.x, -1.0f);
		}
		if (IsActivityFinished())
			TaskComplete();
		break;
	case 0x99:	// TASK_MELEE_HIT_BY_FINISHING_MOVE
	{
		ME->sub_10280a50();
		Vector vecPos;
		Vector vecAng;
		ME->sub_10092610((int)"Bip01 Spine2", (int)&vecPos, (int)&vecAng);
		if (IsActivityFinished())
		{
			ME->sub_102c4e80();
			CVDmgD dmg;
			dmg.sub_101fa960((CVDmgSource_t *)this);
			dmg.m_field04 = 1;
			dmg.m_field0c = 1;
			InfoV info;
			info.sub_101c26d0((int)this, (int)this, 0x3f800000, 0, 0, (int)&dmg, -1);
			Vector vecDir = F(Vector, 0x601c) - vecPos;
			VectorNormalize(vecDir);
			float flScale = F(float, 0x6018) - gpGlobals->curtime;
			vecDir *= flScale;
			vecDir *= 50000.0f;
			info.m_vecForce = vecDir;
			CVStatListSet::Of(this)->Find(0)->sub_10200a70(0xf, 0x11);
			ME->slot144(&info);
			ME->slot403();
			TaskComplete();
			return;
		}
		F(float, 0x6018) = gpGlobals->curtime;
		F(Vector, 0x601c) = vecPos;
		return;
	}
	case 0x95:
		ME->sub_10280a50();
		if (IsActivityFinished())
			TaskComplete();
		break;
	case 0x94:	// TASK_MELEE_FLYING_KNOCKBACK_IDLE
		if (!(ME->sub_1027d990() == 1 && (ME->sub_100b3700() & 1)))
		{
			ME->sub_102a0870();
			Vector vecDir;
			if (ME->sub_102a0490(&vecDir))
			{
				Vector vecAngles;
				sub_10139970(vecDir, vecAngles);
				int n = ME->sub_103454c0();
				if (n >= 0)
					ME->slot311(0x91, 0x91, n);
				else
					ME->sub_10289ee0(0x91);
				Vector vecCur = *ME->slot219();
				vecCur.y = vecAngles.y;
				ME->sub_102c4e30();
				ME->slot218(&vecCur);
				F(Vector, 0x6004) = vecDir * 100.0f;
				ME->sub_102ae750(0x14e, 0);
			}
			MOTOR->m_30 = 0;
			if (ME->Bit268_12())
				ME->sub_100b1d10();
			if (!(F(float, 0x3c4) < g_104454c4 && ME->sub_102c4eb0()))
				break;
		}
		{
			int n = ME->sub_10345480();
			{ MOTOR->slot8(); }
			ME->sub_1027d9b0(0);
			F(char, 0x6498) = 0;
			TaskComplete();
			if (n >= 0)
			{
				ME->slot311(0x90, 0x90, n);
				return;
			}
			ME->sub_10289ee0(0x90);
			return;
		}
	case 0x13a:	// TASK_JUMP
		if (!(ME->sub_1027d990() == 1 && (ME->sub_100b3700() & 1)))
		{
			MotorV *pMotor = MOTOR;
			Vector *pVel = ME->slot198();
			pMotor->sub_102e1c10(sub_101d2c70(pVel), -1.0f);
			MOTOR->m_30 = 0;
			if (ME->Bit268_12())
				ME->sub_100b1d10();
			if (!(F(float, 0x3c4) < g_104454c4 && ME->sub_102c4eb0()))
				break;
		}
		MOTOR->slot8();
		ME->sub_1027d9b0(0);
		F(char, 0x6498) = 0;
		TaskComplete();
		break;
	case 0x139: case 0x13b: case 0x13c:	// TASK_PRE_JUMP, TASK_LAND, TASK_LAND_HARD
		MOTOR->sub_102e1e20(-1);
		if (!IsActivityFinished())
			return;
		TaskComplete();
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x102ad0c0 size=0x34
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc615
bool CAI_BaseNPCTroika::vfunc615()
{
	if (sub_10014df8(0x30))
		return false;
	return gpGlobals->curtime > m_f65bc;
}
// END FUNCTION

// FUNCTION: 0x102ad110 size=0x20
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::vfunc616()
{
	sub_10015839(0x30);
	m_f65bc = gpGlobals->curtime + 15.0f;
}
// END FUNCTION

// FUNCTION: 0x102ad140 size=0xe0
#include "CAI_BaseNPCTroika.h"
// TARGET: CAI_BaseNPCTroika::vfunc453
void CAI_BaseNPCTroika::vfunc453()
{
    sub_10280fb0();
    unsigned int flags14b8 = *(unsigned int *)((char *)this + 0x14b8);
    if (!(flags14b8 & 0x4000080)) {
        if (!sub_1033e2b0() && (m_flags14bc & 0x40000) != 0x40000) {
            char *pHint = *(char **)((char *)this + 0x5ddc);
            if (!pHint || *(int *)(pHint + 0x5dc) != 0x2774) {
                sub_10269eb0(0x1e);
                sub_10269eb0(0x1f);
                sub_10269eb0(0x21);
            }
            if (!vfunc167()) {
                if ((char)(*(unsigned int *)((char *)this + 0x5b64) >> 4) & 1)
                    sub_10269eb0(0x72);
                if ((char)(*(unsigned int *)((char *)this + 0x5b64) >> 5) & 1) {
                    sub_10269eb0(0x20);
                    sub_10269eb0(0x22);
                }
            }
            if (~*(unsigned int *)((char *)this + 0x14b8) & 0x400)
                sub_10269eb0(0x27);
        }
    }
    if ((m_flags14bc & 0x40) == 0x40)
        sub_10269f30(0x31);
}
// END FUNCTION

// FUNCTION: 0x102ad260 size=0x4c
#include "CAI_BaseNPCTroika.h"
// TARGET: CAI_BaseNPCTroika::sub_102ad260
int CAI_BaseNPCTroika::sub_102ad260()
{
	if (sub_10269d30(0x21)) {
		if (m_n5cc0 != 8)
			m_flags14b8 |= 0x100;
		*(const char **)((char *)this + 0x1b3c) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		*(int *)((char *)this + 0x1b40) = 0x4468;
		m_n5cc4 = 8;
		return 8;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102ad2d0 size=0x4c
#include "CAI_BaseNPCTroika.h"
int CAI_BaseNPCTroika::sub_102ad2d0()
{
    if (sub_10269d30(0x1f)) {
        if (m_n5cc0 != 8)
            m_flags14b8 |= 0x100;
        m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
        m_nLine1b40 = 0x447d;
        m_n5cc4 = 8;
        return 8;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102ad340 size=0x275
#include "CAI_BaseNPCTroika.h"
#include "engineiface.h"
#include "globalvars.h"

int sub_1042fe90(unsigned int);

#define HASH(x) (((((((x) & 0x68d8635) ^ 0xce9f66a) + 0xffa91d8) & 0x197279ca) ^ (x)) ^ 0xa641cacd)

struct CTroikaView102ad340
{
	char pad[0x5cc0];
	int m5cc0;
	int m5cc4;
	char pad1[0x607c - 0x5cc8];
	float m607c;
	char pad2[0x6364 - 0x6080];
	int m6364;
	char pad3[0x638c - 0x6368];
	EHANDLE m638c;
	char pad4[0x63f8 - 0x6390];
	int m63f8;
	char pad5[0x65cc - 0x63fc];
	int m65cc;
	char pad6[0x65f8 - 0x65d0];
	char m65f8;
};

// TARGET: CAI_BaseNPCTroika::vfunc460
int CAI_BaseNPCTroika::vfunc460()
{
	CTroikaView102ad340 *v = (CTroikaView102ad340 *)this;
	int n = v->m65cc;
	m_n1b38 = 2;
	if (n) {
		m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		m_nLine1b40 = 0x4495;
		m_n5cc4 = n;
		v->m65cc = 0;
		return n;
	}
	if (sub_10269d30(0x46) && m_f607c == 0.0f) {
		m_f607c = enginerandom->vfunc1(1.0f, 3.0f) + gpGlobals->curtime;
	} else if (sub_10014df8(0x48)) {
		m_f607c = 0;
	}
	if (sub_102ad260())
		return m_n5cc4;
	if (sub_102ad2d0())
		return m_n5cc4;
	if (sub_10269d30(0x44)) {
		int state = 8;
		if (m_n5cc0 != state)
			m_flags14b8 |= 0x100;
		m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		m_nLine1b40 = 0x44b8;
		m_n5cc4 = state;
		return state;
	}
	if (sub_10269d30(0x22)) {
		m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		m_nLine1b40 = 0x44be;
		m_n5cc4 = 2;
		return 2;
	}
	if (sub_10269d30(0x20)) {
		int h = HASH(v->m6364);
		int a = sub_1042fe90(h);
		int b = sub_1042fe90(0x3cf445af);
		if (a <= b && m_n5cc0 != 2 && m_n5cc0 != 0xe) {
			if (v->m638c.Get() && vfunc404(v->m638c.Get()) == 1)
				goto fail;
			if (v->m65f8) {
				v->m63f8 = 0;
				m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
				m_nLine1b40 = 0x44d3;
				m_n5cc4 = 0xe;
				return 0xe;
			}
		}
fail:
		m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		m_nLine1b40 = 0x44cb;
		m_n5cc4 = 2;
		return 2;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102ad660 size=0x78a
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#define FILE_ "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"

struct CView461
{
	char m_pad0[0x5b7c];
	EHANDLE m_h5b7c;
	char m_pad1[0x65c0 - 0x5b80];
	EHANDLE m_h65c0;
	char m_pad2[0x65f6 - 0x65c4];
	char m_b65f6;
};

int CAI_BaseNPCTroika::vfunc461()
{
	CView461 *v = (CView461 *)this;
	m_n1b38 = 2;
	switch (m_n5cc0) {
	case 1:
		if (sub_10269d30(0x54) || sub_10269d30(0x46)) {
			if (enginerandom->vfunc2(0, 99) < 20)
				vfunc495();
			m_n5cc4 = 2;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x44f7;
			return m_n5cc4;
		}
		if (!v->m_b65f6) {
			if (sub_10269d30(0x4c)) {
				m_b5b80 = 0;
				m_n5cc4 = 3;
				m_pszFile1b3c = FILE_;
				m_nLine1b40 = 0x451b;
				return m_n5cc4;
			}
			if (sub_10269d30(0x4d)) {
				m_b5b80 = 0;
				m_n5cc4 = 3;
				m_pszFile1b3c = FILE_;
				m_nLine1b40 = 0x4522;
				return m_n5cc4;
			}
		}
		if (sub_10014df8(0x21)) {
			m_pszFile1b3c = FILE_;
			m_flags14b8 |= 0x100;
			m_nLine1b40 = 0x452b;
			m_n5cc4 = 8;
			return m_n5cc4;
		}
		if (sub_10014df8(0x1f)) {
			m_pszFile1b3c = FILE_;
			m_flags14b8 |= 0x100;
			m_nLine1b40 = 0x4532;
			m_n5cc4 = 8;
			return m_n5cc4;
		}
		if (!v->m_b65f6) {
			if (sub_10269d30(0x25) || sub_10269d30(0x26) || sub_10269d30(3) || sub_10269d30(1) || sub_10269d30(0x6a) || sub_10269d30(0x6f)) {
				m_n5cc4 = 3;
				m_pszFile1b3c = FILE_;
				m_nLine1b40 = 0x453e;
				return m_n5cc4;
			}
			if (sub_10269d30(0x6d) || sub_10269d30(0x70)) {
				m_n5cc4 = 3;
				m_pszFile1b3c = FILE_;
				m_nLine1b40 = 0x4545;
				return m_n5cc4;
			}
			if (sub_10269d30(0x6e)) {
				m_n5cc4 = 3;
				m_pszFile1b3c = FILE_;
				m_nLine1b40 = 0x454b;
				return m_n5cc4;
			}
			if (sub_10269d30(0x72)) {
				m_n5cc4 = 3;
				m_pszFile1b3c = FILE_;
				m_nLine1b40 = 0x4551;
				return m_n5cc4;
			}
			if (sub_10269d30(0xb)) {
				m_n5cc4 = 3;
				m_pszFile1b3c = FILE_;
				m_nLine1b40 = 0x4557;
				return m_n5cc4;
			}
		}
		break;
	case 3:
		if (sub_10269d30(0x54) || sub_10269d30(0x46)) {
			m_n5cc4 = 2;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x4562;
			return m_n5cc4;
		}
		if (sub_10014df8(0x21)) {
			m_pszFile1b3c = FILE_;
			m_flags14b8 |= 0x100;
			m_nLine1b40 = 0x456b;
			m_n5cc4 = 8;
			return m_n5cc4;
		}
		if (sub_10014df8(0x1f)) {
			m_pszFile1b3c = FILE_;
			m_flags14b8 |= 0x100;
			m_nLine1b40 = 0x4573;
			m_n5cc4 = 8;
			return m_n5cc4;
		}
		if (sub_10269d30(0x26) || sub_10269d30(1) || sub_10269d30(3)) {
			m_n5cc4 = 3;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x457c;
			return m_n5cc4;
		}
		if (sub_10269d30(0x6a) || sub_10269d30(0x6f)) {
			m_n5cc4 = 3;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x4585;
			return m_n5cc4;
		}
		if (sub_10269d30(0x6d) || sub_10269d30(0x70)) {
			m_n5cc4 = 3;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x458e;
			return m_n5cc4;
		}
		if (sub_10269d30(0x6e)) {
			m_n5cc4 = 3;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x4596;
			return m_n5cc4;
		}
		if (sub_10269d30(0x25)) {
			m_n5cc4 = 3;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x459d;
			return m_n5cc4;
		}
		if (sub_10269d30(0x72)) {
			m_n5cc4 = 3;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x45a4;
			return m_n5cc4;
		}
		if (sub_10269d30(0xb)) {
			m_n5cc4 = 3;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x45ab;
			return m_n5cc4;
		}
		if (vfunc462()) {
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x45b1;
			m_n5cc4 = 1;
			return 1;
		}
		break;
	case 0xb:
		if (sub_10269d30(0x54) || sub_10269d30(0x46)) {
			m_n5cc4 = 2;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x45be;
			return m_n5cc4;
		}
		if (sub_10269d30(0xb)) {
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x45c4;
			m_n5cc4 = 0xb;
			return 0xb;
		}
		break;
	case 4:
		if (sub_10269d30(0x5c) || sub_10269d30(0x4c) || sub_10269d30(0x4d) || sub_10269d30(0x54) || sub_10269d30(0x46)) {
			m_b5b80 = 0;
			sub_1027d0a0();
		}
		break;
	case 8:
		m_pszFile1b3c = FILE_;
		m_nLine1b40 = 0x45dd;
		m_n5cc4 = 8;
		return 8;
	case 0xe:
		if (sub_10014df8(0x4c) || sub_10014df8(0x4d) || sub_10014df8(0x4e)) {
			m_b5b80 = 0;
			CBaseEntity *pEnt = (CBaseEntity *)vfunc167();
			if (v->m_h5b7c.Get() == pEnt) {
				m_n5cc4 = 2;
				m_pszFile1b3c = FILE_;
				m_nLine1b40 = 0x45f0;
				return m_n5cc4;
			}
		}
		if (sub_10014df8(0xb)) {
			CBaseEntity *pEnt = (CBaseEntity *)vfunc167();
			if (v->m_h65c0.Get() == pEnt) {
				m_n5cc4 = 2;
				m_pszFile1b3c = FILE_;
				m_nLine1b40 = 0x45f9;
				return m_n5cc4;
			}
		}
		break;
	}
	return CAI_BaseNPC::vfunc461();
}
// END FUNCTION

// FUNCTION: 0x102adfe0 size=0x101
#include "CAI_BaseNPCTroika.h"

struct CExprSets
{
	int sub_100ec360(int index, void *pNpc);
	int sub_100ec2e0(int index, void *pNpc);
	float sub_100ec3d0(int index);
};
extern CExprSets g_10924980;

struct CTroikaExprView
{
	char m_pad0[0x10b4];
	int m_nExpression10b4;
	float m_flWeight10b8;
	char m_pad10bc[0x64d0 - 0x10bc];
	int m_nExpression64d0;
	int m_nIndex64d4;
};

// TARGET: CAI_BaseNPCTroika::vfunc610
void CAI_BaseNPCTroika::vfunc610(int emotion)
{
    CTroikaExprView *p = (CTroikaExprView *)this;
    switch (emotion) {
    case 8:
    case 10:
        p->m_nExpression10b4 = sub_10106a40("Fear");
        p->m_nExpression64d0 = sub_10106a40("Fear_NoDeform");
        p->m_flWeight10b8 = 1.0f;
        return;
    case 3:
    case 0xb:
    case 0xe:
        p->m_nExpression10b4 = sub_10106a40("Anger");
        p->m_nExpression64d0 = sub_10106a40("Anger_No Deform");
        p->m_flWeight10b8 = 0.5f;
        return;
    case 2:
        p->m_nExpression10b4 = sub_10106a40("Anger");
        p->m_nExpression64d0 = sub_10106a40("Anger_No Deform");
        p->m_flWeight10b8 = 1.0f;
        return;
    default:
        p->m_nExpression10b4 = g_10924980.sub_100ec360(p->m_nIndex64d4, this);
        p->m_nExpression64d0 = g_10924980.sub_100ec2e0(p->m_nIndex64d4, this);
        p->m_flWeight10b8 = g_10924980.sub_100ec3d0(p->m_nIndex64d4);
        return;
    }
}
// END FUNCTION

// FUNCTION: 0x102ae140 size=0x16d
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027d990.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct S_Slot610 {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
    V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8) V10(b9)
    V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5) V10(c6) V10(c7) V10(c8) V10(c9)
    V10(d0) V10(d1) V10(d2) V10(d3) V10(d4) V10(d5) V10(d6) V10(d7) V10(d8) V10(d9)
    V10(e0) V10(e1) V10(e2) V10(e3) V10(e4) V10(e5) V10(e6) V10(e7) V10(e8) V10(e9)
    V10(f0) V10(f1) V10(f2) V10(f3) V10(f4) V10(f5) V10(f6) V10(f7) V10(f8) V10(f9)
    V10(g0)
    virtual void s610(int);
};
struct S_Rnd { virtual void s0(); virtual float RandomFloat(float a, float b); };
extern S_Rnd *g_1070b244;
struct S_Holder { void sub_100cd660(CBaseEntity *a, CBaseEntity *b, int c); };
struct S_V {
    char pad0[0x5b80]; char m_b5b80;
    char pad2[0x5d8c - 0x5b81]; unsigned int m_flags5d8c;
    char pad3[0x5fbc - 0x5d90]; S_Holder m_h5fbc;
    char pad4[0x63fc - 0x5fbd]; char m_b63fc;
    char pad5[0x6474 - 0x63fd]; float m_f6474;
    char pad6[0x6494 - 0x6478]; char m_b6494;
    char pad7[0x658c - 0x6495]; int m_h658c; int m_p6590; int m_h6594;
};
void CAI_BaseNPCTroika::vfunc463(int a, int b)
{
    S_V *v = (S_V *)this;
    CUnknown1027d990 *u = (CUnknown1027d990 *)this;
    if (a != b) {
        ((S_Slot610 *)this)->s610(b);
        sub_102ae310();
        char flag = 1;
        switch (b) {
        case 2: case 3:
            v->m_b6494 = flag;
            break;
        case 0xb:
            v->m_f6474 = g_1070b244->RandomFloat(10.0f, 20.0f) + gpGlobals->curtime;
            v->m_b6494 = flag;
            break;
        case 7:
            if (v->m_p6590 != 0)
                sub_1029f5d0(&v->m_h658c);
            break;
        case 8: {
            CBaseEntity *p = (CBaseEntity *)vfunc167();
            if (!p) p = (CBaseEntity *)this;
            v->m_h5fbc.sub_100cd660(p, (CBaseEntity *)this, 0);
            v->m_b6494 = flag;
            break; }
        case 0xe:
            sub_10293d90(2.0f);
            v->m_b6494 = flag;
            break;
        }
        v->m_flags5d8c &= 0x7ffffff;
        if (u->sub_1027d990() != 3 && u->sub_1027d990() != flag)
            m_flags14b8 &= ~8u;
    }
    void *ph = &v->m_h6594;
    m_flags14b8 &= ~0x1000u;
    sub_1029f5d0(ph);
    m_flags14b8 &= ~4u;
    v->m_b63fc = 0;
    sub_10295ab0(5.0f);
    v->m_b5b80 = 0;
    CAI_BaseNPC::vfunc463(a, b);
}
// END FUNCTION

// FUNCTION: 0x102ae310 size=0x130
#include "CNPC_VTzimisce.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CAI_BaseNPC.h"
#include "CBaseCombatWeapon.h"
#include "CEHandleGet.h"

struct Flagged
{
    char m_pad0000[0x571];
    char m_b571;
};

struct Holder
{
    char m_pad0000[0x628c];
    unsigned int m_h628c;
    char m_pad6290[0x62ec - 0x6290];
    Flagged *m_p62ec;
    char m_pad62f0[0x6300 - 0x62f0];
    Flagged *m_p6300;
};

void __fastcall sub_102ae310(Holder *p)
{
    CAI_BaseNPC *pNPC = (CAI_BaseNPC *)p;
    CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)((CBasePlayer *)p)->sub_1032e7b0();
    if (!pWeapon)
        return;
    bool bHolster = false;
    if (!pNPC->vfunc167()) {
        if ((p->m_p62ec && p->m_p62ec->m_b571) || (p->m_p6300 && p->m_p6300->m_b571))
            bHolster = true;
        else if (pNPC->vfunc464() == 1 || pNPC->vfunc464() == 4 || pNPC->vfunc464() == 0xc || pNPC->vfunc464() == 0xd) {
            if (EHandle_Get(p->m_h628c)) {
                unsigned int h2 = *(unsigned int *)&p->m_h628c;
                if (pNPC->vfunc404((CBaseEntity *)EHandle_Get(h2)) != 1)
                    bHolster = true;
            }
        }
    }
    if (!bHolster) {
        if ((*(unsigned int *)((char *)pWeapon + 0x19c) & 0x40) == 0x40)
            pWeapon->vfunc315();
    } else if ((*(unsigned int *)((char *)pWeapon + 0x19c) & 0x40) != 0x40)
        pWeapon->vfunc316(0);
}
// END FUNCTION

// FUNCTION: 0x102ae490 size=0x22e
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CCineNPC.h"
#include "CUnknown1027d990.h"

__declspec(dllimport) void DevMsg(const char *fmt, ...);

// TARGET: CAI_BaseNPCTroika::sub_102ae490
void CAI_BaseNPCTroika::sub_102ae490(int a, char b)
{
	if (!sub_1028a190()) {
		DevMsg("********************* WARNING **********************\n");
		DevMsg("********************* WARNING **********************\n");
		DevMsg("Calling ForceScheduleChange on NPC '%s'\n", sub_1000b5cd());
		DevMsg("who is not supposed to be interruptable\n");
		DevMsg("Be sure you really want to do this!\n");
		DevMsg("This message will self destruct.\n");
		DevMsg("********************* WARNING **********************\n");
		DevMsg("********************* WARNING **********************\n");
	}
	if (!vfunc158() && !b) {
		DevMsg("********************* WARNING **********************\n");
		DevMsg("********************* WARNING **********************\n");
		DevMsg("Calling ForceScheduleChange on NPC '%s'\n", sub_1000b5cd());
		DevMsg("who is dead or dying.\n");
		DevMsg("Be sure you really want to do this!\n");
		DevMsg("This message will self destruct.\n");
		DevMsg("********************* WARNING **********************\n");
		DevMsg("********************* WARNING **********************\n");
	}
	if (EHandle_Get(m_h5d74)) {
		if (!((CCineNPC *)EHandle_Get(m_h5d74))->m_b5f90) {
			DevMsg("********************* WARNING **********************\n");
			DevMsg("********************* WARNING **********************\n");
			DevMsg("Calling ForceScheduleChange on NPC '%s'\n", sub_1000b5cd());
			DevMsg("who is in an uninterruptable script '%s'\n", ((CAI_BaseNPCTroika *)EHandle_Get(m_h5d74))->sub_1000b5cd());
			DevMsg("********************* WARNING **********************\n");
			DevMsg("********************* WARNING **********************\n");
		}
		((CCineNPC *)EHandle_Get(m_h5d74))->sub_101a8c30();
		if (m_n5cc0 != m_n5cc4) {
			if (m_n5cc4 != 7)
				sub_1026f4d0();
			sub_1026e340(m_n5cc4);
		}
	}
	if (((CUnknown1027d990 *)this)->sub_1027d990() != 3 && ((CUnknown1027d990 *)this)->sub_1027d990() != 1)
		m_flags14b8 &= ~8;
	vfunc435((void *)a);
}
// END FUNCTION

// FUNCTION: 0x102ae750 size=0x1e
struct CUnk102ae750 {
	int sub_102cc1f0(int a);
	void sub_102ae780(int a, int b);
	void sub_102ae750(int a, int b);
};

// TARGET: CUnk102ae750::sub_102ae750
void CUnk102ae750::sub_102ae750(int a, int b)
{
	int r = sub_102cc1f0(a);
	sub_102ae780(r, b);
}
// END FUNCTION

// FUNCTION: 0x102ae780 size=0x49
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::sub_102ae780(int a, char b)
{
	if (m_n5cc0 != 7 && m_n5cc4 != 7) {
		if (vfunc158() || b) {
			sub_102ae490(a, b);
			sub_10280e50((void *)a);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102ae7f0 size=0xd
#include "CUnknown102b5dc0.h"
void CUnknown102b5dc0::sub_102ae7f0(int value)
{
	m_unk65c8 = value;
}
// END FUNCTION

// FUNCTION: 0x102ae810 size=0x14
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::sub_102ae810
void CAI_BaseNPCTroika::sub_102ae810(void *pObj)
{
	if (pObj)
	{
		*(int *)((char *)this + 0x65c8) = *(int *)((char *)pObj + 0x1c);
	}
}
// END FUNCTION

// FUNCTION: 0x102ae840 size=0x54
#include "CAI_BaseNPCTroika.h"

void CAI_BaseNPCTroika::sub_102ae840(int a, char b)
{
	if (m_n5cc0 != 7 && m_n5cc4 != 7)
	{
		if (vfunc158() || b)
		{
			*(int *)((char *)this + 0x65cc) = a;
			*((char *)this + 0x1b28) = 1;
			m_flags14bc |= 0x82000000;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102ae8c0 size=0xd
#include "CUnknown102b5dc0.h"
void CUnknown102b5dc0::sub_102ae8c0(int value)
{
	m_unk65cc = value;
}
// END FUNCTION

// FUNCTION: 0x102ae8e0 size=0x2d
namespace lifted {
int sub_10006a8c();
}
struct CUnknown102ae8e0 { int sub_102ae8e0(int); };
int CUnknown102ae8e0::sub_102ae8e0(int a0)
{
    *(int *)((char *)this + 0x5dd0) = *(int *)((char *)a0);
    *(int *)((char *)this + 0x5dd4) = *(int *)((char *)a0 + 4);
    *(int *)((char *)this + 0x5dd8) = *(int *)((char *)a0 + 8);
    *(char *)((char *)this + 0x63e0) = 1;
    return lifted::sub_10006a8c();
}
// END FUNCTION

// FUNCTION: 0x102ae920 size=0xa90
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"
struct V6Timer { void sub_101b9880(); };
struct VA101e3df0 { void sub_101e3df0(CAI_BaseNPCTroika *); };
struct VA101e3ee0 { void sub_101e3ee0(CAI_BaseNPCTroika *); };
extern VA101e3df0 g_10739a4c;
struct VE1017e740 { int sub_1017e740(); };
struct VE1017e720 { int sub_1017e720(); };
struct V103161a0 { void sub_103161a0(int); };
struct V1092450c { virtual void v0(); virtual bool vfunc1(); char pad[0x2c - 4]; int n2c; };
extern V1092450c *g_1092450c;
extern int sub_102c6350(unsigned);
extern int sub_1042fe90(unsigned);
struct V437 : CAI_BaseNPCTroika {
	bool sub_10269d30(int);
	bool sub_10269aa0(int);
	int sub_102b7690(int, int, int, int);
	int sub_1027d990();
	int sub_102b8a10();
};
struct VData {
	char pad[0x65c8];
	int n65c8;
	char pad2[0x65e4 - 0x65cc];
	int n65e4;
	char pad3[0x65f6 - 0x65e8];
	char b65f6;
};
struct CRec6360
{
	char m_b0;
	char m_b1;
	unsigned int m_hash;
	operator unsigned int() const { return (((m_hash & 0x68d8635) ^ 0xce9f66a) + 0xffa91d8 & 0x197279ca) ^ m_hash ^ 0xa641cacd; }
};
#define REC (*(CRec6360 *)((char *)this + 0x6360))
#define RET(line, val) { m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"; m_nLine1b34 = line; return val; }

int CAI_BaseNPCTroika::vfunc437()
{
	V437 *me = (V437 *)this;
	VData *d = (VData *)this;
	V103161a0 *pTimer;
	m_n1b2c = 2;
	((V6Timer *)((char *)this + 0x60dc))->sub_101b9880();
	if (d->n65c8) {
		int r = d->n65c8;
		d->n65c8 = 0;
		return r;
	}
	if (m_n5bb0 <= 0 && (pTimer = (V103161a0 *)m_p5da4) != 0 && (m_flags14bc & 0x2000) == 0x2000) {
		m_flags14bc &= 0x7fffdfff;
		if (d->n65e4 != -1 && (m_flags5b84 & 0x80) != 0x80)
			RET(0x481b, 0xeb);
		if (vfunc167())
			pTimer->sub_103161a0((int)vfunc167());
	}
	if (me->sub_10269d30(0x38))
		g_10739a4c.sub_101e3df0(this);
	if (m_pSchedule5c38 && (int)m_pSchedule5c38 == sub_102cc1f0(0x14a))
		((VA101e3ee0 &)g_10739a4c).sub_101e3ee0(this);
	if (m_n5cc0 == 2) {
		if (me->sub_10269d30(0x22)) {
			if (m_h628c.Get() == m_hSupernaturalOffender.Get()) {
				((CBasePlayer *)m_h628c.Get())->sub_1017f4a0(m_iPLSupernaturalLevelWitnessed, (CBaseEntity *)this, &m_vecPLSupernaturalLocation);
				m_iPLSupernaturalActProcessed = ((VE1017e740 *)m_h628c.Get())->sub_1017e740();
			}
			vfunc596((int)m_hSupernaturalOffender.Get());
			vfunc597((int)m_hSupernaturalOffender.Get(), 5);
		}
		if (me->sub_10269d30(0x20)) {
			if (m_h628c.Get() == m_hCriminalOffender.Get()) {
				unsigned seed = m_n6364;
				((CBasePlayer *)m_h628c.Get())->sub_1017f2a0(sub_102c6350((seed & 0x68d8635 ^ 0xce9f66a) + 0xffa91d8 & 0x197279ca ^ seed ^ 0xa641cacd), (CBaseEntity *)this, &m_vecPLCriminalLocation);
				m_iPLCriminalActProcessed = ((VE1017e720 *)m_h628c.Get())->sub_1017e720();
			}
			vfunc596((int)m_hCriminalOffender.Get());
			vfunc597((int)m_hCriminalOffender.Get(), 5);
		}
		if (me->sub_10269aa0(0x30))
			RET(0x4850, 0x151);
		if (!vfunc167()) {
			if (d->b65f6)
				sub_1026e340(1);
			else
				sub_1026e340(3);
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			m_nLine1b34 = 0x4862;
			return CAI_BaseNPC::sub_1028a260();
		}
		if ((m_flags14b8 & 0x800000) == 0x800000) {
			m_flags14b8 &= 0xff7fffff;
			if ((~m_flags14bc & 0x80) && (m_flags5b84 & 0x80) != 0x80)
				RET(0x4884, 0x5b);
			m_flags14bc &= 0x7fffff7f;
		}
		if (me->sub_10269aa0(0x54) && (m_flags5b84 & 0x80) != 0x80)
			RET(0x488c, 0xea);
	}
	if (me->sub_10269aa0(0x3b) && !sub_1033e2b0()) {
		sub_10269b50(0x3b);
		if (!EHandle_Get(m_hfe8)) {
			int mode;
			bool ok = true;
			if (g_1092450c->vfunc1())
				mode = 0;
			else {
				mode = g_1092450c->n2c;
				if ((unsigned)mode > 3)
					ok = false;
			}
			if (ok) {
				switch (mode) {
				case 0:
					RET(0x4899, 0x7b);
				case 1:
					RET(0x489d, 0x79);
				case 2:
					RET(0x48a1, 0x7a);
				case 3:
					if (enginerandom->vfunc2(0, 99) < 0x50)
						RET(0x48a7, 0x79);
					RET(0x48ab, 0x7a);
				}
			}
		}
	}
	if (m_n5cc0 == 0xe) {
		if (me->sub_10269d30(0x20)) {
			if (m_h628c.Get() == m_hCriminalOffender.Get()) {
				unsigned int r = REC; int h = sub_1042fe90(r);
				((CBasePlayer *)m_h628c.Get())->sub_1017f2a0(h, (CBaseEntity *)this, &m_vecPLCriminalLocation);
				m_iPLCriminalActProcessed = ((VE1017e720 *)m_h628c.Get())->sub_1017e720();
			}
			vfunc596((int)m_hCriminalOffender.Get());
		}
		if (me->sub_10269aa0(0x30))
			RET(0x48c4, 0x151);
		if (!vfunc167()) {
			if (d->b65f6)
				sub_1026e340(1);
			else
				sub_1026e340(3);
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			m_nLine1b34 = 0x48d6;
			return CAI_BaseNPC::sub_1028a260();
		}
	}
	int r = CAI_BaseNPC::vfunc437();
	if (r)
		return r;
	if ((m_flags14bc & 2) == 2) {
		m_flags14b8 &= 0xfffffff7;
		m_flags14bc &= 0x7ffffffd;
		if (me->sub_1027d990() == 3)
			RET(0x48e8, 0xfc);
		if (me->sub_1027d990() == 1)
			RET(0x48ec, 0xfd);
	}
	if (m_n5cc0 == 2 && m_b6435 && vfunc592()) {
		r = me->sub_102b7690(1, 0, 0, 0);
		if (r)
			return r;
	}
	if ((m_flags14b8 & 2) == 2) {
		m_flags14b8 &= 0xfffffffd;
		RET(0x490b, 0xf1);
	}
	switch (m_n5cc0) {
	case 1:
		if (me->sub_10269aa0(0x28))
			RET(0x4915, 0x14c);
		if (me->sub_10269aa0(0x27))
			RET(0x4919, 0x12f);
		if ((m_flags14bc & 0x10000) == 0x10000)
			RET(0x491d, 0x130);
		if ((m_flags14bc & 0x100000) == 0x100000)
			RET(0x4921, 0x131);
		if ((m_flags14bc & 0x40000) == 0x40000)
			RET(0x4925, 0x131);
		if (EHandle_Get(m_hfe8))
			RET(0x4929, 0x6a);
		break;
	case 2:
		if (me->sub_10269aa0(0x28))
			RET(0x493c, 0x14c);
		break;
	case 3:
		r = me->sub_102b8a10();
		if (r)
			return r;
		break;
	}
	if (m_fSavePositionWalk) {
		m_fSavePositionWalk = 0;
		RET(0x4955, 0x89);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102af660 size=0x15e0
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CSoundEnt.h"

__declspec(dllimport) void DevMsg(const char *, ...);

struct V438S
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39();
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49();
	virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59();
	virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69();
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79();
	virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88(); virtual void s89();
	virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93(); virtual void s94(); virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99();
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104(); virtual void s105(); virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109();
	virtual void s110(); virtual void s111(); virtual void s112(); virtual void s113(); virtual void s114(); virtual void s115(); virtual void s116(); virtual void s117(); virtual void s118(); virtual void s119();
	virtual void s120(); virtual void s121(); virtual void s122(); virtual void s123(); virtual void s124(); virtual void s125(); virtual void s126(); virtual void s127(); virtual void s128(); virtual void s129();
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133(); virtual void s134(); virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139();
	virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144(); virtual void s145(); virtual void s146(); virtual void s147(); virtual void s148(); virtual void s149();
	virtual void s150(); virtual void s151(); virtual void s152(); virtual void s153(); virtual void s154(); virtual void s155(); virtual void s156(); virtual void s157(); virtual char slot158(); virtual void s159();
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163(); virtual void s164(); virtual void s165(); virtual void s166(); virtual int slot167(); virtual V438S *slot168(); virtual void s169();
	virtual void s170(); virtual void s171(); virtual void s172(); virtual void s173(); virtual void s174(); virtual void s175(); virtual void s176(); virtual void s177(); virtual void s178(); virtual void s179();
	virtual void s180(); virtual void s181(); virtual void s182(); virtual void s183(); virtual void s184(); virtual void s185(); virtual void s186(); virtual void s187(); virtual void s188(); virtual void s189();
	virtual void s190(); virtual void s191(); virtual void s192(); virtual void s193(); virtual void s194(); virtual void s195(); virtual void s196(); virtual void s197(); virtual void s198(); virtual void s199();
	virtual void s200(); virtual void s201(); virtual void s202(); virtual void s203(); virtual void s204(); virtual void s205(); virtual void s206(); virtual void s207(); virtual void s208(); virtual void s209();
	virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216(); virtual void *slot217(); virtual void s218(); virtual void s219();
	virtual void s220(); virtual void s221(); virtual void s222(); virtual void s223(); virtual void s224(); virtual void s225(); virtual void s226(); virtual void s227(); virtual void s228(); virtual void s229();
	virtual void s230(); virtual void s231(); virtual void s232(); virtual void s233(); virtual void s234(); virtual void s235(); virtual void s236(); virtual void s237(); virtual void s238(); virtual void s239();
	virtual void s240(); virtual void s241(); virtual void s242(); virtual void s243(); virtual void s244(); virtual void s245(); virtual void s246(); virtual void s247(); virtual void s248(); virtual void s249();
	virtual void s250(); virtual void s251(); virtual void s252(); virtual void s253(); virtual void s254(); virtual void s255(); virtual void s256(); virtual void s257(); virtual void s258(); virtual void s259();
	virtual void s260(); virtual void s261(); virtual void s262(); virtual void s263(); virtual void s264(); virtual void s265(); virtual void s266(); virtual void s267(); virtual void s268(); virtual void s269();
	virtual void s270(); virtual void s271(); virtual void s272(); virtual void s273(); virtual void s274(); virtual void s275(); virtual void s276(); virtual void s277(); virtual void s278(); virtual void s279();
	virtual void s280(); virtual void s281(); virtual void s282(); virtual void s283(); virtual void s284(); virtual void s285(); virtual void s286(); virtual void s287(); virtual void s288(); virtual void s289();
	virtual void s290(); virtual void s291(); virtual void s292(); virtual void s293(); virtual void s294(); virtual void s295(); virtual void s296(); virtual void s297(); virtual void s298(); virtual void s299();
	virtual void s300(); virtual void s301(); virtual void s302(); virtual void s303(); virtual void s304(); virtual void s305(); virtual void s306(); virtual void s307(); virtual void s308(); virtual void s309();
	virtual void s310(); virtual void s311(); virtual void s312(); virtual void s313(); virtual void s314(); virtual void s315(); virtual void s316(); virtual void s317(); virtual void s318(); virtual void s319();
	virtual void s320(); virtual void s321(); virtual void s322(); virtual void s323(); virtual void s324(); virtual void s325(); virtual void s326(); virtual void s327(); virtual void s328(); virtual void s329();
	virtual void s330(); virtual void s331(); virtual void s332(); virtual void s333(); virtual void s334(); virtual void s335(); virtual void s336(); virtual void s337(); virtual void s338(); virtual void s339();
	virtual void s340(); virtual void s341(); virtual void s342(); virtual void s343(); virtual void s344(); virtual void s345(); virtual void s346(); virtual void s347(); virtual void s348(); virtual void s349();
	virtual void s350(); virtual void s351(); virtual void s352(); virtual void s353(); virtual void s354(); virtual void s355(); virtual void s356(); virtual void s357(); virtual void s358(); virtual void s359();
	virtual unsigned int slot360(); virtual void s361(); virtual void s362(); virtual void s363(); virtual void s364(); virtual void s365(); virtual void s366(); virtual void s367(); virtual void s368(); virtual void s369();
	virtual void s370(); virtual void s371(); virtual void s372(); virtual void s373(); virtual void s374(); virtual void s375(); virtual void s376(); virtual void s377(); virtual void s378(); virtual void s379();
	virtual void s380(); virtual void s381(); virtual void s382(); virtual void s383(); virtual void s384(); virtual void s385(); virtual void s386(); virtual void s387(); virtual void s388(); virtual void s389();
	virtual void s390(); virtual void s391(); virtual void s392(); virtual void s393(); virtual void s394(); virtual void s395(); virtual void s396(); virtual void s397(); virtual void s398(); virtual void s399();
	virtual void s400(); virtual void s401(); virtual void s402(); virtual void s403(); virtual int slot404(int pEnt); virtual void s405(); virtual void s406(); virtual void s407(); virtual void s408(); virtual void s409();
	virtual void s410(); virtual void s411(); virtual void s412(); virtual void s413(); virtual void s414(); virtual void s415(); virtual void s416(); virtual void s417(); virtual void s418(); virtual void s419();
	virtual void s420(); virtual void s421(); virtual void s422(); virtual void s423(); virtual void s424(); virtual void s425(); virtual void s426(); virtual void s427(); virtual void s428(); virtual void s429();
	virtual void s430(); virtual void s431(); virtual void s432(); virtual void s433(); virtual void s434(); virtual void s435(); virtual void s436(); virtual void s437(); virtual void s438(); virtual void s439();
	virtual void s440(); virtual void s441(); virtual void s442(); virtual void s443(); virtual void s444(); virtual void s445(); virtual void s446(); virtual void s447(); virtual void s448(); virtual void s449();
	virtual void s450(); virtual void s451(); virtual void s452(); virtual void s453(); virtual void s454(); virtual void s455(); virtual void s456(); virtual void s457(); virtual void s458(); virtual void s459();
	virtual void s460(); virtual void s461(); virtual void s462(); virtual void s463(); virtual void s464(); virtual void s465(); virtual void s466(); virtual void s467(); virtual void s468(); virtual void s469();
	virtual void s470(); virtual void s471(); virtual void s472(); virtual void s473(); virtual void s474(); virtual void s475(); virtual void s476(); virtual void s477(); virtual void s478(); virtual void s479();
	virtual void s480(); virtual void s481(); virtual void s482(); virtual void s483(); virtual void s484(); virtual void s485(); virtual void s486(); virtual void s487(); virtual void s488(); virtual void s489();
	virtual void s490(); virtual void s491(); virtual void slot492(); virtual void s493(); virtual void s494(); virtual void s495(); virtual void s496(); virtual void s497(); virtual void slot498(); virtual void s499();
	virtual void s500(); virtual void s501(); virtual void s502(); virtual void s503(); virtual void s504(); virtual void s505(); virtual void s506(); virtual void s507(); virtual void s508(); virtual void s509();
	virtual void s510(); virtual void s511(); virtual void s512(); virtual void s513(); virtual void s514(); virtual void s515(); virtual void s516(); virtual void s517(); virtual void s518(); virtual void s519();
	virtual void s520(); virtual void s521(); virtual void s522(); virtual void s523(); virtual void s524(); virtual void s525(); virtual void s526(); virtual void s527(); virtual void s528(); virtual void s529();
	virtual void s530(); virtual void s531(); virtual void s532(); virtual void s533(); virtual void s534(); virtual void s535(); virtual void s536(); virtual void s537(); virtual void s538(); virtual void s539();
	virtual void s540(); virtual void s541(); virtual void s542(); virtual void s543(); virtual void s544(); virtual void s545(); virtual void s546(); virtual void s547(); virtual void s548(); virtual void s549();
	virtual void s550(); virtual void s551(); virtual void s552(); virtual void s553(); virtual void s554(); virtual void s555(); virtual void s556(); virtual void s557(); virtual void s558(); virtual void s559();
	virtual void s560(); virtual void s561(); virtual void s562(); virtual void s563(); virtual void s564(); virtual void s565(); virtual void s566(); virtual void s567(); virtual void s568(); virtual void s569();
	virtual void s570(); virtual void s571(); virtual void s572(); virtual void s573(); virtual void s574(); virtual void s575(); virtual void s576(); virtual void s577(); virtual void s578(); virtual void s579();
	virtual void s580(); virtual void s581(); virtual void s582(); virtual void s583(); virtual void s584(); virtual void s585(); virtual void s586(); virtual void s587(); virtual void s588(); virtual void s589();
	virtual void s590(); virtual void s591(); virtual void s592(); virtual void s593(); virtual void s594(); virtual void s595(); virtual void slot596(int pEnt); virtual void s597(); virtual void s598(); virtual void s599();
	virtual void s600(); virtual void s601(); virtual void s602(); virtual void s603(); virtual void s604(); virtual void s605(); virtual void s606(); virtual int slot607();
};

namespace v438 {
struct RandV { virtual void v0(); virtual float RandomFloat(float a, float b); virtual int RandomInt(int a, int b); };
extern RandV *g_1070b244;
struct GlobV { float realtime; int framecount; float absframetime; float curtime; };
extern GlobV *g_1070b228;
extern char g_1072bcc2;
extern int g_1072bc88;
struct NavV { int sub_102ee620(); };
struct PatrolV { int m_n0; int m_nSchedule; };
struct StatusV { bool sub_101e3f50(void *p); };
extern StatusV g_10739a4c;
struct PlayerV
{
	void sub_1017f4a0(int priority, void *pEnt, const void *pPos);
	void sub_1017f2a0(int priority, void *pEnt, const void *pPos);
	void sub_1017fd60(int value, void *pNpc);
	int sub_1017e740();
	int sub_1017e720();
};
struct Vec3
{
	float x, y, z;
	Vec3 &operator=(const Vec3 &o)
	{
		x = o.x;
		y = o.y;
		z = o.z;
		return *this;
	}
};
struct CRec6360
{
	char m_b0;
	char m_b1;
	unsigned int m_hash;
	operator unsigned int() const { return (((m_hash & 0x68d8635) ^ 0xce9f66a) + 0xffa91d8 & 0x197279ca) ^ m_hash ^ 0xa641cacd; }
};
struct WpnV { char pad[0x744]; int m_iPrimaryAmmoType; };
}
using namespace v438;
int sub_1042fe90(unsigned int h);

#define F(type, off) (*(type *)((char *)this + (off)))
#define H(off) (*(EHANDLE *)((char *)this + (off)))
#define SL ((V438S *)this)
#define FILE_ "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"
#define RET(line, val) { m_pszFile1b30 = FILE_; m_nLine1b34 = line; return val; }

// TARGET: CAI_BaseNPCTroika::vfunc438
int CAI_BaseNPCTroika::vfunc438()
{
	int r;
	F(int, 0x1b2c) = 2;
	switch (F(int, 0x5cc0))
	{
	case 1:
		if (!sub_1033e2b0() && !F(char, 0x5bc4))
		{
			r = SL->slot607();
			if (r)
				return r;
			if (F(PatrolV *, 0x6590))
			{
				if (!F(PatrolV *, 0x6590)->m_nSchedule)
				{
					DevMsg("WARNING:  Patrol path for '%s' has no schedule.\n", sub_1000b5cd());
					sub_1029f5d0((char *)this + 0x658c);
				}
				else
				{
					sub_1029f650((char *)this + 0x658c);
					RET(0x498d, F(PatrolV *, 0x6590)->m_nSchedule);
				}
			}
			if (F(bool, 0x63d9))
			{
				if (F(NavV *, 0x5d34)->sub_102ee620() == 8 || F(void *, 0x62ec))
				{
					if (sub_10269d30(0x13))
						RET(0x4998, 0x102);
					if (sub_10269d30(0x10))
						RET(0x499c, 0x106);
					if (sub_10269d30(0x11))
						RET(0x49a0, 0x105);
					RET(0x49a4, 0x100);
				}
				RET(0x49a9, 0xff);
			}
			if (F(bool, 0x6434))
			{
				int c = (F(int, 0x60a8) + 2) * 5;
				int n = (c < 30) ? c : 30;
				if (n > g_1070b244->RandomInt(0, 99))
					RET(0x49b4, 0x4f);
			}
			if (H(0x5d28).Get() || H(0x5d2c).Get())
			{
				r = sub_102b7370();
				if (r)
					return r;
			}
			if (F(bool, 0x6494))
			{
				F(bool, 0x6494) = 0;
				RET(0x49c6, 0x45);
			}
		}
		RET(0x49d2, 0x6b);
	case 3:
		r = sub_102b8a60();
		if (r)
			return r;
		r = sub_102b8c40();
		if (r)
			return r;
		if (sub_10014df8(0xb))
			RET(0x49e8, 0x56);
		r = sub_102b7370();
		if (r)
			return r;
		r = sub_102b9060();
		if (r)
			return r;
		F(bool, 0x63fc) = 1;
		F(bool, 0x1b28) = 1;
		RET(0x4a08, 0x4b);
	case 11:
		if (sub_10269d30(1) || sub_10269d30(0x26))
			RET(0x4a1a, 0x81);
		r = sub_102b8c40();
		if (r)
			return r;
		if (sub_10269d30(2))
			RET(0x4a26, 0x82);
		if (sub_10269d30(0x25) || sub_10269d30(0x6a) || sub_10269d30(0x6d) || sub_10269d30(0x6e) || sub_10269d30(0x70) || sub_10269d30(0x6f))
		{
			F(float, 0x623c) = v438::g_1070b228->curtime + 2.0f;
			sub_102b4090();
			if ((sub_10014df8(0x6d) || sub_10014df8(0x70)) && g_1070b244->RandomInt(0, 99) < 100)
				RET(0x4a39, 0x7f);
			RET(0x4a3d, 0x80);
		}
		if (sub_10269d30(0x72))
		{
			sub_102b4090();
			RET(0x4a43, 0x50);
		}
		if (sub_10014df8(0x2d))
		{
			r = sub_102b8d20(0x84, 0x73);
			if (r)
				return r;
		}
		if (!F(void *, 0x6598))
			F(unsigned int, 0x14b8) &= 0xffffefff;
		if (~F(unsigned int, 0x14b8) & 0x1000)
		{
			const float &rHunt = F(float, 0x6474);
			if (v438::g_1070b228->curtime >= rHunt)
				RET(0x4a9a, 0x85);
			if (!SL->slot168() || !SL->slot168()->slot158())
				RET(0x4a9f, 0x7d);
			RET(0x4aa3, 0x7c);
		}
		RET(0x4aa8, 0x7e);
	case 2:
		F(char, 0x5b80) = 0;
		if (sub_10014df8(0x58))
		{
			sub_10279a50(0);
			if (sub_10279dd0())
			{
				sub_10269b50(0x58);
				m_pszFile1b30 = FILE_;
				m_nLine1b34 = 0x4abf;
				return sub_1028a260();
			}
			if (F(char, 0x65f6))
				sub_1026e340(1);
			else
				sub_1026e340(3);
			m_pszFile1b30 = FILE_;
			m_nLine1b34 = 0x4acb;
			return sub_1028a260();
		}
		if ((sub_10014df8(0x4c) || sub_10014df8(0x4d)) && !(F(unsigned int, 0x5d8c) & 0x40) && sub_1008dc40(0x49, -1) != -1)
		{
			F(char, 0x5b80) = 0;
			RET(0x4ad5, 0x14);
		}
		if (SL->slot404(SL->slot167()) == 2)
		{
			if (sub_10014df8(0x46) || sub_10014df8(0x4c) || sub_10014df8(0x4d))
			{
				F(char, 0x5b80) = 0;
				SL->slot492();
				RET(0x4ae2, 0x1b);
			}
			RET(0x4ae6, 0xd);
		}
		if (sub_10014df8(0x40) && sub_10007e19() && sub_103346c0(((WpnV *)sub_10007e19())->m_iPrimaryAmmoType) > 0)
			RET(0x4aeb, 0x28);
		if (F(void *, 0x6444) && !sub_10014df8(0x2f))
		{
			if (sub_10007e19() && (((V438S *)sub_10007e19())->slot360() & 0x6000))
				RET(0x4af3, 0xec);
			break;
		}
		if (!sub_10014df8(0x46))
		{
			if (!sub_10014df8(0x48))
				RET(0x4b02, 0xb);
			RET(0x4b07, 0xb1);
		}
		if (sub_10014df8(8) || sub_10014df8(0x5f))
		{
			if (sub_10007e19() && (((V438S *)sub_10007e19())->slot360() & 0x6000) && !sub_10014df8(0x2f) && !sub_10014df8(0x63))
			{
				if (sub_102b7f40())
					RET(0x4b15, 0xef);
				RET(0x4b19, 0xf0);
			}
			RET(0x4b1f, 0xb8);
		}
		if (sub_10014df8(0x4f))
		{
			if (g_10739a4c.sub_101e3f50(this))
				RET(0x4b29, 0xef);
			if (g_1070b244->RandomInt(0, 99) < 20 && !F(void *, 0x5ddc) && F(float, 0x6268) < 800.0f)
				RET(0x4b2e, 0xef);
			RET(0x4b32, 0xed);
		}
		if (sub_10014df8(0x50))
			RET(0x4b37, 0xee);
		if (sub_10014df8(0x51))
			RET(0x4b3b, 0xdc);
		if (sub_10014df8(0x52))
			RET(0x4b3f, 0xdf);
		if (sub_10014df8(0x61))
			RET(0x4b43, 0xb);
		if (sub_10014df8(0x60))
			RET(0x4b48, 0xb1);
		if (sub_10014df8(0x63) || sub_10014df8(0x2f))
			RET(0x4b4d, 0xbc);
		if (sub_10014df8(0x59))
			RET(0x4b52, 0x17);
		if (sub_10014df8(0x66) && sub_10007e19() && (((V438S *)sub_10007e19())->slot360() & 0x6000))
			RET(0x4b60, 0xf0);
		if (sub_10014df8(0x4a) && sub_10007e19())
		{
			if (((V438S *)sub_10007e19())->slot360() & 0x6000)
				RET(0x4b73, 0xf0);
			if (((V438S *)sub_10007e19())->slot360() & 0x18000)
				RET(0x4b77, 0xca);
		}
		RET(0x4b81, 0xbf);
	case 12:
		RET(0x4bd7, 0x6b);
	case 13:
		RET(0x4bdb, 0x44);
	case 8:
		if (sub_10014df8(0x39))
			RET(0x4be4, 0x73);
		if (sub_10014df8(0x46) || sub_10014df8(0x44) || sub_10014df8(0x4c) || sub_10014df8(0x4d) || sub_10014df8(0x4e) || sub_10014df8(0x21) || sub_10014df8(0x1f))
		{
			F(char, 0x5b80) = 0;
			if ((F(unsigned int, 0x14b8) & 0x100) == 0x100)
			{
				F(unsigned int, 0x14b8) &= 0xfffffeff;
				F(float, 0x641c) = g_1070b244->RandomFloat(10.0f, 20.0f) + v438::g_1070b228->curtime;
				SL->slot498();
				if (sub_10014df8(0x4c) || sub_10014df8(0x4d) || sub_10014df8(0x4e))
					RET(0x4c00, 0x72);
				if (sub_10014df8(0x21))
				{
					if (H(0x6390).Get())
						SL->slot596((int)H(0x6390).Get());
					if (H(0x628c).Get() == H(0x6390).Get())
					{
						if (H(0x628c).Get())
						{
							char c = g_1072bcc2;
							int vol = g_1072bc88;
							CSoundEnt::sub_101bac90(8, (const Vector *)((V438S *)H(0x628c).Get())->slot217(), vol, 10.0f, c, (CBaseEntity *)this);
						}
						if (!F(bool, 0x6394))
						{
							((PlayerV *)H(0x628c).Get())->sub_1017f4a0(F(int, 0x6368), this, (char *)this + 0x6374);
							F(int, 0x6370) = ((PlayerV *)H(0x628c).Get())->sub_1017e740();
						}
						else if (sub_10014df8(0x5a))
						{
							((PlayerV *)H(0x628c).Get())->sub_1017fd60(F(int, 0x6368), this);
							F(int, 0x6370) = ((PlayerV *)H(0x628c).Get())->sub_1017e740();
						}
						if (F(float, 0x6264) <= 512.0f && g_1070b244->RandomInt(0, 99) < 80)
							RET(0x4c23, 0x71);
						RET(0x4c27, 0x70);
					}
					if (H(0x6390).Get())
						RET(0x4c2c, 0x73);
					F(Vec3, 0x5dd0) = F(Vec3, 0x6374);
					RET(0x4c31, 0x76);
				}
				if (sub_10014df8(0x1f))
				{
					if (H(0x638c).Get())
						SL->slot596((int)H(0x638c).Get());
					if (H(0x628c).Get() == H(0x638c).Get())
					{
						if (H(0x628c).Get())
						{
							char c = g_1072bcc2;
							int vol = g_1072bc88;
							CSoundEnt::sub_101bac90(8, (const Vector *)((V438S *)H(0x628c).Get())->slot217(), vol, 10.0f, c, (CBaseEntity *)this);
						}
						unsigned int rh = F(CRec6360, 0x6360);
						int h = sub_1042fe90(rh);
						((PlayerV *)H(0x628c).Get())->sub_1017f2a0(h, this, (char *)this + 0x6380);
						F(int, 0x636c) = ((PlayerV *)H(0x628c).Get())->sub_1017e720();
						if (F(float, 0x6264) <= 512.0f && g_1070b244->RandomInt(0, 99) < 80)
							RET(0x4c4d, 0x71);
						RET(0x4c51, 0x70);
					}
					if (H(0x638c).Get())
						RET(0x4c56, 0x73);
					F(Vec3, 0x5dd0) = F(Vec3, 0x6380);
					RET(0x4c5b, 0x76);
				}
				if (sub_10014df8(0x44))
					SL->slot596((int)H(0x5b6c).Get());
				RET(0x4c69, 0x72);
			}
			RET(0x4c72, 0x73);
		}
		if (sub_10014df8(0xb))
			RET(0x4c78, 0x56);
		if (sub_10014df8(0x25))
		{
			F(float, 0x623c) = v438::g_1070b228->curtime + 2.0f;
			F(unsigned int, 0x14b8) &= 0xfffffeff;
			sub_102b4090();
			RET(0x4c83, 0x48);
		}
		RET(0x4c86, 0x77);
	case 14:
		switch (F(int, 0x63f8))
		{
		default:
			F(int, 0x63f8) = 1;
			RET(0x4c9a, 0x116);
		case 1:
			F(int, 0x63f8) = 2;
			RET(0x4c9f, 0x117);
		case 2:
			F(int, 0x63f8) = 3;
			RET(0x4ca4, 0x118);
		case 3:
			F(int, 0x63f8) = 4;
			RET(0x4ca9, 0x119);
		case 4:
			F(int, 0x63f8) = 5;
			if (sub_10014df8(0x46))
				RET(0x4cb0, 0x11b);
			RET(0x4cb4, 0x11a);
		case 5:
			F(int, 0x63f8) = 2;
			RET(0x4cba, 0x117);
		case 0:
			F(int, 0x63f8) = 1;
			RET(0x4c9a, 0x116);
		}
	}
	return CAI_BaseNPC::vfunc438();
}
// END FUNCTION

// FUNCTION: 0x102b11c0 size=0xe1
#include "CAI_BaseNPCTroika.h"

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct NpcSlots168
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
	virtual int vfunc168();
};

int CAI_BaseNPCTroika::sub_102b11c0(int activity)
{
	switch (activity) {
	case 0x87:
	case 0x88:
		if ((~*(unsigned int *)((char *)this + 0x14b8) & 0x1000) != 0)
			return ((NpcSlots168 *)this)->vfunc168() ? 0x7c : 0x7d;
		return 0x7e;
	case 0xef:
		return 0xf0;
	case 0xc7:
		return 0xc9;
	case 0xca:
	case 0xcb:
	case 0xd1:
	case 0xd2:
		return 0xcc;
	default:
		return 0;
	}
}
// END FUNCTION

// FUNCTION: 0x102b12f0 size=0x23e
#include "CAI_BaseNPCTroika.h"

struct CTroikaHint440 { char m_pad0000[0x5dc]; int m_nType; };

int CAI_BaseNPCTroika::vfunc440(int a)
{
	int r;
	if ((m_flags5b84 & 0x100) == 0x100 && (r = sub_102b11c0(a)) != 0)
		return r;
	switch (a)
	{
	case 1:
	case 0x6b:
		return (m_flags14bc & 0x80000) != 0x80000 ? 0x6b : 0x132;
	case 2:
		return 0x46;
	case 3:
		return 0x47;
	case 6:
		return 0x4a;
	case 0x15:
		return 0xb8;
	case 0xf:
		return 0xb1;
	case 0x10:
		return 0xb7;
	case 0x28:
		return 0xc2;
	case 0x25:
		return 0xc1;
	case 0x21:
		return 0xed;
	case 0x22:
		return 0xee;
	case 0x2f:
		return 0xf2;
	case 0x30:
		return 0xf4;
	case 0x31:
		return 0xf6;
	case 0x32:
		return 0xf8;
	case 0x33:
		return 0xf9;
	case 0x77:
	{
		CTroikaHint440 *pHint = *(CTroikaHint440 **)((char *)this + 0x5ddc);
		if (pHint && pHint->m_nType == 0x2774)
			return 0x78;
		break;
	}
	case 0x94:
		if (vfunc293())
			return 0x95;
		break;
	case 0x96:
		if (vfunc293())
			return 0x97;
		break;
	}
	return CAI_BaseNPC::vfunc440(a);
}
// END FUNCTION

// FUNCTION: 0x102b15c0 size=0x375
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CEntitySoundOriginView.h"
#include "CDevFlagObj.h"

extern CDevFlagObj *g_10924a6c;
extern CGlobalEntityList *g_10566458;

#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif

struct CTroikaCharView : CEntitySoundOriginView
{
	char m_pad0004[0x3d4 - 4];
	Vector m_vec3d4;
};

struct CTroikaNPCFlagBits
{
	unsigned int b0_21 : 22;
	unsigned int bFlee : 1;		// 0x400000
	unsigned int bHide : 1;		// 0x800000
	unsigned int bDecided : 1;	// 0x1000000
	unsigned int b25 : 1;		// 0x2000000
	unsigned int b26_31 : 6;
};

// TARGET: CAI_BaseNPCTroika::sub_102b15c0
void CAI_BaseNPCTroika::sub_102b15c0()
{
	CTroikaNPCFlagBits &bits = *(CTroikaNPCFlagBits *)&m_flags14b8;
	if (sub_10014df8(1)) {
		m_f6084 = -1.0f;
		CBaseEntity *pEnt;
		{
			unsigned int hTemp;
			pEnt = g_10566458->sub_100290c0((const unsigned int *)vfunc586((int)&hTemp));
		}
		if (!pEnt)
			return;
		CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)pEnt->m_pA8;
		if (!pChar)
			return;
		if (pChar->sub_101671a0()) {
			if ((unsigned char)~*((unsigned char *)this + 0x14bb) & 1) {
				m_flags14b8 |= 0x1000000;
				int nThreshold = max(0, 50 - m_n60a4 * 20);
				if (!*((unsigned char *)this + 0x6340) && nThreshold > enginerandom->vfunc2(0, 99)) {
					bits.bFlee = 1;
					bits.b25 = 0;
				} else
					bits.bFlee = 0;
			}
			CTroikaCharView *pView = (CTroikaCharView *)pChar;
			Vector vel = pView->m_vec3d4;
			const Vector &charOrigin = *(const Vector *)pView->GetAbsOrigin();
			const Vector &myOrigin = *(const Vector *)((CEntitySoundOriginView *)this)->GetAbsOrigin();
			Vector dir = myOrigin - charOrigin;
			dir.z = 0.0f;
			VectorNormalize(dir);
			float dot = dir.x * vel.x + vel.y * dir.y;
			if ((m_flags14b8 & 0x400000) == 0x400000) {
				if (dot > 20.0f && gpGlobals->curtime >= m_f60a0) {
					g_10924a6c->vfunc1();
					sub_10269a20(5);
					g_10924a6c->vfunc1();
					sub_10269a20(0x26);
					return;
				}
				sub_10269b50(1);
				if (m_flags14b8 & 0x2200000)
					return;
				g_10924a6c->vfunc1();
				sub_10269a20(3);
				return;
			}
			g_10924a6c->vfunc1();
			sub_10269a20(0x26);
			if (dot < 20.0f) {
				g_10924a6c->vfunc1();
				sub_10269a20(7);
			} else if (dot > 20.0f) {
				g_10924a6c->vfunc1();
				sub_10269a20(5);
			} else {
				g_10924a6c->vfunc1();
				sub_10269a20(6);
			}
			return;
		}
		if ((unsigned char)~*((unsigned char *)this + 0x14bb) & 1) {
			bits.bDecided = 1;
			int nThreshold = (m_n60a4 + 5) * 20;
			int nMax = nThreshold > 100 ? 100 : nThreshold;
			if (nMax > enginerandom->vfunc2(0, 99))
				bits.bHide = 1;
			else
				bits.bHide = 0;
		}
		if (m_flags14b8 & 0x800000) {
			g_10924a6c->vfunc1();
			sub_10269a20(4);
		}
		if (sub_102b3270(pEnt, 0)) {
			g_10924a6c->vfunc1();
			sub_10269a20(0x26);
		}
	} else {
		if (sub_1028e360() && sub_10269c70(2)) {
			g_10924a6c->vfunc1();
			sub_10269a20(2);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102b1a20 size=0x21e
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPCTroika.h"
#include "Vector.h"
#include "ehandle.h"

struct CTroikaComfortView
{
	char m_pad0000[0xe90];
	float m_flNextCheck;	// 0xe90
	int m_nComfortCount;	// 0xe94
	char m_pad0e98[0x5bb0 - 0xe98];
	int m_n5bb0;		// 0x5bb0
	char m_pad5bb4[0x5ce4 - 0x5bb4];
	EHANDLE m_h5ce4;	// 0x5ce4
	char m_pad5ce8[0x5da4 - 0x5ce8];
	void *m_p5da4;		// 0x5da4
};

struct CTroikaComfortBest
{
	char m_pad0000[0x94];
	void *m_p94;		// 0x94
};

struct CScheduleTypeView
{
	char m_pad0000[0x1c];
	int m_n1c;		// 0x1c
};

struct CComfortVector
{
	unsigned int *m_pMemory;	// +0
	int m_nAllocationCount;		// +4
	int m_nGrowSize;		// +8
	int m_nSize;			// +0xc
};
extern CComfortVector g_10937af4;

struct CDevFlagObj { virtual void vfunc0(); virtual void vfunc1(); };
extern CDevFlagObj *g_10924a6c;

void CAI_BaseNPCTroika::sub_102b1a20()
{
	if ( gpGlobals->curtime >= ((CTroikaComfortView *)this)->m_flNextCheck )
	{
		((CTroikaComfortView *)this)->m_flNextCheck = enginerandom->vfunc1(0.2f, 0.4f) + gpGlobals->curtime;

		if ( this->m_n5cc0 == 1 )
		{
			CAI_BaseNPCTroika *pBest;
			float flBestDist;
			int nCount;

			nCount = g_10937af4.m_nSize;
			pBest = 0;
			flBestDist = 1024.0f;

			for ( int i = 0; i < nCount; i++ )
			{
				CAI_BaseNPCTroika *pOther = (CAI_BaseNPCTroika *)g_10566458->sub_100290c0(&g_10937af4.m_pMemory[i]);
				if ( pOther == this )
					continue;

				Vector vecDelta;
				VectorSubtract(*(Vector *)vfunc220(), *(Vector *)pOther->vfunc220(), vecDelta);
				float flDist = vecDelta.Length();
				if ( flDist <= flBestDist )
				{
					flBestDist = flDist;
					pBest = pOther;
				}
			}

			if ( pBest != 0 && !sub_1033e2b0() && this->m_pSchedule5c38 != 0 )
			{
				int nType = ((CScheduleTypeView *)this->m_pSchedule5c38)->m_n1c;
				if ( vfunc447(nType) != 0x12f )
				{
					void *pOwner = ((CTroikaComfortBest *)pBest)->m_p94;
					if ( pOwner != 0 )
					{
						void *pSquadA = (((CTroikaComfortView *)this)->m_n5bb0 <= 0) ? ((CTroikaComfortView *)this)->m_p5da4 : 0;
						void *pSquadB = (((CTroikaComfortView *)pOwner)->m_n5bb0 <= 0) ? ((CTroikaComfortView *)pOwner)->m_p5da4 : 0;
						if ( pSquadA != pSquadB )
							return;
					}

					CTroikaComfortView *pBestView = (CTroikaComfortView *)pBest;
					if ( pBestView->m_nComfortCount >= 3 )
						return;
					pBestView->m_nComfortCount++;

					g_10924a6c->vfunc1();
					sub_10269a20(0x27);
					sub_10279cc0((CBaseEntity *)pBest);
					return;
				}

				if ( (CAI_BaseNPCTroika *)((CTroikaComfortView *)this)->m_h5ce4.Get() == pBest )
					return;
				sub_10273e80(0);
				return;
			}
		}

		if ( this->m_pSchedule5c38 != 0
		     && vfunc447(((CScheduleTypeView *)this->m_pSchedule5c38)->m_n1c) == 0x12f )
			sub_10273e80(0);
	}
}
// END FUNCTION

// FUNCTION: 0x102b1cd0 size=0x6dd
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CDevFlagObj.h"

extern CDevFlagObj *g_10924a6c;

namespace block_102b8cd0 {
struct CAI_BaseNPCTroikaUnit : CAI_BaseNPCTroika { bool sub_102b8cd0(void *pEnt); };
}
using namespace block_102b8cd0;

struct S101b9920
{
	EHANDLE m_hEnt;
	int m_nKind;
	const Vector *sub_101b99d0();
};

struct CTroikaSenseView
{
	char m_pad0000[0x5b68];
	EHANDLE m_h5b68;
	EHANDLE m_h5b6c;
	EHANDLE m_h5b70;
	EHANDLE m_h5b74;
	EHANDLE m_h5b78;
	char m_pad5b7c[0x6108 - 0x5b7c];
	S101b9920 m_rec6108; char m_pad610c[0x2c - 8];
	S101b9920 m_rec6134; char m_pad6138[0x2c - 8];
	S101b9920 m_rec6160; char m_pad6164[0x2c - 8];
	S101b9920 m_rec618c; char m_pad6190[0x2c - 8];
	S101b9920 m_rec61b8; char m_pad61bc[0x2c - 8];
	S101b9920 m_rec61e4;
};

void CAI_BaseNPCTroika::sub_102b1cd0()
{
	CTroikaSenseView *p = (CTroikaSenseView *)this;
	CEntityVSlots *pSlots = (CEntityVSlots *)this;

	sub_10015839(0x25);
	sub_10015839(0x33);

	if (gpGlobals->curtime >= m_flNextInvestigateSoundTime)
	{
		S101b9920 *pTarget = 0;

		if (sub_10014df8(0x6e) && (sub_10269c70(0x6e) || sub_102b3270(p->m_rec61e4.m_hEnt.Get(), 0)))
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x25);
			pTarget = &p->m_rec61e4;
		}
		if (sub_10014df8(0x71) && (sub_10269c70(0x71) || sub_102b3270(p->m_rec6134.m_hEnt.Get(), 0)))
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x25);
			pTarget = &p->m_rec6134;
		}
		if (sub_10014df8(0x6a))
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x25);
			pTarget = &p->m_rec6108;
		}
		if (sub_10014df8(0x6f) && (sub_10269c70(0x6f) || sub_102b3270(p->m_rec61b8.m_hEnt.Get(), 0)))
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x25);
			pTarget = &p->m_rec61b8;
		}
		if (sub_10014df8(0x70) && (sub_10269c70(0x70) || sub_102b3270(p->m_rec618c.m_hEnt.Get(), 1)))
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x25);
			pTarget = &p->m_rec618c;
		}
		if (sub_10014df8(0x6d) && (sub_10269c70(0x6d) || sub_102b3270(p->m_rec6160.m_hEnt.Get(), 1)))
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0x25);
			pTarget = &p->m_rec6160;
		}

		if (sub_10269c70(0x33) && pTarget)
		{
			CBaseEntity *pEnemy = (CBaseEntity *)pSlots->slot167();
			if (pEnemy && pEnemy == pTarget->m_hEnt.Get())
			{
				const Vector &vecOrigin = *pSlots->slot217();
				Vector vecDelta = *pTarget->sub_101b99d0() - vecOrigin;
				if (DotProduct(vecDelta, m_vec6290) < 0.0f)
				{
					g_10924a6c->vfunc1();
					sub_100041b0(0x33);
				}
			}
		}
	}

	if (sub_10269c70(0x2d))
	{
		if (!((CAI_BaseNPCTroikaUnit *)this)->sub_102b8cd0(p->m_h5b78.Get()))
			return;

		if (p->m_h5b78.Get() == m_h628c.Get())
		{
			if (sub_10014df8(0x5a))
			{
				g_10924a6c->vfunc1();
				sub_100041b0(0x2d);
			}
			else
				sub_10015839(0x2d);
		}
		else if (p->m_h5b78.Get() == (CBaseEntity *)pSlots->slot167())
		{
			if (sub_10014df8(0x46))
			{
				g_10924a6c->vfunc1();
				sub_100041b0(0x2d);
			}
			else
				sub_10015839(0x2d);
		}
		else if (p->m_h5b78.Get() == p->m_h5b68.Get())
		{
			if (sub_10014df8(0x43))
			{
				g_10924a6c->vfunc1();
				sub_100041b0(0x2d);
			}
			else
				sub_10015839(0x2d);
		}
		else if (p->m_h5b78.Get() == p->m_h5b6c.Get())
		{
			if (sub_10014df8(0x44))
			{
				g_10924a6c->vfunc1();
				sub_100041b0(0x2d);
			}
			else
				sub_10015839(0x2d);
		}
		else if (p->m_h5b78.Get() == p->m_h5b70.Get())
		{
			if (sub_10014df8(0x45))
			{
				g_10924a6c->vfunc1();
				sub_100041b0(0x2d);
			}
			else
				sub_10015839(0x2d);
		}
		else if (p->m_h5b78.Get() == p->m_h5b74.Get())
		{
			if (sub_10014df8(0x5b))
			{
				g_10924a6c->vfunc1();
				sub_100041b0(0x2d);
			}
			else
				sub_10015839(0x2d);
		}
		else if (gpGlobals->curtime >= m_flNextSeeSoundSourceTime)
		{
			if (pSlots->slot363(p->m_h5b78.Get()))
			{
				if (pSlots->slot201(p->m_h5b78.Get(), 0x2804091, 0, 0))
				{
					g_10924a6c->vfunc1();
					sub_100041b0(0x2d);
				}
				else
					sub_10015839(0x2d);
			}
			else
				sub_10015839(0x2d);
			m_flNextSeeSoundSourceTime = gpGlobals->curtime + 0.5f;
		}
	}
	else
		sub_10015839(0x2d);
}
// END FUNCTION

// FUNCTION: 0x102b2570 size=0x15e
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "TestBit.h"

struct CTroikaGlobalView
{
	virtual void v0();
	virtual void vfunc1();
};


struct CTroikaView
{
	char m_pad0000[0x1488];
	float m_f1488;
	char m_pad148c[0x1564 - 0x148c];
	float m_flNextAttack1564;
	char m_pad1568[0x5b84 - 0x1568];
	unsigned int m_flags5b84;
	char m_pad5b88[0x5d9c - 0x5b88];
	float m_f5d9c;
	char m_pad5da0[0x606c - 0x5da0];
	float m_f606c;
	char m_pad6070[0x6078 - 0x6070];
	char m_b6078;
};

extern "C" __declspec(dllimport) int RandomInt(int nMin, int nMax);
extern CTroikaGlobalView *g_10924a6c;

void CAI_BaseNPCTroika::sub_102b2570()
{
	CTroikaView *p = (CTroikaView *)this;
	sub_10015839(0xe);
	sub_10015839(0xf);
	if (!p->m_b6078)
		return;
	if (sub_10014df8(0x55))
	{
		g_10924a6c->vfunc1();
		sub_100041b0(9);
		return;
	}
	if (p->m_f606c < p->m_f5d9c || 3.0f / p->m_f1488 + p->m_f606c < gpGlobals->curtime)
	{
		if (sub_10014df8(0x5f) && RandomInt(0, 99) < 20)
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0xe);
		}
		else if ((p->m_flags5b84 & 0x400) != 0x400 && !sub_10014df8(9) && !sub_10014df8(0x60) && !sub_10014df8(0x51) && RandomInt(0, 10) == 0)
		{
			g_10924a6c->vfunc1();
			sub_100041b0(0xe);
		}
	}
	if (sub_10269c70(0xf) && p->m_flNextAttack1564 < gpGlobals->curtime && sub_10014df8(0x5f) && sub_10007e19()
		&& TestBit(((CEntityVSlots *)sub_10007e19())->slot360(), 30))
	{
		g_10924a6c->vfunc1();
		sub_100041b0(0xf);
	}
}
// END FUNCTION

// FUNCTION: 0x102b2730 size=0x8c
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102e0150.h"


struct CAIRandomView
{
	virtual void v0();
	virtual void v1();
};

extern CAIRandomView *g_10924a6c;
extern float g_10451ab4;

// TARGET: CAI_BaseNPCTroika::sub_102b2730
void CAI_BaseNPCTroika::sub_102b2730()
{
	char *p = (char *)this;
	if (*(int *)(p + 0x5bb0) <= 0 && *(int *)(p + 0x5da4) != 0)
	{
		CBaseEntity *pEnemy = vfunc168();
		if (pEnemy)
		{
			if (vfunc541()->sub_102e0150(pEnemy) + g_10451ab4 >= gpGlobals->curtime)
			{
				g_10924a6c->v1();
				sub_10269a20(0x31);
				if (sub_10269aa0(0x4a))
				{
					g_10924a6c->v1();
					sub_10269a20(0x32);
				}
			}
		}
		sub_10269aa0(0x46);
	}
}
// END FUNCTION

// FUNCTION: 0x102b27f0 size=0x855
#include "ScopeTrace.h"
#include "CAIPendingCondList.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CGameTrace.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "UTIL_Trace.h"
#include "Vector.h"
struct CCondHookView_433 { virtual void v0(); virtual void v1(); };
extern CCondHookView_433 *g_10924a6c;
extern char g_105387dc[];
extern float g_104454c4;

struct CNavView_433 { char pad[0x14]; float m_f14; };
char __fastcall sub_102ee6a0(CNavView_433 *p);

// TARGET: CAI_BaseNPCTroika::vfunc433
void CAI_BaseNPCTroika::vfunc433()
{
	ScopeTrace trace("CAI_BaseNPCTroika::GatherConditions", this ? (((CBaseEntity *)this)->m_name26c ? ((CBaseEntity *)this)->m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	sub_10269b50(0x26);
	sub_10269b50(0x27);
	sub_10269b50(1);
	sub_10269b50(2);
	sub_10269b50(3);
	sub_10269b50(4);
	sub_10269b50(5);
	sub_10269b50(6);
	sub_10269b50(7);
	sub_10269b50(0x30);
	sub_10269b50(0xb);
	sub_1026ec30();
	CAI_BaseNPCTroika *pEnemy = (CAI_BaseNPCTroika *)vfunc168();
	if (pEnemy && !pEnemy->vfunc158())
	{
		g_10924a6c->v1();
		sub_10269a20(0x58);
		sub_10269b50(0x46);
		sub_10269b50(0x48);
	}
	sub_1028efc0();
	sub_1028fa50();
	sub_10269b50(0x15);
	sub_10269b50(0x14);
	sub_10269b50(0x17);
	sub_10269b50(0x16);
	sub_10269b50(0x19);
	sub_10269b50(0x18);
	if (m_flInsideInterruptDistanceSqr > g_104454c4)
	{
		if (sub_102ee6a0((CNavView_433 *)m_p5d34) && ((CNavView_433 *)m_p5d34)->m_f14 < m_flInsideInterruptDistanceSqr)
		{
			g_10924a6c->v1();
			sub_10269a20(0x15);
		}
		if (pEnemy)
		{
			Vector *pE = (Vector *)pEnemy->vfunc220();
			Vector *pT = (Vector *)vfunc220();
			float dx = pT->x - pE->x, dy = pT->y - pE->y, dz = pT->z - pE->z;
			if (dx * dx + dy * dy + dz * dz < m_flInsideInterruptDistanceSqr)
			{
				g_10924a6c->v1();
				sub_10269a20(0x17);
			}
		}
		CAI_BaseNPCTroika *pOther = (CAI_BaseNPCTroika *)vfunc293();
		if (pOther)
		{
			Vector *pE = (Vector *)pOther->vfunc220();
			Vector *pT = (Vector *)vfunc220();
			float dx = pT->x - pE->x, dy = pT->y - pE->y, dz = pT->z - pE->z;
			if (dx * dx + dy * dy + dz * dz < m_flInsideInterruptDistanceSqr)
			{
				g_10924a6c->v1();
				sub_10269a20(0x19);
			}
		}
	}
	if (m_flOutsideInterruptDistanceSqr > g_104454c4)
	{
		if (sub_102ee6a0((CNavView_433 *)m_p5d34) && ((CNavView_433 *)m_p5d34)->m_f14 > m_flOutsideInterruptDistanceSqr)
		{
			g_10924a6c->v1();
			sub_10269a20(0x14);
		}
		if (pEnemy)
		{
			Vector *pE = (Vector *)pEnemy->vfunc220();
			Vector *pT = (Vector *)vfunc220();
			float dx = pT->x - pE->x, dy = pT->y - pE->y, dz = pT->z - pE->z;
			if (dx * dx + dy * dy + dz * dz > m_flOutsideInterruptDistanceSqr)
			{
				g_10924a6c->v1();
				sub_10269a20(0x16);
			}
		}
		CAI_BaseNPCTroika *pOther = (CAI_BaseNPCTroika *)vfunc293();
		if (pOther)
		{
			Vector *pE = (Vector *)pOther->vfunc220();
			Vector *pT = (Vector *)vfunc220();
			float dx = pT->x - pE->x, dy = pT->y - pE->y, dz = pT->z - pE->z;
			if (dx * dx + dy * dy + dz * dz > m_flOutsideInterruptDistanceSqr)
			{
				g_10924a6c->v1();
				sub_10269a20(0x18);
			}
		}
	}
	if (m_flInterruptTime > g_104454c4 && gpGlobals->curtime >= m_flInterruptTime)
	{
		g_10924a6c->v1();
		sub_10269a20(0x1a);
	}
	sub_102b15c0();
	sub_102b1a20();
	sub_102b1cd0();
	if (sub_10269c70(0x2c))
	{
		sub_10269b50(0x2c);
		if (pEnemy)
		{
			Vector d = *(Vector *)pEnemy->vfunc217() - *(Vector *)vfunc217();
			d.z = 0;
			VectorNormalize(d);
			if (d.y * m_vec6290.y + d.x * m_vec6290.x <= 0.707)
			{
				g_10924a6c->v1();
				sub_10269a20(0x2c);
			}
		}
	}
	else
		sub_10269b50(0x2c);
	sub_102b2570();
	for (int i = 0; i < 18; i++)
	{
		if (m_hFireEmitters[i] && *(int *)((char *)m_hFireEmitters[i].Get() + 0x484))
		{
			g_10924a6c->v1();
			sub_10269a20(0x30);
			break;
		}
	}
	sub_102b2730();
	if (m_h5d28.Get())
	{
		if (sub_10269aa0(0x46) || sub_10269aa0(0x54))
			*(int *)&m_h5d28 = -1;
	}
	if (sub_10269c70(0xb) && gpGlobals->curtime < *(float *)((char *)this + 0x65c4) && ((EHANDLE *)((char *)this + 0x65c0))->Get())
	{
		float flRand = enginerandom->vfunc1(0.9f, 1.3f);
		((CAIPendingCondList *)((char *)this + 0x1a9c))->sub_102cc6c0(0xb, flRand);
		*(float *)((char *)this + 0x65c4) = gpGlobals->curtime;
	}
	if (gpGlobals->curtime >= *(float *)((char *)this + 0x6600))
	{
		*(float *)((char *)this + 0x6600) = gpGlobals->curtime + 3.0f;
		Vector vecStart = vfunc193();
		CGameTrace tr;
		UTIL_TraceLine(vecStart, vecStart + m_vec6290 * 32.0f, 0x2000b, this, 0, &tr);
		bool bHit = false;
		if (tr.m_fraction < 1.0f)
			bHit = true;
		else if (tr.m_allsolid)
			bHit = true;
		else if (tr.m_startsolid)
			bHit = true;
		if (bHit)
		{
			g_10924a6c->v1();
			sub_10269a20(0x3c);
		}
		else
		{
			sub_10269b50(0x3c);
		}
	}
	if (sub_10269aa0(0x4c) || sub_10269aa0(0x4d) || sub_10269aa0(0x4e))
		m_b5b80 = 1;
	else if (m_b5b80)
	{
		g_10924a6c->v1();
		sub_10269a20(0x4c);
	}
}
// END FUNCTION

// FUNCTION: 0x102b3270 size=0x290
#include <math.h>
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "ehandle.h"

extern void (*g_109f364c)(const char *pMsg, ...);

namespace block_102b8cd0 {
struct CAI_BaseNPCTroikaUnit : CAI_BaseNPCTroika
{
	bool sub_102b8cd0(CBaseEntity *pEnt);
};
}
using namespace block_102b8cd0;

inline bool IsNear(CEntityVSlots *pThis, CEntityVSlots *pOther)
{
	if ((*pThis->slot217() - *pOther->slot217()).Length2DSqr() <= 65536.0f) {
		float zThis = pThis->slot217()->z;
		if ((float)fabs(zThis - pOther->slot217()->z) <= 80.0f)
			return true;
	}
	return false;
}

// TARGET: CAI_BaseNPCTroika::sub_102b3270
bool CAI_BaseNPCTroika::sub_102b3270(CBaseEntity *pEnt, char bFlag)
{
	if (m_flags14b8 & 0x4000080)
		return false;
	if (m_b6435)
		return false;
	if (!pEnt)
		return false;
	if (pEnt == m_h647c.Get())
		return false;
	if (pEnt == vfunc168())
		return true;
	if (((CAI_BaseNPCTroikaUnit *)this)->sub_102b8cd0(pEnt)) {
		int m = *(int *)((char *)this + 0x60e0);
		if (m == 0) {
			if (bFlag) {
				CEntityVSlots *pFocus = (CEntityVSlots *)((CEntityVSlots *)pEnt)->slot167();
				if (pFocus != (CEntityVSlots *)this && pFocus && ((CEntityVSlots *)this)->slot404(pFocus) == 1) {
					CEntityVSlots *pCheck = (CEntityVSlots *)pEnt;
					if (IsNear((CEntityVSlots *)this, pCheck))
						return true;
					pCheck = pFocus;
					if (IsNear((CEntityVSlots *)this, pCheck))
						return true;
				}
			}
		} else {
			if (!bFlag)
				return false;
			if (m == 1 || m == 0x10)
				return false;
		}
	}
	switch (bFlag ? m_n633c : m_n6338) {
	case 0:
		break;
	case 1:
		if (!pEnt->m_pA8)
			return false;
		if (((CEntityVSlots *)this)->slot404(pEnt) == 1)
			return true;
		break;
	case 2:
		if (!pEnt->m_pA8)
			return false;
	case 5:
		if (((CEntityVSlots *)this)->slot404(pEnt) == 4)
			break;
	case 6:
		return true;
	case 4:
		if (((CEntityVSlots *)this)->slot404(pEnt) == 1)
			return true;
		break;
	case 3:
		if (pEnt->m_pA8)
			return true;
		break;
	default:
		g_109f364c("Hey FOO!!!  I don't recognize your investigate mode!\n");
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102b35b0 size=0x25d
#include "CAI_Motor.h"
#include "CAI_Navigator.h"
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CBCCSlotViews.h"
#include "CBaseCombatCharacter.h"
#include "ehandle.h"
#include "CStealthKillRules.h"
#include "Vector.h"

extern char g_10924fba;
extern char g_10924fb9;
extern CStealthKillRules g_1072c540;

struct CSoundView
{
	EHANDLE m_hOwner;	// +0
	int m_iType;		// +4
	int m_iVolume;		// +8
	int m_unkC;
	int m_unk10;
	int m_unk14;
	int m_unk18;
	int m_unk1C;
	Vector m_vecOrigin;	// +0x20
};

// The game's first decliner of the header inline EHandleEntityList::LookupEntity in this unit is
// CAI_BaseNPCTroika::OnScheduleChange (vfunc435, 0x102a0940, judged 0 below as a same-unit copy): its LookupEntity
// COMDAT is compiled before this function, so VC6 knows the call's side effects (not its registers) here.
#include "CUnknown1027d990.h"
#include "CUnknown102ee270.h"
#include "CUnknown102e0a60.h"
#include "CUnknown101e3af0.h"

extern unsigned char g_10739a64;
extern CUnknown101e3af0 g_10739a4c;
void sub_1018e910(void *pThis);

namespace block_102b35b0
{
struct CUnk1026d160X
{
	void sub_1026d160();
};

struct CSetAttackExtentsSlot
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(const float *pExtents);
};

struct CScheduleChange435 : CAI_BaseNPCTroika
{
	CAI_Motor *GetMotor() { return m_pMotor5d44; }
	CAI_Navigator *GetNavigator() { return m_p5d34; }
	void AddNpcFlags(unsigned int f) { m_flags14bc |= f; }
	unsigned int HasNpcFlags(unsigned int f) const { return m_flags14bc & f; }
	void RemoveNpcFlags(unsigned int f) { m_flags14bc &= ~f; }
	void RemoveTroikaFlags(unsigned int f) { m_flags14b8 &= ~f; }
	unsigned int HasNavFlags(unsigned int f) const { return m_flags5d8c & f; }
	void RemoveNavFlags(unsigned int f) { m_flags5d8c &= ~f; }
	void sub_102a0940(void *pSchedule);
};

void CScheduleChange435::sub_102a0940(void *pSchedule)
{
	CAI_BaseNPC::vfunc435(pSchedule);
	AddNpcFlags(0x80000004);

	if ((~m_flags14b8 & 8) != 0) {
		if (((CUnknown1027d990 *)this)->sub_1027d990() != 3
			&& ((CUnknown1027d990 *)this)->sub_1027d990() != 1)
			((CUnknown102ee270 *)GetNavigator())->sub_102ee270();

		sub_102b53d0(1, "Leaving interesting place (OnScheduleChange)");
		m_n6300 = 0;
		m_n659c = 0;
		((CUnknown102e0a60 *)GetMotor())->sub_102e0a60(0x43340000);
		m_b1a40 = 0;
		m_flGoalTolerance = 0;
		m_flInsideInterruptDistanceSqr = 0;
		m_flOutsideInterruptDistanceSqr = 0;
		m_flInterruptTime = 0;
		((CBaseHandle &)m_hMoveTargetEnt) = (IHandleEntity *)0;

		if (((const CBaseHandle *)&m_h5d24)->Get())
			((CEntityVSlots *)this)->slot532(8);

		RemoveTroikaFlags(0x440b4681);
		RemoveNpcFlags(0x88000eb0);
		if (HasNpcFlags(0x1000)) {
			RemoveNpcFlags(0x80001000);
			((CUnk1026d160X *)this)->sub_1026d160();
		}

		if ((m_flags14bc & 1) == 1) {
			float *pExtents = (float *)((char *)this + 0x65d0);
			((CSetAttackExtentsSlot *)this)->v15(pExtents);
			pExtents[0] = -1.0f;
			pExtents[1] = -1.0f;
			pExtents[2] = -1.0f;
			RemoveNpcFlags(0x80000001);
		}

		*((char *)GetMotor() + 0x28) = 0;
		m_flDesiredMoveYaw = 0;
		m_bWaitFinishedSet = 0;
	}

	if (HasNpcFlags(0x40000000)) {
		if (g_10739a64)
			g_10739a4c.sub_101e3c80((CBaseCombatCharacter *)this, 1);
		sub_1018e910(this);
		m_b63d8 = 0;
	}

	RemoveNpcFlags(0xc0000000);
	RemoveTroikaFlags(0x28000000);
	if (HasNavFlags(0x2000))
		RemoveNavFlags(0x2000);
}
}


struct CSoundView467 : CSoundView
{
	int SoundType() const { return m_iType; }
	const Vector &GetSoundOrigin() { return m_vecOrigin; }
};

// TARGET: ?vfunc467@CAI_BaseNPCTroika@@QAE_NPAH@Z
bool CAI_BaseNPCTroika::vfunc467(int *pOther)
{
	CSoundView467 *pSound = (CSoundView467 *)pOther;

	if (!pSound)
		return false;
	if (g_10924fba)
		return false;
	if (g_10924fb9 && pSound->m_hOwner.Get() && pSound->m_hOwner->m_pA8)
		return false;
	if ((*(unsigned int *)((char *)this + 0x5b84) & 0x800) == 0x800) {
		CBaseEntity *pFriend = m_hFriendPlayer.Get();
		if (pSound->m_hOwner.Get() == pFriend)
			return false;
	}
	if (pSound->m_hOwner.Get() == (CBaseEntity *)this)
		return false;
	if (pSound->m_hOwner.Get() != 0) {
		CBaseCombatCharacter *pBCC = (CBaseCombatCharacter *)pSound->m_hOwner->m_p9c;
		if (!pBCC || !pBCC->sub_10146b20((CBaseCombatCharacter *)this))
			return false;
	}
	if (pSound->SoundType() == 4) {
		CBaseEntity *pEnt = pSound->m_hOwner.Get();
		if (pEnt && pEnt->m_pA8 && g_1072c540.sub_101be710((CBaseEntity *)pEnt->m_pA8, (CBaseEntity *)this))
			return false;
	}
	if ((*(unsigned int *)((char *)this + 0x14b8) & 0x20400) != 0) {
		Vector v;
		float flDist = (pSound->GetSoundOrigin() - *((CEntityVSlots *)this)->slot196(&v)).Length();
		float f = ((CNpcVFunc476SlotView *)this)->vfunc476() * pSound->m_iVolume * 0.25f;
		if (pSound->m_hOwner.Get() != 0)
			pSound->m_hOwner->sub_1009d850(pOther, &f);
		if (flDist > f)
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x102b38b0 size=0xb4
#include "CAI_BaseNPCTroika.h"

struct EntA8 { char pad[0xa8]; int f; };
struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern char g_10924fba;
extern char g_10924fb9;
extern HandleList *g_10566458;

bool CAI_BaseNPCTroika::vfunc468(CBaseEntity *pEnt)
{
	if (g_10924fba)
		return false;
	if (g_10924fb9 && pEnt && ((EntA8 *)pEnt)->f)
		return false;
	if ((*(unsigned int *)((char *)this + 0x5b84) & 0x800) == 0x800 && pEnt) {
		unsigned int h = *(unsigned int *)((char *)this + 0x60ac);
		void *other;
		if (h != 0xffffffff) {
			HandleEntry *p = &g_10566458->e[h & 0x1fff];
			if (p->serial == (h >> 13))
				other = p->ent;
			else
				other = 0;
		} else
			other = 0;
		if (pEnt == other)
			return false;
	}
	if (((EntA8 *)pEnt)->f)
		return true;
	switch (vfunc404(pEnt)) {
	case 0:
		return false;
	case 1:
	case 2:
		return true;
	case 3:
	case 4:
		return false;
	default:
		return false;
	}
}
// END FUNCTION

// FUNCTION: 0x102b39a0 size=0x24
struct CAI_BaseNPCTroikaCallee {
    void sub_10007bdf(int a);
    bool sub_10014df8(int condition);
    void sub_102b39a0(int arg);
};

// TARGET: CAI_BaseNPCTroikaCallee::sub_102b39a0
void CAI_BaseNPCTroikaCallee::sub_102b39a0(int arg)
{
    sub_10007bdf(arg);
    if (sub_10014df8(0x54)) {
        *(int *)((char *)this + 0x60a8) = *(int *)((char *)this + 0x60a8) + 1;
    }
}
// END FUNCTION

// FUNCTION: 0x102b39e0 size=0x2e4
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_Senses.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "CAI_Timer2c.h"
#include "CUnknown102c66b0.h"

struct CSenseSnap {
	int m_n00, m_n04, m_n08, m_n0c, m_n10;
	char m_b14;
	int m_n18, m_n1c;
	Vector m_vec20;
};

#define COPY_SNAP(off, type) { \
	const CSenseSnap *r = (const CSenseSnap *)((CAI_Senses *)m_pSenses5cdc)->sub_103105d0(type); \
	CSenseSnap *d = (CSenseSnap *)((char *)this + off); \
	d->m_n00 = r->m_n00; d->m_n04 = r->m_n04; d->m_n08 = r->m_n08; d->m_n0c = r->m_n0c; d->m_n10 = r->m_n10; \
	d->m_b14 = r->m_b14; d->m_n18 = r->m_n18; d->m_n1c = r->m_n1c; d->m_vec20.sub_1003e4b0(r->m_vec20); }

#define FLAGS (*(unsigned int *)((char *)this + 0x5cb4))
#define TEST_BIT(n) unsigned char b##n = (unsigned char)((FLAGS >> n) & 1); if (b##n)

void CAI_BaseNPCTroika::vfunc470()
{
	CAI_BaseNPC::vfunc470();
	{ TEST_BIT(14) COPY_SNAP(0x61e4, 2) }
	{ TEST_BIT(17) COPY_SNAP(0x6134, 0x400) }
	{ TEST_BIT(10) COPY_SNAP(0x6108, 8) }
	{ TEST_BIT(15) COPY_SNAP(0x61b8, 4) }
	if (*(unsigned char *)((char *)this + 0x5cb6) & 1)
		COPY_SNAP(0x618c, 0x10)
	{ TEST_BIT(13) ((CAI_Timer2c *)((char *)this + 0x6160))->sub_102b3d90(*(CAI_Timer2c *)((CAI_Senses *)m_pSenses5cdc)->sub_103105d0(1)); }
	if (((CUnknown102c66b0 *)((char *)this + 0x5ca8))->sub_102c66b0(0x72))
		((CAI_Timer2c *)((char *)this + 0x6210))->sub_102b3d90(*(CAI_Timer2c *)((CAI_Senses *)m_pSenses5cdc)->sub_103105d0(0x800));
	if (sub_10014df8(0x6d))
		sub_1028e8b0((CBaseEntity *)g_10566458->sub_100290c0((unsigned int *)((char *)this + 0x6160)), 0x3f800000);
	if (sub_10014df8(0x70))
		sub_1028e8b0((CBaseEntity *)g_10566458->sub_100290c0((unsigned int *)((char *)this + 0x618c)), 0x3f800000);
}
// END FUNCTION

// FUNCTION: 0x102b3d90 size=0x49
struct CAI_Timer2c
{
	int a, b, c, d, e;
	char f;
	int g, h, i, j, k;
	CAI_Timer2c &sub_102b3d90(const CAI_Timer2c &p);
};
CAI_Timer2c &CAI_Timer2c::sub_102b3d90(const CAI_Timer2c &p)
{
	a = p.a; b = p.b; c = p.c; d = p.d; e = p.e; f = p.f;
	g = p.g; h = p.h; i = p.i; j = p.j; k = p.k;
	return *this;
}
// END FUNCTION

// FUNCTION: 0x102b3e00 size=0x1e5
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown100290c0.h"
#include "CDevFlagObj.h"
#include "COutputEvent.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
extern CDevFlagObj *g_10924a6c;
struct EntWithPlayer { char pad[0xa8]; CBaseCombatCharacter *m_pPlayer; };

// TARGET: CAI_BaseNPCTroika::vfunc472
void CAI_BaseNPCTroika::vfunc472(CBaseEntity *pEnt)
{
	if ((~m_flags14bc & 0x4000000) && m_b6081 && sub_102b3270(pEnt, 0)) {
		if (((EntWithPlayer *)pEnt)->m_pPlayer && ((EntWithPlayer *)pEnt)->m_pPlayer->sub_101671a0()) {
			g_10924a6c->vfunc1();
			sub_100041b0(1);
			unsigned int *pCur = &m_h6088;
			if ((CBaseEntity *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(pCur) == pEnt)
				return;
			*pCur = *(unsigned int *)pEnt->vfunc1();
			m_n60a8++;
			CUnknown100290c0 *pList = (CUnknown100290c0 *)g_10566458;
			if (pList->sub_100290c0(&m_h6088) == pList->sub_100290c0(&m_h608c)) {
				m_n60a4++;
				m_flags14b8 &= 0xfebfffff;
				return;
			}
			if (((EntWithPlayer *)pEnt)->m_pPlayer)
				((COutputEvent *)((char *)this + 0x5fa4))->sub_100cd660(pEnt, this, 0);
			m_h608c = m_h6088;
			CAI_BaseNPC *pOld = (CAI_BaseNPC *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&m_h608c);
			float *pPos = pOld->vfunc217();
			m_v6090[0] = pPos[0];
			m_v6090[1] = pPos[1];
			m_v6090[2] = pPos[2];
			m_n60a4 = 0;
			m_f609c = gpGlobals->curtime + enginerandom->vfunc1(10.0f, 20.0f);
			m_f60a0 = gpGlobals->curtime + enginerandom->vfunc1(5.0f, 10.0f);
			m_flags14b8 &= 0xfe9fffff;
			return;
		}
		m_flags14b8 |= 0x800000;
	}
	if ((CBaseEntity *)EHandle_Get(m_h6088) == pEnt) {
		m_h6088 = 0xffffffff;
		m_flags14b8 &= 0xfe9fffff;
	}
}
// END FUNCTION

// FUNCTION: 0x102b4070 size=0x6
int sub_102b4070(void)
{
    return 0x81f;
}
// END FUNCTION

// FUNCTION: 0x102b4090 size=0x397
#include "CAI_BaseNPCTroika.h"
#include "CAI_Timer2c.h"

struct CTimerView102b4090
{
	char pad0[0x5b78];
	int m_n5b78;
	char pad1[0x60b0 - 0x5b7c];
	CAI_Timer2c t[9];
};

inline void CopyBase(CAI_Timer2c &d, const CAI_Timer2c &s)
{
	d.m_n00 = s.m_n00; d.m_n04 = s.m_n04; d.m_n08 = s.m_n08; d.m_n0c = s.m_n0c;
	d.m_n10 = s.m_n10; d.m_b14 = s.m_b14; d.m_n18 = s.m_n18; d.m_n1c = s.m_n1c;
}

inline void CopyInts(CAI_Timer2c &d, const CAI_Timer2c &s)
{
	CopyBase(d, s);
	d.m_n20 = s.m_n20; d.m_n24 = s.m_n24; d.m_n28 = s.m_n28;
}

inline void CopyVec(CAI_Timer2c &d, const CAI_Timer2c &s)
{
	CopyBase(d, s);
	((Vector *)&d.m_n20)->sub_1003e4b0(*(Vector *)&s.m_n20);
}

void CAI_BaseNPCTroika::sub_102b4090()
{
	CTimerView102b4090 *p = (CTimerView102b4090 *)this;
	if (sub_10269aa0(0x6d)) {
		CopyInts(p->t[0], p->t[4]);
	} else if (sub_10269aa0(0x70)) {
		CopyInts(p->t[0], p->t[5]);
	} else if (sub_10269aa0(0x72)) {
		CopyInts(p->t[0], p->t[8]);
	} else if (sub_10269aa0(0x6f)) {
		CopyVec(p->t[0], p->t[6]);
	} else if (sub_10269aa0(0x6a)) {
		CopyVec(p->t[0], p->t[2]);
	} else if (sub_10269aa0(0x71)) {
		CopyVec(p->t[0], p->t[3]);
	} else if (sub_10269aa0(0x6e)) {
		p->t[0].sub_102b3d90(p->t[7]);
	}
	p->m_n5b78 = p->t[0].m_n00;
	p->t[1].sub_102b3d90(p->t[0]);
}
// END FUNCTION

// FUNCTION: 0x102b4520 size=0x7
int __fastcall sub_102b4520(int p)
{
	return p + 0x60b0;
}
// END FUNCTION

// FUNCTION: 0x102b4540 size=0xb4
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"

struct SHandleSlot
{
	CBaseEntity *m_pEntity;
	int m_Serial;
};

struct SOtherEntity
{
	char m_pad0000[0x98];
	char *m_p0098;
	int m_n00a0pad;
	int m_n00a8;
};

// the CBaseCombatCharacter implementation of the slot (stub 0x10010e24)
struct SBaseCharacter
{
	char sub_10326750(SOtherEntity *pOther);
};

extern char g_10924fba;
extern char g_10924fb9;
extern CGlobalEntityList *g_10566458;

static inline CBaseEntity *ResolveHandle(unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	SHandleSlot *s = (SHandleSlot *)&g_10566458->m_Slots[h & 0x1fff].m_pEntity;
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

// CAI_BaseNPCTroika::vfunc363 as a fastcall function: ecx = this, edx unused
// TARGET: CAI_BaseNPCTroika::vfunc363
char CAI_BaseNPCTroika::vfunc363(CBaseEntity *pEnt)
{
	CAI_BaseNPCTroika *self = this;
	SOtherEntity *pOther = (SOtherEntity *)pEnt;
	if (!pOther)
		return false;
	if (g_10924fba)
		return false;
	if (g_10924fb9 && *(int *)((char *)pOther + 0xa8))
		return false;
	if (self->vfunc293()) {
		CBaseEntity *pTarget = ResolveHandle(*(unsigned int *)((char *)self + 0x628c));
		if (self->vfunc293() == (int)pTarget && pOther->m_p0098 && *(pOther->m_p0098 + 0x6279))
			return true;
	}
	char c = ((SBaseCharacter *)self)->sub_10326750(pOther);
	return c != '\0';
}
// END FUNCTION

// FUNCTION: 0x102b4630 size=0xe8
#include "CAI_BaseNPCTroika.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CSlot594View
{
	SV100(a) SV100(b) SV100(c) SV100(d) SV100(e)
	SV10(f0) SV10(f1) SV10(f2) SV10(f3) SV10(f4) SV10(f5) SV10(f6) SV10(f7) SV10(f8)
	SV(f90) SV(f91) SV(f92) SV(f93)
	virtual char s594(CBaseEntity *pEnt, int a, int b, int c);
};

struct CNameTable
{
	unsigned int sub_101e1590(const char *pszName);
	unsigned int sub_101e1870(unsigned int id);
};
extern CNameTable g_10739a4c;
extern char g_10924fba;
extern char g_10924fb9;

// TARGET: CAI_BaseNPCTroika::vfunc201
bool CAI_BaseNPCTroika::vfunc201(CBaseEntity *pEnt, int a, int *pOut, int d)
{
    static unsigned int s_nBrainWipe = g_10739a4c.sub_101e1870(g_10739a4c.sub_101e1590("Dominate_BrainWipe"));
    if (!pEnt)
        return false;
    if (g_10924fba) {
        if (pOut)
            *pOut = 0;
        return false;
    }
    if (g_10924fb9 && *(int *)((int)pEnt + 0xa8)) {
        if (pOut)
            *pOut = 0;
        return false;
    }
    if (!((CSlot594View *)this)->s594(pEnt, a, 0, 0))
        return false;
    if (sub_1033d2f0(s_nBrainWipe))
        return false;
    if (sub_100a6fa0(pEnt, a, pOut, d)) return true; return false;
}
// END FUNCTION

// FUNCTION: 0x102b4760 size=0x29c
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "Vector.h"
extern void sub_10142aa0(int, int, int, int, int, int, int, int);

inline void Box(const Vector &origin, const Vector &mins, const Vector &maxs, int g)
{
	sub_10142aa0((int)&origin, (int)&mins, (int)&maxs, 0xff, g, 0, 0, 0x3f000000);
}

bool CAI_BaseNPCTroika::vfunc594(CBaseEntity *pEnt, int a, int *pOut, int d)
{
	Vector vThis, vOther;
	m_b6081 = 0;
	((CEntityVSlots *)this)->slot193(&vThis);
	((CEntityVSlots *)pEnt)->slot193(&vOther);
	switch (m_n5cc0)
	{
	case 2:
		if (!m_b5bc5)
			break;
	default:
		if (gpGlobals->curtime >= *(float *)((char *)this + 0x6604))
		{
			float flDist = (vOther - vThis).Length();
			float flRange = pEnt->vfunc28() * m_f63b8;
			if (flDist > flRange)
			{
				if (pOut)
					*pOut = 0;
				return false;
			}
			if (flDist > flRange * 0.7f)
				m_b6081 = 1;
		}
		break;
	}
	if (pEnt->m_p9c && !((CBaseCombatCharacter *)pEnt->m_p9c)->sub_10146b20((CBaseCombatCharacter *)this))
	{
		if ((m_fDebugOverlays224 & 0x80000000u) && pEnt->m_pA8)
		{
			Vector vecOrigin = *(Vector *)vfunc220();
			vecOrigin.z = vecOrigin.z + (((CCollisionProperty *)((char *)this + 0x270))->vfunc2()[2] + 12.0f);
			Box(vecOrigin, Vector(-2.0f, -2.0f, -2.0f), Vector(2.0f, 2.0f, 2.0f), 160);
		}
		if (pOut)
			*pOut = 0;
		return false;
	}
	if ((m_fDebugOverlays224 & 0x80000000u) && pEnt->m_pA8)
	{
		Vector vecOrigin = *(Vector *)vfunc220();
		vecOrigin.z = vecOrigin.z + (((CCollisionProperty *)((char *)this + 0x270))->vfunc2()[2] + 13.0f);
		Box(vecOrigin, Vector(-3.0f, -3.0f, -3.0f), Vector(3.0f, 3.0f, 3.0f), 255);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x102b4ab0 size=0x104
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"

struct CTroikaHint533
{
	void sub_102d1180(void *pNpc, Vector *pOut);
};

struct CTroikaView533
{
	char pad0[0x5d60];
	Vector m_vecOffset;
	char pad5d6c[0x5ddc - 0x5d6c];
	CTroikaHint533 *m_pHint;
};

struct CAI_BaseNPCTroikaUnit533 : CAI_BaseNPCTroika
{
	void sub_102b6120(Vector *pVec, int a);
};

Vector CAI_BaseNPCTroika::vfunc533(int a, int b)
{
	CTroikaView533 *pView = (CTroikaView533 *)this;
	if (pView->m_pHint)
	{
		switch (a)
		{
		case 0x1119:
		case 0x111a:
		case 0x111b:
		case 0x111c:
		case 0x111f:
		case 0x1120:
			{
				Vector vecOrigin = *((CEntityVSlots *)this)->slot217();
				((CAI_BaseNPCTroikaUnit533 *)this)->sub_102b6120(&vecOrigin, 0);
				Vector vecPos;
				pView->m_pHint->sub_102d1180(this, &vecPos);
				return (vecPos - vecOrigin) + pView->m_vecOffset;
			}
		}
	}
	return CAI_BaseNPC::vfunc533(a, b);
}
// END FUNCTION

// FUNCTION: 0x102b4c10 size=0x18
#include "CAI_BaseNPCTroika.h"

int sub_102c6d80();

// TARGET: CAI_BaseNPCTroika::vfunc486
bool CAI_BaseNPCTroika::vfunc486()
{
	if (sub_102c1170())
		return false;
	return sub_102c6d80 != 0;
}
// END FUNCTION

// FUNCTION: 0x102b4c40 size=0x5d
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
#include "engineiface.h"
// TARGET: CAI_BaseNPCTroika::vfunc487
void CAI_BaseNPCTroika::vfunc487()
{
	*(float *)((char *)this + 0x5ce8) = enginerandom->vfunc1(0.25f, 0.75f) + gpGlobals->curtime;
	if (*(int *)((char *)this + 0x5bb0) <= 0) {
		char *pSquad = *(char **)((char *)this + 0x5da4);
		if (pSquad)
			*(float *)(pSquad + 0x60) = enginerandom->vfunc1(0.25f, 0.75f) + gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x102b4cc0 size=0x1f7
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "Vector.h"

struct CEdictView2b4 { char pad[0x9c]; CBaseCombatCharacter *m_pUnk; };
int sub_101ccc80(CEdictView2b4 **pList, int nMax, const Vector *mins, const Vector *maxs, int flags, int a);

inline int EntitiesInBox2b4(CEdictView2b4 **pList, int nMax, const Vector &mins, const Vector &maxs, int flags)
{
	return sub_101ccc80(pList, nMax, &mins, &maxs, flags, 0);
}

void CAI_BaseNPCTroika::vfunc595()
{
	static Vector s_vecExtents(1024.0f, 1024.0f, 128.0f);
	Vector vecOrigin = *(Vector *)vfunc217();
	float flBestDist = 3.4028235e38f;
	CBaseEntity *pBest = 0;
	CEdictView2b4 *pList[32];
	int n = EntitiesInBox2b4(pList, 32, vecOrigin - s_vecExtents, vecOrigin + s_vecExtents, 0x40);
	for (int i = 0; i < n; i++)
	{
		if (pList[i])
		{
			CBaseCombatCharacter *pInner = pList[i]->m_pUnk;
			if (pInner && !(pInner->sub_100b3700() & 0x8000) && pInner->m_b1480 && ((CEntityVSlots *)pInner)->slot158() && !pInner->sub_100b5190()
				&& (CBaseEntity *)pInner != (CBaseEntity *)this && vfunc404(pInner) == 1)
			{
				float flDist = (vecOrigin - *((CEntityVSlots *)pInner)->slot217()).LengthSqr();
				if (flDist < flBestDist)
				{
					flBestDist = flDist;
					pBest = pInner;
				}
			}
		}
	}
	if (pBest)
		vfunc596((int)pBest);
}
// END FUNCTION

// FUNCTION: 0x102b4f60 size=0x40
#include "CAI_BaseNPCTroika.h"

#define P10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CNPCSlotView
{
	P10(a) P10(b) P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k) P10(l) P10(m)
	P10(n) P10(o) P10(p) P10(q) P10(r) P10(s) P10(t) P10(u)
	virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216();
	virtual const Vector &vfunc217();
	P10(v) P10(w) P10(x) P10(y) P10(z)
	P10(A) P10(B) P10(C) P10(D) P10(E) P10(F) P10(G) P10(H) P10(I) P10(J) P10(K) P10(L) P10(M)
	P10(N) P10(O) P10(P) P10(Q) P10(R) P10(S) P10(T) P10(U) P10(W) P10(X) P10(Y) P10(Z) P10(Vv)
	P10(aa)
	virtual void s538(); virtual void s539(); virtual void s540(); virtual void s541(); virtual void s542(); virtual void s543();
	virtual void vfunc544(CNPCSlotView *pEnt, const Vector &pos, const Vector *pVel);
	char m_pad0004[0x3d4 - 4];
	Vector m_vecVelocity;
};

int __stdcall sub_102707d0(void *p);

// TARGET: CAI_BaseNPCTroika::vfunc596
void CAI_BaseNPCTroika::vfunc596(int a)
{
	if (a != 0)
	{
		CNPCSlotView *pNPC = (CNPCSlotView *)sub_102707d0((void *)a);
		sub_10279a50((int)pNPC);
		((CNPCSlotView *)this)->vfunc544(pNPC, pNPC->vfunc217(), &pNPC->m_vecVelocity);
	}
}
// END FUNCTION

// FUNCTION: 0x102b4fb0 size=0x14
#include "CAI_BaseNPCTroika.h"
namespace lifted {
struct C10005849 { int sub_10005849(int, int, int); };
}
int CAI_BaseNPCTroika::vfunc597(int a0, int a1)
{
    return ((lifted::C10005849 *)this)->sub_10005849(a0, 1, a1);
}
// END FUNCTION

// FUNCTION: 0x102b4fe0 size=0x91
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102dfaa0.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
char *sub_101d3730(const char *fmt, ...);

struct CHandleX {
    unsigned int m_Index;
    CBaseEntity *Get() const
    {
        if (m_Index != 0xffffffff) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_Index & 0x1fff];
            if (s->m_Serial == (int)(m_Index >> 13))
                return (CBaseEntity *)s->m_pEntity;
        }
        return 0;
    }
};

void CAI_BaseNPCTroika::vfunc598(CBaseEntity *pEnt)
{
    sub_10332ca0(pEnt, 4, 0);
    if (vfunc167() == (int)pEnt)
        sub_10279a50(0);
    if (((CHandleX *)((char *)this + 0x1a94))->Get() == pEnt)
        sub_10279b70(0);
    ((CUnknown102dfaa0 *)vfunc541())->sub_102dfaa0(pEnt, (int)sub_101d3730("%s(%d) :", "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp", 0x5511));
}
// END FUNCTION

// FUNCTION: 0x102b50b0 size=0x3b
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPCTroikaUnit54 : CAI_BaseNPCTroika
{
    bool sub_102b50b0(int a);
};

// TARGET: ?sub_102b50b0@CAI_BaseNPCTroikaUnit54@@QAE_NH@Z
bool CAI_BaseNPCTroikaUnit54::sub_102b50b0(int a)
{
    if (a != 0) {
        if (a == vfunc167()) {
            if (*(void **)((char *)this + 0x5c38) != 0) {
                if (!sub_10269c70(0x47)) {
                    return false;
                }
            }
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x102b5100 size=0x3
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc55
void CAI_BaseNPCTroika::vfunc55(int, int, int, int, int, int, int)
{
}
// END FUNCTION

// FUNCTION: 0x102b5120 size=0x53
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
void CAI_BaseNPCTroika::vfunc56(CBaseEntity *pEnt, int b, int c, int d, int e, int f, int g, int h)
{
    if (pEnt && pEnt->m_field200) {
        if (pEnt == ((EHANDLE *)((char *)this + 0x1a94))->Get())
            sub_10279b70(0);
    }
}
// END FUNCTION

// FUNCTION: 0x102b51a0 size=0x3
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc57
void CAI_BaseNPCTroika::vfunc57(int, int, int, int, int, int, int)
{
}
// END FUNCTION

// FUNCTION: 0x102b51c0 size=0x3
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc58
void CAI_BaseNPCTroika::vfunc58(int)
{
}
// END FUNCTION

// FUNCTION: 0x102b51e0 size=0x21
struct Helper
{
	void sub_102b51e0(void *pNPC);
};

// TARGET: Helper::sub_102b51e0
void Helper::sub_102b51e0(void *pNPC)
{
	*(unsigned char *)((char *)this + 0x5bc4) = 1;
	if (*(char *)((char *)pNPC + 0x57d))
		*(unsigned char *)((char *)this + 0x1590) = 1;
}
// END FUNCTION

// FUNCTION: 0x102b5220 size=0x21
struct Helper
{
	void sub_102b5220(void *pNPC);
};

// TARGET: Helper::sub_102b5220
void Helper::sub_102b5220(void *pNPC)
{
	*(unsigned char *)((char *)this + 0x5bc4) = 0;
	if (*(char *)((char *)pNPC + 0x57d))
		*(unsigned char *)((char *)this + 0x1590) = 0;
}
// END FUNCTION

// FUNCTION: 0x102b5260 size=0x21
struct Helper
{
	void sub_102b5260(void *pNPC);
};

// TARGET: Helper::sub_102b5260
void Helper::sub_102b5260(void *pNPC)
{
	*(unsigned char *)((char *)this + 0x5bc4) = 0;
	if (*(char *)((char *)pNPC + 0x57d))
		*(unsigned char *)((char *)this + 0x1590) = 0;
}
// END FUNCTION

// FUNCTION: 0x102b52a0 size=0x87
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102dfc10.h"

const char *sub_100067f3(const char *pszFormat, const char *pszFile, int nLine);

void CAI_BaseNPCTroika::sub_102b52a0(char bClearTarget, char bDead)
{
	sub_10279a50(0);
	sub_10279b70(0);
	m_flags5d8c &= 0xf7fc7fff;
	if (bClearTarget)
		sub_1000dc38();
	const char *pszMessage = sub_100067f3("%s(%d) :", "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp", 0x5626);
	((CUnknown102dfc10 *)vfunc541())->sub_102dfc10((int)pszMessage);
	if (bDead)
	{
		m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		m_nLine1b40 = 0x562a;
		m_n5cc4 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x102b5360 size=0x4b
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
CBaseEntity *CAI_BaseNPCTroika::vfunc168()
{
	CBaseEntity *pEnt = (CBaseEntity *)vfunc167();
	if (!pEnt && ((char)(*(unsigned int *)((char *)this + 0x5b64) >> 6) & 1))
		pEnt = ((EHANDLE *)((char *)this + 0x1a94))->Get();
	return pEnt;
}
// END FUNCTION

// FUNCTION: 0x102b53d0 size=0x1f4
#include "CAI_BaseNPCTroika.h"
#include "COutputEvent.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"

struct CHolderView {
	void sub_102da600(CAI_BaseNPCTroika *pNPC, char a, char b);
};

inline int ENTINDEX(int pEdict)
{
	return engine->vfunc35(pEdict);
}

struct CEntIndexView {
	int edict() { return *(int *)((char *)this + 0x2e0); }
	int entindex() { return ENTINDEX(edict()); }
};

// TARGET: CAI_BaseNPCTroika::sub_102b53d0
void CAI_BaseNPCTroika::sub_102b53d0(int a, const char *pszMessage)
{
	if (m_p62ec) {
		sub_10299a80();
		if (!m_p62ec)
			return;
		sub_1028a150();
		CEntitySoundOriginView *pSnd = (CEntitySoundOriginView *)this;
		CPASAttenuationFilter filter(pSnd);
		enginesound->vfunc11(&filter, ((CEntIndexView *)this)->entindex(), 4, 0, 0, 0x24, 100, (const float *)&pSnd->GetSoundEmissionOrigin(), 0, 1, 0);
		enginesound->vfunc11(&filter, ((CEntIndexView *)this)->entindex(), 2, 0, 0, 0x24, 100, (const float *)&pSnd->GetSoundEmissionOrigin(), 0, 1, 0);
		((CHolderView *)m_p62ec)->sub_102da600(this, 1, (char)a && m_b62e8 && (((COutputEvent *)m_Output5f8c)->sub_100cd660(m_p62ec, this, 0), m_b62e8));
		m_p62ec = 0;
		m_n6304 = 0;
		m_flags14b8 &= 0xdfffffff;
		m_flags14bc &= 0x7ffffff7;
		sub_102ae310();
	}
	m_b62e8 = 0;
}
// END FUNCTION

// FUNCTION: 0x102b5650 size=0x120
#include "Ray_t.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1025ddd0.h"
#include "ConVar.h"

extern ConVar *g_10924a1c;

struct NotifyObj {
	virtual void v0();
	virtual void Notify();
};
extern NotifyObj *g_10924edc;

struct TroikaV {
	char m_pad[0x6070];
	float m_f6070;
	char m_pad6074[0x6078 - 0x6074];
	char m_b6078;
	char m_pad6079[0x626c - 0x6079];
	float m_f626c;
	char m_pad6270[0x65e8 - 0x6270];
	CUnknown1025ddd0 *m_pList;
};

static inline float Twice(float f) { return f + f; }

char CAI_BaseNPCTroika::vfunc599(int unused)
{
	TroikaV *v = (TroikaV *)this;
	if ((m_flags5b84 & 2) == 2 || vfunc293() != 0) {
		v->m_b6078 = 1;
		return 1;
	}
	if (gpGlobals->curtime >= v->m_f6070) {
		bool bOk = true;
		float f;
		if (g_10924a1c->vfunc1())
			f = Twice(g_104454c4);
		else
			f = Twice(g_10924a1c->m_fValue);
		if (f < m_f6268 && vfunc308())
			bOk = false;
		if ((!(v->m_f626c > 64.0f) || !sub_10014df8(0x59)) && bOk
			&& ((m_flags5b84 & 0x1000) == 0x1000 || v->m_pList->sub_1025db70((CBaseEntity *)this))) {
			v->m_b6078 = 1;
			m_f6074 = enginerandom->vfunc1(7.5f, 15.0f) + gpGlobals->curtime;
			g_10924edc->Notify();
			return 1;
		}
	}
	v->m_b6078 = 0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b57c0 size=0x8d
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatWeapon.h"


struct CRandomX {
	virtual void v0();
	virtual float RandomFloat(float flMin, float flMax);
};
extern CRandomX *g_1070b244;

struct CNotifyX {
	virtual void v0();
	virtual void v1();
};
extern CNotifyX *g_10924edc;

char CAI_BaseNPCTroika::sub_102b57c0(int unused)
{
	unsigned int flags = sub_10007e19() ? ((CBaseCombatWeapon *)sub_10007e19())->vfunc360() : 0;
	if ((flags & 0x18000) && !*((char *)this + 0x6078)) {
		if ((*(CAI_NamedThing **)((char *)this + 0x65e8))->sub_1025dca0(this, 0)) {
			*((char *)this + 0x6078) = 1;
			*(float *)((char *)this + 0x6074) = g_1070b244->RandomFloat(7.5f, 15.0f) + gpGlobals->curtime;
			g_10924edc->v1();
			return 1;
		}
		*((char *)this + 0x6078) = 0;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b5880 size=0x5b
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
#include "engineiface.h"
struct STroikaNotify { virtual void a0(); virtual void vfunc1(); };
extern STroikaNotify *g_10924edc;
// TARGET: CAI_BaseNPCTroika::vfunc601
void CAI_BaseNPCTroika::vfunc601(int a)
{
	g_10924edc->vfunc1();
	*(char *)((char *)this + 0x6078) = 0;
	if (((char (__fastcall *)(CAI_BaseNPCTroika *))(*(void ***)this)[308])(this))
		*(float *)((char *)this + 0x6070) = enginerandom->vfunc1(5.0f, 10.0f) + gpGlobals->curtime;
	CAI_NamedThing *pThing = *(CAI_NamedThing **)((char *)this + 0x65e8);
	if (pThing)
		pThing->sub_1025ddd0(this);
}
// END FUNCTION

// FUNCTION: 0x102b5900 size=0xab
#include "CAI_BaseNPCTroika.h"


struct SDifficulty {
	virtual void s0();
	virtual char s1();
	char pad[0x24];
	float m28;
};
extern SDifficulty *g_10924a1c;

#define NAMED (*(CAI_NamedThing **)((char *)this + 0x65e8))

char CAI_BaseNPCTroika::vfunc602()
{
	if ((m_flags5b84 & 2) == 2 || vfunc293() != 0 || !NAMED)
		return 0;
	if (((CAI_BaseNPC *)this)->vfunc308()) {
		if (gpGlobals->curtime >= m_f6074)
			return 1;
	} else {
		double f = g_10924a1c->s1() ? 0.0f : g_10924a1c->m28;
		if ((float)(f + f) <= m_f6268 && !NAMED->sub_1025db50())
			return 1;
	}
	return NAMED->sub_1025de90(this);
}
// END FUNCTION

// FUNCTION: 0x102b59e0 size=0xf1
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CAI_BaseNPCTroika::vfunc603
float CAI_BaseNPCTroika::vfunc603(float *pCur, float *pTarget)
{
	if (*pTarget + 32.0f < *pCur) {
		if (g_1070b244->vfunc2(0, 1))
			return g_1070b244->vfunc1(30.0f, 45.0f);
		return g_1070b244->vfunc1(-30.0f, -45.0f);
	}
	if (*pTarget - 32.0f > *pCur) {
		*pCur = *pTarget;
		if (g_1070b244->vfunc2(0, 1))
			return g_1070b244->vfunc1(170.0f, 179.0f);
		return g_1070b244->vfunc1(-170.0f, -179.0f);
	}
	if (g_1070b244->vfunc2(0, 1))
		return g_1070b244->vfunc1(80.0f, 120.0f);
	return g_1070b244->vfunc1(-80.0f, -120.0f);
}
// END FUNCTION

// FUNCTION: 0x102b5b20 size=0x38
#include "CAI_BaseNPCTroika.h"

class CBaseCombatWeapon;
class CBaseCombatCharacter;
CBaseCombatWeapon *sub_1021fe50(CBaseCombatCharacter *pOwner, const char *pszName, char b);

// TARGET: CAI_BaseNPCTroika::vfunc304
void CAI_BaseNPCTroika::vfunc304()
{
	if (!vfunc307()) {
		if (!vfunc308()) {
			sub_1021fe50((CBaseCombatCharacter *)this, "item_w_fists", 0);
			sub_1033c6b0(0x10);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102b5b70 size=0x25
#include "CBaseCombatCharacter.h"
#include "CNPC_VWerewolf.h"

void sub_1021fee0(void *self, const char *name);

struct Helper
{
	void sub_102b5b70();
};

// TARGET: Helper::sub_102b5b70
void Helper::sub_102b5b70()
{
	CBaseCombatCharacter *pThis = (CBaseCombatCharacter *)this;
	if (((CNPC_VWerewolf *)this)->sub_1033c9c0() & 0x10)
	{
		sub_1021fee0(this, "item_w_fists");
		pThis->sub_1033c770(0x10);
	}
}
// END FUNCTION

// FUNCTION: 0x102b5bb0 size=0x11
namespace lifted {
extern char g_1070d1b0;
int __stdcall sub_100015dc(int, int, int);
}
char sub_102b5bb0()
{
    lifted::sub_100015dc((int)&lifted::g_1070d1b0, -1, 1);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x102b5be0 size=0x3
char sub_102b5be0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102b5c00 size=0x131
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CTakeDamageInfo.h"
#include "CCineNPC.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern "C" __declspec(dllimport) int RandomInt(int minVal, int maxVal);

struct CTroikaScriptHandle
{
	unsigned int m_Index;
	CCineNPC *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *e = &g_10566458->m_Slots[m_Index & 0x1fff];
		return e->m_Serial == (int)(m_Index >> 13) ? (CCineNPC *)e->m_pEntity : 0;
	}
};

inline bool IsHandleValid(unsigned int index)
{
	if (index == 0xffffffff)
		return false;
	CGlobalEntityList_Slot *e = &g_10566458->m_Slots[index & 0x1fff];
	return e->m_Serial == (int)(index >> 13) && e->m_pEntity != 0;
}

bool CAI_BaseNPCTroika::vfunc379(CBaseEntity *pEnt, int b, int c, int d, int e, int f, int g)
{
	int i = 0;
	if (m_nDamageRecords > 0)
	{
		do
		{
			CTakeDamageInfo *pInfo = &m_pDamageRecords[i];
			pInfo->m_pInflictor = this;
			pInfo->m_pAttacker = (CTakeDamageAttacker *)this;
			if (RandomInt(0, 1))
				pInfo->sub_101c2a10(4);
			else
				pInfo->sub_101c2a10(5);
			pEnt->sub_100a1250(pInfo);
			i++;
		} while (i < m_nDamageRecords);
	}
	if (i <= 0 && sub_10005bfa(pEnt, b, c, d, e, f, g))
	{
		if (sub_102c1170())
			sub_102c0bb0();
		CTroikaScriptHandle *h = (CTroikaScriptHandle *)&m_h5d74;
		if (IsHandleValid(m_h5d74))
		{
			h->Get()->sub_101a8c30();
			if (*(int *)((char *)this + 0x5cc0) != *(int *)((char *)this + 0x5cc4))
				sub_1026e340(*(int *)((char *)this + 0x5cc4));
		}
		sub_10280d30();
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102b5d90 size=0x13
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPCTroikaSlotsView : public CAI_BaseNPCTroika
{
	virtual void pad610();
	virtual void pad611();
	virtual void pad612();
	virtual void pad613();
	virtual void slot614();
};

void CAI_BaseNPCTroika::vfunc380()
{
	CAI_BaseNPC::vfunc380();
	((CAI_BaseNPCTroikaSlotsView *)this)->slot614();
}
// END FUNCTION

// FUNCTION: 0x102b5dc0 size=0xd
#include "CUnknown102b5dc0.h"
void CUnknown102b5dc0::sub_102b5dc0(int value)
{
	m_unk63f4 = value;
}
// END FUNCTION

// FUNCTION: 0x102b5de0 size=0x28c
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "UTIL_Trace.h"
#include "Vector.h"
struct CUnknown1028e870 { float sub_1028e870(); };
CBaseEntity *sub_1023bd00();
extern Vector g_1070d1b0;

inline void TraceToPos(CAI_BaseNPCTroika *self, Vector vecEnd, CGameTrace *ptr)
{
	UTIL_TraceLine_RayCall(((CEntityVSlots *)self)->slot192(), vecEnd, 0x2000000, self, 0, ptr);
}

bool CAI_BaseNPCTroika::sub_102b5de0()
{
	if (m_h5ba8.Get())
	{
		CGameTrace trace;
		TraceToPos(this, *((CEntityVSlots *)m_h5ba8.Get())->slot217(), &trace);
		if (trace.m_fraction < 1.0f || trace.m_allsolid || trace.m_startsolid)
		{
			CBaseEntity *pHit = trace.m_pEnt;
			if (pHit == sub_1023bd00())
				return false;
		}
		return true;
	}
	else
	{
		if (sub_10014df8(0x48))
			return false;
		if (((CUnknown1028e870 *)this)->sub_1028e870() > 3.0f)
			return false;
		CEntityVSlots *pEnemy = (CEntityVSlots *)vfunc168();
		if (!pEnemy)
			return true;
		Vector vecOut;
		CGameTrace trace;
		UTIL_TraceLine_RayCall(((CEntityVSlots *)this)->slot192(), *(Vector *)pEnemy->slot197((int)&vecOut, (int)&g_1070d1b0, 0, 0), 0x2000000, this, 0, &trace);
		if (trace.m_fraction < 1.0f || trace.m_allsolid || trace.m_startsolid)
		{
			if (trace.m_pEnt)
			{
				int r = ((CEntityVSlots *)this)->slot404(trace.m_pEnt);
				if (r == 3 || r == 4)
					return false;
			}
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x102b6120 size=0x152
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"

struct CTroikaHint6120
{
	char pad0000[0x5dc];
	int m_nType;
	void sub_102d1180(void *pNpc, Vector *pOut);
	float sub_102d12e0();
};

struct CTroikaView6120
{
	char pad0000[0x5ddc];
	CTroikaHint6120 *m_pHint;
	char pad5de0[0x63fd - 0x5de0];
	char m_b63fd;
};

struct CAI_BaseNPCTroikaUnit6120 : CAI_BaseNPCTroika
{
	bool sub_102b6120(Vector *pPos, char bFlag);
};

Vector *sub_101d2f40(Vector *pOut, float flYaw);

bool CAI_BaseNPCTroikaUnit6120::sub_102b6120(Vector *pPos, char bFlag)
{
	CTroikaView6120 *pView = (CTroikaView6120 *)this;
	CTroikaHint6120 *pHint = pView->m_pHint;
	if (!pHint)
	{
		pPos->x = 0;
		pPos->y = 0;
		pPos->z = 0;
		return false;
	}
	pHint->sub_102d1180(this, pPos);
	if (pView->m_pHint->m_nType == 0x27d8)
	{
		Vector vecTemp;
		Vector vecDir;
		if (pView->m_b63fd)
			vecDir = *sub_101d2f40(&vecTemp, pView->m_pHint->sub_102d12e0() - 45.0f);
		else
			vecDir = *sub_101d2f40(&vecTemp, pView->m_pHint->sub_102d12e0() + 45.0f);
		if (bFlag)
			vecDir = vecDir * (((CEntityVSlots *)this)->slot214()->y * 1.2f);
		else
			vecDir = vecDir * (((CEntityVSlots *)this)->slot214()->y * 1.4f);
		*pPos = vecDir + *pPos;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x102b62e0 size=0x2bb
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "Vector.h"
#include "UTIL_Trace.h"
#include "CGameTrace.h"

#define NV10(n) virtual void v##n##0(); virtual void v##n##1(); virtual void v##n##2(); virtual void v##n##3(); virtual void v##n##4(); virtual void v##n##5(); virtual void v##n##6(); virtual void v##n##7(); virtual void v##n##8(); virtual void v##n##9();

struct CNpcLosView
{
	NV10(0) NV10(1) NV10(2) NV10(3) NV10(4) NV10(5) NV10(6) NV10(7) NV10(8) NV10(9)
	NV10(10) NV10(11) NV10(12) NV10(13) NV10(14) NV10(15)
	virtual void v160(); virtual void v161(); virtual void v162(); virtual void v163(); virtual void v164(); virtual void v165(); virtual void v166();
	virtual CNpcLosView *GetEnemy();	// 167
	virtual void v168(); virtual void v169();
	NV10(17) NV10(18)
	virtual void v190(); virtual void v191();
	virtual Vector WorldSpaceCenter();	// 192
	virtual void v193(); virtual void v194(); virtual void v195(); virtual void v196(); virtual void v197(); virtual void v198(); virtual void v199();
	NV10(20)
	virtual void v210(); virtual void v211(); virtual void v212(); virtual void v213(); virtual void v214(); virtual void v215(); virtual void v216();
	virtual const Vector &GetAbsOrigin();	// 217
};

inline bool DidHitX(const CGameTrace &t) { return t.m_fraction < 1.0f || t.m_allsolid || t.m_startsolid; }
// TARGET: CAI_BaseNPC::sub_102b62e0
bool CAI_BaseNPC::sub_102b62e0(CBaseEntity *pOtherEnt)
{
	CNpcLosView *pOther = (CNpcLosView *)pOtherEnt;
	if (!pOther)
		return false;
	CNpcLosView *self = (CNpcLosView *)this;
	CNpcLosView *pEnemy = self->GetEnemy();
	if (!pEnemy)
		return false;

	Vector vecToOther = pOther->GetAbsOrigin() - self->GetAbsOrigin();
	Vector vecToEnemy = pEnemy->GetAbsOrigin() - pOther->GetAbsOrigin();
	VectorNormalize(vecToOther);
	VectorNormalize(vecToEnemy);
	if (vecToEnemy.x * vecToOther.x + vecToEnemy.y * vecToOther.y <= 0.9848077f)
		return false;

	const Vector &vecOrigin = pOther->GetAbsOrigin();
	Vector vecStart;
	vecStart.x = vecOrigin.x;
	vecStart.y = vecOrigin.y;
	vecStart.z = vecOrigin.z + 8.0f;
	Vector vecEnd = pEnemy->WorldSpaceCenter();
	CGameTrace tr;
	UTIL_TraceLine(vecStart, vecEnd, 0x200400b, (CBaseEntity *)this, 0, &tr);
	if (DidHitX(tr))
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x102b6650 size=0x1a9
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"

int sub_101ccc80(CBaseEntity **ppList, int nMax, const Vector &mins, const Vector &maxs, int a, int b);

struct CCandidateView {
	char m_pad0000[0x788];
	char m_bFlag788;
};

CBaseEntity *CAI_BaseNPC::sub_102b6650()
{
	if (!vfunc167())
		return 0;
	static Vector s_vecBox(512.0f, 512.0f, 64.0f);
	float flBest = 3.4028235e+38f;
	CBaseEntity *pBest = 0;
	Vector vecOrigin = *(Vector *)vfunc217();
	CBaseEntity *apEntities[20];
	int nCount = sub_101ccc80(apEntities, 20, vecOrigin - s_vecBox, vecOrigin + s_vecBox, 4, 0);
	for (int i = 0; i < nCount; i++) {
		CBaseEntity *pEnt = apEntities[i];
		if (((CCandidateView *)pEnt)->m_bFlag788) {
			float flDist = (vecOrigin - *(Vector *)((CAI_BaseNPC *)pEnt)->vfunc217()).Length2DSqr();
			if (flDist < flBest && sub_102b62e0(pEnt)) {
				flBest = flDist;
				pBest = pEnt;
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x102b6890 size=0x230
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CRotDoor.h"
#include "IPhysicsObject.h"
#include "VectorHelpers.h"
#include "CEntityVSlots.h"
void CAI_BaseNPCTroika::sub_102b6890(CBaseEntity *pEnt)
{
	CEntityVSlots *pTarget = (CEntityVSlots *)vfunc167();
	Vector vecTarget;
	vecTarget = *((CEntityVSlots *)pEnt)->slot220();
	Vector vecDir;
	if (pTarget)
	{
		Vector vecOrigin = *pTarget->slot217();
		vecDir = Vector(vecOrigin.x, vecOrigin.y, vecOrigin.z + 16.0f) - vecTarget;
	}
	else
	{
		vecDir = *((CEntityVSlots *)this)->slot217() - vecTarget;
	}
	float flYaw = sub_101d2c70(&vecDir);
	float flCur = ((float *)((CEntityVSlots *)this)->slot221())[1];
	float flDiff = sub_1013d580(flYaw, flCur);
	if (flDiff <= -20.0f)
	{
		float z = vecDir.z;
		vecDir = sub_101d2f40(flCur - 20.0f);
		vecDir.z = z;
	}
	else if (flDiff >= 20.0f)
	{
		float z = vecDir.z;
		vecDir = sub_101d2f40(flCur + 20.0f);
		vecDir.z = z;
	}
	VectorNormalize(vecDir);
	IPhysicsObject *pPhys = (IPhysicsObject *)pEnt->m_obj36c;
	if (pPhys)
	{
		float flMass = pPhys->vfunc12() * 100.0f;
		vecDir = vecDir * ((flMass < 1000.0f) ? flMass : 1000.0f);
		Vector vecZero(0, 0, 0);
		vecDir.z += 150.0f;
		Vector a, b;
		pPhys->vfunc40((float *)&a, (float *)&b);
		pPhys->vfunc39((float *)&vecDir, (float *)&vecZero);
	}
}
// END FUNCTION

// FUNCTION: 0x102b6b50 size=0xaa
#include "CAI_BaseNPCTroika.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CTroikaSlotsX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1) PV100(2) PV100(3) PV100(4)
	PV10(50) PV10(51) PV10(52) PV10(53) PV10(54) PV10(55)
	PV(560) PV(561) PV(562) PV(563) PV(564) PV(565)
	virtual bool vfunc566(CBaseEntity *pHint);
};

struct CRandomX
{
	virtual void v0();
	virtual float vfunc1(float flMin, float flMax);
};


struct CWeaponRangeX
{
	char m_pad0000[0x8c0];
	float m_fl8c0;
};

extern CRandomX *g_1070b244;
int __cdecl sub_102d2980(CAI_BaseNPCTroika *pNPC, int a, int b, float c, int d, int e);

// TARGET: CAI_BaseNPCTroika::vfunc609
int CAI_BaseNPCTroika::vfunc609(char bForce)
{
	if (m_p6444 && ((CTroikaSlotsX *)this)->vfunc566(m_p6444))
		return (int)m_p6444;
	if (!bForce && !(gpGlobals->curtime >= m_f6440))
		return 0;
	m_f6440 = g_1070b244->vfunc1(2.0f, 2.5f) + gpGlobals->curtime;
	float range = 1024.0f;
	if (sub_10007e19())
		range = ((CWeaponRangeX *)sub_10007e19())->m_fl8c0;
	return ::sub_102d2980(this, 8, 0x10, range, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x102b6c30 size=0x2ee
#include "CAI_BaseNPCTroika.h"
#include "CUnknown10924a1c.h"
#include "CUnknown1070b244.h"
#include "CEntityVSlots.h"

extern CUnknown1070b244 *g_1070b244;

class CDifficultyView
{
public:
	virtual void v0();
	virtual bool v1();
	char m_pad[0x24];
	float m_fl28;
};

#define FILE_NAME "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"

int CAI_BaseNPCTroika::vfunc604(int unused)
{
	int pEnemy; pEnemy = ((CEntityVSlots *)this)->slot167();

	if (m_b6078)
	{
		if (vfunc602())
		{
			((CEntityVSlots *)this)->slot601(pEnemy);
			if (((CEntityVSlots *)this)->slot308())
			{
				m_nLine1b34 = 0x5985;
				m_pszFile1b30 = FILE_NAME;
				return 0xe9;
			}

			double f = ((CDifficultyView *)g_10924a1c)->v1() ? 0.0f : ((CDifficultyView *)g_10924a1c)->m_fl28;
			float f2 = (float)(f + f);
			m_pszFile1b30 = FILE_NAME;
			if (f2 <= m_f6268)
			{
				m_nLine1b34 = 0x598b;
				return 0xe7;
			}
			m_nLine1b34 = 0x598f;
			return 0xe4;
		}
	}
	else
	{
		if (!((CEntityVSlots *)this)->slot599((CEntityVSlots *)pEnemy))
		{
			int r = sub_102b6fe0(pEnemy);
			if (r)
				return r;
			m_nLine1b34 = 0x599f;
			m_pszFile1b30 = FILE_NAME;
			return 0xe4;
		}
	}

	unsigned int r; r = sub_102b6fe0(pEnemy);
	if (r)
		return r;

	if (sub_10014df8(0x51))
	{
		if (((CEntityVSlots *)this)->slot308())
		{
			m_nLine1b34 = 0x59dc;
			m_pszFile1b30 = FILE_NAME;
			return 0xdc;
		} else { m_pszFile1b30 = FILE_NAME;
		m_nLine1b34 = 0x59e0;
		return 0xdd; }
	} else { bool bl = false;
	if (m_f626c > 64.0f)
	{
		if (-1.0f == m_fl6274)
		{
			m_fl6274 = g_1070b244->vfunc1(3.0f, 4.0f) + gpGlobals->curtime;
		}
		else if (gpGlobals->curtime >= m_fl6274)
		{
			bl = true;
		}
	}
	else
	{
		m_fl6274 = -1.0f;
	}

	if (((CEntityVSlots *)this)->slot308()
		&& (sub_10014df8(9) || sub_10014df8(0x1a) || sub_10014df8(0x59) || bl))
	{
		((CEntityVSlots *)this)->slot601(pEnemy);
		m_pszFile1b30 = FILE_NAME;
		m_nLine1b34 = 0x5a02;
		return 0xe9;
	}

	if (sub_10014df8(0x59))
	{
		((CEntityVSlots *)this)->slot601(pEnemy);
		m_nLine1b34 = 0x5a0a;
		m_pszFile1b30 = FILE_NAME;
		return 0x17;
	}

	if (!sub_10014df8(9) && !sub_10014df8(0x60))
	{
		m_nLine1b34 = 0x5a4c;
		m_pszFile1b30 = FILE_NAME;
		return 0xc7;
	} else { if (((CEntityVSlots *)this)->slot308())
	{
		m_nLine1b34 = 0x5a12;
		m_pszFile1b30 = FILE_NAME;
		return 0xca;
	}

	m_nLine1b34 = 0x5a16;
	m_pszFile1b30 = FILE_NAME;
	return 0xcb; } }
}
// END FUNCTION

// FUNCTION: 0x102b6fe0 size=0xe1
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"

#define NPC_FILE "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"

int CAI_BaseNPCTroika::sub_102b6fe0(int a)
{
	if (sub_10014df8(0x48)) {
		if (vfunc308()) {
			if (*((char *)this + 0x6078))
				vfunc601(a);
			*(const char **)((char *)this + 0x1b30) = NPC_FILE;
			*(int *)((char *)this + 0x1b34) = 0x5a5f;
			return 0xe9;
		}
		*(const char **)((char *)this + 0x1b30) = NPC_FILE;
		*(int *)((char *)this + 0x1b34) = 0x5a69;
		return 0xcd;
	}
	if (sub_10014df8(0x3a)) {
		if (vfunc308()) {
			if (*((char *)this + 0x6078))
				vfunc601(a);
			*(const char **)((char *)this + 0x1b30) = NPC_FILE;
			*(int *)((char *)this + 0x1b34) = 0x5a77;
			return 0xe9;
		}
		*(const char **)((char *)this + 0x1b30) = NPC_FILE;
		*(int *)((char *)this + 0x1b34) = 0x5a81;
		return 0xce;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b7110 size=0x1df
#include "CAI_BaseNPCTroika.h"
#include "CAI_Hint.h"
#include "CEHandleGet.h"
#include "CBaseEntity.h"

struct CHintView : CAI_Hint
{
	char sub_102d1350(CAI_BaseNPCTroika *p);
	float sub_102d12e0();
};
struct CBoxView : CBaseEntity
{
	void sub_1009b060(const Vector &ext);
};
struct CSlot16View
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual Vector vfunc16();
};
CAI_Hint *sub_102d2980(CAI_BaseNPCTroika *, int, int, float, int, int);
Vector sub_101d2f40(float);

bool CAI_BaseNPCTroika::sub_102b7110(int a)
{
	m_bForceCoverLOSCheck = 1;
	m_pHintNode = sub_102d2980(this, 8, a, vfunc550(), 0, 0);
	m_bForceCoverLOSCheck = 0;
	if (m_b6435 && !m_pHintNode)
		m_pHintNode = sub_102d2980(this, 8, a, vfunc550(), 0, 0);
	if (m_pHintNode) {
		m_iPeekOutCount = 0;
		m_iFailedCoverLOSChecks = 0;
		if (!((CHintView *)m_pHintNode)->sub_102d1350(this)) {
			m_pHintNode = 0;
		} else if (m_pHintNode->m_n5dc == 0x27d8) {
			CAI_Hint *pOther = (CAI_Hint *)EHandle_Get(m_h6448);
			Vector dir;
			dir = *pOther->vfunc217() - *m_pHintNode->vfunc217();
			VectorNormalize(dir);
			Vector right;
			right = sub_101d2f40(((CHintView *)m_pHintNode)->sub_102d12e0());
			if (dir.x * right.y - dir.y * right.x > 0.0f)
				m_bLeaningLeft = 0;
			else
				m_bLeaningLeft = 1;
		}
	}
	if (m_pHintNode) {
		*(Vector *)((char *)this + 0x65d0) = ((CSlot16View *)this)->vfunc16();
		((CBoxView *)this)->sub_1009b060(Vector(40.0f, 40.0f, 80.0f));
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102b7370 size=0x27f
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CLogicAuto.h"
#include "CEntitySoundOriginView.h"
#include "globalvars.h"

struct CHintView5ddc { char m_pad[0x5dc]; int m_nType; };
struct CSquadMember5da4 { char m_pad[0xa4]; CBaseEntity *m_pEnt; };
struct CSquad5da4 { CSquadMember5da4 *sub_103166b0(); };
struct CEnemyView640 { char m_pad[0x640]; float m_flTime; };

int CAI_BaseNPCTroika::sub_102b7370()
{
	EHANDLE &hEnemy = *(EHANDLE *)((char *)this + 0x5d28);
	CBaseEntity *pEnemy;
	CHintView5ddc *pHint;
	int type, r;
	const float *pOrigin, *pMine;
	float *pSaved;
	float dx, dy, dz;
	if (*(CHintView5ddc **)((char *)this + 0x5ddc))
		goto none;
	pEnemy = hEnemy.Get();
	if (pEnemy) {
		if (((CEnemyView640 *)pEnemy)->m_flTime <= gpGlobals->curtime) {
			hEnemy = (CBaseEntity *)0;
			pEnemy = 0;
		} else
			goto keep;
	}
	if (sub_10014df8(0x59) && *(int *)((char *)this + 0x5bb0) <= 0 && *(CSquad5da4 **)((char *)this + 0x5da4)) {
		CSquadMember5da4 *pMember = (*(CSquad5da4 **)((char *)this + 0x5da4))->sub_103166b0();
		if (pMember)
			pEnemy = pMember->m_pEnt;
	}
	if (!pEnemy) {
		if (!sub_10014df8(0x34))
			goto none;
		pEnemy = (*(EHANDLE *)((char *)this + 0x5d2c)).Get();
		if (!pEnemy)
			goto none;
	}
keep:
	if (!*(CHintView5ddc **)((char *)this + 0x5ddc) && (~*(unsigned int *)((char *)this + 0x14b8) & 0x800)
		&& !(*(EHANDLE *)((char *)this + 0x643c)).Get()) {
		*(EHANDLE *)((char *)this + 0x6448) = pEnemy;
		sub_102b7110(1);
	}
	pHint = *(CHintView5ddc **)((char *)this + 0x5ddc);
	if (pHint) {
		type = pHint->m_nType;
		if (type >= 100 && (type <= 101 || type == 0x27d8)) {
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			m_nLine1b34 = 0x5c36;
			return 0x9c;
		}
		sub_10295ab0(5.0f);
none:
		return 0;
	}
	pOrigin = ((CEntitySoundOriginView *)pEnemy)->GetAbsOrigin();
	pSaved = (float *)((char *)this + 0x5dd0);
	pSaved[0] = pOrigin[0];
	pSaved[1] = pOrigin[1];
	pSaved[2] = pOrigin[2];
	pMine = ((CEntitySoundOriginView *)this)->GetAbsOrigin();
	dx = pMine[0] - pSaved[0];
	dy = pMine[1] - pSaved[1];
	dz = pMine[2] - pSaved[2];
	if (dx * dx + dy * dy + dz * dz <= 65536.0f) {
		r = vfunc167();
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		if (r) {
			m_nLine1b34 = 0x5c4a;
			return 0x90;
		}
		m_nLine1b34 = 0x5c4e;
		return 0x91;
	}
	r = vfunc167();
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
	if (r) {
		m_nLine1b34 = 0x5c55;
		return 0x94;
	}
	m_nLine1b34 = 0x5c59;
	return 0x96;
}
// END FUNCTION

// FUNCTION: 0x102b7690 size=0x501
#include "CAI_BaseNPCTroika.h"
#include "ehandle.h"
#include "CEHandleGet.h"
#include "globalvars.h"
#include "engineiface.h"

#define S(n) virtual void f##n();
#define T(p) S(p##0) S(p##1) S(p##2) S(p##3) S(p##4) S(p##5) S(p##6) S(p##7) S(p##8) S(p##9)
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)

struct CWeaponSlots360
{
	S(0) S(1) S(2) S(3) S(4) S(5) S(6) S(7) S(8) S(9)
	T(1) T(2) T(3) T(4) T(5) T(6) T(7) T(8) T(9)
	H(1) H(2) T(30) T(31) T(32) T(33) T(34) T(35)
	virtual int f360();
};

struct CNpcSlots609
{
	S(0) S(1) S(2) S(3) S(4) S(5) S(6) S(7) S(8) S(9)
	T(1) T(2) T(3) T(4) T(5) T(6) T(7) T(8) T(9)
	H(1) H(2) H(3) H(4) H(5)
	S(600) S(601) S(602) S(603) S(604) S(605) S(606) S(607) S(608)
	virtual int f609(char bForce);
};

struct CAI_BaseNPCTroikaChoose : CAI_BaseNPCTroika
{
	char sub_102b5de0();
	void sub_102b7110(int mask);
};

#define NPC_M(T, off) (*(T *)((char *)this + (off)))
#define TF(code, line) do { NPC_M(const char *, 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"; NPC_M(int, 0x1b34) = line; return code; } while (0)

#define MAX_(a, b) (((a) > (b)) ? (a) : (b))

// TARGET: CAI_BaseNPCTroika::sub_102b7690
int CAI_BaseNPCTroika::sub_102b7690(char a1, char a2, char a3, char a4)
{
	EHANDLE &hTarget = NPC_M(EHANDLE, 0x643c);
	float &flNext = NPC_M(float, 0x6438);
	if (a4 == 1 && NPC_M(char, 0x6436) && !NPC_M(void *, 0x5ddc) && (~NPC_M(unsigned int, 0x14b8) & 0x800) && !hTarget.Get()
		&& gpGlobals->curtime >= flNext) {
		flNext = enginerandom->vfunc1(2.0f, 2.0f) + gpGlobals->curtime;
		hTarget = (CBaseEntity *)sub_102b6650();
	}
	if (EHandle_Get(NPC_M(unsigned int, 0x643c)))
		return 0xa9;
	if (!NPC_M(void *, 0x5ddc) && (~NPC_M(unsigned int, 0x14b8) & 0x800) && !hTarget.Get()) {
		NPC_M(EHANDLE, 0x6448) = (CBaseEntity *)vfunc167();
		int mask = 0;
		if (a1 == 1)
			mask = 1;
		if (a2 == 1)
			mask |= 2;
		if (a3 == 1 && NPC_M(char, 0x6436))
			mask |= 4;
		if (a4 == 1 && NPC_M(char, 0x6436))
			mask |= 8;
		((CAI_BaseNPCTroikaChoose *)this)->sub_102b7110(mask);
	}
	if (NPC_M(char *, 0x5ddc)) {
		switch (*(int *)(NPC_M(char *, 0x5ddc) + 0x5dc)) {
		case 0x283c:
			TF(0xa7, 0x5d04);
		case 0x283d:
			TF(0xa8, 0x5d0a);
		case 100:
		case 101:
		case 0x27d8:
			if ((NPC_M(unsigned int, 0x14b8) & 0x2000) == 0x2000) {
				bool bOk = true;
				char *pEnemy = (char *)vfunc167();
				if (vfunc167() && *(int *)((char *)vfunc167() + 0x9c) && *(int *)(pEnemy + 0x9c)) {
					CAI_BaseNPCTroika *pOwner = *(CAI_BaseNPCTroika **)(pEnemy + 0x9c);
					CWeaponSlots360 *pWeapon = (CWeaponSlots360 *)pOwner->sub_1032e7b0();
					if (pWeapon && (pWeapon->f360() & 0x6000))
						bOk = false;
				}
				if (!NPC_M(int, 0x6444)) {
					NPC_M(int, 0x6444) = ((CNpcSlots609 *)this)->f609(0);
				}
				if (NPC_M(int, 0x6444))
					TF(0xa2, 0x5cad);
				if (((CAI_BaseNPCTroikaChoose *)this)->sub_102b5de0()) {
					NPC_M(int, 0x640c) = MAX_(0, NPC_M(int, 0x640c) - 2);
					if (bOk) {
						if (!((NPC_M(void *, 0x5c38) && NPC_M(void *, 0x5c38) == (void *)sub_102cc1f0(0x9e)) || (NPC_M(unsigned int, 0x14bc) & 0x100) == 0x100))
							TF(0xa4, 0x5cc3);
						NPC_M(unsigned int, 0x14bc) |= 0x80000100;
						TF(0xa5, 0x5cbf);
					}
					int roll = enginerandom->vfunc2(0, 99);
					if (!((NPC_M(void *, 0x5c38) && NPC_M(void *, 0x5c38) == (void *)sub_102cc1f0(0x9e)) || (NPC_M(unsigned int, 0x14bc) & 0x100) == 0x100))
						TF(0xa3, 0x5cd9);
					NPC_M(unsigned int, 0x14bc) &= 0x7ffffeff;
					if (roll < 30)
						TF(0xa1, 0x5cd0);
					TF(0xa0, 0x5cd4);
				}
				int cnt = ++NPC_M(int, 0x640c);
				if (cnt <= 4 && !sub_10014df8(0x48))
					TF(0x9d, 0x5cf5);
				NPC_M(unsigned int, 0x14bc) &= 0x7ffffeff;
				if (!NPC_M(char, 0x6435))
					sub_10295ab0(60.0f);
				else
					TF(0x9e, 0x5cf0);
			} else {
				NPC_M(unsigned int, 0x14bc) &= 0x7ffffeff;
				TF(0x9b, 0x5cfd);
			}
			break;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b7cf0 size=0x1ce
#include "CAI_BaseNPCTroika.h"
struct SGlobal248f4 { virtual void v0(); virtual char v1(); char m_pad[0x28]; int m2c; };
extern SGlobal248f4 *g_109248f4;
#define SCHED(line, result) do { m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"; m_nLine1b34 = (line); return (result); } while (0)
int CAI_BaseNPCTroika::sub_102b7cf0()
{
    if (sub_10014df8(0x47))
        SCHED(0x5d24, 0x10);
    if (vfunc167() && vfunc592()) {
        int r = sub_102b7690(1, 1, 1, 1);
        if (r)
            return r;
        if (!g_109248f4->v1() && g_109248f4->m2c) {
            if ((m_flags14b8 & 0x800) == 0x800) {
                m_flags14b8 &= ~0x800;
                if (enginerandom->vfunc2(0, 99) < 0x46) {
                    m_flags14b8 |= 0x10000000;
                    SCHED(0x5d4c, 0x8e);
                }
                m_f65a4 += 15.0f;
                SCHED(0x5d53, 0x8f);
            }
            if (sub_10014df8(0x46) && gpGlobals->curtime > m_f65a4 && (m_flags5b84 & 0x2000) == 0x2000 && (m_flags14bc & 0x20000) != 0x20000 && !m_b6435) {
                m_f65a4 = (enginerandom->vfunc1(10.0f, 20.0f) + 0.0f) + gpGlobals->curtime;
                int nRoll = enginerandom->vfunc2(0, 99);
                m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
                if (nRoll < 0x3c)
                {
                    m_nLine1b34 = 0x5d61;
                    return 0x8c;
                }
                m_nLine1b34 = 0x5d65;
                return 0x8d;
            }
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102b7f40 size=0x5d
#include "CAI_BaseNPCTroika.h"
#include "CStatusFlagList.h"
#include "engineiface.h"
extern CStatusFlagList g_10739a4c;
bool CAI_BaseNPCTroika::sub_102b7f40()
{
	if (sub_1008dc40(0x10, -1)) {
		if (!sub_10014df8(0x2c) && enginerandom->vfunc2(0, 99) < 75)
			return true;
		if (g_10739a4c.sub_101e3f50((CStatusTarget *)this))
			return true;
		if (sub_10014df8(0x3c))
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102b7fc0 size=0x2a5
#include "CAI_BaseNPCTroika.h"
#include "CStatusFlagList.h"

extern CStatusFlagList g_10739a4c;

#define STAMP(line, result) \
	do { m_nLine1b34 = (line); m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"; return (result); } while (0)

// TARGET: CAI_BaseNPCTroika::vfunc605
int CAI_BaseNPCTroika::vfunc605(int unused)
{
	if (m_b6078)
		STAMP(0x5d98, 0xe3);
	if (sub_10014df8(8) && vfunc307() && vfunc599(vfunc167()))
		STAMP(0x5db2, 0xe3);
	if (sub_10014df8(0x3c))
		STAMP(0x5db7, 0xb8);
	int nSched = sub_102b8620();
	if (nSched == 0) {
		if (!sub_10014df8(0x5f) && !sub_10014df8(8) && !g_10739a4c.sub_101e3f50((CStatusTarget *)this)) {
			nSched = vfunc606(unused);
			if (nSched)
				return nSched;
			if (sub_10014df8(0x2e))
				STAMP(0x5dff, 0xbd);
			if (sub_10014df8(0x60))
				STAMP(0x5e04, 0xb1);
			return 0;
		}
		if (!sub_10014df8(0x2f) && !sub_10014df8(0x63)) {
			if (sub_102b7f40())
				STAMP(0x5dd8, 0xef);
			if (vfunc307() && enginerandom->vfunc2(0, 0x63) < 0x19 && vfunc599(vfunc167()))
				STAMP(0x5ddc, 0xe8);
			STAMP(0x5de0, 0xf0);
		}
		if (sub_102b7f40())
			STAMP(0x5de9, 0xb8);
		if (vfunc307() && vfunc599(vfunc167()))
			STAMP(0x5ded, 0xe8);
		STAMP(0x5df1, 0xb9);
	}
	return nSched;
}
// END FUNCTION

// FUNCTION: 0x102b8320 size=0x259
#include "CAI_BaseNPCTroika.h"
#include "engineiface.h"

int CAI_BaseNPCTroika::vfunc606(int unused)
{
	if (sub_10014df8(0x48)) {
		if (sub_10014df8(0x59)) {
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			m_nLine1b34 = 0x5e1b;
			return 0xaa;
		}
		if ((m_flags5b84 & 0x100) == 0x100) {
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			m_nLine1b34 = 0x5e20;
			return 0xb4;
		}
		if ((m_flags14bc & 0x40000) == 0x40000) {
			int r = enginerandom->vfunc2(0, 99);
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			if (r < 0x46) {
				m_nLine1b34 = 0x5e28;
				return 0xb6;
			}
			m_nLine1b34 = 0x5e2c;
			return 0xb4;
		}
		if ((m_flags14b8 & 0x10000000) == 0x10000000) {
			m_flags14b8 &= ~0x10000000;
			int r = enginerandom->vfunc2(0, 99);
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			if (r < 0x50) {
				m_nLine1b34 = 0x5e37;
				return 0xb6;
			}
			m_nLine1b34 = 0x5e3b;
			return 0xb4;
		}
		int r = enginerandom->vfunc2(0, 99);
		char bCond = sub_10014df8(0x31);
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		if (bCond) {
			if (m_nRoll6420 > r) { m_nLine1b34 = 0x5e46; return 0xab; }
			if (m_nRoll6424 > r) { m_nLine1b34 = 0x5e4a; return 0xb0; }
			if (m_nRoll6428 > r) { m_nLine1b34 = 0x5e4e; return 0xb3; }
			if (m_nRoll642c > r) { m_nLine1b34 = 0x5e52; return 0xb2; }
			m_nLine1b34 = 0x5e56;
			return 0xb2;
		}
		if (m_nRoll6420 > r) { m_nLine1b34 = 0x5e65; return 0xaa; }
		if (m_nRoll6424 > r) { m_nLine1b34 = 0x5e69; return 0xaf; }
		if (m_nRoll6428 > r) { m_nLine1b34 = 0x5e6d; return 0xb5; }
		if (m_nRoll642c > r) { m_nLine1b34 = 0x5e71; return 0xb6; }
		m_nLine1b34 = 0x5e75;
		return 0xb4;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b8620 size=0x2b0
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatWeapon.h"
#include "CUnknown10738964.h"
#include "CUnknown10924a1c.h"
#include "Vector.h"

extern CUnknown10738964 *g_10923d3c;

struct CUnk102c54c0View
{
	void sub_102c54c0();
};

struct CBCCTroikaView
{
	int sub_103346c0(int ammo);
};

int CAI_BaseNPCTroika::sub_102b8620()
{
	if ( !g_10923d3c->vfunc1() && g_10923d3c->m_n2c )
	{
		if ( sub_10007e19() &&
		     ( ( (CBaseCombatWeapon *)sub_10007e19() )->vfunc360() & 0x6000 ) &&
		     *(int *)( (char *)this + 0x65f0 ) <= 0 )
		{
			( (CUnk102c54c0View *)this )->sub_102c54c0();
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			if ( *(void **)( (char *)this + 0x5ddc ) == 0 )
			{
				m_nLine1b34 = 0x5e8f;
				return 0xc4;
			}
			m_nLine1b34 = 0x5e93;
			return 0xc6;
		}
	}

	if ( sub_10007e19() && *(int *)( (char *)sub_10007e19() + 0x74c ) > 0 )
		goto ret0;

	if ( sub_10007e19() && ( (CBaseCombatWeapon *)sub_10007e19() )->vfunc280( 0 ) )
	{
		if ( sub_10007e19() && ( (CBCCTroikaView *)this )->sub_103346c0( *(int *)( (char *)sub_10007e19() + 0x744 ) ) > 0 )
		{
			if ( !sub_10269aa0( 0x46 ) && !sub_10269aa0( 0x54 ) )
			{
				m_nLine1b34 = 0x5ecf;
				m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
				return 0xc3;
			}
			m_nLine1b34 = 0x5ecb;
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			return 0xc2;
		}
ret0:
		return 0;
	}

	if ( vfunc308() )
	{
		vfunc601( vfunc167() );
		m_nLine1b34 = 0x5ea2;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		return 0xe9;
	}

	if ( vfunc307() )
	{
		if ( vfunc599( vfunc167() ) )
		{
			m_nLine1b34 = 0x5ea8;
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			return 0xe3;
		}

		if ( 200.0f + (( g_10924a1c->vfunc1() ? 0.0f : g_10924a1c->m_fl28 ) * 1.0f) < m_f6268 )
		{
			m_nLine1b34 = 0x5eae;
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			return 0xe7;
		}

		if ( enginerandom->vfunc2( 0, 99 ) < 0x19 || ( g_10924a1c->vfunc1() ? 0.0f : g_10924a1c->m_fl28 ) > m_f6268 )
		{
			m_nLine1b34 = 0x5eb6;
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
			return 0xe4;
		}

		m_nLine1b34 = 0x5eba;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		return 0xe5;
	}

	m_nLine1b34 = 0x5ec1;
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
	return 0x98;
}
// END FUNCTION

// FUNCTION: 0x102b8980 size=0x6c
namespace block_102b8980 {
struct CUnit {
	char pad[0x5d8c];
	int m_unk5d8c;
	char pad5d90[0x6340 - 0x5d90];
	bool m_unk6340;
	char pad6341[0x63f4 - 0x6341];
	int m_unk63f4;
	void sub_102b5dc0(int value);
	int sub_102b8980();
};
#pragma auto_inline(off)
void CUnit::sub_102b5dc0(int value)
{
	m_unk63f4 = value;
}

int CUnit::sub_102b8980()
{
	if (m_unk6340)
		sub_102b5dc0(3);
	switch (m_unk63f4) {
	case 1:
		sub_102b5dc0(2);
		return 0x4d;
	case 2:
	case 3:
		sub_102b5dc0(3);
		return (m_unk5d8c & 0x8000000) != 0 ? 0x52 : 0x51;
	case 0:
		sub_102b5dc0(1);
		return 0x4c;
	default:
		sub_102b5dc0(1);
		return 0x4c;
	}
}
}
// TARGET: block_102b8980::CUnit::sub_102b8980
// END FUNCTION

// FUNCTION: 0x102b8a10 size=0x3d
#include "CAI_BaseNPCTroika.h"
extern char g_105da024[];

int __fastcall sub_102b8a10(void *self)
{
    char *p = (char *)self;
    if (((CAI_BaseNPCTroika *)self)->sub_10014df8(0x58)) {
        if (((CAI_BaseNPCTroika *)self)->sub_1008dc40(0x61, -1) != -1) {
            *(const char **)(p + 0x1b30) = g_105da024;
            *(int *)(p + 0x1b34) = 0x5f20;
            return 8;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102b8a60 size=0x17d
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102b5dc0.h"

namespace block_102b8a60 {
	struct CUnknown102b5dc0Unit : CUnknown102b5dc0
	{
		void sub_102b5dc0(int value);
	};

	void CUnknown102b5dc0Unit::sub_102b5dc0(int value)
	{
		m_unk63f4 = value;
	}
}
using namespace block_102b8a60;

#define NPC_DWORD(off) (*(unsigned int *)((char *)this + (off)))
#define NPC_FILE(off) (*(const char **)((char *)this + (off)))
#define SRC_FILE "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"
#define SET_SRC(ln) { NPC_DWORD(0x1b34) = (ln); NPC_FILE(0x1b30) = SRC_FILE; }

// TARGET: CAI_BaseNPCTroika::sub_102b8a60
int CAI_BaseNPCTroika::sub_102b8a60()
{
	if (sub_10269d30(3) && !(NPC_DWORD(0x5d8c) & 0x8000000)) {
		SET_SRC(0x5f38);
		return 0x60;
	}
	if (sub_10269d30(1) || sub_10269d30(5) || sub_10014df8(0x26)) {
		((CUnknown102b5dc0Unit *)this)->sub_102b5dc0(3);
		if (NPC_DWORD(0x5d8c) & 0x8000000) {
			if (NPC_DWORD(0x14b8) & 0x200000) {
				char bCond = sub_10014df8(4);
				NPC_FILE(0x1b30) = SRC_FILE;
				if (bCond) {
					NPC_DWORD(0x1b34) = 0x5f48;
					return 0x5e;
				}
				NPC_DWORD(0x1b34) = 0x5f4c;
				return 0x5c;
			} else {
				SET_SRC(0x5f51);
				return 0x5a;
			}
		} else {
			SET_SRC(0x5f56);
			return 0x59;
		}
	}
	if (sub_10269d30(2)) {
		if ((NPC_DWORD(0x5d8c) & 0x8000000) && sub_10014df8(4)) {
			SET_SRC(0x5f5e);
			return 0x5f;
		}
		SET_SRC(0x5f62);
		return 0x5d;
	} else {
		if (NPC_DWORD(0x14b8) & 0x200000) {
			SET_SRC(0x5f71);
			return 0x5c;
		}
		return 0;
	}
}
// END FUNCTION

// FUNCTION: 0x102b8c40 size=0x65
#include "CAI_BaseNPCTroika.h"

#define NPCF(type, off) (*(type *)((char *)this + (off)))

struct Vec3
{
	float x, y, z;
	Vec3 &operator=(const Vec3 &o)
	{
		x = o.x;
		y = o.y;
		z = o.z;
		return *this;
	}
};

// TARGET: CAI_BaseNPCTroika::sub_102b8c40
int CAI_BaseNPCTroika::sub_102b8c40()
{
	if (sub_10269d30(0x4c) || sub_10269d30(0x4d))
	{
		NPCF(char, 0x5b80) = 0;
		NPCF(Vec3, 0x5dd0) = NPCF(Vec3, 0x5b9c);
		NPCF(const char *, 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		NPCF(int, 0x1b34) = 0x5f8b;
		return 0x8a;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b8cd0 size=0x38
#include "CAI_BaseNPCTroika.h"

#define CSV_ROW(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CNPCSlotView
{
	CSV_ROW(r0)
	CSV_ROW(r1)
	CSV_ROW(r2)
	CSV_ROW(r3)
	CSV_ROW(r4)
	CSV_ROW(r5)
	CSV_ROW(r6)
	CSV_ROW(r7)
	CSV_ROW(r8)
	CSV_ROW(r9)
	CSV_ROW(r10)
	CSV_ROW(r11)
	CSV_ROW(r12)
	CSV_ROW(r13)
	CSV_ROW(r14)
	CSV_ROW(r15)
	CSV_ROW(r16)
	CSV_ROW(r17)
	CSV_ROW(r18)
	CSV_ROW(r19)
	CSV_ROW(r20)
	CSV_ROW(r21)
	CSV_ROW(r22)
	CSV_ROW(r23)
	CSV_ROW(r24)
	CSV_ROW(r25)
	CSV_ROW(r26)
	CSV_ROW(r27)
	CSV_ROW(r28)
	CSV_ROW(r29)
	CSV_ROW(r30)
	CSV_ROW(r31)
	CSV_ROW(r32)
	CSV_ROW(r33)
	CSV_ROW(r34)
	CSV_ROW(r35)
	CSV_ROW(r36)
	CSV_ROW(r37)
	CSV_ROW(r38)
	CSV_ROW(r39)
	virtual void r400();
	virtual void r401();
	virtual void r402();
	virtual void r403();
	virtual int vfunc404(void *pEnt);
};

namespace block_102b8cd0 {
	struct CAI_BaseNPCTroikaUnit : CAI_BaseNPCTroika
	{
		unsigned char sub_102b8cd0(void *pEnt);
	};

	// TARGET: block_102b8cd0::CAI_BaseNPCTroikaUnit::sub_102b8cd0
	unsigned char CAI_BaseNPCTroikaUnit::sub_102b8cd0(void *pEnt)
	{
		if (pEnt != 0)
		{
			if (((CNPCSlotView *)this)->vfunc404(pEnt) != 1)
			{
				if (((CNPCSlotView *)this)->vfunc404(pEnt) != 2)
				{
					return 1;
				}
			}
		}
		return 0;
	}
}
using namespace block_102b8cd0;
// END FUNCTION

// FUNCTION: 0x102b8d20 size=0x287
#include "CAI_Motor.h"
#include "CAI_Navigator.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CEntityVSlots.h"
#include "CUnknown102e0150.h"
#include "CEHandleGet.h"
#include "globalvars.h"

void sub_10139610(const Vector &angles, Vector *fwd, Vector *right, Vector *up);

// The game's first decliner of the header inline EHandleEntityList::LookupEntity in this unit is
// CAI_BaseNPCTroika::OnScheduleChange (vfunc435, 0x102a0940, judged 0 below as a same-unit copy): its LookupEntity
// COMDAT is compiled before this function, so VC6 knows the call's side effects (not its registers) here.
#include "CUnknown1027d990.h"
#include "CUnknown102ee270.h"
#include "CUnknown102e0a60.h"
#include "CUnknown101e3af0.h"

extern unsigned char g_10739a64;
extern CUnknown101e3af0 g_10739a4c;
void sub_1018e910(void *pThis);

namespace block_102b8d20
{
struct CUnk1026d160X
{
	void sub_1026d160();
};

struct CSetAttackExtentsSlot
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(const float *pExtents);
};

struct CScheduleChange435 : CAI_BaseNPCTroika
{
	CAI_Motor *GetMotor() { return m_pMotor5d44; }
	CAI_Navigator *GetNavigator() { return m_p5d34; }
	void AddNpcFlags(unsigned int f) { m_flags14bc |= f; }
	unsigned int HasNpcFlags(unsigned int f) const { return m_flags14bc & f; }
	void RemoveNpcFlags(unsigned int f) { m_flags14bc &= ~f; }
	void RemoveTroikaFlags(unsigned int f) { m_flags14b8 &= ~f; }
	unsigned int HasNavFlags(unsigned int f) const { return m_flags5d8c & f; }
	void RemoveNavFlags(unsigned int f) { m_flags5d8c &= ~f; }
	void sub_102a0940(void *pSchedule);
};

void CScheduleChange435::sub_102a0940(void *pSchedule)
{
	CAI_BaseNPC::vfunc435(pSchedule);
	AddNpcFlags(0x80000004);

	if ((~m_flags14b8 & 8) != 0) {
		if (((CUnknown1027d990 *)this)->sub_1027d990() != 3
			&& ((CUnknown1027d990 *)this)->sub_1027d990() != 1)
			((CUnknown102ee270 *)GetNavigator())->sub_102ee270();

		sub_102b53d0(1, "Leaving interesting place (OnScheduleChange)");
		m_n6300 = 0;
		m_n659c = 0;
		((CUnknown102e0a60 *)GetMotor())->sub_102e0a60(0x43340000);
		m_b1a40 = 0;
		m_flGoalTolerance = 0;
		m_flInsideInterruptDistanceSqr = 0;
		m_flOutsideInterruptDistanceSqr = 0;
		m_flInterruptTime = 0;
		((CBaseHandle &)m_hMoveTargetEnt) = (IHandleEntity *)0;

		if (((const CBaseHandle *)&m_h5d24)->Get())
			((CEntityVSlots *)this)->slot532(8);

		RemoveTroikaFlags(0x440b4681);
		RemoveNpcFlags(0x88000eb0);
		if (HasNpcFlags(0x1000)) {
			RemoveNpcFlags(0x80001000);
			((CUnk1026d160X *)this)->sub_1026d160();
		}

		if ((m_flags14bc & 1) == 1) {
			float *pExtents = (float *)((char *)this + 0x65d0);
			((CSetAttackExtentsSlot *)this)->v15(pExtents);
			pExtents[0] = -1.0f;
			pExtents[1] = -1.0f;
			pExtents[2] = -1.0f;
			RemoveNpcFlags(0x80000001);
		}

		*((char *)GetMotor() + 0x28) = 0;
		m_flDesiredMoveYaw = 0;
		m_bWaitFinishedSet = 0;
	}

	if (HasNpcFlags(0x40000000)) {
		if (g_10739a64)
			g_10739a4c.sub_101e3c80((CBaseCombatCharacter *)this, 1);
		sub_1018e910(this);
		m_b63d8 = 0;
	}

	RemoveNpcFlags(0xc0000000);
	RemoveTroikaFlags(0x28000000);
	if (HasNavFlags(0x2000))
		RemoveNavFlags(0x2000);
}
}

struct CEntityNPC94 : CEntityVSlots
{
	char m_pad0004[0x94 - 4];
	CEntityVSlots *m_pNPC94;	// 0x94
	CEntityVSlots *GetNPC() { return m_pNPC94; }
};

#define H5B78 (*(CHandle<CEntityNPC94> *)((char *)this + 0x5b78))
#define H6160 (*(CHandle<CEntityVSlots> *)((char *)this + 0x6160))
#define H618C (*(CHandle<CEntityVSlots> *)((char *)this + 0x618c))
#define TVEC (*(Vector *)((char *)this + 0x5dd0))

int CAI_BaseNPCTroika::sub_102b8d20(int a, int b)
{
	if (H5B78.Get())
	{
		CBaseEntity *pEnemy = (CBaseEntity *)H5B78.Get()->slot167();
		if (pEnemy)
		{
			if (vfunc404(pEnemy) == 1)
			{
				CEntityVSlots *pAI = H5B78->GetNPC();
				if (pAI)
				{
					if (pAI == H6160.Get() || pAI == H618C.Get())
					{
						if (pAI->slot541()->sub_102dfa20(pEnemy))
						{
							Vector vecPos;
							TVEC = *pAI->slot541()->sub_102dfed0(&vecPos, pEnemy);
							m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
							m_nLine1b34 = 0x5ff7;
							return a;
						}
					}
				}
				Vector fwd;
				sub_10139610(*H5B78.Get()->slot221(), &fwd, 0, 0);
				Vector scaled = fwd * 128.0f;
				TVEC = scaled + *H5B78.Get()->slot217();
				m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
				m_nLine1b34 = 0x6003;
				return a;
			}
			if (vfunc404(pEnemy) == 2)
			{
				m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
				m_nLine1b34 = 0x600c;
				return b;
			}
		}
		m_flNextInvestigateSoundTime = gpGlobals->curtime + 20.0f;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b9060 size=0x2a9
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102b5dc0.h"

namespace block_102b9060 {
	struct CUnknown102b5dc0Unit : CUnknown102b5dc0
	{
		void sub_102b5dc0(int value);
	};

	void CUnknown102b5dc0Unit::sub_102b5dc0(int value)
	{
		m_unk63f4 = value;
	}
}
using namespace block_102b9060;

#define NPC_DWORD(off) (*(unsigned int *)((char *)this + (off)))
#define NPC_FLOAT(off) (*(float *)((char *)this + (off)))
#define NPC_FILE(off) (*(const char **)((char *)this + (off)))
#define V_DW(off) (*(volatile unsigned int *)((char *)this + (off)))
#define V_BY(off) (*(volatile unsigned char *)((char *)this + (off)))
#define V_FILE(off) (*(const char *volatile *)((char *)this + (off)))
#define SRC_FILE "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"
#define SET_SRC(ln) { NPC_FILE(0x1b30) = SRC_FILE; NPC_DWORD(0x1b34) = (ln); }
#define CPY_DW(d, s) V_DW(d) = V_DW(s);
#define CPY_TIMER(d, s) \
	CPY_DW(d + 0x00, s + 0x00) CPY_DW(d + 0x04, s + 0x04) CPY_DW(d + 0x08, s + 0x08) CPY_DW(d + 0x0c, s + 0x0c) \
	CPY_DW(d + 0x10, s + 0x10) V_BY(d + 0x14) = V_BY(s + 0x14); \
	CPY_DW(d + 0x18, s + 0x18) CPY_DW(d + 0x1c, s + 0x1c) CPY_DW(d + 0x20, s + 0x20) CPY_DW(d + 0x24, s + 0x24) \
	CPY_DW(d + 0x28, s + 0x28)

// TARGET: CAI_BaseNPCTroika::sub_102b9060
int CAI_BaseNPCTroika::sub_102b9060()
{
	if (sub_10269d30(0x25)) {
		if (sub_10014df8(0x6d) || sub_10014df8(0x70)) {
			NPC_FLOAT(0x623c) = gpGlobals->curtime + 2.0f;
			sub_102b4090();
			((CUnknown102b5dc0Unit *)this)->sub_102b5dc0(3);
			if (NPC_DWORD(0x5d8c) & 0x8000000) {
				SET_SRC(0x6047);
				return 0x52;
			}
			if (!(NPC_DWORD(0x5b84) & 0x10000) && enginerandom->vfunc2(0, 99) < 100) {
				SET_SRC(0x604d);
				return 0x50;
			}
			SET_SRC(0x6051);
			return 0x51;
		}
		if (sub_10014df8(0x6e)) {
			CPY_TIMER(0x60b0, 0x61e4)
			CPY_TIMER(0x60dc, 0x60b0)
			V_FILE(0x1b30) = SRC_FILE;
			V_DW(0x1b34) = 0x605c;
			return 0x51;
		}
		if (sub_10014df8(0x6f) || sub_10014df8(0x6a)) {
			sub_102b4090();
			SET_SRC(0x6063);
			return sub_102b8980();
		}
	}
	if (sub_10014df8(0x2d)) {
		int r = sub_102b8d20(0x89, 0x73);
		if (r)
			return r;
	}
	if (!(NPC_DWORD(0x5b84) & 0x10000) && sub_10269d30(0x72)) {
		sub_102b4090();
		SET_SRC(0x6074);
		return 0x50;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b93c0 size=0x2af
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CBCCSlotViews.h"

struct CVH375_607
{
	virtual void v0();
	virtual char vfunc1();
	char pad[0x2c - 4];
	int m_n2c;
};

extern CVH375_607 *g_10924f74;

#define TFL607(off) (*(float *)((char *)this + (off)))
#define TVEC607(off) (*(Vector *)((char *)this + (off)))
#define STAMP607(line, result) do { *(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"; m_nLine1b34 = (line); return (result); } while (0)

int CAI_BaseNPCTroika::vfunc607()
{
	if (m_h647c.Get())
	{
	Vector vecHint = *((CEntityVSlots *)m_h647c.Get())->slot217();
	float *pSelf = (float *)((CEntityVSlots *)this)->slot217();

	float dx = pSelf[0] - vecHint.x;
	float dy = pSelf[1] - vecHint.y;
	float dz = pSelf[2] - vecHint.z;
	float fDist = dx * dx + dy * dy + dz * dz;

	float flBack = TFL607(0x6484);
	if (fDist < flBack * flBack)
	{
		if (!g_10924f74->vfunc1() && g_10924f74->m_n2c != 0)
		{
			((CNpcVFunc517SlotView *)this)->vfunc517((int)m_h647c.Get(), (int)&vecHint, 1.0f, 1.0f, 0.0f);
		}
		TVEC607(0x5dd0) = vecHint;
		STAMP607(0x6090, 0x10c);
	}

	float flRun = TFL607(0x648c);
	if (fDist > flRun * flRun)
	{
		sub_10279cc0(m_h647c.Get());
		STAMP607(0x6097, 0x113);
	}

	float flWalk = TFL607(0x6488);
	if (fDist > flWalk * flWalk)
	{
		sub_10279cc0(m_h647c.Get());
		STAMP607(0x609d, 0x112);
	}

	sub_10279cc0(m_h647c.Get());
	STAMP607(0x60a2, 0x115);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b9720 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_10924248(false);
// END FUNCTION

// FUNCTION: 0x102b9780 size=0xc
void __fastcall sub_102b97a0(void *pThis);
void * __fastcall sub_102b9780(void *pThis)
{
    sub_102b97a0(pThis);
    return pThis;
}
// END FUNCTION

// FUNCTION: 0x102b97a0 size=0x33
void sub_1000b15e();
void sub_10002914();
extern int g_105d105c;
extern char g_105d1058;
extern int g_10936b68;

char sub_102b97a0()
{
    sub_1000b15e();
    if (g_105d105c != g_10936b68) {
        sub_10002914();
        g_105d1058 = 1;
        g_105d105c = g_10936b68;
        return 1;
    }
    return g_105d1058;
}
// END FUNCTION

// FUNCTION: 0x102b97f0 size=0x6
extern char g_105d1058;

char sub_102b97f0(void)
{
    return g_105d1058;
}
// END FUNCTION

// FUNCTION: 0x102b9810 size=0x417a
#include "UtlMem.h"
#include "UtlVec8.h"
#include "CUtlVector4.h"
#include "CUnknown10359c50.h"
#include "CUnknown102c6740.h"
#include "CUnknown102c6590.h"
#include "CUnknown102c68e0.h"
#include "CUnknown102becb0.h"

extern char g_105d2204[];
extern char g_105d221c[];
extern char g_105d2238[];
extern char g_105d2254[];
extern char g_105d226c[];
extern char g_105d2284[];
extern char g_105d22a0[];
extern char g_105d22b8[];
extern char g_105d22d8[];
extern char g_105d230c[];
extern char g_105d2338[];
extern char g_105d2360[];
extern char g_105d2390[];
extern char g_105d23bc[];
extern char g_105d23e0[];
extern char g_105d240c[];
extern char g_105d2434[];
extern char g_105d245c[];
extern char g_105d2484[];
extern char g_105d24a8[];
extern char g_105d24d0[];
extern char g_105d24f8[];
extern char g_105d2524[];
extern char g_105d254c[];
extern char g_105d256c[];
extern char g_105d258c[];
extern char g_105d25a4[];
extern char g_105d25c0[];
extern char g_105d25d8[];
extern char g_105d2600[];
extern char g_105d2628[];
extern char g_105d2658[];
extern char g_105d2690[];
extern char g_105d26b0[];
extern char g_105d26cc[];
extern char g_105d26ec[];
extern char g_105d270c[];
extern char g_105d2734[];
extern char g_105d2754[];
extern char g_105d2774[];
extern char g_105d2790[];
extern char g_105d27b0[];
extern char g_105d27d0[];
extern char g_105d27f4[];
extern char g_105d281c[];
extern char g_105d2840[];
extern char g_105d2860[];
extern char g_105d2880[];
extern char g_105d28a0[];
extern char g_105d28c0[];
extern char g_105d28e8[];
extern char g_105d2908[];
extern char g_105d2928[];
extern char g_105d2948[];
extern char g_105d2968[];
extern char g_105d2984[];
extern char g_105d29a8[];
extern char g_105d29cc[];
extern char g_105d29e8[];
extern char g_105d2a08[];
extern char g_105d2a30[];
extern char g_105d2a58[];
extern char g_105d2a7c[];
extern char g_105d2af4[];
extern char g_105d2b20[];
extern char g_105d2b44[];
extern char g_105d2b6c[];
extern char g_105d2b98[];
extern char g_105d2bc0[];
extern char g_105d2be8[];
extern char g_105d2c10[];
extern char g_105d2c30[];
extern char g_105d2c50[];
extern char g_105d2c70[];
extern char g_105d2c94[];
extern char g_105d2cb8[];
extern char g_105d2cd8[];
extern char g_105d2cfc[];
extern char g_105d2d2c[];
extern char g_105d2d50[];
extern char g_105d2d68[];
extern char g_105d2d90[];
extern char g_105d2dac[];
extern char g_105d2dc4[];
extern char g_105d2dec[];
extern char g_105d2e10[];
extern char g_105d2e3c[];
extern char g_105d2e70[];
extern char g_105d2e90[];
extern char g_105d2ec0[];
extern char g_105d2ee8[];
extern char g_105d2f0c[];
extern char g_105d2f28[];
extern char g_105d2f54[];
extern char g_105d2f80[];
extern char g_105d2fac[];
extern char g_105d2fd8[];
extern char g_105d3000[];
extern char g_105d3024[];
extern char g_105d304c[];
extern char g_105d30c4[];
extern char g_105d30ec[];
extern char g_105d311c[];
extern char g_105d3144[];
extern char g_105d3160[];
extern char g_105d317c[];
extern char g_105da8f0[];
extern char g_105da958[];
extern char g_105da970[];
extern char g_105da9d8[];
extern char g_105da9f0[];
extern char g_105daa58[];
extern char g_105daa70[];
extern char g_105daaf0[];
extern char g_105dab08[];
extern char g_105dac50[];
extern char g_105dad44[];
extern char g_105dad68[];
extern char g_105dae48[];
extern char g_105dae70[];
extern char g_105daf34[];
extern char g_105daf60[];
extern char g_105db0cc[];
extern char g_105db0f0[];
extern char g_105db1f8[];
extern char g_105db4d4[];
extern char g_105db4f0[];
extern char g_105db7d4[];
extern char g_105db7f8[];
extern char g_105db9bc[];
extern char g_105db9d8[];
extern char g_105dbb40[];
extern char g_105dbb68[];
extern char g_105dbda4[];
extern char g_105dbdd0[];
extern char g_105dc098[];
extern char g_105dc0b8[];
extern char g_105dc188[];
extern char g_105dc1b0[];
extern char g_105dc33c[];
extern char g_105dc368[];
extern char g_105dc560[];
extern char g_105dc580[];
extern char g_105dc830[];
extern char g_105dc858[];
extern char g_105dcaf0[];
extern char g_105dcb18[];
extern char g_105dcd6c[];
extern char g_105dcd98[];
extern char g_105dd030[];
extern char g_105dd050[];
extern char g_105dd178[];
extern char g_105dd198[];
extern char g_105dd43c[];
extern char g_105dd458[];
extern char g_105dd4d0[];
extern char g_105dd4f8[];
extern char g_105dd580[];
extern char g_105dd5a0[];
extern char g_105dd844[];
extern char g_105dd860[];
extern char g_105ddaf0[];
extern char g_105ddb10[];
extern char g_105dde28[];
extern char g_105dde48[];
extern char g_105de248[];
extern char g_105de278[];
extern char g_105de6ac[];
extern char g_105de6e0[];
extern char g_105deb98[];
extern char g_105debc0[];
extern char g_105ded50[];
extern char g_105ded78[];
extern char g_105df214[];
extern char g_105df230[];
extern char g_105df4f8[];
extern char g_105df780[];
extern char g_105df9d0[];
extern char g_105dfca0[];
extern char g_105dfe28[];
extern char g_105dffc0[];
extern char g_105e0178[];
extern char g_105e01a0[];
extern char g_105e035c[];
extern char g_105e0388[];
extern char g_105e0560[];
extern char g_105e0778[];
extern char g_105e09e0[];
extern char g_105e0c58[];
extern char g_105e0ed8[];
extern char g_105e1130[];
extern char g_105e13b0[];
extern char g_105e1620[];
extern char g_105e1890[];
extern char g_105e1a50[];
extern char g_105e1c20[];
extern char g_105e1dc0[];
extern char g_105e20d0[];
extern char g_105e2308[];
extern char g_105e24f0[];
extern char g_105e26b8[];
extern char g_105e26e0[];
extern char g_105e28e4[];
extern char g_105e2920[];
extern char g_105e2b04[];
extern char g_105e2b30[];
extern char g_105e2cd4[];
extern char g_105e2d08[];
extern char g_105e2ed4[];
extern char g_105e2f00[];
extern char g_105e30d0[];
extern char g_105e3100[];
extern char g_105e3470[];
extern char g_105e3490[];
extern char g_105e3694[];
extern char g_105e36c0[];
extern char g_105e3a08[];
extern char g_105e3a30[];
extern char g_105e3e7c[];
extern char g_105e3ea8[];
extern char g_105e41b8[];
extern char g_105e41f0[];
extern char g_105e4548[];
extern char g_105e4578[];
extern char g_105e48dc[];
extern char g_105e4910[];
extern char g_105e4c64[];
extern char g_105e4c90[];
extern char g_105e4fec[];
extern char g_105e5020[];
extern char g_105e536c[];
extern char g_105e5398[];
extern char g_105e5564[];
extern char g_105e5590[];
extern char g_105e575c[];
extern char g_105e5788[];
extern char g_105e59f0[];
extern char g_105e5b60[];
extern char g_105e5d10[];
extern char g_105e5eb8[];
extern char g_105e6060[];
extern char g_105e6100[];
extern char g_105e6130[];
extern char g_105e6308[];
extern char g_105e6520[];
extern char g_105e6780[];
extern char g_105e67b8[];
extern char g_105e6aa8[];
extern char g_105e6cb8[];
extern char g_105e6e10[];
extern char g_105e6e80[];
extern char g_105e6ea0[];
extern char g_105e6f20[];
extern char g_105e6f40[];
extern char g_105e711c[];
extern char g_105e7138[];
extern char g_105e72a0[];
extern char g_105e7380[];
extern char g_105e7448[];
extern char g_105e75d4[];
extern char g_105e7608[];
extern char g_105e7870[];
extern char g_105e79e8[];
extern char g_105e7a10[];
extern char g_105e7c58[];
extern char g_105e7dd4[];
extern char g_105e7e00[];
extern char g_105e8048[];
extern char g_105e8128[];
extern char g_105e8318[];
extern char g_105e8340[];
extern char g_105e85d8[];
extern char g_105e8608[];
extern char g_105e87c8[];
extern char g_105e8a48[];
extern char g_105e8c88[];
extern char g_105e8cc0[];
extern char g_105e8e34[];
extern char g_105e8e60[];
extern char g_105e8f9c[];
extern char g_105e8fc0[];
extern char g_105e9120[];
extern char g_105e9330[];
extern char g_105e9550[];
extern char g_105e9580[];
extern char g_105e96b8[];
extern char g_105e96e8[];
extern char g_105e98e0[];
extern char g_105e9908[];
extern char g_105e9aa8[];
extern char g_105e9ad0[];
extern char g_105e9b70[];
extern char g_105e9cf8[];
extern char g_105e9d28[];
extern char g_105e9ef4[];
extern char g_105e9f20[];
extern char g_105ea104[];
extern char g_105ea130[];
extern char g_105ea368[];
extern char g_105ea3f4[];
extern char g_105ea420[];
extern char g_105ea5d8[];
extern char g_105ea600[];
extern char g_105ea7d0[];
extern char g_105ea940[];
extern char g_105ea960[];
extern char g_105eab80[];
extern char g_105eae08[];
extern char g_105eaf18[];
extern char g_105eaff8[];
extern char g_105eb0d8[];
extern char g_105eb100[];
extern char g_105eb220[];
extern char g_105eb3f0[];
extern char g_105eb4fc[];
extern char g_105eb520[];
extern char g_105eb7e4[];
extern char g_105eb810[];
extern char g_105ebb1c[];
extern char g_105ebb48[];
extern char g_105ebdc8[];
extern char g_105ebe00[];
extern char g_105ec15c[];
extern char g_105ec198[];
extern char g_105ec3e8[];
extern char g_105ec418[];
extern char g_105ec690[];
extern char g_105ec6b8[];
extern char g_105ec8b0[];
extern char g_105ec8d8[];
extern char g_105ecb70[];
extern char g_105ecb98[];
extern char g_105ece78[];
extern char g_105ed004[];
extern char g_105ed030[];
extern char g_105ed20c[];
extern char g_105ed238[];
extern char g_105ed4e8[];
extern char g_105ed58c[];
extern char g_105ed5c0[];
extern char g_105ed678[];
extern char g_105ed6a8[];
extern char g_105ed888[];
extern char g_105ed8b8[];
extern char g_105ed9a0[];
extern char g_105edb68[];
extern char g_105edce0[];
extern char g_105edee4[];
extern char g_105edf08[];
extern char g_105ee188[];
extern char g_105ee1c0[];
extern char g_105ee374[];
extern char g_105ee3a8[];
extern char g_105ee600[];
extern char g_105ee630[];
extern char g_105ee808[];
extern char g_105ee830[];
extern char g_105eeaa4[];
extern char g_105eead0[];
extern char g_105eec38[];
extern char g_105eee50[];
extern char g_105eee78[];
extern char g_105ef068[];
extern char g_105ef3b8[];
extern char g_105ef7e0[];
extern char g_105ef810[];
extern char g_105efc68[];
extern char g_105efc90[];
extern char g_105f0120[];
extern char g_105f0400[];
extern char g_105f0430[];
extern char g_105f0704[];
extern char g_105f0730[];
extern char g_105f09b8[];
extern char g_105f0cf8[];
extern char g_105f0d30[];
extern char g_105f1038[];
extern char g_105f1068[];
extern char g_105f10e0[];
extern char g_105f1118[];
extern char g_105f14e8[];
extern char g_105f1528[];
extern char g_105f190c[];
extern char g_105f1940[];
extern char g_105f1d3c[];
extern char g_105f1d70[];
extern char g_105f2170[];
extern char g_105f21a0[];
extern char g_105f2364[];
extern char g_105f2390[];
extern char g_105f2568[];
extern char g_105f2590[];
extern char g_105f2760[];
extern char g_105f2788[];
extern char g_105f28d0[];
extern char g_105f2908[];
extern char g_105f2ac4[];
extern char g_105f2af8[];
extern char g_105f2ce0[];
extern char g_105f2d10[];
extern char g_105f2fb8[];
extern char g_105f3258[];
extern char g_105f3290[];
extern char g_105f342c[];
extern char g_105f3460[];
extern char g_105f36d0[];
extern char g_105f3700[];
extern char g_105f38dc[];
extern char g_105f3910[];
extern char g_105f3b2c[];
extern char g_105f3b60[];
extern char g_105f3d98[];
extern char g_105f3dc0[];
extern char g_105f4058[];
extern char g_105f4080[];
extern char g_105f4360[];
extern char g_105f4560[];
extern char g_105f46e8[];
extern char g_105f4990[];
extern char g_105f4b34[];
extern char g_105f4b70[];
extern char g_105f4d2c[];
extern char g_105f4d60[];
extern char g_105f4ee8[];
extern char g_105f4f20[];
extern char g_105f5110[];
extern char g_105f5140[];
extern char g_105f533c[];
extern char g_105f5370[];
extern char g_105f5560[];
extern char g_105f5590[];
extern char g_105f5a50[];
extern char g_105f5a80[];
extern char g_105f5f30[];
extern char g_105f5f58[];
extern char g_105f61d0[];
extern char g_105f6390[];
extern char g_105f65e8[];
extern char g_105f6840[];
extern char g_105f68a4[];
extern char g_105f68c8[];
extern char g_105f6d30[];
extern char g_105f6d58[];
extern char g_105f70b8[];
extern char g_105f72d8[];
extern char g_105f74f8[];
extern char g_105f77fc[];
extern char g_105f7820[];
extern char g_105f7b28[];
extern char g_105f7d48[];
extern char g_105f7d70[];
extern char g_105f7fa8[];
extern char g_105f8208[];
extern char g_105f8240[];
extern char g_105f8510[];
extern char g_105f87b0[];
extern char g_105f88ec[];
extern char g_105f8918[];
extern char g_105f8b50[];
extern char g_105f8dc0[];
extern char g_105f90e8[];
extern char g_105f91a4[];
extern char g_105f91d0[];
extern char g_105f92a0[];
extern char g_105f92d8[];
extern char g_105f93e8[];
extern char g_105f9410[];
extern char g_105f957c[];
extern char g_105f9598[];
extern char g_105f9740[];
extern char g_105f9948[];
extern char g_105f9978[];
extern char g_105f9af4[];
extern char g_105f9b28[];
extern char g_105f9d28[];
extern char g_105f9f60[];
extern char g_105fa0a0[];
extern char g_105fa1f4[];
extern char g_105fa230[];
extern char g_105fa380[];
extern char g_105fa5a0[];
extern char g_105fa6a0[];
extern char g_105fa8e0[];
extern char g_105faa44[];
extern char g_105faa70[];
extern char g_105fabd0[];
extern char g_105fac40[];
extern char g_105faea0[];
extern char g_105fb100[];
extern char g_105fb360[];
extern char g_105fb5c0[];
extern char g_105fb858[];
extern char g_105fbae8[];
extern char g_105fbf14[];
extern char g_105fbf50[];
extern char g_105fc380[];
extern char g_105fc3b0[];
extern char g_105fc660[];
extern char g_105fc698[];
extern char g_105fc930[];
extern char g_105fc960[];
extern char g_105fcc48[];
extern char g_105fcc80[];
extern char g_105fcf80[];
extern char g_105fcfb8[];
extern char g_105fd264[];
extern char g_105fd298[];
extern char g_105fd590[];
extern char g_105fd5c0[];
extern char g_105fd6f4[];
extern char g_105fd728[];
extern char g_105fd918[];
extern char g_105fd948[];
extern char g_105fdb78[];
extern char g_105fdf18[];
extern char g_105fdf58[];
extern char g_105fe3c0[];
extern char g_105fe3f8[];
extern char g_105fe674[];
extern char g_105fe6a8[];
extern char g_105fe82c[];
extern char g_105fe860[];
extern char g_105feb0c[];
extern char g_105feb38[];
extern char g_105fec74[];
extern char g_105feca8[];
extern char g_105fef58[];
extern char g_105ff2f8[];
extern char g_105ff320[];
extern char g_105ff458[];
extern char g_105ff488[];
extern char g_105ff658[];
extern char g_105ff680[];
extern char g_105ffa68[];
extern char g_105ffd78[];
extern char g_105fffe8[];
extern char g_10600150[];
extern char g_10600290[];
extern char g_106003fc[];
extern char g_10600428[];
extern char g_10600634[];
extern char g_10600658[];
extern char g_10600838[];
extern char g_10600860[];
extern char g_10600a24[];
extern char g_10600a48[];
extern char g_10600cb4[];
extern char g_10600ce0[];
extern bool g_105d1058;
extern const char *g_105d1060;
extern char g_105d748c[];

struct VecU {
	UtlMem mem;
	int size;
	int *elems;
};

struct Frame {
	UtlVec8Elem e;
	VecU a;
	UtlVec8 sched;
	VecU b;
	const char *t044;
	const char *t048;
	const char *t04c;
	const char *t050;
	const char *t054;
	const char *t058;
	const char *t05c;
	const char *t060;
	const char *t064;
	const char *t068;
	const char *t06c;
	const char *t070;
	const char *t074;
	const char *t078;
	const char *t07c;
	const char *t080;
	const char *t084;
	const char *t088;
	const char *t08c;
	const char *t090;
	const char *t094;
	const char *t098;
	const char *t09c;
	const char *t0a0;
	const char *t0a4;
	const char *t0a8;
	const char *t0ac;
	const char *t0b0;
	const char *t0b4;
	const char *t0b8;
	const char *t0bc;
	const char *t0c0;
	const char *t0c4;
	const char *t0c8;
	const char *t0cc;
	const char *t0d0;
	const char *t0d4;
	const char *t0d8;
	const char *t0dc;
	const char *t0e0;
	const char *t0e4;
	const char *t0e8;
	const char *t0ec;
	const char *t0f0;
	const char *t0f4;
	const char *t0f8;
	const char *t0fc;
	const char *t100;
	const char *t104;
	const char *t108;
	const char *t10c;
	const char *t110;
	const char *t114;
	const char *t118;
	const char *t11c;
	const char *t120;
	const char *t124;
	const char *t128;
	const char *t12c;
	const char *t130;
	const char *t134;
	const char *t138;
	const char *t13c;
	const char *t140;
	const char *t144;
	const char *t148;
	const char *t14c;
	const char *t150;
	const char *t154;
	const char *t158;
	const char *t15c;
	const char *t160;
	const char *t164;
	const char *t168;
	const char *t16c;
	const char *t170;
	const char *t174;
	const char *t178;
	const char *t17c;
	const char *t180;
	const char *t184;
	const char *t188;
	const char *t18c;
	const char *t190;
	const char *t194;
	const char *t198;
	const char *t19c;
	const char *t1a0;
	const char *t1a4;
	const char *t1a8;
	const char *t1ac;
	const char *t1b0;
	const char *t1b4;
	const char *t1b8;
	const char *t1bc;
	const char *t1c0;
	const char *t1c4;
	const char *t1c8;
	const char *t1cc;
	const char *t1d0;
	const char *t1d4;
	const char *t1d8;
	const char *t1dc;
	const char *t1e0;
	const char *t1e4;
	const char *t1e8;
	const char *t1ec;
	const char *t1f0;
	const char *t1f4;
	const char *t1f8;
	const char *t1fc;
	const char *t200;
	const char *t204;
	const char *t208;
	const char *t20c;
	const char *t210;
	const char *t214;
	const char *t218;
	const char *t21c;
	const char *t220;
	const char *t224;
	const char *t228;
	const char *t22c;
	const char *t230;
	const char *t234;
	const char *t238;
	const char *t23c;
	const char *t240;
	const char *t244;
	const char *t248;
	const char *t24c;
	const char *t250;
	const char *t254;
	const char *t258;
	const char *t25c;
	const char *t260;
	const char *t264;
	const char *t268;
	const char *t26c;
	const char *t270;
	const char *t274;
	const char *t278;
	const char *t27c;
	const char *t280;
	const char *t284;
	const char *t288;
	const char *t28c;
	const char *t290;
	const char *t294;
	const char *t298;
	const char *t29c;
	const char *t2a0;
	const char *t2a4;
	const char *t2a8;
	const char *t2ac;
	const char *t2b0;
	const char *t2b4;
	const char *t2b8;
	const char *t2bc;
	const char *t2c0;
	const char *t2c4;
	const char *t2c8;
	const char *t2cc;
	const char *t2d0;
	const char *t2d4;
	const char *t2d8;
	const char *t2dc;
	const char *t2e0;
	const char *t2e4;
	const char *t2e8;
	const char *t2ec;
	const char *t2f0;
	const char *t2f4;
	const char *t2f8;
	const char *t2fc;
	const char *t300;
	const char *t304;
	const char *t308;
	const char *t30c;
	const char *t310;
	const char *t314;
	const char *t318;
	const char *t31c;
	const char *t320;
	const char *t324;
	const char *t328;
	const char *t32c;
	const char *t330;
	const char *t334;
	const char *t338;
	const char *t33c;
	const char *t340;
	const char *t344;
	const char *t348;
	const char *t34c;
	const char *t350;
	const char *t354;
	const char *t358;
	const char *t35c;
	const char *t360;
	const char *t364;
	const char *t368;
	const char *t36c;
	const char *t370;
	const char *t374;
	const char *t378;
	const char *t37c;
	const char *t380;
	const char *t384;
	const char *t388;
	const char *t38c;
	const char *t390;
	const char *t394;
	const char *t398;
	const char *t39c;
	const char *t3a0;
	const char *t3a4;
	const char *t3a8;
	const char *t3ac;
	const char *t3b0;
	const char *t3b4;
	const char *t3b8;
	const char *t3bc;
	const char *t3c0;
	const char *t3c4;
	const char *t3c8;
	const char *t3cc;
	const char *t3d0;
	const char *t3d4;
	const char *t3d8;
	const char *t3dc;
	const char *t3e0;
	const char *t3e4;
	const char *t3e8;
	const char *t3ec;
	const char *t3f0;
	const char *t3f4;
	const char *t3f8;
	const char *t3fc;
	const char *t400;
	const char *t404;
	const char *t408;
	const char *t40c;
	const char *t410;
	const char *t414;
	const char *t418;
	const char *t41c;
	const char *t420;
	const char *t424;
	const char *t428;
	const char *t42c;
	const char *t430;
	const char *t434;
	const char *t438;
	const char *t43c;
	const char *t440;
	const char *t444;
	const char *t448;
	const char *t44c;
	const char *t450;
	const char *t454;
	const char *t458;
	const char *t45c;
	const char *t460;
	const char *t464;
	const char *t468;
	const char *t46c;
	const char *t470;
	const char *t474;
	const char *t478;
	const char *t47c;
	const char *t480;
	const char *t484;
	UtlVec8 cond;
	const char *t49c;
	UtlVec8 task;
};

class CUnknown10936b68 { public: bool sub_1030d850(const char *cls, int name, void *reg); };
extern CUnknown10936b68 g_10936b68;
struct CIdSpaceV {
	bool sub_102bea80(const char *name, int id, const char *cn);	// AddSchedule
	bool sub_102beab0(const char *name, int id, const char *cn);	// AddTask
	bool sub_102beae0(const char *name, int id, const char *cn);	// AddCondition
};
struct CTimerTriple { bool sub_102be9f0(void *pSymbols, void *pBase); };
void *sub_102beb10();
void *sub_102beb30();
CIdSpaceV *sub_102bec90();
struct CUnk102bec30 { void sub_102bec30(); };
struct CUnknown102c6760 { int sub_102c6760(); };
struct CUnknown102c6900 { int sub_102c6900(); };
struct CUnknown102c65b0 { int sub_102c65b0(); };
struct CUnknown102c6860 { void sub_102c6860(); };
struct CUnknown102c6510 { void sub_102c6510(); };

struct Elem { const char *name; int id; };

// TARGET: sub_102b9810
void sub_102b9810()
{
	int i;
	Frame f;

	f.a.mem.sub_102c6a00(0, 0);
	f.a.size = 0;
	f.a.elems = f.a.mem.m_pMemory;
	f.b.mem.sub_102c6b80(0, 0);
	f.b.size = 0;
	f.b.elems = f.b.mem.m_pMemory;
	f.sched.sub_102c66f0(0, 0);
	f.task.sub_102c66f0(0, 0);
	f.cond.sub_102c66f0(0, 0);

	f.e.a = (int)g_105d317c;
	f.e.b = 0x44;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t264 = g_10600ce0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t264);
	f.e.a = (int)g_10600cb4;
	f.e.b = 0x45;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t468 = g_10600a48;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t468);
	f.e.a = (int)g_10600a24;
	f.e.b = 0x46;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t470 = g_10600860;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t470);
	f.e.a = (int)g_10600838;
	f.e.b = 0x47;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t478 = g_10600658;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t478);
	f.e.a = (int)g_10600634;
	f.e.b = 0x48;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t480 = g_10600428;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t480);
	f.e.a = (int)g_106003fc;
	f.e.b = 0x49;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t04c = g_10600290;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t04c);
	f.e.a = (int)g_105d3160;
	f.e.b = 0x4a;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t44c = g_10600150;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t44c);
	f.e.a = (int)g_105d3144;
	f.e.b = 0x4b;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t054 = g_105fffe8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t054);
	f.e.a = (int)g_105d311c;
	f.e.b = 0x4c;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t274 = g_105ffd78;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t274);
	f.e.a = (int)g_105d30ec;
	f.e.b = 0x4d;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t05c = g_105ffa68;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t05c);
	f.e.a = (int)g_105d30c4;
	f.e.b = 0x4e;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t384 = g_105ff680;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t384);
	f.e.a = (int)g_105ff658;
	f.e.b = 0x4f;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t064 = g_105ff488;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t064);
	f.e.a = (int)g_105ff458;
	f.e.b = 0x50;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t27c = g_105ff320;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t27c);
	f.e.a = (int)g_105ff2f8;
	f.e.b = 0x51;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t06c = g_105fef58;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t06c);
	f.e.a = (int)g_105d304c;
	f.e.b = 0x52;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t40c = g_105feca8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t40c);
	f.e.a = (int)g_105fec74;
	f.e.b = 0x53;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t074 = g_105feb38;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t074);
	f.e.a = (int)g_105feb0c;
	f.e.b = 0x54;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t284 = g_105fe860;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t284);
	f.e.a = (int)g_105fe82c;
	f.e.b = 0x55;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t07c = g_105fe6a8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t07c);
	f.e.a = (int)g_105fe674;
	f.e.b = 0x56;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t38c = g_105fe3f8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t38c);
	f.e.a = (int)g_105fe3c0;
	f.e.b = 0x57;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t084 = g_105fdf58;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t084);
	f.e.a = (int)g_105fdf18;
	f.e.b = 0x58;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t28c = g_105fdb78;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t28c);
	f.e.a = (int)g_105d3024;
	f.e.b = 0x59;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t08c = g_105fd948;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t08c);
	f.e.a = (int)g_105fd918;
	f.e.b = 0x5a;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t49c = g_105fd728;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t49c);
	f.e.a = (int)g_105fd6f4;
	f.e.b = 0x5b;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t094 = g_105fd5c0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t094);
	f.e.a = (int)g_105fd590;
	f.e.b = 0x5c;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t294 = g_105fd298;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t294);
	f.e.a = (int)g_105fd264;
	f.e.b = 0x5d;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t09c = g_105fcfb8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t09c);
	f.e.a = (int)g_105fcf80;
	f.e.b = 0x5e;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t394 = g_105fcc80;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t394);
	f.e.a = (int)g_105fcc48;
	f.e.b = 0x5f;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0a4 = g_105fc960;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0a4);
	f.e.a = (int)g_105fc930;
	f.e.b = 0x60;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t29c = g_105fc698;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t29c);
	f.e.a = (int)g_105fc660;
	f.e.b = 0x61;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0ac = g_105fc3b0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0ac);
	f.e.a = (int)g_105fc380;
	f.e.b = 0x62;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t414 = g_105fbf50;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t414);
	f.e.a = (int)g_105fbf14;
	f.e.b = 0x63;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0b4 = g_105fbae8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0b4);
	f.e.a = (int)g_105d3000;
	f.e.b = 0x64;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2a4 = g_105fb858;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2a4);
	f.e.a = (int)g_105d2fd8;
	f.e.b = 0x65;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0bc = g_105fb5c0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0bc);
	f.e.a = (int)g_105d2fac;
	f.e.b = 0x66;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t39c = g_105fb360;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t39c);
	f.e.a = (int)g_105d2f80;
	f.e.b = 0x67;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0c4 = g_105fb100;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0c4);
	f.e.a = (int)g_105d2f54;
	f.e.b = 0x68;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2ac = g_105faea0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2ac);
	f.e.a = (int)g_105d2f28;
	f.e.b = 0x69;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0cc = g_105fac40;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0cc);
	f.e.a = (int)g_105d2f0c;
	f.e.b = 0x6a;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t454 = g_105fabd0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t454);
	f.e.a = (int)g_105d2ee8;
	f.e.b = 0x6b;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0d4 = g_105faa70;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0d4);
	f.e.a = (int)g_105faa44;
	f.e.b = 0x6c;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2b4 = g_105fa8e0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2b4);
	f.e.a = (int)g_105d2ec0;
	f.e.b = 0x6d;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0dc = g_105fa6a0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0dc);
	f.e.a = (int)g_105d2e90;
	f.e.b = 0x6e;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3a4 = g_105fa5a0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3a4);
	f.e.a = (int)g_105d2e70;
	f.e.b = 0x6f;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0e4 = g_105fa380;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0e4);
	f.e.a = (int)g_105d2e3c;
	f.e.b = 0x70;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2bc = g_105fa230;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2bc);
	f.e.a = (int)g_105fa1f4;
	f.e.b = 0x71;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0ec = g_105fa0a0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0ec);
	f.e.a = (int)g_105d2e10;
	f.e.b = 0x72;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t41c = g_105f9f60;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t41c);
	f.e.a = (int)g_105d2dec;
	f.e.b = 0x73;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0f4 = g_105f9d28;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0f4);
	f.e.a = (int)g_105d2dc4;
	f.e.b = 0x74;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2c4 = g_105f9b28;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2c4);
	f.e.a = (int)g_105f9af4;
	f.e.b = 0x75;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0fc = g_105f9978;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0fc);
	f.e.a = (int)g_105f9948;
	f.e.b = 0x76;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3ac = g_105f9740;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3ac);
	f.e.a = (int)g_105d2dac;
	f.e.b = 0x77;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t104 = g_105f9598;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t104);
	f.e.a = (int)g_105f957c;
	f.e.b = 0x78;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2cc = g_105f9410;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2cc);
	f.e.a = (int)g_105f93e8;
	f.e.b = 0x79;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t10c = g_105f92d8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t10c);
	f.e.a = (int)g_105f92a0;
	f.e.b = 0x7a;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t474 = g_105f91d0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t474);
	f.e.a = (int)g_105f91a4;
	f.e.b = 0x7b;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t114 = g_105f90e8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t114);
	f.e.a = (int)g_105d2d90;
	f.e.b = 0x7c;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2d4 = g_105f8dc0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2d4);
	f.e.a = (int)g_105d2d68;
	f.e.b = 0x7d;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t11c = g_105f8b50;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t11c);
	f.e.a = (int)g_105d2d50;
	f.e.b = 0x7e;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3b4 = g_105f8918;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3b4);
	f.e.a = (int)g_105f88ec;
	f.e.b = 0x7f;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t124 = g_105f87b0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t124);
	f.e.a = (int)g_105d2d2c;
	f.e.b = 0x80;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2dc = g_105f8510;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2dc);
	f.e.a = (int)g_105d2cfc;
	f.e.b = 0x81;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t12c = g_105f8240;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t12c);
	f.e.a = (int)g_105f8208;
	f.e.b = 0x82;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t424 = g_105f7fa8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t424);
	f.e.a = (int)g_105d2cd8;
	f.e.b = 0x83;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t134 = g_105f7d70;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t134);
	f.e.a = (int)g_105f7d48;
	f.e.b = 0x84;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2e4 = g_105f7b28;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2e4);
	f.e.a = (int)g_105d2cb8;
	f.e.b = 0x85;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t13c = g_105f7820;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t13c);
	f.e.a = (int)g_105f77fc;
	f.e.b = 0x86;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3bc = g_105f74f8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3bc);
	f.e.a = (int)g_105d2c94;
	f.e.b = 0x87;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t144 = g_105f72d8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t144);
	f.e.a = (int)g_105d2c70;
	f.e.b = 0x88;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2ec = g_105f70b8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2ec);
	f.e.a = (int)g_105d2c50;
	f.e.b = 0x89;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t14c = g_105f6d58;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t14c);
	f.e.a = (int)g_105f6d30;
	f.e.b = 0x8a;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t45c = g_105f68c8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t45c);
	f.e.a = (int)g_105f68a4;
	f.e.b = 0x8b;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t154 = g_105f6840;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t154);
	f.e.a = (int)g_105d2c30;
	f.e.b = 0x8c;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2f4 = g_105f65e8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2f4);
	f.e.a = (int)g_105d2c10;
	f.e.b = 0x8d;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t15c = g_105f6390;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t15c);
	f.e.a = (int)g_105d2be8;
	f.e.b = 0x8e;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3c4 = g_105f61d0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3c4);
	f.e.a = (int)g_105d2bc0;
	f.e.b = 0x8f;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t164 = g_105f5f58;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t164);
	f.e.a = (int)g_105f5f30;
	f.e.b = 0x90;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t2fc = g_105f5a80;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t2fc);
	f.e.a = (int)g_105f5a50;
	f.e.b = 0x91;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t16c = g_105f5590;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t16c);
	f.e.a = (int)g_105f5560;
	f.e.b = 0x92;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t42c = g_105f5370;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t42c);
	f.e.a = (int)g_105f533c;
	f.e.b = 0x93;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t174 = g_105f5140;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t174);
	f.e.a = (int)g_105f5110;
	f.e.b = 0x94;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t304 = g_105f4f20;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t304);
	f.e.a = (int)g_105f4ee8;
	f.e.b = 0x95;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t17c = g_105f4d60;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t17c);
	f.e.a = (int)g_105f4d2c;
	f.e.b = 0x96;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3cc = g_105f4b70;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3cc);
	f.e.a = (int)g_105f4b34;
	f.e.b = 0x97;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t184 = g_105f4990;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t184);
	f.e.a = (int)g_105d2b98;
	f.e.b = 0x98;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t30c = g_105f46e8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t30c);
	f.e.a = (int)g_105d2b6c;
	f.e.b = 0x99;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t18c = g_105f4560;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t18c);
	f.e.a = (int)g_105d2b44;
	f.e.b = 0x9a;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t484 = g_105f4360;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t484);
	f.e.a = (int)g_105d2b20;
	f.e.b = 0x9b;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t194 = g_105f4080;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t194);
	f.e.a = (int)g_105f4058;
	f.e.b = 0x9c;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t314 = g_105f3dc0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t314);
	f.e.a = (int)g_105f3d98;
	f.e.b = 0x9d;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t19c = g_105f3b60;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t19c);
	f.e.a = (int)g_105f3b2c;
	f.e.b = 0x9e;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3d4 = g_105f3910;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3d4);
	f.e.a = (int)g_105f38dc;
	f.e.b = 0x9f;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1a4 = g_105f3700;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1a4);
	f.e.a = (int)g_105f36d0;
	f.e.b = 0xa0;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t31c = g_105f3460;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t31c);
	f.e.a = (int)g_105f342c;
	f.e.b = 0xa1;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1ac = g_105f3290;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1ac);
	f.e.a = (int)g_105f3258;
	f.e.b = 0xa2;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t434 = g_105f2fb8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t434);
	f.e.a = (int)g_105d2af4;
	f.e.b = 0xa3;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1b4 = g_105f2d10;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1b4);
	f.e.a = (int)g_105f2ce0;
	f.e.b = 0xa4;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t324 = g_105f2af8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t324);
	f.e.a = (int)g_105f2ac4;
	f.e.b = 0xa5;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1bc = g_105f2908;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1bc);
	f.e.a = (int)g_105f28d0;
	f.e.b = 0xa6;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3dc = g_105f2788;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3dc);
	f.e.a = (int)g_105f2760;
	f.e.b = 0xa7;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1c4 = g_105f2590;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1c4);
	f.e.a = (int)g_105f2568;
	f.e.b = 0xa8;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t32c = g_105f2390;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t32c);
	f.e.a = (int)g_105f2364;
	f.e.b = 0xa9;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1cc = g_105f21a0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1cc);
	f.e.a = (int)g_105f2170;
	f.e.b = 0xaa;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t464 = g_105f1d70;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t464);
	f.e.a = (int)g_105f1d3c;
	f.e.b = 0xab;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1d4 = g_105f1940;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1d4);
	f.e.a = (int)g_105f190c;
	f.e.b = 0xac;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t334 = g_105f1528;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t334);
	f.e.a = (int)g_105f14e8;
	f.e.b = 0xad;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1dc = g_105f1118;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1dc);
	f.e.a = (int)g_105f10e0;
	f.e.b = 0xae;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3e4 = g_105f1068;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3e4);
	f.e.a = (int)g_105f1038;
	f.e.b = 0xaf;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1e4 = g_105f0d30;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1e4);
	f.e.a = (int)g_105f0cf8;
	f.e.b = 0xb0;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t33c = g_105f09b8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t33c);
	f.e.a = (int)g_105d2a7c;
	f.e.b = 0xb1;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1ec = g_105f0730;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1ec);
	f.e.a = (int)g_105f0704;
	f.e.b = 0xb2;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t43c = g_105f0430;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t43c);
	f.e.a = (int)g_105f0400;
	f.e.b = 0xb3;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1f4 = g_105f0120;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1f4);
	f.e.a = (int)g_105d2a58;
	f.e.b = 0xb4;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t344 = g_105efc90;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t344);
	f.e.a = (int)g_105efc68;
	f.e.b = 0xb5;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t1fc = g_105ef810;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t1fc);
	f.e.a = (int)g_105ef7e0;
	f.e.b = 0xb6;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3ec = g_105ef3b8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3ec);
	f.e.a = (int)g_105d2a30;
	f.e.b = 0xb7;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t204 = g_105ef068;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t204);
	f.e.a = (int)g_105d2a08;
	f.e.b = 0xb8;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t34c = g_105eee78;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t34c);
	f.e.a = (int)g_105eee50;
	f.e.b = 0xb9;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t20c = g_105eec38;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t20c);
	f.e.a = (int)g_105d29e8;
	f.e.b = 0xba;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t47c = g_105eead0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t47c);
	f.e.a = (int)g_105eeaa4;
	f.e.b = 0xbb;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t214 = g_105ee830;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t214);
	f.e.a = (int)g_105ee808;
	f.e.b = 0xbc;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t354 = g_105ee630;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t354);
	f.e.a = (int)g_105ee600;
	f.e.b = 0xbd;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t21c = g_105ee3a8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t21c);
	f.e.a = (int)g_105ee374;
	f.e.b = 0xbe;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3f4 = g_105ee1c0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3f4);
	f.e.a = (int)g_105ee188;
	f.e.b = 0xbf;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t224 = g_105edf08;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t224);
	f.e.a = (int)g_105edee4;
	f.e.b = 0xc0;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t35c = g_105edce0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t35c);
	f.e.a = (int)g_105d29cc;
	f.e.b = 0xc1;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t22c = g_105edb68;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t22c);
	f.e.a = (int)g_105d29a8;
	f.e.b = 0xc2;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t444 = g_105ed9a0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t444);
	f.e.a = (int)g_105d2984;
	f.e.b = 0xc3;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t234 = g_105ed8b8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t234);
	f.e.a = (int)g_105ed888;
	f.e.b = 0xc4;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t364 = g_105ed6a8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t364);
	f.e.a = (int)g_105ed678;
	f.e.b = 0xc5;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t23c = g_105ed5c0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t23c);
	f.e.a = (int)g_105ed58c;
	f.e.b = 0xc6;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t3fc = g_105ed4e8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t3fc);
	f.e.a = (int)g_105d2968;
	f.e.b = 0xc7;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t244 = g_105ed238;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t244);
	f.e.a = (int)g_105ed20c;
	f.e.b = 0xc8;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t36c = g_105ed030;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t36c);
	f.e.a = (int)g_105ed004;
	f.e.b = 0xc9;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t24c = g_105ece78;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t24c);
	f.e.a = (int)g_105d2948;
	f.e.b = 0xca;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t46c = g_105ecb98;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t46c);
	f.e.a = (int)g_105ecb70;
	f.e.b = 0xcb;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t254 = g_105ec8d8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t254);
	f.e.a = (int)g_105ec8b0;
	f.e.b = 0xcc;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t374 = g_105ec6b8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t374);
	f.e.a = (int)g_105ec690;
	f.e.b = 0xcd;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t25c = g_105ec418;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t25c);
	f.e.a = (int)g_105ec3e8;
	f.e.b = 0xce;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t404 = g_105ec198;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t404);
	f.e.a = (int)g_105ec15c;
	f.e.b = 0xcf;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t044 = g_105ebe00;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t044);
	f.e.a = (int)g_105ebdc8;
	f.e.b = 0xd0;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t37c = g_105ebb48;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t37c);
	f.e.a = (int)g_105ebb1c;
	f.e.b = 0xd1;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t26c = g_105eb810;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t26c);
	f.e.a = (int)g_105eb7e4;
	f.e.b = 0xd2;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t048 = g_105eb520;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t048);
	f.e.a = (int)g_105eb4fc;
	f.e.b = 0xd3;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t050 = g_105eb3f0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t050);
	f.e.a = (int)g_105d2928;
	f.e.b = 0xd4;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t058 = g_105eb220;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t058);
	f.e.a = (int)g_105d2908;
	f.e.b = 0xd5;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t060 = g_105eb100;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t060);
	f.e.a = (int)g_105eb0d8;
	f.e.b = 0xd6;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t068 = g_105eaff8;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t068);
	f.e.a = (int)g_105d28e8;
	f.e.b = 0xd7;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t070 = g_105eaf18;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t070);
	f.e.a = (int)g_105d28c0;
	f.e.b = 0xd8;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t078 = g_105eae08;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t078);
	f.e.a = (int)g_105d28a0;
	f.e.b = 0xd9;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t080 = g_105eab80;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t080);
	f.e.a = (int)g_105d2880;
	f.e.b = 0xda;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t088 = g_105ea960;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t088);
	f.e.a = (int)g_105ea940;
	f.e.b = 0xdb;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t090 = g_105ea7d0;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t090);
	f.e.a = (int)g_105d2860;
	f.e.b = 0xdc;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t098 = g_105ea600;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t098);
	f.e.a = (int)g_105ea5d8;
	f.e.b = 0xdd;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0a0 = g_105ea420;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0a0);
	f.e.a = (int)g_105ea3f4;
	f.e.b = 0xde;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0a8 = g_105ea368;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0a8);
	f.e.a = (int)g_105d2840;
	f.e.b = 0xdf;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0b0 = g_105ea130;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0b0);
	f.e.a = (int)g_105ea104;
	f.e.b = 0xe0;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0b8 = g_105e9f20;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0b8);
	f.e.a = (int)g_105e9ef4;
	f.e.b = 0xe1;
	f.sched.sub_102c6a50(f.sched.m_Size, &f.e);
	f.t0c0 = g_105e9d28;
	((CUtlVector4 *)&f.a)->sub_102c6920(f.a.size, (int *)&f.t0c0);
	f.e.a = (int)g_105e9cf8;
	f.e.b = 0xe2;
	f.sched.sub_102c6780(&f.e);
	f.t0c8 = g_105e9b70;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t0c8);
	f.sched.sub_102beb50((int)g_105d281c, 0xe3);
	f.t0d0 = g_105e9ad0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t0d0);
	f.sched.sub_102beb50((int)g_105e9aa8, 0xe4);
	f.t0d8 = g_105e9908;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t0d8);
	f.sched.sub_102beb50((int)g_105e98e0, 0xe5);
	f.t0e0 = g_105e96e8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t0e0);
	f.sched.sub_102beb50((int)g_105e96b8, 0xe6);
	f.t0e8 = g_105e9580;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t0e8);
	f.sched.sub_102beb50((int)g_105e9550, 0xe7);
	f.t0f0 = g_105e9330;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t0f0);
	f.sched.sub_102beb50((int)g_105d27f4, 0xe8);
	f.t0f8 = g_105e9120;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t0f8);
	f.sched.sub_102beb50((int)g_105d27d0, 0xe9);
	f.t100 = g_105e8fc0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t100);
	f.sched.sub_102beb50((int)g_105e8f9c, 0xea);
	f.t108 = g_105e8e60;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t108);
	f.sched.sub_102beb50((int)g_105e8e34, 0xeb);
	f.t110 = g_105e8cc0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t110);
	f.sched.sub_102beb50((int)g_105e8c88, 0xec);
	f.t118 = g_105e8a48;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t118);
	f.sched.sub_102beb50((int)g_105d27b0, 0xed);
	f.t120 = g_105e87c8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t120);
	f.sched.sub_102beb50((int)g_105d2790, 0xee);
	f.t128 = g_105e8608;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t128);
	f.sched.sub_102beb50((int)g_105e85d8, 0xef);
	f.t130 = g_105e8340;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t130);
	f.sched.sub_102beb50((int)g_105e8318, 0xf0);
	f.t138 = g_105e8128;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t138);
	f.sched.sub_102beb50((int)g_105d2774, 0xf1);
	f.t140 = g_105e8048;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t140);
	f.sched.sub_102beb50((int)g_105d2754, 0xf2);
	f.t148 = g_105e7e00;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t148);
	f.sched.sub_102beb50((int)g_105e7dd4, 0xf3);
	f.t150 = g_105e7c58;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t150);
	f.sched.sub_102beb50((int)g_105d2734, 0xf4);
	f.t158 = g_105e7a10;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t158);
	f.sched.sub_102beb50((int)g_105e79e8, 0xf5);
	f.t160 = g_105e7870;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t160);
	f.sched.sub_102beb50((int)g_105d270c, 0xf6);
	f.t168 = g_105e7608;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t168);
	f.sched.sub_102beb50((int)g_105e75d4, 0xf7);
	f.t170 = g_105e7448;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t170);
	f.sched.sub_102beb50((int)g_105d26ec, 0xf8);
	f.t178 = g_105e7380;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t178);
	f.sched.sub_102beb50((int)g_105d26cc, 0xf9);
	f.t180 = g_105e72a0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t180);
	f.sched.sub_102beb50((int)g_105d26b0, 0xfa);
	f.t188 = g_105e7138;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t188);
	f.sched.sub_102beb50((int)g_105e711c, 0xfb);
	f.t190 = g_105e6f40;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t190);
	f.sched.sub_102beb50((int)g_105e6f20, 0xfc);
	f.t198 = g_105e6ea0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t198);
	f.sched.sub_102beb50((int)g_105e6e80, 0xfd);
	f.t1a0 = g_105e6e10;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1a0);
	f.sched.sub_102beb50((int)g_105d2690, 0xfe);
	f.t1a8 = g_105e6cb8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1a8);
	f.sched.sub_102beb50((int)g_105d2658, 0xff);
	f.t1b0 = g_105e6aa8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1b0);
	f.sched.sub_102beb50((int)g_105d2628, 0x100);
	f.t1b8 = g_105e67b8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1b8);
	f.sched.sub_102beb50((int)g_105e6780, 0x101);
	f.t1c0 = g_105e6520;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1c0);
	f.sched.sub_102beb50((int)g_105d2600, 0x102);
	f.t1c8 = g_105e6308;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1c8);
	f.sched.sub_102beb50((int)g_105d25d8, 0x103);
	f.t1d0 = g_105e6130;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1d0);
	f.sched.sub_102beb50((int)g_105e6100, 0x104);
	f.t1d8 = g_105e6060;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1d8);
	f.sched.sub_102beb50((int)g_105d25c0, 0x105);
	f.t1e0 = g_105e5eb8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1e0);
	f.sched.sub_102beb50((int)g_105d25a4, 0x106);
	f.t1e8 = g_105e5d10;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1e8);
	f.sched.sub_102beb50((int)g_105d258c, 0x107);
	f.t1f0 = g_105e5b60;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1f0);
	f.sched.sub_102beb50((int)g_105d256c, 0x108);
	f.t1f8 = g_105e59f0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t1f8);
	f.sched.sub_102beb50((int)g_105d254c, 0x109);
	f.t200 = g_105e5788;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t200);
	f.sched.sub_102beb50((int)g_105e575c, 0x10a);
	f.t208 = g_105e5590;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t208);
	f.sched.sub_102beb50((int)g_105e5564, 0x10b);
	f.t210 = g_105e5398;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t210);
	f.sched.sub_102beb50((int)g_105e536c, 0x10c);
	f.t218 = g_105e5020;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t218);
	f.sched.sub_102beb50((int)g_105e4fec, 0x10d);
	f.t220 = g_105e4c90;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t220);
	f.sched.sub_102beb50((int)g_105e4c64, 0x10e);
	f.t228 = g_105e4910;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t228);
	f.sched.sub_102beb50((int)g_105e48dc, 0x10f);
	f.t230 = g_105e4578;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t230);
	f.sched.sub_102beb50((int)g_105e4548, 0x110);
	f.t238 = g_105e41f0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t238);
	f.sched.sub_102beb50((int)g_105e41b8, 0x111);
	f.t240 = g_105e3ea8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t240);
	f.sched.sub_102beb50((int)g_105e3e7c, 0x112);
	f.t248 = g_105e3a30;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t248);
	f.sched.sub_102beb50((int)g_105e3a08, 0x113);
	f.t250 = g_105e36c0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t250);
	f.sched.sub_102beb50((int)g_105e3694, 0x114);
	f.t258 = g_105e3490;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t258);
	f.sched.sub_102beb50((int)g_105e3470, 0x115);
	f.t260 = g_105e3100;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t260);
	f.sched.sub_102beb50((int)g_105e30d0, 0x116);
	f.t268 = g_105e2f00;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t268);
	f.sched.sub_102beb50((int)g_105e2ed4, 0x117);
	f.t270 = g_105e2d08;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t270);
	f.sched.sub_102beb50((int)g_105e2cd4, 0x118);
	f.t278 = g_105e2b30;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t278);
	f.sched.sub_102beb50((int)g_105e2b04, 0x119);
	f.t280 = g_105e2920;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t280);
	f.sched.sub_102beb50((int)g_105e28e4, 0x11a);
	f.t288 = g_105e26e0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t288);
	f.sched.sub_102beb50((int)g_105e26b8, 0x11b);
	f.t290 = g_105e24f0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t290);
	f.sched.sub_102beb50((int)g_105d2524, 0x11c);
	f.t298 = g_105e2308;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t298);
	f.sched.sub_102beb50((int)g_105d24f8, 0x11d);
	f.t2a0 = g_105e20d0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2a0);
	f.sched.sub_102beb50((int)g_105d24d0, 0x11e);
	f.t2a8 = g_105e1dc0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2a8);
	f.sched.sub_102beb50((int)g_105d24a8, 0x11f);
	f.t2b0 = g_105e1c20;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2b0);
	f.sched.sub_102beb50((int)g_105d2484, 0x120);
	f.t2b8 = g_105e1a50;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2b8);
	f.sched.sub_102beb50((int)g_105d245c, 0x121);
	f.t2c0 = g_105e1890;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2c0);
	f.sched.sub_102beb50((int)g_105d2434, 0x122);
	f.t2c8 = g_105e1620;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2c8);
	f.sched.sub_102beb50((int)g_105d240c, 0x123);
	f.t2d0 = g_105e13b0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2d0);
	f.sched.sub_102beb50((int)g_105d23e0, 0x124);
	f.t2d8 = g_105e1130;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2d8);
	f.sched.sub_102beb50((int)g_105d23bc, 0x125);
	f.t2e0 = g_105e0ed8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2e0);
	f.sched.sub_102beb50((int)g_105d2390, 0x126);
	f.t2e8 = g_105e0c58;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2e8);
	f.sched.sub_102beb50((int)g_105d2360, 0x127);
	f.t2f0 = g_105e09e0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2f0);
	f.sched.sub_102beb50((int)g_105d2338, 0x128);
	f.t2f8 = g_105e0778;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t2f8);
	f.sched.sub_102beb50((int)g_105d230c, 0x129);
	f.t300 = g_105e0560;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t300);
	f.sched.sub_102beb50((int)g_105d22d8, 0x12a);
	f.t308 = g_105e0388;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t308);
	f.sched.sub_102beb50((int)g_105e035c, 0x12b);
	f.t310 = g_105e01a0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t310);
	f.sched.sub_102beb50((int)g_105e0178, 0x12c);
	f.t318 = g_105dffc0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t318);
	f.sched.sub_102beb50((int)g_105d22b8, 0x12d);
	f.t320 = g_105dfe28;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t320);
	f.sched.sub_102beb50((int)g_105d22a0, 0x12e);
	f.t328 = g_105dfca0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t328);
	f.sched.sub_102beb50((int)g_105d2284, 0x12f);
	f.t330 = g_105df9d0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t330);
	f.sched.sub_102beb50((int)g_105d226c, 0x130);
	f.t338 = g_105df780;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t338);
	f.sched.sub_102beb50((int)g_105d2254, 0x131);
	f.t340 = g_105df4f8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t340);
	f.sched.sub_102beb50((int)g_105d2238, 0x132);
	f.t348 = g_105df230;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t348);
	f.sched.sub_102beb50((int)g_105df214, 0x133);
	f.t350 = g_105ded78;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t350);
	f.sched.sub_102beb50((int)g_105ded50, 0x134);
	f.t358 = g_105debc0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t358);
	f.sched.sub_102beb50((int)g_105deb98, 0x135);
	f.t360 = g_105de6e0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t360);
	f.sched.sub_102beb50((int)g_105de6ac, 0x136);
	f.t368 = g_105de278;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t368);
	f.sched.sub_102beb50((int)g_105de248, 0x137);
	f.t370 = g_105dde48;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t370);
	f.sched.sub_102beb50((int)g_105dde28, 0x138);
	f.t378 = g_105ddb10;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t378);
	f.sched.sub_102beb50((int)g_105ddaf0, 0x139);
	f.t380 = g_105dd860;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t380);
	f.sched.sub_102beb50((int)g_105dd844, 0x13a);
	f.t388 = g_105dd5a0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t388);
	f.sched.sub_102beb50((int)g_105dd580, 0x13b);
	f.t390 = g_105dd4f8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t390);
	f.sched.sub_102beb50((int)g_105dd4d0, 0x13c);
	f.t398 = g_105dd458;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t398);
	f.sched.sub_102beb50((int)g_105dd43c, 0x13d);
	f.t3a0 = g_105dd198;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3a0);
	f.sched.sub_102beb50((int)g_105dd178, 0x13e);
	f.t3a8 = g_105dd050;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3a8);
	f.sched.sub_102beb50((int)g_105dd030, 0x13f);
	f.t3b0 = g_105dcd98;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3b0);
	f.sched.sub_102beb50((int)g_105dcd6c, 0x140);
	f.t3b8 = g_105dcb18;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3b8);
	f.sched.sub_102beb50((int)g_105dcaf0, 0x141);
	f.t3c0 = g_105dc858;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3c0);
	f.sched.sub_102beb50((int)g_105dc830, 0x142);
	f.t3c8 = g_105dc580;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3c8);
	f.sched.sub_102beb50((int)g_105dc560, 0x143);
	f.t3d0 = g_105dc368;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3d0);
	f.sched.sub_102beb50((int)g_105dc33c, 0x144);
	f.t3d8 = g_105dc1b0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3d8);
	f.sched.sub_102beb50((int)g_105dc188, 0x145);
	f.t3e0 = g_105dc0b8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3e0);
	f.sched.sub_102beb50((int)g_105dc098, 0x146);
	f.t3e8 = g_105dbdd0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3e8);
	f.sched.sub_102beb50((int)g_105dbda4, 0x147);
	f.t3f0 = g_105dbb68;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3f0);
	f.sched.sub_102beb50((int)g_105dbb40, 0x148);
	f.t3f8 = g_105db9d8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t3f8);
	f.sched.sub_102beb50((int)g_105db9bc, 0x149);
	f.t400 = g_105db7f8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t400);
	f.sched.sub_102beb50((int)g_105db7d4, 0x14a);
	f.t408 = g_105db4f0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t408);
	f.sched.sub_102beb50((int)g_105db4d4, 0x14b);
	f.t410 = g_105db1f8;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t410);
	f.sched.sub_102beb50((int)g_105d221c, 0x14c);
	f.t418 = g_105db0f0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t418);
	f.sched.sub_102beb50((int)g_105db0cc, 0x14d);
	f.t420 = g_105daf60;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t420);
	f.sched.sub_102beb50((int)g_105daf34, 0x150);
	f.t428 = g_105dae70;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t428);
	f.sched.sub_102beb50((int)g_105dae48, 0x14e);
	f.t430 = g_105dad68;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t430);
	f.sched.sub_102beb50((int)g_105dad44, 0x14f);
	f.t438 = g_105dac50;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t438);
	f.sched.sub_102beb50((int)g_105d2204, 0x151);
	f.t440 = g_105dab08;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t440);
	f.sched.sub_102beb50((int)g_105daaf0, 0x152);
	f.t448 = g_105daa70;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t448);
	f.sched.sub_102beb50((int)g_105daa58, 0x153);
	f.t450 = g_105da9f0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t450);
	f.sched.sub_102beb50((int)g_105da9d8, 0x154);
	f.t458 = g_105da970;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t458);
	f.sched.sub_102beb50((int)g_105da958, 0x155);
	f.t460 = g_105da8f0;
	((CUtlVector4 *)&f.a)->sub_102c65d0((int *)&f.t460);

	((CTimerTriple *)sub_102bec90())->sub_102be9f0(sub_102beb10(), sub_102beb30());

	((CUnk102bec30 *)&f.sched)->sub_102bec30();
	((CUnk102bec30 *)&f.task)->sub_102bec30();
	((CUnk102bec30 *)&f.cond)->sub_102bec30();

	for (i = 0; i < ((CUnknown102c6760 *)&f.sched)->sub_102c6760(); i++) {
		if (!sub_102bec90()->sub_102bea80((const char *)((CUnknown102c6740 *)&f.sched)->sub_102c6740(i)->m_a, ((CUnknown102c6740 *)&f.sched)->sub_102c6740(i)->m_b, g_105d1060))
		{
			((CUnknown102becb0 *)&f.cond)->sub_102becb0();
			((CUnknown102becb0 *)&f.task)->sub_102becb0();
			((CUnknown102becb0 *)&f.sched)->sub_102becb0();
			((CUnknown102c6860 *)&f.b)->sub_102c6860();
			((CUnknown102c6510 *)&f.a)->sub_102c6510();
			return;
		}
	}
	for (i = 0; i < ((CUnknown102c6760 *)&f.task)->sub_102c6760(); i++) {
		if (!sub_102bec90()->sub_102beab0((const char *)((CUnknown102c6740 *)&f.task)->sub_102c6740(i)->m_a, ((CUnknown102c6740 *)&f.task)->sub_102c6740(i)->m_b, g_105d1060))
		{
			((CUnknown102becb0 *)&f.cond)->sub_102becb0();
			((CUnknown102becb0 *)&f.task)->sub_102becb0();
			((CUnknown102becb0 *)&f.sched)->sub_102becb0();
			((CUnknown102c6860 *)&f.b)->sub_102c6860();
			((CUnknown102c6510 *)&f.a)->sub_102c6510();
			return;
		}
	}
	for (i = 0; i < ((CUnknown102c6760 *)&f.cond)->sub_102c6760(); i++) {
		if (!sub_102bec90()->sub_102beae0((const char *)((CUnknown102c6740 *)&f.cond)->sub_102c6740(i)->m_a, ((CUnknown102c6740 *)&f.cond)->sub_102c6740(i)->m_b, g_105d1060))
		{
			((CUnknown102becb0 *)&f.cond)->sub_102becb0();
			((CUnknown102becb0 *)&f.task)->sub_102becb0();
			((CUnknown102becb0 *)&f.sched)->sub_102becb0();
			((CUnknown102c6860 *)&f.b)->sub_102c6860();
			((CUnknown102c6510 *)&f.a)->sub_102c6510();
			return;
		}
	}
	for (i = 0; i < ((CUnknown102c6900 *)&f.b)->sub_102c6900(); i++)
		(*(void (__cdecl **)())((CUnknown102c68e0 *)&f.b)->sub_102c68e0(i))();
	for (i = 0; i < ((CUnknown102c65b0 *)&f.a)->sub_102c65b0(); i++) {
		if (!g_105d1058)
			break;
		g_105d1058 = g_10936b68.sub_1030d850(g_105d748c, *((CUnknown102c6590 *)&f.a)->sub_102c6590(i), sub_102bec90());
	}
	((CUnknown102becb0 *)&f.cond)->sub_102becb0();
	((CUnknown102becb0 *)&f.task)->sub_102becb0();
	((CUnknown102becb0 *)&f.sched)->sub_102becb0();
	((CUnknown102c6860 *)&f.b)->sub_102c6860();
	((CUnknown102c6510 *)&f.a)->sub_102c6510();
}
// END FUNCTION

// FUNCTION: 0x102be9f0 size=0x63
struct CTimerArg { char m_d[8]; };
struct CTimerArgs { CTimerArg m_a, m_b, m_c; };
struct CTimerOwnerA { char m_d[0x18]; };
struct CTimerOwnerB { char m_d[0x18]; };
struct CTimerOwnerC { char m_d[0x18]; };
struct CTimerOwner : CTimerOwnerA, CTimerOwnerB, CTimerOwnerC {};
struct CTimerX {
    char m_d[0x18];
    char sub_102ea0e0(CTimerArg *pArg, void *pOwner);
};
struct CTimerTriple {
    CTimerX m_a, m_b, m_c;
    bool sub_102be9f0(CTimerArgs *pArgs, CTimerOwner *pOwner);
};
// TARGET: CTimerTriple::sub_102be9f0
bool CTimerTriple::sub_102be9f0(CTimerArgs *pArgs, CTimerOwner *pOwner)
{
    return m_a.sub_102ea0e0(&pArgs->m_a, (CTimerOwnerA *)pOwner)
        && m_b.sub_102ea0e0(&pArgs->m_b, (CTimerOwnerB *)pOwner)
        && m_c.sub_102ea0e0(&pArgs->m_c, (CTimerOwnerC *)pOwner);
}
// END FUNCTION

// FUNCTION: 0x102bea80 size=0x1c
namespace lifted {
extern char g_10594488;
struct C1000a948 { int sub_1000a948(int, int, int, int); };
}
struct CUnknown102bea80 { int sub_102bea80(int, int, int); };
int CUnknown102bea80::sub_102bea80(int a0, int a1, int a2)
{
    return ((lifted::C1000a948 *)this)->sub_1000a948(a0, a1, (int)&lifted::g_10594488, a2);
}
// END FUNCTION

// FUNCTION: 0x102beab0 size=0x1f
namespace lifted {
extern char g_10600e78;
struct C1000a948 { int sub_1000a948(int, int, int, int); };
}
struct CUnknown102beab0 { int sub_102beab0(int, int, int); };
int CUnknown102beab0::sub_102beab0(int a0, int a1, int a2)
{
    return ((lifted::C1000a948 *)(this + 0x18))->sub_1000a948(a0, a1, (int)&lifted::g_10600e78, a2);
}
// END FUNCTION

// FUNCTION: 0x102beae0 size=0x1f
namespace lifted {
extern char g_10577ca0;
struct C1000a948 { int sub_1000a948(int, int, int, int); };
}
struct CUnknown102beae0 { int sub_102beae0(int, int, int); };
int CUnknown102beae0::sub_102beae0(int a0, int a1, int a2)
{
    return ((lifted::C1000a948 *)(this + 0x30))->sub_1000a948(a0, a1, (int)&lifted::g_10577ca0, a2);
}
// END FUNCTION

// FUNCTION: 0x102beb10 size=0x6
namespace lifted {
extern char g_109203cc;
}
int sub_102beb10()
{
    return (int)&lifted::g_109203cc;
}
// END FUNCTION

// FUNCTION: 0x102beb30 size=0x6
namespace lifted {
extern char g_1090ff08;
}
int sub_102beb30()
{
    return (int)&lifted::g_1090ff08;
}
// END FUNCTION

// FUNCTION: 0x102beb50 size=0xac
#include "UtlVec8.h"
#include "utlvector.h"

void UtlVec8::sub_102beb50(int a, int b)
{
	UtlVec8Elem e;
	e.a = a;
	e.b = b;
	((CUtlVector<UtlVec8Elem> *)this)->AddToTail(e);
}
// END FUNCTION

// FUNCTION: 0x102bec30 size=0x1b
// TARGET: sub_102bec30
int __cdecl sub_102bec60(const void *a, const void *b);
extern "C" void __cdecl qsort(void *base, unsigned int num, unsigned int width, int (__cdecl *compare)(const void *, const void *));
struct CUnk102bec30 {
    void *m_p0;
    int m_pad4[2];
    int m_n0c;
    void sub_102bec30();
};
void CUnk102bec30::sub_102bec30()
{
    if (m_n0c != 0) {
        qsort(m_p0, m_n0c, 8, sub_102bec60);
    }
}
// END FUNCTION

// FUNCTION: 0x102bec60 size=0x11
int sub_102bec60(int *a, int *b)
{
    return a[1] - b[1];
}
// END FUNCTION

// FUNCTION: 0x102bec90 size=0x6
namespace lifted {
extern char g_10924248;
}
int sub_102bec90()
{
    return (int)&lifted::g_10924248;
}
// END FUNCTION

// FUNCTION: 0x102becb0 size=0x59
#include "CUnknown102becb0.h"

extern void (__cdecl *g_109f3624)(void *);

void CUnknown102becb0::sub_102becb0()
{
	void (__cdecl *pFree)(void *) = g_109f3624;
	m_size = 0;
	if (m_growSize != -1) {
		if (m_pMemory) {
			pFree(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
	m_pElements = m_pMemory;
	if (m_growSize != -1) {
		if (m_pMemory) {
			pFree(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x102bed30 size=0x42
#include "CAI_BaseNPCTroika.h"
#include "COutputEvent.h"
int CAI_BaseNPCTroika::vfunc142(int a)
{
	if (m_b63d8) {
		if (m_f5d98 != gpGlobals->curtime) {
			m_f5d98 = gpGlobals->curtime;
			((COutputEvent *)((char *)this + 0x5e0c))->sub_100cd660(this, this, 0.0f);
		}
		return 0;
	}
	return CAI_BaseNPC::vfunc142(a);
}
// END FUNCTION

// FUNCTION: 0x102beda0 size=0x217
#include "CAI_BaseNPCTroika.h"
#include "CTakeDamageInfo.h"
#include "CVDmg_t.h"
#include "CBaseCombatCharacter.h"
struct DmgCopy {
    int a, b, c, d;
    Vector v1;
    Vector v2;
    int e[8];
    char f, g, h;
};
struct DmgView {
    CVDmg_t *pVDmg;
    char pad[0x2c - 4];
    void *pInflictor;
    float flDamage;
};
struct SlotsView { virtual void s0(); virtual int *s1(); };
struct SlotsView2 { virtual void s0(); virtual void s1(); };
extern SlotsView2 *g_10924a6c;
extern void (*g_109f364c)(const char *, ...);
const char *__fastcall sub_10010488(void *self);
int __cdecl sub_1000ed72(const char *);
void __cdecl sub_1000202c();

inline void InterestDeath(CAI_BaseNPCTroika *p, CTakeDamageInfo *pInfo)
{
    int *pn = (int *)((char *)p + 0x6308);
    if (*pn == -1) {
        const char *name = sub_10010488(p->m_p62ec);
        *pn = sub_1000ed72(name);
        if (*pn == -1) {
            sub_1000202c();
            g_109f364c("Can not find interest death activity '%s' in the activity list.  Dying immediately.\n", name);
            p->vfunc144((int)pInfo);
            return;
        }
        *(const char **)((char *)p + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
        *(int *)((char *)p + 0x1b34) = 0x6121;
        p->sub_102ae750(0x104, 0);
    }
}

int CAI_BaseNPCTroika::vfunc390(CTakeDamageInfo *pInfo)
{
    DmgCopy *dst = (DmgCopy *)((char *)this + 0x660c);
    DmgCopy *src = (DmgCopy *)pInfo;
    DmgView *vi = (DmgView *)pInfo;
    dst->a = src->a; dst->b = src->b; dst->c = src->c; dst->d = src->d;
    dst->v1.sub_1003e4b0(src->v1);
    dst->v2.sub_1003e4b0(src->v2);
    dst->e[0] = src->e[0]; dst->e[1] = src->e[1]; dst->e[2] = src->e[2]; dst->e[3] = src->e[3];
    dst->e[4] = src->e[4]; dst->e[5] = src->e[5]; dst->e[6] = src->e[6]; dst->e[7] = src->e[7];
    dst->f = src->f; dst->g = src->g; dst->h = src->h;
    int ret = sub_10265ed0(pInfo);
    if (ret) {
        float dmg;
        if (vi->pVDmg) dmg = (float)vi->pVDmg->sub_101faa70();
        else dmg = vi->flDamage;
        if (dmg > 0.0f) {
            ((CBaseCombatCharacter *)this)->sub_101072b0(0);
            if (m_flags14b8 & 0x40000000) {
                vfunc144((int)pInfo);
                return ret;
            }
            if (m_p62ec && ((CAI_BaseNPCTroika *)m_p62ec)->sub_102daf50()) {
                InterestDeath(this, pInfo);
                return ret;
            }
        } else {
            g_10924a6c->s1();
            sub_10269a20(0x4c);
            if (vi->pInflictor)
                *(int *)((char *)this + 0x5b7c) = *((SlotsView *)vi->pInflictor)->s1();
            else
                *(int *)((char *)this + 0x5b7c) = -1;
            *(char *)((char *)this + 0x5b80) = 1;
        }
        if (vi->pInflictor)
            sub_1028e8b0((CBaseEntity *)vi->pInflictor, 0x40a00000);
        vfunc600(vfunc167());
    }
    return ret;
}
// END FUNCTION

// FUNCTION: 0x102bf050 size=0x1
void sub_102bf050()
{
}
// END FUNCTION

// FUNCTION: 0x102bf070 size=0x210
// TARGET: CAI_BaseNPCTroika::vfunc314
#include "CAI_BaseNPCTroika.h"
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "QAngle.h"

extern CGlobalEntityList *g_10566458;
float sub_1013d650(float flAngle);
void sub_10139970(const Vector &vec, QAngle &ang);

void CAI_BaseNPCTroika::vfunc314(float flDeltaTime)
{
	CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)(void *)this;
	CBaseEntity *pEnt = g_10566458->sub_100290c0((const unsigned int *)&m_h5ba8);
	float flRel, flAbs;

	if (!pEnt)
		pEnt = (CBaseEntity *)vfunc167();

	if (pEnt && *(int *)((char *)this + 0x5bb4) <= 0) {
		Vector vecEye = vfunc193();
		Vector vecPos = sub_10278650(vecEye, 0, 1);
		Vector vecDir = vecPos - vecEye;
		VectorNormalize(vecDir);

		pChar->m_bAimWeaponAtTarget = true;
		pChar->m_hWeaponAimTarget = pEnt;
		pChar->m_vWeaponAimOffset = vecPos - *(Vector *)((CAI_BaseNPC *)(void *)pEnt)->vfunc217();

		QAngle angDir;
		sub_10139970(vecDir, angDir);
		angDir.y += 7.5f;

		QAngle angAbs = *(QAngle *)vfunc219();
		flRel = sub_1013d650(angDir.y - angAbs.y);
		flAbs = sub_1013d650(angDir.x);

		if (-45.0f > flRel) flRel = -45.0f;
		else if (45.0f < flRel) flRel = 45.0f;
		if (-45.0f > flAbs) flAbs = -45.0f;
		else if (45.0f < flAbs) flAbs = 45.0f;
	} else {
		flRel = 0.0f;
		flAbs = 0.0f;
		pChar->m_bAimWeaponAtTarget = false;
	}
	pChar->m_flPoseValue[0] = flAbs;
	pChar->m_flPoseValue[1] = flRel;
	pChar->CBaseCombatCharacter::vfunc314(flDeltaTime);
}
// END FUNCTION

// FUNCTION: 0x102bf310 size=0x1e
#define P10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();

// Local view of the vtable: slot 345 is the virtual call; the other slots are placeholders.
struct CUnkTroika102bf310 {
	P10(p0) P10(p1) P10(p2) P10(p3) P10(p4) P10(p5) P10(p6) P10(p7) P10(p8) P10(p9)
	P10(p10) P10(p11) P10(p12) P10(p13) P10(p14) P10(p15) P10(p16) P10(p17) P10(p18) P10(p19)
	P10(p20) P10(p21) P10(p22) P10(p23) P10(p24) P10(p25) P10(p26) P10(p27) P10(p28) P10(p29)
	P10(p30) P10(p31) P10(p32) P10(p33)
	virtual void p340(); virtual void p341(); virtual void p342(); virtual void p343(); virtual void p344();
	virtual float vfunc345(const char *pszName, float flValue, int nFlags);
	char m_pad0004[0x63ec - 4];
	float m_63ec;
	void sub_102bf310(int a);
};

// TARGET: CUnkTroika102bf310::sub_102bf310
void CUnkTroika102bf310::sub_102bf310(int a)
{
	float f = m_63ec;
	vfunc345("move_yaw", f, 0);
}
// END FUNCTION

// FUNCTION: 0x102bf340 size=0x105
#include "CAI_BaseNPCTroika.h"
#include "CAI_CsActList.h"
#include "CTakeDamageInfo.h"
#include "CEHandleGet.h"

extern "C" __declspec(dllimport) int __cdecl PyRun_SimpleString(const char *command);

struct CCsActListV : CAI_CsActList
{
	void sub_102ca2a0(int nType, CBaseEntity *pSource, Vector vecPos, int nLevel, float flDuration, CBaseEntity *pOffender, CBaseEntity *pOwner, char bExternal);
};

extern CCsActListV *g_109253f8;
const char *sub_101d3730(const char *fmt, const char *name);

// TARGET: CAI_BaseNPCTroika::vfunc144
void CAI_BaseNPCTroika::vfunc144(int a)
{
	if (!((CTakeDamageInfo *)a)->sub_101c2af0()) {
		Vector vecPos = *(Vector *)vfunc217();
		vecPos.z += 16.0f;
		g_109253f8->sub_102ca2a0(1, (CBaseEntity *)this, vecPos, 3, 100000.0f, 0, (CBaseEntity *)this, 1);
	}
	sub_10265ad0(a);
	sub_10295ab0(5.0f);
	vfunc601((int)this);
	sub_102b53d0(0, "Leaving interesting place (Event_Killed)");
	if (sub_102c1170())
		sub_102c0bb0();
	const char *pszName = *(const char **)((char *)this + 0x26c);
	if (pszName)
		PyRun_SimpleString(sub_101d3730("MarkAsDead(\"%s\")", pszName));
	CGlobalEntityList_Ent *pEnt = EHandle_Get(*(unsigned int *)((char *)this + 0x628c));
	if (pEnt)
		((CAI_BaseNPC *)pEnt)->sub_101828b0((CBaseEntity *)this, 99999.9f);
}
// END FUNCTION

// FUNCTION: 0x102bf4a0 size=0x50
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatWeapon.h"
bool CAI_BaseNPCTroika::vfunc575()
{
	if (vfunc167() && (m_flags14bc & 0x400) == 0x400 && sub_1032e7b0()) {
		if (((CBaseCombatWeapon *)sub_1032e7b0())->vfunc360() & 0x6000)
			return sub_10278c60();
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102bf510 size=0x35
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc466
bool CAI_BaseNPCTroika::vfunc466()
{
	if (sub_1028a150() != 0 && *sub_1028a150() == 0xb9)
		return false;
	if (*(char *)((char *)this + 0x65fa))
		return true;
	return CAI_BaseNPC::vfunc466();
}
// END FUNCTION

// FUNCTION: 0x102bf560 size=0x4f
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
struct CHandleSrc { virtual void vfunc0(); virtual unsigned int *vfunc1(); };
CHandleSrc * __stdcall sub_102707d0(CBaseEntity *);
struct TroikaView { char pad[0x65c0]; unsigned int h65c0; float f65c4; char pad2[0x65f5 - 0x65c8]; char b65f5; };

void CAI_BaseNPCTroika::sub_102bf560(CBaseEntity *pEnt)
{
    TroikaView *p = (TroikaView *)this;
    if (!p->b65f5) {
        CHandleSrc *e = sub_102707d0(pEnt);
        if (e)
            p->h65c0 = *e->vfunc1();
        else
            p->h65c0 = 0xffffffff;
        p->f65c4 = gpGlobals->curtime + 5.0f;
    }
}
// END FUNCTION

// FUNCTION: 0x102bf5d0 size=0xc4
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"

struct CAI_BaseNPCTroikaUnit : CAI_BaseNPCTroika
{
	void sub_102bf5d0(CBaseEntity *pEnt);
	void sub_102bf560(CBaseEntity *pEnt);
};

// TARGET: CAI_BaseNPCTroikaUnit::sub_102bf5d0
void CAI_BaseNPCTroikaUnit::sub_102bf5d0(CBaseEntity *pEnt)
{
	if (pEnt == 0)
		return;
	switch (*(int *)((char *)this + 0x5cc0))
	{
	case 1:
	case 3:
	case 0xb:
		break;
	default:
		return;
	}
	if (*(int *)((char *)pEnt + 0x9c) == 0)
		return;
	if (vfunc404(pEnt) == 3)
		return;
	const Vector &a = *((CEntityVSlots *)pEnt)->slot217();
	const Vector &b = *((CEntityVSlots *)this)->slot217();
	float dx = b.x - a.x;
	float dy = b.y - a.y;
	float dz = b.z - a.z;
	if (dx * dx + dy * dy + dz * dz < 22500.0f)
	{
		sub_102bf560(pEnt);
	}
	else if (vfunc201(pEnt, 0x2804091, 0, 0) && vfunc363(pEnt))
	{
		sub_102bf560(pEnt);
	}
}
// END FUNCTION

// FUNCTION: 0x102bf6e0 size=0x68
#include "CAI_BaseNPCTroika.h"

#define NPCF(type, off) (*(type *)((char *)this + (off)))

// TARGET: CAI_BaseNPCTroika::vfunc418
float CAI_BaseNPCTroika::vfunc418(float a)
{
	switch ((int)a)
	{
	case -1000005:
		return NPCF(float, 0x6484);
	case -1000006:
		return NPCF(float, 0x6488);
	case -1000007:
		return NPCF(float, 0x648c);
	case -1000008:
		return 10.0f;
	default:
		return CAI_BaseNPC::vfunc418(a);
	}
}
// END FUNCTION

// FUNCTION: 0x102bf770 size=0x47
#include "CAI_BaseNPCTroika.h"
#include "CAI_Navigator.h"
void CAI_BaseNPCTroika::sub_102bf770()
{
    CAI_Navigator *pNav = (CAI_Navigator *)m_p5d34;
    int nActivity = *(int *)((char *)this + 0xff0);
    if (nActivity == pNav->sub_102ee3f0())
        sub_10272650(sub_1027a6c0());
    *((char *)this + 0x1a40) = 0;
    ((CAI_Navigator *)m_p5d34)->sub_102ee2a0();
    *(int *)((char *)this + 0x63ec) = 0;
}
// END FUNCTION

// FUNCTION: 0x102bf7e0 size=0x26
// TARGET: CUnknown102bf7e0::sub_102bf7e0
#include "CUnknown102bf7e0.h"
#include "CUnknown102ee2e0.h"

void CUnknown102bf7e0::sub_102bf7e0()
{
	if (m_p5d34->sub_10009c23())
		m_p5d34->sub_10003d19();
	m_b1a40 = 1;
}
// END FUNCTION

// FUNCTION: 0x102bf820 size=0x49b
#define inline __forceinline
#include "Vector.h"
#undef inline
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CBaseEntity.h"
#include "engineiface.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "CAI_MoveProbe.h"
#include "CCollisionProperty.h"
#include "CTraceFilterNav.h"
#include "CGameTrace.h"

struct V3i { int a, b, c; };
struct CMoveProbeOuter3
{
	char pad0000[0x368];
	int m_n368;
};

extern float g_104454c4;
extern float g_1049a1f4;
void sub_1026e940(const float *start, const float *end, const float *mins, const float *maxs, unsigned int mask, void *pFilter, CGameTrace *pTrace, char bFlag);

struct CMoveProbeView3 : CAI_MoveProbe
{
	void TraceHull(const Vector &vecStart, const Vector &vecEnd, const float *hullMin, const float *hullMax, unsigned int mask, CGameTrace *pResult)
	{
		g_109f3648->EnterScope("CAI_MoveProbe_TraceHull", 0, "Unaccounted", false);
		CTraceFilterNav filter;
		filter.sub_102e30d0((int)m_pOuter, ((CMoveProbeOuter3 *)m_pOuter)->m_n368);
		sub_1026e940(&vecStart.x, &vecEnd.x, hullMin, hullMax, mask, &filter, pResult, 1);
		g_109f3648->ExitScopeCall();
	}
};

struct CEntListGroundView : CGlobalEntityList
{
	CEntityVSlots *GroundNPC(unsigned int *h)
	{
		if (sub_100290c0(h))
			return *(CEntityVSlots **)((char *)sub_100290c0(h) + 0x9c);
		return 0;
	}
};

struct CStandOnHeadView : CAI_BaseNPCTroika
{
	char m_pad65c0[0x65fc - 0x65c0];
	float m_f65fc;
	CCollisionProperty *coll() { return (CCollisionProperty *)((char *)this + 0x270); }
};

void CAI_BaseNPCTroika::sub_102bf820(float flFrame)
{
	CStandOnHeadView *t = (CStandOnHeadView *)this;
	ScopeTrace trace("CAI_BaseNPCTroika::ResolveStandingOnHead", this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc);
	CEntityVSlots *pOther = ((CEntListGroundView *)g_10566458)->GroundNPC((unsigned int *)((char *)this + 0x384));
	if (pOther)
	{
		Vector origin;
		{ const Vector *pv = ((CEntityVSlots *)this)->slot217(); typedef volatile const int VI; int y = ((VI *)pv)[1]; int x = ((VI *)pv)[0]; int z = ((VI *)pv)[2]; int *o = (int *)&origin; o[1] = y; if (x > 7) { o[0] = x; o[2] = z; } else { o[0] = x; o[2] = z; } }
		Vector other = *pOther->slot217();
		Vector dir = origin - other;
		dir.z = 0;
		if (dir.x == g_104454c4 && dir.y == g_104454c4)
		{
			switch (enginerandom->vfunc2(0, 3))
			{
			case 1: dir.x = -0.707f; dir.y = 0.707f; break;
			case 2: dir.x = 0.707f; dir.y = -0.707f; break;
			case 3: dir.x = -0.707f; dir.y = -0.707f; break;
			default: dir.x = 0.707f; dir.y = 0.707f; break;
			}
		}
		else
		{
			VectorNormalize(dir);
			dir.x += enginerandom->vfunc1(-0.1f, 0.1f);
			dir.y += enginerandom->vfunc1(-0.1f, 0.1f);
			VectorNormalize(dir);
		}
		float flSpeed = flFrame + t->m_f65fc;
		t->m_f65fc = (5.0f < flSpeed) ? 5.0f : flSpeed;
		origin.z += g_1049a1f4;
		dir = dir * t->m_f65fc * 40.0f * flFrame;
		Vector end = origin + dir;
		CGameTrace tr;
		{
			const float *pMins = (const float *)t->coll()->vfunc1();
			CMoveProbeView3 *pProbe = (CMoveProbeView3 *)t->m_pMoveProbe5d40;
			pProbe->TraceHull(origin, end, pMins, (const float *)t->coll()->vfunc2(), 0x202400b, &tr);
		}
		if (tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid)
		{
			end = origin - dir;
			const float *pMins = (const float *)t->coll()->vfunc1();
			CMoveProbeView3 *pProbe = (CMoveProbeView3 *)t->m_pMoveProbe5d40;
			pProbe->TraceHull(origin, end, pMins, (const float *)t->coll()->vfunc2(), 0x202400b, &tr);
		}
		if (!(tr.m_fraction < 1.0f || tr.m_allsolid || tr.m_startsolid))
		{
			end.z -= 0.1f;
			((CEntityVSlots *)this)->slot216(&end);
			((CBaseEntity *)this)->sub_100b3b00();
			return;
		}
	}
	t->m_f65fc = 0;
}
// END FUNCTION

// FUNCTION: 0x102bfdf0 size=0x3
void __stdcall sub_102bfdf0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x102bfe10 size=0xca
#include "CAI_BaseNPCTroika.h"

extern "C" __declspec(dllimport) void DevMsg(int nLevel, const char *pszFormat, ...);

struct CTroikaProbe_102bfe10	// the object at +0x5d40 of the NPC
{
	bool sub_102e7880(const Vector *pPos, unsigned int fMask, float flUp, float flDown, Vector *pGround, int *pFlags);	// stub 0x10005d44
};

void CAI_BaseNPCTroika::sub_102bfe10(int unused)
{
	bool bFloating = false;
	Vector vecGround;
	Vector vecOrigin = *(const Vector *)vfunc217();
	int nFlags = 0;
	CTroikaProbe_102bfe10 *pProbe = *(CTroikaProbe_102bfe10 **)((char *)this + 0x5d40);
	if (!pProbe->sub_102e7880(&vecOrigin, 0x202400b, 32.0f, -1024.0f, &vecGround, &nFlags)) {
		DevMsg(2, "I'm floating....  Me llamo %s\n", sub_1000b5cd());
		bFloating = true;
	}
	float flDiff = vecOrigin.z - vecGround.z;
	if (flDiff < -1.0f) {
		DevMsg(2, "%s got below the ground by %f units.\n", sub_1000b5cd(), (double)flDiff);
		sub_1027efb0();
		DevMsg(2, "\n\n\n\n");
	} else if (bFloating) {
		sub_1027efb0();
		DevMsg(2, "\n\n\n\n");
	}
}
// END FUNCTION

// FUNCTION: 0x102bff20 size=0xb6
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CUnknown1070b244.h"

struct TroikaView102bff20 {
	char pad0[0x5d6c];
	float m_f5d6c;
	char pad1[0x6264 - 0x5d70];
	float m_f6264;
	char pad2[0x64d8 - 0x6268];
	float m_f64d8;
	float m_f64dc;
	char pad3[0x6570 - 0x64e0];
	float m_f6570;
};
extern CUnknown1070b244 *g_1070b244;

void CAI_BaseNPCTroika::vfunc333(float flInterval)
{
	TroikaView102bff20 *p = (TroikaView102bff20 *)this;
	if (512.0f > p->m_f6264) {
		p->m_f6570 -= flInterval;
		if (p->m_f6570 < 0.0f) {
			vfunc276();
			p->m_f6570 = g_1070b244->vfunc1(p->m_f64d8, p->m_f64dc);
		}
	}
	if (EHandle_Get(m_hfe8) != 0)
		p->m_f5d6c = gpGlobals->curtime + 2.0f;
	sub_102c0010(flInterval);
	sub_1026b810(flInterval);
}
// END FUNCTION

// FUNCTION: 0x102c0010 size=0x195
#include "CAI_BaseNPCTroika.h"
#include "CUnknown100ecee0.h"

struct CTroikaGlobals {
	float m_f00, m_f04, m_f08;
	float m_curtime;	// 0x0c
};

struct CTroikaTableView {
	char m_pad0000[0xe3c];
	float m_fe3c;
	char m_pade40[4];
	float m_vecE44[3];
	float m_vecE50[3];
	char m_pade5c[0x5b94 - 0xe5c];
	int m_n5b94;
	char m_pad5b98[0x64d4 - 0x5b98];
	int m_n64d4;
	char m_pad64d8[0x6578 - 0x64d8];
	int m_n6578;
	float m_f657c;
	float m_f6580;
	float m_f6584;
	float m_f6588;
};

extern CUnknown100ecee0 g_10924980;
extern CTroikaGlobals *g_1070b228;
extern float (__cdecl *g_109f385c)(float flMin, float flMax);

void CAI_BaseNPCTroika::sub_102c0010(int unused)
{
	CTroikaTableView *v = (CTroikaTableView *)this;
	bool bSame = true;
	for (int i = 0; i < 3; i++) {
		if ((int)v->m_vecE44[i] != (int)v->m_vecE50[i])
			bSame = false;
	}
	if (bSame) {
		if (g_1070b228->m_curtime > v->m_f657c) {
			if (g_1070b228->m_curtime > v->m_f6580) {
				float flMin, flMax;
				g_10924980.sub_100ece60(v->m_n64d4, &flMin, &flMax);
				v->m_fe3c = g_10924980.sub_100ecdf0(v->m_n64d4, 1);
				v->m_n5b94 = g_10924980.sub_100ecc60(v->m_n64d4, v->m_n6578);
				v->m_f6580 = g_109f385c(flMin, flMax) + g_1070b228->m_curtime;
				v->m_n6578++;
				if (v->m_n5b94 == -1) {
					v->m_n6578 = 0;
					v->m_f6580 = 0;
					v->m_n5b94 = g_10924980.sub_100eccf0(v->m_n64d4);
					*(int *)&v->m_f657c = 0x7f7fffff;
				}
			}
		} else {
			v->m_fe3c = g_10924980.sub_100ecdf0(v->m_n64d4, 0);
			if (*(int *)&v->m_f657c == 0x7f7fffff)
				v->m_f657c = g_109f385c(v->m_f6584, v->m_f6588) + g_1070b228->m_curtime;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102c0220 size=0x39
#include "CAI_BaseNPCTroika.h"
#include "Ent.h"

// TARGET: CAI_BaseNPCTroika::vfunc35
int CAI_BaseNPCTroika::vfunc35(int a)
{
	if (!sub_102c1170()) {
		if (vfunc295((CBaseCombatCharacter *)a)) {
			return 14 + (((Ent *)this)->sub_10336920() ? 1 : 0);
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102c0270 size=0xbf
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CCineNPC.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CAI_Sub5f44
{
    void sub_10010794(int a, CAI_BaseNPCTroika *pNPC, int b);
};

static inline CBaseEntity *LookupHandle(const unsigned int *pHandle)
{
    if (*pHandle == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[*pHandle & 0x1fff];
    if (pSlot->m_Serial == (int)(*pHandle >> 13))
        return (CBaseEntity *)pSlot->m_pEntity;
    return 0;
}

static inline bool FlagBit3(const unsigned int *pFlags)
{
    return ((*pFlags >> 3) & 1) != 0;
}

void CAI_BaseNPCTroika::sub_102c0270(int a)
{
    m_b6495 = 0;
    m_b1590 = 1;
    m_n64bc++;
    sub_1000e4d5();
    sub_10107050(a);
    if (!FlagBit3(&m_flags204))
        ((CEntityVSlots *)this)->slot306(a, 0);
    if (LookupHandle(&m_h5d74))
        ((CCineNPC *)LookupHandle(&m_h5d74))->sub_101a8c30();
    ((CAI_Sub5f44 *)((char *)this + 0x5f44))->sub_10010794(a, this, 0);
}
// END FUNCTION

// FUNCTION: 0x102c0360 size=0x90
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"

struct CNamedDebugFlag
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4(int a);
};

struct CDebugStatsOwner
{
	virtual void v0();
	virtual char v1();
	char m_pad0004[0x2c - 4];
	int m_n2c;
};

struct CScriptSub5f5c
{
	void sub_10010794(CBaseEntity *pEnt, CAI_BaseNPCTroika *pNPC, int a);
};

extern CGlobalEntityList *g_10566458;
extern CDebugStatsOwner *g_109241fc;
CNamedDebugFlag *sub_10245660(const char *pszName);
void sub_10119900(void *p);

// TARGET: CAI_BaseNPCTroika::sub_102c0360
void CAI_BaseNPCTroika::sub_102c0360()
{
	unsigned int h = m_hfe8;
	if (h != (unsigned int)-1) {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13)) {
			CBaseEntity *pEnt = (CBaseEntity *)pSlot->m_pEntity;
			if (pEnt) {
				m_b1590 = 0;
				((CScriptSub5f5c *)((char *)this + 0x5f5c))->sub_10010794(pEnt, this, 0);
				sub_10107050(0);
			}
		}
	}
	if (!g_109241fc->v1() && g_109241fc->m_n2c) {
		CNamedDebugFlag *p = sub_10245660("entity_debug_stats");
		if (p)
			p->v4(0);
		sub_10119900(0);
	}
}
// END FUNCTION

// FUNCTION: 0x102c0420 size=0x36
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"

// TARGET: CAI_BaseNPCTroika::vfunc86
char CAI_BaseNPCTroika::vfunc86(int a, int b, int c, int d, int e)
{
	if (sub_102c1170())
		return 1;
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc86(a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x102c0470 size=0x28
#include "Tier1.h"

struct CUnknown102c0470 {
    char pad_0000[0x64ec];
    char m_szName64ec[0x60];
    unsigned char m_b654c;
    void sub_102c0470(const char *pszName, unsigned char bValue);
};

void CUnknown102c0470::sub_102c0470(const char *pszName, unsigned char bValue)
{
    g_109f3890(m_szName64ec, pszName, 0x60);
    m_b654c = bValue;
}
// END FUNCTION

// FUNCTION: 0x102c04b0 size=0x4e
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
// TARGET: CAI_BaseNPCTroika::vfunc612
int CAI_BaseNPCTroika::vfunc612()
{
	int r = 0x80;
	CGlobalEntityList_Ent *pEnt = EHandle_Get(m_hfe8);
	if (pEnt) {
		r = 0x280;
		if (!m_b654c)
			r = 0x680;
	}
	return r;
}
// END FUNCTION

// FUNCTION: 0x102c0520 size=0x454
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "ehandle.h"
#include "engineserver.h"
#include "engineiface.h"
#include "globalvars.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CDialog.h"
#define A(n) virtual void a##n();
#define A10(p) A(p##0) A(p##1) A(p##2) A(p##3) A(p##4) A(p##5) A(p##6) A(p##7) A(p##8) A(p##9)
#define A100(p) A10(p##0) A10(p##1) A10(p##2) A10(p##3) A10(p##4) A10(p##5) A10(p##6) A10(p##7) A10(p##8) A10(p##9)
struct CSlotsAll { A100(0) A100(1) A10(20) A(210) A(211) A(212) A(213) A(214) A(215) A(216) virtual const float *s217(); virtual void a218(); virtual const float *s219();
	A(220) A(221) virtual Vector s222(); A(223) A(224) A(225) A(226) A(227) A(228) A(229) A10(23) A(240) A(241) virtual void s242();
	A(243) A(244) A(245) A(246) A(247) A(248) A(249) A10(25) A10(26) A(270) A(271) A(272) A(273) A(274) virtual void s275(); A(276) A(277) A(278) A(279)
	A10(28) A10(29) A100(3) A100(4) A100(5) A10(60) A(610) A(611) virtual int s612(); A(613) virtual void s614(); };
struct CNpcView { char m_pad0[0x26c]; const char *m_name26c; char m_pad270[0x2e0 - 0x270]; int m_pEdict2e0;
	int edict() { return m_pEdict2e0; }
	int entindex() { return engine->vfunc35(edict()); } };
struct CDbgStatsOverlay { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(int n); };
struct CDbgStats { virtual void v0(); virtual bool v1(); char m_pad[0x28]; int m_n2c; };
struct CSceneView { char m_pad0[0x450]; int m_n450; const char *m_n454; const char *m_n458; char m_pad45c[0x57e - 0x45c]; char m_b57e; };
struct CUnknown10178120 { CDialog *sub_10178120(); };
struct CPartnerView { char m_pad0[0xa8]; CUnknown10178120 *m_pa8; };
extern CDbgStats *g_109241fc;
CDbgStatsOverlay *sub_10245660(const char *name);
void sub_10119900(void *p);
void sub_101cd940(void *p);
CBaseEntity *sub_100a9ab0(const char *name, const float *origin, const float *angles, void *owner);
int *sub_1042bff0(int *buf, const char *psz);
void sub_101d1280(void *p);
extern "C" char *__cdecl strstr(const char *, const char *);
__declspec(dllimport) int Q_strnicmp(const char *a, const char *b, int n);
__declspec(dllimport) int Q_snprintf(char *buf, int n, const char *fmt, ...);
__declspec(dllimport) char *Q_strncpy(char *dst, const char *src, int n);
inline CBaseEntity *LookupScene(const EHANDLE &h) { return (CBaseEntity *)g_10566458->sub_100290c0((const unsigned int *)&h); }
// TARGET: CAI_BaseNPCTroika::sub_102c0520
// the header still declares (const char *, int, int) and `unsigned int m_h6554`: the game's are (psz, float flDelay,
// bool bFlag) and an EHANDLE, read through these macros
#define flDelay (*(float *)&a)
#define bFlag (*(bool *)&b)
#define hScene (*(EHANDLE *)&m_h6554)
void CAI_BaseNPCTroika::sub_102c0520(const char *psz, int a, int b)
{
	CNpcView *pThis = (CNpcView *)this;
	CSlotsAll *pSlots = (CSlotsAll *)this;
	if (!g_109241fc->v1() && g_109241fc->m_n2c) {
		CDbgStatsOverlay *pOverlay = sub_10245660("entity_debug_stats");
		if (pOverlay)
			pOverlay->v4(1);
		sub_10119900(this);
	}
	if (strstr(psz, ".vcd")) {
		pSlots->s275();
		((CBaseCombatCharacter *)this)->sub_101063a0();
		sub_101cd940(LookupScene(hScene));
		hScene = sub_100a9ab0("scripted_scene", pSlots->s217(), pSlots->s219(), this);
		const char *pName = pThis->m_name26c;
		((CSceneView *)LookupScene(hScene))->m_n458 = pName;
		int tmp;
		((CSceneView *)hScene.Get())->m_n450 = *sub_1042bff0(&tmp, psz);
		const char *pName2 = pThis->m_name26c;
		((CSceneView *)hScene.Get())->m_n454 = pName2;
		if (((EHANDLE *)&m_hfe8)->Get())
			((CSceneView *)hScene.Get())->m_b57e = 0;
		sub_101d1280(hScene.Get());
		((CSlotsAll *)hScene.Get())->s242();
	} else {
		enginesound->vfunc6(pThis->entindex(), 5);
		char buf[0x60];
		buf[0] = 0;
		if (!Q_strnicmp("sound/", psz, 6))
			Q_strncpy(buf, psz + 6, 0x60);
		else if (!Q_strnicmp("*sound/", psz, 7))
			Q_snprintf(buf, 0x60, "*%s", psz + 7);
		else
			Q_strncpy(buf, psz, 0x60);
		int nFlags = pSlots->s612();
		soundlevel_t level = bFlag ? SNDLVL_NONE : (soundlevel_t)80;
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this, level);
		int entindex = pThis->entindex();
		enginesound->vfunc2(&filter, entindex, 5, buf, m_f6550, level, nFlags, 100, (const float *)&pSlots->s222(), 0, 1, 0);
		CPartnerView *pPartner = (CPartnerView *)((EHANDLE *)&m_hfe8)->Get();
		if (pPartner && pPartner->m_pa8)
			pPartner->m_pa8->sub_10178120()->sub_100e0a40(buf);
		m_f64cc = flDelay + gpGlobals->curtime;
		m_b64c0 = 1;
	}
	pSlots->s614();
}
#undef flDelay
#undef bFlag
#undef hScene
// END FUNCTION

// FUNCTION: 0x102c0aa0 size=0x89
#include "CEHandleGet.h"
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
struct SceneView498 { char pad[0x498]; char b; };

char CAI_BaseNPCTroika::sub_102c0aa0()
{
	if (EHandle_Get(m_h6554) != 0) {
		SceneView498 *p = (SceneView498 *)EHandle_Get(m_h6554);
		if (p->b)
			return 1;
	}
	if (m_f64cc > gpGlobals->curtime)
		return 1;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102c0b60 size=0x3c
#include "CEHandleGet.h"

bool __fastcall sub_102c0b60(void *self)
{
    return EHandle_Get(*(const unsigned int *)((char *)self + 0xfe8)) != 0;
}
// END FUNCTION

// FUNCTION: 0x102c0bb0 size=0xb8
#include "CAI_BaseNPCTroika.h"


struct CGlobalNpcHook	// the object at 0x1070b248
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void slot6(int index, int value);
};

struct CGlobalVarsView
{
	int m_n00;
	int m_n04;
	int m_n08;
	int m_nCurtime;
};

extern CGlobalNpcHook *g_1070b248;
extern CGlobalVarsView *g_1070b228;

#define TV1(n) virtual void tv##n();
#define TV10(p) TV1(p##0) TV1(p##1) TV1(p##2) TV1(p##3) TV1(p##4) TV1(p##5) TV1(p##6) TV1(p##7) TV1(p##8) TV1(p##9)
#define TV100(p) TV10(p##0) TV10(p##1) TV10(p##2) TV10(p##3) TV10(p##4) TV10(p##5) TV10(p##6) TV10(p##7) TV10(p##8) TV10(p##9)

struct CTroikaLookView
{
	TV100(a) TV100(b) TV10(c0) TV10(c1) TV10(c2) TV10(c3) TV10(c4) TV10(c5) TV10(c6) TV1(c70) TV1(c71) TV1(c72) TV1(c73) TV1(c74)
	virtual void slot275();
	TV100(d) TV100(e) TV100(f) TV10(g0) TV10(g1) TV10(g2) TV1(g30) TV1(g31) TV1(g32) TV1(g33) TV1(g34)
	virtual int slot611();
	TV1(h0)
	virtual bool slot613();

	char m_pad0004[0x174 - 4];
	int m_nTime174;
	char m_pad0178[0x2e0 - 0x178];
	int m_pEdict;
	char m_pad02e4[0x6f0 - 0x2e4];
	int m_nSequence;
	char m_pad06f4[4];
	int m_n6f8;
	char m_pad06fc[0xfec - 0x6fc];
	int m_nState;
	int m_nIdealState;
	char m_pad0ff4[0x5ccc - 0xff4];
	int m_n5ccc;
	char m_pad5cd0[0x6080 - 0x5cd0];
	char m_b6080;

	void sub_10090950();
	void sub_101063a0();
	void sub_102c0ca0();
};

void CAI_BaseNPCTroika::sub_102c0bb0()
{
	CTroikaLookView *p = (CTroikaLookView *)this;
	int nEdict = p->m_pEdict;
	g_1070b248->slot6(engine->vfunc35(nEdict), 5);
	p->slot275();
	p->sub_101063a0();
	p->sub_102c0ca0();
	if (p->slot613() && p->m_nState != 0xf1) {
		int nSeq = p->slot611();
		if (nSeq > -1) {
			p->m_nIdealState = 0xf1;
			p->m_n5ccc = nSeq;
			if (!p->m_b6080) {
				p->m_nSequence = nSeq;
				p->m_n6f8 = 0;
				p->m_nTime174 = g_1070b228->m_nCurtime;
				p->m_nState = 0xf1;
				p->sub_10090950();
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102c0ca0 size=0x23d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CDialog.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "globalvars.h"
#include "CEHandleGet.h"

CBasePlayer *sub_101cd9e0(int a);
void sub_101cd940(CBaseEntity *pEnt);
void sub_101c0b10();

// TARGET: CAI_BaseNPCTroika::sub_102c0ca0
void CAI_BaseNPCTroika::sub_102c0ca0()
{
	ScopeTrace t("CAI_BaseNPCTroika::FinishTalking", this ? (((CBaseEntity *)this)->m_name26c ? ((CBaseEntity *)this)->m_name26c : g_106b8540) : g_105387dc);
	char bTalking = m_b64c0;
	if (EHandle_Get(m_h6554)) {
		CBaseEntity *pEnt = (CBaseEntity *)EHandle_Get(m_h6554);
		if (*((char *)pEnt + 0x498)) {
			((CEntityVSlots *)EHandle_Get(m_h6554))->slot245();
			((CBaseEntity *)EHandle_Get(m_h6554))->sub_100ac4e0((int)sub_101c0b10, 0, 0);
			((CBaseEntity *)EHandle_Get(m_h6554))->m_flNextThink = gpGlobals->curtime + 0.1;
		} else {
			sub_101cd940((CBaseEntity *)EHandle_Get(m_h6554));
		}
	}
	m_h6554 = 0xffffffff;
	m_b64ec = 0;
	m_b64c0 = 0;
	m_f64cc = gpGlobals->curtime;
	((CBaseEntity *)this)->sub_100a8ef0();
	if (bTalking) {
		CBasePlayer *p = sub_101cd9e0(1);
		if (p)
			((CDialog *)p->sub_10178120())->sub_100e4780();
	} else {
		CBasePlayer *p = sub_101cd9e0(1);
		if (p)
			((CDialog *)p->sub_10178120())->sub_100e5c70();
	}
}
// END FUNCTION

// FUNCTION: 0x102c0f70 size=0x183
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"
#include "CUnknown100ecee0.h"
#include "CUnknown100ecd30.h"

__declspec(dllimport) void DevMsg(const char *pszFormat, ...);

extern CUnknown100ecee0 g_10924980;

struct CGlobalVarsView
{
	char m_pad0000[0xc];
	int m_curtimeBits;
};
extern CGlobalVarsView *g_1070b228;

struct CTroikaSlots : CAI_BaseNPCTroika
{
	virtual void s610();
	virtual int vfunc611();
};

void CAI_BaseNPCTroika::sub_102c0f70(const char *pszName, int bFlag)
{
	int nOld = *(int *)((char *)this + 0x64d4);
	*(int *)((char *)this + 0x64d4) = g_10924980.sub_100ec530(pszName, bFlag);
	while (*(int *)((char *)this + 0x64d4) == -1)
	{
		DevMsg("Could not find disposition for %s  ( %s at level %d )!!\n", sub_1000b5cd(), pszName, bFlag);
		nOld = *(int *)((char *)this + 0x64d4);
		bFlag = 1;
		pszName = "Neutral";
		*(int *)((char *)this + 0x64d4) = g_10924980.sub_100ec530(pszName, bFlag);
	}
	int nIndex = *(int *)((char *)this + 0x64d4);
	((CUnknown100ecd30 *)&g_10924980)->sub_100ecd30(nIndex, (int *)((char *)this + 0x64d8), (int *)((char *)this + 0x64d8), (int *)((char *)this + 0x6584), (int *)((char *)this + 0x6588));
	*(int *)((char *)this + 0x5b94) = g_10924980.sub_100eccf0(*(int *)((char *)this + 0x64d4));
	*(float *)((char *)this + 0xe3c) = g_10924980.sub_100ecdf0(*(int *)((char *)this + 0x64d4), 0);
	*(int *)((char *)this + 0x10b4) = g_10924980.sub_100ec360(*(int *)((char *)this + 0x64d4), this);
	*(int *)((char *)this + 0x64d0) = g_10924980.sub_100ec2e0(*(int *)((char *)this + 0x64d4), this);
	*(float *)((char *)this + 0x10b8) = g_10924980.sub_100ec3d0(*(int *)((char *)this + 0x64d4));
	if (*(int *)((char *)this + 0x64d4) != nOld)
	{
		int nSequence;
		if (nOld != -1)
			nSequence = g_10924980.sub_100ed150((CTableNpc_t *)this, nOld, *(int *)((char *)this + 0x64d4));
		else
			nSequence = ((CTroikaSlots *)this)->vfunc611();
		if (nSequence > -1)
		{
			*(int *)((char *)this + 0xff0) = 0xf1;
			*(int *)((char *)this + 0x5ccc) = nSequence;
			if (!*(char *)((char *)this + 0x6080))
			{
				*(int *)((char *)this + 0x6f0) = nSequence;
				*(int *)((char *)this + 0x6f8) = 0;
				int nNow = g_1070b228->m_curtimeBits;
				*(int *)((char *)this + 0xfec) = 0xf1;
				*(int *)((char *)this + 0x174) = nNow;
				((CBaseAnimating *)this)->sub_10090950();
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102c1170 size=0x85
#include "CAI_BaseNPCTroika.h"

struct SEnt { int pad; };
struct SHandleEntry { SEnt *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

char CAI_BaseNPCTroika::sub_102c1170()
{
    if (*((char *)this + 0x64c0))
        return 1;
    if (*((char *)this + 0x64ec))
        return 1;
    unsigned h = *(unsigned *)((char *)this + 0xfe8);
    if (h != 0xffffffff) {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        if (he->serial == (h >> 13) && he->p != 0)
            return 1;
    }
    h = *(unsigned *)((char *)this + 0x6554);
    if (h != 0xffffffff) {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        if (he->serial == (h >> 13) && he->p != 0)
            return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102c1230 size=0x46
#include "CAI_BaseNPCTroika.h"
#include "CUnknown100ecee0.h"
extern int (__cdecl *g_109f3868)(int lo, int hi);
extern CUnknown100ecee0 g_10924980;

int CAI_BaseNPCTroika::sub_102c1230()
{
	int (__cdecl *pfnRandom)(int, int) = g_109f3868;
	int nNew;
	do
	{
		nNew = pfnRandom(0, 2);
	} while (nNew == m_n64c8);
	int r = g_10924980.sub_100ecfc0((CTableNpc_t *)this, m_n64c8, nNew);
	m_n64c8 = nNew;
	m_f64e4 = gpGlobals->curtime;
	return r;
}
// END FUNCTION

// FUNCTION: 0x102c12a0 size=0x10b
#include "CAI_BaseNPCTroika.h"
#include "CUnknown100ecee0.h"

extern CUnknown100ecee0 g_10924980;
extern int (*g_109f3868)(int, int);
struct TroikaView { char pad[0x64e4]; float m_f64e4; };

#define TFIELD(type, off) (*(type *)((char *)this + (off)))

int CAI_BaseNPCTroika::vfunc611()
{
    float fA;
    int iB, iC;
    int *tbl = (int *)g_10924980.sub_100ecee0((CTableNpc_t *)this, (int *)&fA, &iB, &iC);
    int result;
    if (TFIELD(char, 0x64c0) != 0) {
        result = tbl[TFIELD(int, 0x64c8) + 2];
        TFIELD(char, 0x64e0) = 0;
        TFIELD(char, 0x64e1) = 0;
    } else if (TFIELD(char, 0x64e0) == 0 && TFIELD(char, 0x64e1) == 0) {
        int idx = TFIELD(int, 0x64c8);
        int (*pfnRandom)(int, int) = g_109f3868;
        if (tbl[idx + 2] != tbl[idx + 5] && iC > pfnRandom(1, 100)) {
            result = tbl[TFIELD(int, 0x64c8) + 5];
            TFIELD(char, 0x64e0) = 1;
            TFIELD(char, 0x64e1) = 0;
        } else if (gpGlobals->curtime - ((TroikaView *)this)->m_f64e4 > fA && iB > pfnRandom(1, 100)) {
            result = sub_102c1230();
            TFIELD(char, 0x64e0) = 0;
            TFIELD(char, 0x64e1) = 1;
        } else {
            result = tbl[TFIELD(int, 0x64c8) + 2];
            TFIELD(char, 0x64e0) = 0;
            TFIELD(char, 0x64e1) = 0;
        }
    } else {
        result = tbl[TFIELD(int, 0x64c8) + 2];
        TFIELD(char, 0x64e0) = 0;
        TFIELD(char, 0x64e1) = 0;
    }
    if (result == -1)
        result = TFIELD(int, 0x6f0);
    return result;
}
// END FUNCTION

// FUNCTION: 0x102c1400 size=0x1fa
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CDialog.h"
#include "CBasePlayer.h"
#include "CNPCSlots614.h"
#include "globalvars.h"
struct SceneView498 { char pad[0x498]; char b; };
struct EntA8View { char pad[0xa8]; CBasePlayer *p; };
void sub_101cd940(void *pEnt);
__declspec(dllimport) void __cdecl DevMsg(const char *, ...);

namespace block_102c1400 {
struct CTroikaUnit : CAI_BaseNPCTroika { char sub_102c0aa0(); };
char CTroikaUnit::sub_102c0aa0()
{
	if (EHandle_Get(m_h6554) != 0) {
		SceneView498 *p = (SceneView498 *)EHandle_Get(m_h6554);
		if (p->b)
			return 1;
	}
	if (m_f64cc > gpGlobals->curtime)
		return 1;
	return 0;
}
}
using namespace block_102c1400;

int CAI_BaseNPCTroika::sub_102c1400()
{
	if (!sub_102c1170()) {
		sub_102c0360();
		return -1;
	}
	if (EHandle_Get(m_h6554) && !((SceneView498 *)EHandle_Get(m_h6554))->b) {
		sub_101cd940(EHandle_Get(m_h6554));
		m_h6554 = -1;
	}
	if (m_b64c0) {
		if (!((CTroikaUnit *)this)->sub_102c0aa0())
			sub_1000e4d5();
	}
	if (m_b64ec && !m_b64e0 && !m_b64c0) {
		sub_102c0520(&m_b64ec, 0, 0);
		m_b64ec = 0;
	}
	int state = m_nState0fec;
	if (m_b065c) {
		int act = ((CNPCSlots614 *)this)->slot611();
		if (act > -1) {
			sub_10260a50(act);
			m_n06f8 = 0;
			state = 0xf1;
		} else {
			DevMsg("%s could not look up disposition sequence!!!\n", sub_1000b5cd());
			state = 1;
		}
	}
	EntA8View *pDlg = (EntA8View *)EHandle_Get(m_hfe8);
	if (pDlg && pDlg->p) {
		bool bFlag;
		if (EHandle_Get(m_h6554) || m_b64c0 || m_b64ec)
			bFlag = false;
		else
			bFlag = true;
		((CDialog *)pDlg->p->sub_10178120())->sub_100e13d0(bFlag);
	}
	return state;
}
// END FUNCTION

// FUNCTION: 0x102c1680 size=0x321
// TARGET: CAI_BaseNPCTroika::vfunc286
#include "CAI_BaseNPCTroika.h"
#include "CBaseFlex.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CUnknown100ecee0.h"
#include "CBaseAnimating.h"
#include "globalvars.h"

extern int (__cdecl *g_109f3868)(int, int);
extern "C" double __cdecl atof(const char *);
extern CUnknown100ecee0 g_10924980;
void sub_100ea2d0(const char *p0, void *p1, void *p2, int p3, int p4);
int sub_101cd9e0(int a);
char *sub_101d3730(const char *pszFormat, ...);

struct CUnknown10075b70 { int sub_10075b70(); };
struct CUnknown10075c50 { const char *sub_10075c50(); };
struct CUnknown10075ca0 { const char *sub_10075ca0(); };

void CAI_BaseNPCTroika::vfunc286(int a, void *pEvent)
{
	CUnknown10075b70 *pEv = (CUnknown10075b70 *)pEvent;
	CUnknown10075c50 *pEv2 = (CUnknown10075c50 *)pEvent;
	CUnknown10075ca0 *pEv3 = (CUnknown10075ca0 *)pEvent;

	if (pEv->sub_10075b70() == 2)
	{
		sub_102c1a80(a, pEvent);
		return;
	}

	if (pEv->sub_10075b70() == 7)
	{
		int nSeq = ((CBaseAnimating *)this)->sub_1008f7b0(pEv2->sub_10075c50());
		if (nSeq <= -1)
			return;
		int nAct = ((CBaseAnimating *)this)->sub_10090020(nSeq);
		((CEntityVSlots *)this)->slot311(nAct, nAct, nSeq);
		m_b64e0 = 0;
		m_bInStanceChange = 0;
		return;
	}

	if (pEv->sub_10075b70() == 0xd)
	{
		if (!EHandle_Get(m_hfe8))
			return;
		float flValue = atof(pEv2->sub_10075c50());
		float flMin;
		int nChance;
		g_10924980.sub_100ec5d0(m_nCurrDisposition, (int *)&flMin, &nChance);
		if (flValue > flMin)
		{
			if (nChance > g_109f3868(1, 100))
			{
				int nAct = sub_102c1230();
				if (nAct > -1)
				{
					*(int *)((char *)this + 0x6f0) = nAct;
					((CBaseAnimating *)this)->sub_10090950();
					m_n06f8 = 0;
					*(float *)((char *)this + 0x174) = gpGlobals->curtime;
					m_nActivityff0 = 0xf1;
					m_nState0fec = 0xf1;
					m_b64e0 = 0;
					m_bInStanceChange = 1;
				}
			}
		}
		return;
	}

	if (pEv->sub_10075b70() == 0xe)
	{
		if (gpGlobals->curtime > m_flLoudExpressionTime)
		{
			float flA, flB, flMin, flMax;
			int n5;
			const char *pszItem = (const char *)g_10924980.sub_100ec450(m_nCurrDisposition, (int *)&flA, (int *)&flB, (int *)&flMin, (int *)&flMax, &n5);
			float flTime = atof(pEv2->sub_10075c50()) > flMax ? flMax
				: (atof(pEv2->sub_10075c50()) < flMin ? flMin : atof(pEv2->sub_10075c50()));
			((CBaseCombatCharacter *)this)->sub_101067e0(pszItem, flA, flB, 1.0f, 0.0f, flTime);
			m_flLoudExpressionTime = flTime + gpGlobals->curtime + flA + flB + 0.1;
		}
		return;
	}

	if (pEv->sub_10075b70() == 0xf)
	{
		void *pTarget = EHandle_Get(m_hfe8);
		if (!pTarget)
			pTarget = (void *)sub_101cd9e0(1);
		char *psz1 = sub_101d3730("\"%s\"", pEv2->sub_10075c50());
		char *psz = sub_101d3730(pEv3->sub_10075ca0(), psz1);
		sub_100ea2d0(psz, pTarget, this, 0x102, 0);
		return;
	}

	((CBaseFlex *)this)->CBaseFlex::vfunc286(a, pEvent);
}
// END FUNCTION

// FUNCTION: 0x102c1a80 size=0x135
#include "vampire_all.h"
float __fastcall sub_10075f10(void *p);
float __fastcall sub_10075e70(void *p);

void CAI_BaseNPCTroika::sub_102c1a80(void *pScene, void *pEvent)
{
	CSceneEvent *pEv = (CSceneEvent *)pEvent;
	CBaseCombatCharacter::CExpressionRecord rec;
	int nExpr = sub_10106a40((const char *)pEv->sub_10075ca0());
	if (nExpr != -1)
	{
		rec.m_iExpression = nExpr;
		rec.m_flStart = gpGlobals->curtime;
		rec.m_flFadeTime = (sub_10075f10(pEv) + rec.m_flStart) - sub_10075e70(pEv);
		rec.m_pScene18 = pScene;
		rec.m_pEvent1c = pEvent;
		((CUtlVector<CBaseCombatCharacter::CExpressionRecord> *)((char *)this + 0x10bc))->AddToTail(rec);
	}
}
// END FUNCTION

// FUNCTION: 0x102c1c10 size=0x96
#include "CAI_BaseNPCTroika.h"
extern char *(__cdecl *g_109f3890)(char *, const char *, int);

// TARGET: CAI_BaseNPCTroika::vfunc347
bool CAI_BaseNPCTroika::vfunc347(int event, char *pszName, float *pA, float *pB, float *pC, float *pD)
{
    if (event == 1) {
        g_109f3890(pszName, "Knockback", 0x40);
        *pA = 1.0f;
        *pB = 0.25f;
        *pC = 0.8f;
        *pD = 0.5f;
        int seq = sub_1008dd30(*(int *)((char *)this + 0x6068), -1);
        if (seq >= 0)
            *pC += sub_10091080(seq);
        return true;
    }
    return sub_10107120(event, pszName, pA, pB, pC, pD);
}
// END FUNCTION

// FUNCTION: 0x102c1ce0 size=0x171
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CCineNPC.h"
#include "CUnknown102b5dc0.h"
#include "CBaseCombatWeapon.h"

__declspec(dllimport) void DevWarning(const char *, ...);

void CAI_BaseNPCTroika::vfunc77()
{
    if (*(int *)((char *)this + 0x5cc0) == 4 || EHandle_Get(m_h5d74)) {
        const char *pszName = EHandle_Get(m_h5d74) ? ((CCineNPC *)EHandle_Get(m_h5d74))->sub_1000b5cd() : "**UNKNOWN**";
        DevWarning("Attempting to ScriptHide an NPC (%s) playing a scripted sequence (%s).  Satan will eat your babies if you continue to do this.\n", ((CCineNPC *)this)->sub_1000b5cd(), pszName);
        DevWarning("Cancelling script...\n");
        if (EHandle_Get(m_h5d74))
            ((CCineNPC *)EHandle_Get(m_h5d74))->sub_101a8c30();
        else
            sub_1027d170();
        if (*(int *)((char *)this + 0x5cc0) != 7)
            ((CUnknown102b5dc0 *)this)->sub_102ae7f0(0x6b);
    }
    sub_100a8710();
    if (sub_10007e19())
        ((CBaseCombatWeapon *)sub_10007e19())->vfunc77();
}
// END FUNCTION

// FUNCTION: 0x102c1ec0 size=0x255
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CBaseCombatCharacter.h"
#include "CNPCSlots614.h"

struct SScriptRec
{
	char m_pad[0x5f78];
	int m_n5f78;
	int m_n5f7c;
	int m_n5f80;
	int m_n5f84;
	int m_n5f88;
	int m_n5f8c;
};

class SSlotView
{
public:
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8)
	EVS(90) EVS(91) virtual int slot92(); EVS(93) virtual int slot94(); virtual int slot95();
	EVS(96) EVS(97) EVS(98) EVS(99)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS(200) EVS(201) EVS(202) EVS(203) EVS(204) EVS(205) EVS(206) EVS(207) EVS(208) EVS(209)
	EVS(210) virtual int slot211();
};

void CAI_BaseNPCTroika::vfunc78()
{
	SSlotView *pView = (SSlotView *)this;
	if (m_b5d78 && EHandle_Get(m_h5d74)) {
		pView->slot94();
		pView->slot95();
		pView->slot92();
		pView->slot211();
	}
	sub_100a8990();
	((CNPCSlots614 *)this)->slot614();
	if (sub_1032e7b0())
		((CEntityVSlots *)sub_1032e7b0())->slot78();
	if (m_b5d78 && EHandle_Get(m_h5d74)) {
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f78 = pView->slot94();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f7c = pView->slot95();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f80 = pView->slot92();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f84 = pView->slot211();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f88 = m_flags19c;
		unsigned int h = m_h5d74;
		unsigned int flags = m_flags14b8;
		((SScriptRec *)EHandle_Get(h))->m_n5f8c = flags;
	}
	m_b5d78 = 0;
}
// END FUNCTION

// FUNCTION: 0x102c21c0 size=0xf4
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"

int sub_1023bd00();
bool __fastcall sub_10175180(CBaseCombatCharacter *pChar);

#define PV1(p) virtual void p();
#define PV10(p) PV1(p##0) PV1(p##1) PV1(p##2) PV1(p##3) PV1(p##4) PV1(p##5) PV1(p##6) PV1(p##7) PV1(p##8) PV1(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CTroikaSlots404
{
	PV100(ta) PV100(tb) PV100(tc) PV100(td)
	PV1(te0) PV1(te1) PV1(te2) PV1(te3)
	virtual int vfunc404(CBaseCombatCharacter *pOther);
};

struct CTroikaCheckView : public CBaseCombatCharacter
{
	char sub_100b5190();	// stub 0x10014da8
};

struct CTroikaOtherView : public CBaseCombatCharacter
{
	char sub_10146b20(CAI_BaseNPCTroika *pNPC);	// stub 0x1000983b
};

struct CTroikaWorldView
{
	char pad[0x4ac];
	int m_n4ac;
};
CTroikaWorldView *sub_1023bd00_w();

// TARGET: CAI_BaseNPCTroika::vfunc295
bool CAI_BaseNPCTroika::vfunc295(CBaseCombatCharacter *pOther)
{
	CTroikaCheckView *pSelf = (CTroikaCheckView *)this;
	if (!pOther)
		return false;
	if (!*(int *)((char *)this + 0x128))
		return false;
	if (!pSelf->vfunc158())
		return false;
	if (!pOther->vfunc158())
		return false;
	if (pSelf->sub_10341aa0())
		return false;
	if (pSelf->sub_100b5190())
		return false;
	if (!*((char *)this + 0x1088))
		return false;
	if ((unsigned char)(*(unsigned int *)((char *)this + 0x5b64) >> 2) & 1)
		return false;
	if (*(unsigned int *)((char *)this + 0x14b8) & 0x80000)
		return false;
	if (sub_102c1170())
		return false;
	if (sub_10175180(pOther))
		return false;
	if (!((CTroikaOtherView *)pOther)->sub_10146b20(this))
		return false;
	if (pSelf->sub_1033e2b0())
		return false;
	if (*(unsigned int *)((char *)this + 0x14bc) & 0x10000000)
		return false;
	CTroikaWorldView *pWorld = (CTroikaWorldView *)sub_1023bd00();
	if (pWorld && pWorld->m_n4ac)
		return false;
	int r = ((CTroikaSlots404 *)this)->vfunc404(pOther);
	if (r == 1 || r == 2)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x102c2300 size=0xc0
#include "CAI_BaseNPCTroika.h"

struct CTroikaGameState
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x2c - 4];
	int m_n2c;
};
extern CTroikaGameState *g_10924afc;

inline bool TroikaStateActive()
{
	if (g_10924afc->vfunc1())
		return false;
	if (!g_10924afc->m_n2c)
		return false;
	return true;
}

bool CAI_BaseNPCTroika::vfunc294(int unused)
{
	if (sub_100b5190())
		return false;
	if (*(int *)((char *)this + 0x128))
		return false;
	if (m_b63d8)
		return false;
	if (!TroikaStateActive())
	{
		if (vfunc464() != 1 && vfunc464() != 13)
			return false;
	}
	else if (vfunc464() == 7)
		return false;
	if (sub_10014df8(0x6f))
		return false;
	if (sub_10014df8(0x5a))
		return false;
	bool r = ((char (__fastcall *)(CAI_BaseNPCTroika *))(*(void ***)this)[158])(this) != 0;
	return r;
}
// END FUNCTION

// FUNCTION: 0x102c23f0 size=0x27
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"

// TARGET: CAI_BaseNPCTroika::vfunc614
void CAI_BaseNPCTroika::vfunc614()
{
	float t = gpGlobals->curtime;
	*(float *)((char *)this + 0x17c) = t;
	*(float *)((char *)this + 0x6244) = t;
	*(float *)((char *)this + 0x6248) = t;
	*(float *)((char *)this + 0x624c) = t;
	*(float *)((char *)this + 0x6250) = t;
}
// END FUNCTION

// FUNCTION: 0x102c2430 size=0x43
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"

struct TroikaField65dc { char pad[0x65dc]; float m; };

char CAI_BaseNPCTroika::sub_102c2430()
{
	if (sub_102c1170())
		return 1;
	if (m_n5d70 >= 4 && m_n5d70 <= 6)
		return 1;
	if (gpGlobals->curtime <= ((TroikaField65dc *)this)->m)
		return 1;
	return m_b63f0;
}
// END FUNCTION

// FUNCTION: 0x102c24a0 size=0x17e
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "inputdata_t.h"

#define S1(p, n) virtual void p##n();
#define S10(p) S1(p,0) S1(p,1) S1(p,2) S1(p,3) S1(p,4) S1(p,5) S1(p,6) S1(p,7) S1(p,8) S1(p,9)
struct SlotsAll {
    S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
    S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
    S10(c0)
    S1(v, 0) S1(v, 1) S1(v, 2) S1(v, 3) S1(v, 4) S1(v, 5)
    virtual void f216(float *v);
    virtual float *f217();
    virtual void f218(float *v);
    virtual float *f219();
    S10(d0) S10(d1) S10(d2) S10(d3) S10(d4) S10(d5) S10(d6) S10(d7) S10(d8) S10(d9)
    S10(e0) S10(e1) S10(e2) S10(e3) S10(e4) S10(e5) S10(e6) S10(e7) S10(e8) S10(e9)
    S10(f0) S10(f1) S10(f2) S10(f3) S10(f4) S10(f5) S10(f6) S10(f7) S10(f8) S10(f9)
    S10(g0) S10(g1) S10(g2) S10(g3) S10(g4) S10(g5) S10(g6) S10(g7) S10(g8)
    S1(w, 0) S1(w, 1) S1(w, 2) S1(w, 3)
    virtual void f614();
};

extern CGlobalEntityList *g_10566458;

// TARGET: CAI_BaseNPCTroika::sub_102c24a0
void CAI_BaseNPCTroika::sub_102c24a0(inputdata_t *pData)
{
    if (!pData->value.Entity(&g_10566458))
        return;
    ((SlotsAll *)this)->f216(((SlotsAll *)pData->value.Entity(&g_10566458))->f217());
    ((SlotsAll *)this)->f218(((SlotsAll *)pData->value.Entity(&g_10566458))->f219());
    ((CBaseEntity *)this)->sub_100b3b00();
    ((SlotsAll *)this)->f614();
    ((CBaseEntity *)this)->sub_1009d1e0();
}
// END FUNCTION

// FUNCTION: 0x102c2680 size=0x191
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CAI_BaseNPCTroika.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "inputdata_t.h"
#include "engineiface.h"
#include "engineserver.h"

struct CAI_EdictView {
	char m_pad0000[0x2e0];
	int m_pEdict2e0;
};

struct CVariantView : variant_t {
	float FloatV() const { return (fieldType == 1) ? flValue : 0.0f; }
};

#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

void CAI_BaseNPCTroika::sub_102c2680(const struct CAI_FloatParam *pParam)
{
	const inputdata_t &inputdata = *(const inputdata_t *)pParam;
	m_f6550 = clamp(((const CVariantView &)inputdata.value).FloatV(), 0.0f, 1.0f);
	if (m_b64c0) {
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int edict; edict = engine->vfunc35(pcd_stage(((CAI_EdictView *)this)->m_pEdict2e0));
		enginesound->vfunc11(&filter, edict, 5, m_f6550, 0, 4, 100, (const float *)&((CEntitySoundOriginView *)this)->GetSoundEmissionOrigin(), 0, 0, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x102c2890 size=0x52
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"
#include "engineiface.h"
// TARGET: CAI_BaseNPCTroika::sub_102c2890
void CAI_BaseNPCTroika::sub_102c2890(inputdata_t *data)
{
	const char *psz = data->value.String();
	if (psz && *psz) {
		enginesound->vfunc0(psz, 0);
		sub_102c0520(psz, 0, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x102c2910 size=0x6e
#include "inputdata_t.h"
extern "C" __declspec(dllimport) void Q_trimspace(const char *pSource, char *pDest, int maxLen);
extern char g_106b8540[];
int *sub_10203ed0(int *pOut, const char *pszName);

struct CTroikaStringInputUnit {
    void sub_102c2910(inputdata_t *pData);
};

void CTroikaStringInputUnit::sub_102c2910(inputdata_t *pData)
{
    char szName[0x104];
    int nTemp;
    variant_t *pVar = &pData->value;
    const char *psz;
    if (pVar->fieldType == 2)
        psz = pVar->iszValue ? pVar->iszValue : g_106b8540;
    else
        psz = pVar->sub_10008805();
    Q_trimspace(psz, szName, 0x104);
    if (szName[0])
        *(int *)((char *)this + 0x64c4) = *sub_10203ed0(&nTemp, szName);
}
// END FUNCTION

// FUNCTION: 0x102c29a0 size=0x6c
#include "inputdata_t.h"
struct CDmgInfoLocal {
    int m_a;
    float m_vForce[3];
    char m_pad[0x4c - 0x10];
    CDmgInfoLocal *sub_101c26d0(void *pInflictor, void *pAttacker, float flDamage, int a, int b, int c, int d);
};
struct CTroikaInputUnit {
    void sub_100a1250(CDmgInfoLocal *pInfo);
    void sub_102c29a0(inputdata_t *pData);
};

void CTroikaInputUnit::sub_102c29a0(inputdata_t *pData)
{
    int nDamage = pData->value.fieldType == 4 ? pData->value.iValue : 0;
    CDmgInfoLocal info;
    info.sub_101c26d0(pData->pCaller, pData->pActivator, (float)nDamage, 0, 0, 0, -1);
    info.m_vForce[0] = 0;
    info.m_vForce[1] = 0;
    info.m_vForce[2] = 0;
    sub_100a1250(&info);
}
// END FUNCTION

// FUNCTION: 0x102c2a30 size=0x21
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"
void CAI_BaseNPCTroika::sub_102c2a30(inputdata_t *data)
{
	char v;
	if (data->value.fieldType == 5)
		v = *(char *)&data->value;
	else
		v = 0;
	m_b63d8 = v;
}
// END FUNCTION

// FUNCTION: 0x102c2a70 size=0x21
// TARGET: sub_102c2a70
void __fastcall sub_102c2a70(char *self, int dummy, char *data)
{
    char v;
    if (*(int *)(data + 0x18) == 5)
        v = *(char *)(data + 8);
    else
        v = 0;
    *(char *)(self + 0x63d9) = v;
}
// END FUNCTION

// FUNCTION: 0x102c2ab0 size=0x42
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"
__declspec(dllimport) void DevMsg(const char *, ...);
static inline bool IsInt(const variant_t &v) { return v.fieldType == 4; }
static inline int GetInt(const variant_t &v) { return IsInt(v) ? v.iValue : 0; }
void CAI_BaseNPCTroika::sub_102c2ab0(inputdata_t *pInput)
{
	int mode = GetInt(pInput->value);
	if (IsInt(pInput->value) && mode >= 0 && mode <= 6) {
		m_n6338 = mode;
		return;
	}
	DevMsg("SetInvestigateMode requires integer from %d to %d\n", 0, 6);
}
// END FUNCTION

// FUNCTION: 0x102c2b20 size=0x42
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"
__declspec(dllimport) void DevMsg(const char *, ...);
static inline bool IsInt(const variant_t &v) { return v.fieldType == 4; }
static inline int GetInt(const variant_t &v) { return IsInt(v) ? v.iValue : 0; }
void CAI_BaseNPCTroika::sub_102c2b20(inputdata_t *pInput)
{
	int mode = GetInt(pInput->value);
	if (IsInt(pInput->value) && mode >= 0 && mode <= 6) {
		m_n633c = mode;
		return;
	}
	DevMsg("SetInvestigateModeCombat requires integer from %d to %d\n", 0, 6);
}
// END FUNCTION

// FUNCTION: 0x102c2b90 size=0x21
// TARGET: sub_102c2b90
void __fastcall sub_102c2b90(char *self, int dummy, char *data)
{
    char v;
    if (*(int *)(data + 0x18) == 5)
        v = *(char *)(data + 8);
    else
        v = 0;
    *(char *)(self + 0x6434) = v;
}
// END FUNCTION

// FUNCTION: 0x102c2bd0 size=0x21
// TARGET: sub_102c2bd0
void __fastcall sub_102c2bd0(char *self, int dummy, char *data)
{
    char v;
    if (*(int *)(data + 0x18) == 5)
        v = *(char *)(data + 8);
    else
        v = 0;
    *(char *)(self + 0x6435) = v;
}
// END FUNCTION

// FUNCTION: 0x102c2c10 size=0x21
// TARGET: sub_102c2c10
void __fastcall sub_102c2c10(char *self, int dummy, char *data)
{
    char v;
    if (*(int *)(data + 0x18) == 5)
        v = *(char *)(data + 8);
    else
        v = 0;
    *(char *)(self + 0x6436) = v;
}
// END FUNCTION

// FUNCTION: 0x102c2c50 size=0x1ea
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"
extern "C" char *__cdecl _strlwr(char *);
extern "C" char *__cdecl strstr(const char *, const char *);
extern "C" int __cdecl atoi(const char *);
extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)
__declspec(dllimport) char *__cdecl Q_strncpy(char *, const char *, int);
extern void (__cdecl *g_109f3888)(char *, char *, int);
__declspec(dllimport) void __cdecl DevWarning(const char *, ...);
void CAI_BaseNPCTroika::sub_102c2c50(inputdata_t *data)
{
    char szTemp[64];
    Q_strncpy(szTemp, data->value.String(), 64);
    char *pName = _strlwr(szTemp);
    int nDiscipline;
    if (strlen(pName)) {
        if (strstr(pName, "auspex")) nDiscipline = 1;
        else if (strstr(pName, "celerity")) nDiscipline = 3;
        else if (strstr(pName, "corpus_vampirus")) nDiscipline = 4;
        else if (strstr(pName, "fortitude")) nDiscipline = 7;
        else if (strstr(pName, "obfuscate")) nDiscipline = 8;
        else if (strstr(pName, "potence")) nDiscipline = 9;
        else if (strstr(pName, "presence")) nDiscipline = 10;
        else if (strstr(pName, "shield_of_faith")) nDiscipline = 13;
        else if (strstr(pName, "divine_vision")) nDiscipline = 14;
        else if (strstr(pName, "mind_shield")) nDiscipline = 16;
        else goto bad;
        char *pLevel = strstr(szTemp, " ");
        if (pLevel) {
            g_109f3888(pLevel, szTemp, 64);
            int nLevel = atoi(szTemp);
            if (nLevel >= 0 && nLevel <= 5) {
                vfunc589(nDiscipline, nLevel);
                return;
            }
        }
    }
bad:
    DevWarning("%s recieved invalid SetDiscipline input: %s\n", sub_1000b5cd(), data->value.String());
}
// END FUNCTION

// FUNCTION: 0x102c2ec0 size=0x33e
#include "CAI_BaseNPCTroika.h"
#include "CVStatList_t.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
void CAI_BaseNPCTroika::vfunc589(int stat, int target)
{
	CVStatListSet *pSet = CVStatListSet::Of(this);
	int cur = pSet->Find(3)->sub_10200ca0(stat);
	if (cur < target) {
		if (pSet->Find(2)->sub_10200ca0(stat) < target)
			pSet->Find(2)->sub_10200be0(stat, target);
		int diff = target - cur;
		pSet->Find(3)->sub_10200fc0(stat, diff);
		pSet->Find(3)->sub_10200be0(stat, target);
	} else if (cur > target) {
		int diff = cur - target;
		pSet->Find(3)->sub_10200be0(stat, target);
		pSet->Find(3)->sub_10201100(stat, diff);
	}
}
// END FUNCTION

// FUNCTION: 0x102c32d0 size=0x52
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
#include "CUnknown101e0f00.h"
#include "CUnknown101e3af0.h"
extern CUnknown101e0f00 g_10739a4c;
void CAI_BaseNPCTroika::sub_102c32d0(inputdata_t *data)
{
    char bOn = (data->value.fieldType == 5) ? (char)data->value.iValue : 0;
    unsigned int id = g_10739a4c.sub_101e1590("Thaumaturgy_Bloodshield");
    if (bOn) {
        g_10739a4c.sub_101e3380(this, this, id);
        return;
    }
    id = g_10739a4c.sub_101e1870(id);
    ((CUnknown101e3af0 *)&g_10739a4c)->sub_101e3af0((CBaseCombatCharacter *)this, id, 0);
}
// END FUNCTION

// FUNCTION: 0x102c3350 size=0x3a
#include "inputdata_t.h"
extern char g_106b8540[];
struct S {
	void sub_10008fbc(const char *s);
	void sub_102c3350(inputdata_t *data);
};
static inline const char *String(variant_t *v)
{
	if (v->fieldType == 2)
		return v->iszValue ? v->iszValue : g_106b8540;
	return v->sub_10008805();
}
void S::sub_102c3350(inputdata_t *data)
{
	sub_10008fbc(String(&data->value));
}
// END FUNCTION

// FUNCTION: 0x102c33a0 size=0x3a
#include "inputdata_t.h"
extern char g_106b8540[];
struct S {
	void sub_100039ea(const char *s);
	void sub_102c33a0(inputdata_t *data);
};
static inline const char *String(variant_t *v)
{
	if (v->fieldType == 2)
		return v->iszValue ? v->iszValue : g_106b8540;
	return v->sub_10008805();
}
void S::sub_102c33a0(inputdata_t *data)
{
	sub_100039ea(String(&data->value));
}
// END FUNCTION

// FUNCTION: 0x102c33f0 size=0x57
#include "CAI_BaseNPCTroika.h"
#include "inputdata_t.h"
void CAI_BaseNPCTroika::sub_102c33f0(inputdata_t *pInput)
{
    const char *psz = pInput->value.String();
    if (psz && *psz != '-')
        sub_102ae7f0(sub_102c47e0(psz, ""));
    m_flags14bc |= 0x82000000;
}
// END FUNCTION

// FUNCTION: 0x102c3470 size=0x2b
struct CVariantArg102c3470
{
	char m_pad0[8];
	char m_b8;	// 0x08
	char pad1[0x18 - 0x9];
	int m_type;	// 0x18
};

struct CUnk102c3470
{
	char m_pad0000[0x14bc];
	unsigned int m_flags14bc;

	void sub_102c3470(const CVariantArg102c3470 *d);
};

// TARGET: CUnk102c3470::sub_102c3470
void CUnk102c3470::sub_102c3470(const CVariantArg102c3470 *d)
{
	if (d->m_type == 5 && d->m_b8 != 0)
	{
		m_flags14bc &= 0x7fffbfff;
		return;
	}
	m_flags14bc |= 0x80004000;
}
// END FUNCTION

// FUNCTION: 0x102c34b0 size=0x33
struct CFlagArgView {
    char pad0[8];
    unsigned char m_b08;
    char pad1[0x18 - 9];
    int m_n18;
};

struct CFlagOwnerView {
    char pad0[0x204];
    unsigned int m_flags204;
    void sub_102c34b0(CFlagArgView *pArg);
};

// TARGET: CFlagOwnerView::sub_102c34b0
void CFlagOwnerView::sub_102c34b0(CFlagArgView *pArg)
{
    if (pArg->m_n18 == 5 && pArg->m_b08) {
        m_flags204 |= 8;
        return;
    }
    m_flags204 &= 0xfffffff7;
}
// END FUNCTION

// FUNCTION: 0x102c3500 size=0x21
// TARGET: sub_102c3500
void __fastcall sub_102c3500(char *self, int dummy, char *data)
{
    char v;
    if (*(int *)(data + 0x18) == 5)
        v = *(char *)(data + 8);
    else
        v = 0;
    *(char *)(self + 0x6496) = v;
}
// END FUNCTION

// FUNCTION: 0x102c3540 size=0x2b
struct CVariantArg102c3540
{
	char m_pad0[8];
	char m_b8;	// 0x08
	char pad1[0x18 - 0x9];
	int m_type;	// 0x18
};

struct CUnk102c3540
{
	void sub_10012855(unsigned int flags);
	void sub_1001005f(unsigned int flags);

	void sub_102c3540(const CVariantArg102c3540 *d);
};

// TARGET: CUnk102c3540::sub_102c3540
void CUnk102c3540::sub_102c3540(const CVariantArg102c3540 *d)
{
	if (d->m_type == 5 && d->m_b8 != 0)
	{
		sub_10012855(0xd00);
		return;
	}
	sub_1001005f(0xd00);
}
// END FUNCTION

// FUNCTION: 0x102c3580 size=0xc5
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "inputdata_t.h"

template <class T> inline T fmax_(const T &a, const T &b) { return (b > a) ? b : a; }

// TARGET: CBaseCombatCharacter::sub_102c3580
void CBaseCombatCharacter::sub_102c3580(inputdata_t &data)
{
    float flRate = (data.value.fieldType == 1) ? data.value.flValue : 0.0f;
    if (flRate == 1.0f || flRate == -1.0f) {
        m_nMotionTrail = 0;
        sub_1008d230(-1.0f);
        return;
    }
    if (flRate < 1.0f) {
        m_nMotionTrail = 0;
        sub_1008d230(fmax_(flRate, 0.001f));
    } else {
        m_nMotionTrail = 3;
        sub_1008d230(flRate);
    }
}
// END FUNCTION

// FUNCTION: 0x102c3690 size=0xe
#include "CAI_BaseNPCTroika.h"
extern const char *g_105d1068[];

const char *CAI_BaseNPCTroika::sub_102c3690(int task)
{
	return g_105d1068[task];
}
// END FUNCTION

// FUNCTION: 0x102c36b0 size=0xe
#include "CAI_BaseNPCTroika.h"
extern const char* g_105d1488[];

const char* CAI_BaseNPCTroika::sub_102c36b0(int schedule)
{
	return g_105d1488[schedule];
}
// END FUNCTION

// FUNCTION: 0x102c36d0 size=0x38d
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VTzimisce.h"
#include "CEntityVSlots.h"
#include "CUnknown102e0150.h"
#include "UTIL_Trace.h"
#include "ScopeTrace.h"
#include "CTraceFilterWorldOnly.h"
#include "CUnknown1003ff80.h"

#include <math.h>
namespace block_102c36d0 {
#pragma auto_inline(off)
struct VecMul : Vector { Vector sub_100a19c0(float fl) const; };
Vector VecMul::sub_100a19c0(float fl) const
{
	Vector res;
	VectorMultiply(*this, fl, res);
	return res;
}
#pragma auto_inline(on)
}
using namespace block_102c36d0;
float sub_10146150(const Vector &v);
struct CUnknown1004f860 { void sub_1004f860(); };
struct CHullView { virtual void v0(); virtual const Vector &vfunc1(); virtual const Vector &vfunc2(); };
struct CScopeTraceCtor { void sub_10037300(const char *func, const char *name, const char *line); };

#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

struct CTzStepView
{
	char pad[0x270];
	CHullView m_Collision;
	char pad2[0x655c - 0x274];
	float m_f655c, m_f6560, m_f6564, m_f6568, m_f656c;
	float MinScale() const { return m_f655c; }
	float MaxScale() const { return m_f6560; }
	float OwnScale() const { return m_f6564; }
	float TargetScale() const { return m_f6568; }
};

inline Vector MulV(const Vector &v, float f) { Vector r; r.x = v.x * f; r.y = v.y * f; r.z = v.z * f; return r; }
inline Vector AddV(const Vector &a, const Vector &b) { Vector r; r.x = a.x + b.x; r.y = a.y + b.y; r.z = a.z + b.z; return r; }
void CNPC_VTzimisce::sub_102c36d0(Vector vecOrigin, void *pEntity, float flTime, Vector *pVec, Vector *pOut)
{
	CBaseEntity *pEnt = (CBaseEntity *)pEntity;
	if (!pEnt)
	{
		if (pVec)
			*pOut = *pVec;
		return;
	}
	CTzStepView *pz = (CTzStepView *)this;
	Vector vecDir;
	if (flTime > 0.0f && vfunc541()->sub_102e0290(pEnt, pOut, &vecDir))
	{
		float flSpeed = sub_10146150(Vector(vecOrigin.x - pOut->x, vecOrigin.y - pOut->y, vecOrigin.z - pOut->z)) / flTime;
		float flScale = clamp(flSpeed, pz->MinScale(), pz->MaxScale());
		vecDir.z = 0;
		Vector vecTarget;
		vecTarget = MulV(vecDir, flScale) + *pOut;
		if (pVec)
		{
			Vector P = ((const VecMul &)vecTarget).sub_100a19c0(pz->TargetScale());
			Vector D = ((const VecMul *)pVec)->sub_100a19c0(pz->OwnScale());
			*pOut = AddV(D, P) * pz->m_f656c;
			CGameTrace tr;
			((CUnknown1003ff80 *)&tr)->sub_1003ff80();
			CTraceFilterWorldOnly filter;
			const Vector &mins = pz->m_Collision.vfunc1();
			const Vector &maxs = pz->m_Collision.vfunc2();
			{
				char scope;
				((CScopeTraceCtor *)&scope)->sub_10037300("UTIL_TraceHull", g_106b8540, g_106b8540);
				Ray_t ray;
				((CUnknown1004f860 *)&ray)->sub_1004f860();
				ray.sub_1006dec0(*pVec, &pOut->x, &mins.x, &maxs.x, 1, 0);
				g_1070b254->vfunc4(&ray, 0x2000b, (CTraceFilterNoCharacterCollide *)&filter, &tr);
				if (g_10738960.sub_1005f190())
					sub_10146570((const Vector *)&tr.m_startpos, (const Vector *)&tr.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
				(*g_109f3680)--;
			}
			if (tr.m_fraction != 1.0f)
				*pOut = *pVec;
		}
		else
		{
			*pOut = (*pOut * pz->OwnScale() + vecTarget * pz->TargetScale()) * pz->m_f656c;
		}
		return;
	}
	*pOut = *((CEntityVSlots *)pEnt)->slot217();
}
// END FUNCTION

// FUNCTION: 0x102c3b50 size=0x50a
#include "CAI_Pathfinder.h"
#include "Vector.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAI_BaseNPCTroika.h"
#include "CCollisionProperty.h"
#include "CTraceFilterWorldOnly.h"
#include "ScopeTrace.h"
#include "UTIL_Trace.h"

#include <math.h>
namespace block_102c3b50 {
#pragma auto_inline(off)
struct RayInit : Ray_t { void sub_1004f7a0(const float *pStart, const float *pEnd); };
void RayInit::sub_1004f7a0(const float *pStart, const float *pEnd)
{
    VectorSubtract(*(const Vector *)pEnd, *(const Vector *)pStart, *(Vector *)m_Delta);
    m_IsSwept = ((Vector *)m_Delta)->LengthSqr() != 0;
    m_StartOffset[2] = 0;
    m_StartOffset[1] = 0;
    m_StartOffset[0] = 0;
    m_IsRay = true;
    m_Extents[2] = 0;
    m_Extents[1] = 0;
    m_Extents[0] = 0;
    m_Start[0] = pStart[0];
    m_Start[1] = pStart[1];
    m_Start[2] = pStart[2];
    m_b32 = 0;
    m_n34 = 0;
    m_b33 = 0;
}
struct Ray_tViewH { Vector m_Start; Vector m_Delta; Vector m_StartOffset; Vector m_Extents; bool m_IsRay; bool m_IsSwept; char m_b32; char m_b33; float m_f34; };
struct RayHull : Ray_t { void sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b); };
void RayHull::sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b)
{
	const Vector &end = *(const Vector *)pEnd;
	Ray_tViewH *r = (Ray_tViewH *)this;
	const Vector &mins = *(const Vector *)pMins;
	const Vector &maxs = *(const Vector *)pMaxs;
	VectorSubtract(end, start, r->m_Delta);
	r->m_IsSwept = (r->m_Delta.LengthSqr() != 0.0f);
	VectorSubtract(maxs, mins, r->m_Extents);
	r->m_Extents *= 0.5f;
	r->m_IsRay = (r->m_Extents.LengthSqr() < 1e-6);
	VectorAdd(mins, maxs, r->m_StartOffset);
	r->m_StartOffset *= 0.5f;
	VectorAdd(start, r->m_StartOffset, r->m_Start);
	r->m_StartOffset *= -1.0f;
	r->m_b32 = b;
	r->m_b33 = 0;
	r->m_f34 = 0.0f;
	if (a && !r->m_IsRay) {
		r->m_f34 = (float)sqrt((r->m_Extents.x * r->m_Extents.x) + (r->m_Extents.y * r->m_Extents.y));
		if (1e-6 < r->m_f34)
			r->m_b33 = 1;
	}
}
#pragma auto_inline(on)
}
using namespace block_102c3b50;
inline void TraceLineCallsR(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	((RayInit *)&ray)->sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}
inline void TraceLineCallsR(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter, CGameTrace *ptr)
{
	Ray_t ray;
	((RayInit *)&ray)->sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}
inline void TraceHullDCR(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr, char a = 0, char b = 0)
{
	Ray_t ray;
	((RayHull *)&ray)->sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, a, b);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}
inline void TraceHullDCR(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, void *pFilter, CGameTrace *ptr, char a = 0, char b = 0)
{
	Ray_t ray;
	((RayHull *)&ray)->sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, a, b);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}
float sub_10146150(Vector *v);
extern float g_104454c4;

struct P3 { int a, b, c; };
struct ST3
{
	void sub_10037300(const char *a, const char *b, const char *c);
	~ST3() { (*g_109f3680)--; }
};

inline Vector VAdd(const Vector &a, const Vector &b)
{
	Vector r;
	r.x = a.x + b.x;
	r.y = a.y + b.y;
	r.z = a.z + b.z;
	return r;
}

inline Vector MulV(const Vector &a, float b) { Vector r; r.x = a.x * b; r.y = a[1] * b; r.z = a[2] * b; return r; }
namespace block_10146150 {
#pragma auto_inline(off)

float sub_10146150(const Vector *v) {
    return FastSqrt(v->z * v->z + v->y * v->y + v->x * v->x);
}

#pragma auto_inline(on)
}
void CAI_BaseNPCTroika::sub_102c3b50(CBaseEntity *pOther, Vector vecPos, Vector *pOut, int *pUnused)
{
	Vector start(vecPos.x, vecPos.y, vecPos.z + 16.0);
	CTraceFilterWorldOnly filter;
	CGameTrace tr;
	CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
	float *mins = pCol->vfunc1();
	float *maxs = pCol->vfunc2();
	{
		ST3 scope;
		scope.sub_10037300("UTIL_TraceHull", g_106b8540, g_106b8540);
		TraceHullDCR(start, start, *(Vector *)mins, *(Vector *)maxs, 0x202400b, &filter, &tr, 1, 0);
	}
	if (tr.m_startsolid)
	{
		int nCount = 0;
		Vector flat;
		*(P3 *)&flat = *(const P3 *)pCol->vfunc2();
		flat.z = 0;
		float d = block_10146150::sub_10146150(&flat);
		float e = d * 0.581;
		Vector off[7] = {
			Vector(d, 0, 0), Vector(e, d, 0), Vector(-e, d, 0), Vector(-d, 0, 0),
			Vector(-e, -d, 0), Vector(e, -d, 0), Vector(0, 0, 1.0f) };
		Vector dir[6] = {
			Vector(-1.0f, 0, 0), Vector(-0.5f, -0.866f, 0), Vector(0.5f, -0.866f, 0),
			Vector(1.0f, 0, 0), Vector(0.5f, 0.866f, 0), Vector(-0.5f, 0.866f, 0) };
		Vector sum;
		sum.Init(0, 0, 0);
		Vector *pd = dir;
		Vector *po = off;
		do
		{
			Vector end;
			end = VAdd(start, *po);
			TraceLineCallsR(start, end, 0x202400b, &filter, &tr);
			if (tr.m_fraction != 1.0)
			{
				sum = VAdd(sum, *pd);
				nCount++;
			}
			po++;
			pd++;
		} while (po->z == g_104454c4);
		if (nCount)
		{
			if (nCount > 1)
			{
				if (sum.x == g_104454c4 && sum.y == g_104454c4 && sum.z == g_104454c4)
					return;
				VectorNormalize(sum);
			}
			CCollisionProperty *pOtherCol = (CCollisionProperty *)((char *)pOther + 0x270);
			float *p1 = pCol->vfunc2();
			float *p2 = pOtherCol->vfunc2();
			flat = Vector(p1[0] - p2[0], p1[1] - p2[1], 0);
			float d2 = block_10146150::sub_10146150(&flat);
			pOut->sub_1003e4b0(MulV(sum, d2) + vecPos);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102c41b0 size=0xd
#include "CAI_BaseNPCTroika.h"
#include "Vector.h"

// TARGET: CAI_BaseNPCTroika::sub_102c41b0
void CAI_BaseNPCTroika::sub_102c41b0(int a, const Vector *pFrom, const Vector *pTo, float c)
{
	sub_102c41d0(a, pFrom, pTo, *(int *)&c);
}
// END FUNCTION

// FUNCTION: 0x102c41d0 size=0xa0
#include "CAI_BaseNPCTroika.h"
#include "Vector.h"

extern Vector g_1070d9d0;
void sub_10001a8c(Vector pos, int a, Vector *p2, Vector *p3, int c);

// TARGET: CAI_BaseNPCTroika::sub_102c41d0
void CAI_BaseNPCTroika::sub_102c41d0(int a, const Vector *pFrom, const Vector *pTo, int c)
{
	Vector v2, v3;
	if (pFrom)
		v2 = *pFrom;
	else
		v2 = *(const Vector *)((CAI_BaseNPC *)this)->vfunc217();
	if (pTo)
		v3 = *pTo;
	else
		v3 = g_1070d9d0;
	sub_10001a8c(vfunc192(), a, &v2, &v3, c);
}
// END FUNCTION

// FUNCTION: 0x102c42a0 size=0x44
#include "CAI_BaseNPCTroika.h"
void sub_101d2640(Vector vecOrigin, int a, CBaseAnimating *pEnt, int pszBone, int b);
void CAI_BaseNPCTroika::sub_102c42a0(int a, CBaseAnimating *pEnt, int pszBone, int b)
{
	sub_101d2640(vfunc192(), a, pEnt, pszBone, b);
}
// END FUNCTION

// FUNCTION: 0x102c4310 size=0x49
#include "CAI_BaseNPCTroika.h"
#include "Vector.h"
void sub_101d26b0(Vector pos, int a, int b, int c, int d, int e);
void CAI_BaseNPCTroika::sub_102c4310(int a, int b, int c, int d, int e)
{
	sub_101d26b0(vfunc192(), a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x102c4380 size=0x1b
// TARGET: sub_102c4380
struct CUnk102c4380 {
    char pad[0x6458];
    int m_n6458;
    void sub_1008bb70(const char *psz);
    void sub_102c4380(const char *psz);
};
void CUnk102c4380::sub_102c4380(const char *psz)
{
    sub_1008bb70(psz);
    m_n6458 = 0x7f7fffff;
}
// END FUNCTION

// FUNCTION: 0x102c43b0 size=0x29
void *__fastcall sub_1008bf00(void *p);

struct CUnknown102c43b0 {
    char pad_0000[0x6458];
    float m_fUnk6458;
    void sub_102c43b0(float f);
    void sub_102c43f0();
};

// TARGET: CUnknown102c43b0::sub_102c43b0
void CUnknown102c43b0::sub_102c43b0(float f)
{
    if (sub_1008bf00(this)) {
        m_fUnk6458 = f + gpGlobals->curtime;
        sub_102c43f0();
    }
}
// END FUNCTION

// FUNCTION: 0x102c43f0 size=0x2b
struct CUnk102c43f0
{
	char m_pad0000[0x6458];
	float m_fl6458;

	void sub_102c43f0();
	void sub_1008bd30();
};

// TARGET: CUnk102c43f0::sub_102c43f0
void CUnk102c43f0::sub_102c43f0()
{
	if (gpGlobals->curtime >= m_fl6458)
	{
		sub_1008bd30();
		m_fl6458 = 3.402823466e+38F;
	}
}
// END FUNCTION

// FUNCTION: 0x102c4430 size=0x21
#include "CAI_BaseNPCTroika.h"

bool CAI_BaseNPCTroika::sub_102c4430(const char *psz)
{
	bool b = sub_102c44e0(psz);
	m_psz6478 = *psz ? psz : 0;
	return b;
}
// END FUNCTION

// FUNCTION: 0x102c4470 size=0x43
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
extern const char g_106b8540[];
bool CAI_BaseNPCTroika::sub_102c4470(CBaseEntity *pEnt)
{
	const char *name;
	if (*(int *)((char *)pEnt + 0xa8))
		name = "!player";
	else {
		name = pEnt->m_name26c;
		if (!name)
			name = g_106b8540;
	}
	bool r = sub_102c44e0(name);
	m_psz6478 = *name ? name : 0;
	return r;
}
// END FUNCTION

// FUNCTION: 0x102c44e0 size=0x107
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CAI_BaseNPCTroika.h"

extern CGlobalEntityList *g_10566458;
extern "C" __declspec(dllimport) void Error(const char *pszFormat, ...);

bool CAI_BaseNPCTroika::sub_102c44e0(const char *pszName)
{
	CBaseEntity *pEnt = vfunc559(pszName);
	volatile unsigned int *pHandle = (unsigned int *)((char *)this + 0x647c);
	if (pEnt)
		*pHandle = *pEnt->vfunc1();
	else
		*pHandle = 0xffffffff;
	unsigned int h = *pHandle;
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *t = g_10566458->m_Slots;
		if (t[h & 0x1fff].m_Serial == (int)(h >> 13) && t[h & 0x1fff].m_pEntity) {
			unsigned int h2 = *pHandle;
			void *pTarget = (h2 != 0xffffffff && t[h2 & 0x1fff].m_Serial == (int)(h2 >> 13)) ? (void *)t[h2 & 0x1fff].m_pEntity : 0;
			if (pTarget != this) {
				if (*(int *)((char *)this + 0x5bb0) <= 0 && *(int *)((char *)this + 0x5da4)) {
					*pHandle = 0xffffffff;
					Error("%s - Followers can not be in squads.  This functionality not implemented.", sub_1000b5cd());
					return false;
				}
				sub_102b52a0(0, 0);
				*(unsigned int *)((char *)this + 0x5b84) |= 0x3008;
				return true;
			}
		}
	}
	*pHandle = 0xffffffff;
	return false;
}
// END FUNCTION

// FUNCTION: 0x102c4640 size=0x21
#include "CAI_BaseNPCTroika.h"

bool CAI_BaseNPCTroika::sub_102c4640(const char *psz)
{
	bool b = sub_102c4680(psz);
	m_psz6480 = *psz ? psz : 0;
	return b;
}
// END FUNCTION

// FUNCTION: 0x102c4680 size=0x108
#include "CAI_BaseNPCTroika.h"
#include "CUnknown101e8080.h"

struct CTroikaFollowerFields
{
	char m_pad0000[0x6484];
	float m_flBackAway;
	float m_flWalkTo;
	float m_flRunTo;
};

extern CUnknown101e8080 g_10739d08;
__declspec(dllimport) void DevMsg(const char *pszFormat, ...);

// TARGET: CAI_BaseNPCTroika::sub_102c4680
bool CAI_BaseNPCTroika::sub_102c4680(const char *pszType)
{
	CTroikaFollowerFields *p = (CTroikaFollowerFields *)this;
	float *pRun = &p->m_flRunTo;
	float *pWalk = &p->m_flWalkTo;
	float *pBack = &p->m_flBackAway;
	bool bFound = g_10739d08.sub_101e8c90(pszType, (int *)pBack, (int *)pWalk, (int *)pRun);
	if (*pBack + 10.0f > *pWalk) {
		DevMsg("WARNING:  FollowerDistanceBackAway(%f) + overlap(%f) > FollowerDistanceWalkTo(%f)\n", *pBack, 10.0, *pWalk);
		DevMsg("          If they overlay, NPC will behave erratically.\n");
		*pWalk = *pBack + 10.0f;
		DevMsg("          Changing FollowerDistanceWalkTo to %f\n", *pWalk);
		DevMsg("          NPC is using Follower Type (%s)\n", pszType);
	}
	if (*pWalk + 10.0f > *pRun) {
		DevMsg("WARNING:  FollowerDistanceWalkTo(%f) + overlap(%f) > FollowerDistanceRunTo(%f)\n", *pWalk, 10.0, *pRun);
		DevMsg("          If they overlay, NPC will behave erratically.\n");
		*pRun = *pWalk + 10.0f;
		DevMsg("          Changing FollowerDistanceRunTo to %f\n", *pRun);
		DevMsg("          NPC is using Follower Type (%s)\n", pszType);
	}
	return bFound;
}
// END FUNCTION

// FUNCTION: 0x102c47e0 size=0x99
#include "CAI_BaseNPCTroika.h"
#include <stdio.h>

extern "C" __declspec(dllimport) void DevMsg(int level, const char *fmt, ...);
int sub_102cadb0(const char *pszName);

int CAI_BaseNPCTroika::sub_102c47e0(const char *pszName, const char *pszCaller)
{
    char szBuf[256];
    int id = sub_102cadb0(pszName);
    if (id == -1) {
        sprintf(szBuf, "SCHED_%s", pszName);
        id = sub_102cadb0(szBuf);
        if (id == -1) {
            DevMsg(1, "ERROR: Could not find schedule '%s' (%s)\n", szBuf, pszCaller);
            return -1;
        }
    }
    CAI_CondOwner *pOwner = vfunc580();
    id = pOwner->sub_102ea280(id);
    if (id == -1) {
        DevMsg(1, "ERROR: Could not convert schedule '%s' to local (%s)\n", pszName, pszCaller);
        return -1;
    }
    return id;
}
// END FUNCTION

// FUNCTION: 0x102c48b0 size=0x146
#include "CAI_BaseNPCTroika.h"

#pragma intrinsic(strcmp)
extern "C" int __cdecl strcmp(const char *, const char *);

extern CAI_NamedThing *g_1090fbec;
extern CAI_NamedThing *g_1090fbf0;
extern CAI_NamedThing *g_1090fbf4;

// TARGET: CAI_BaseNPCTroika::vfunc608
bool CAI_BaseNPCTroika::vfunc608(const char *pszName)
{
	CAI_NamedThing *pObj;
	if (!pszName || !*pszName)
		return false;
	if (g_1090fbec && strcmp(pszName, g_1090fbec->sub_1025e120()) == 0) {
		*(CAI_NamedThing **)((char *)this + 0x65e8) = g_1090fbec;
		pObj = g_1090fbec;
		goto done;
	}
	if (g_1090fbf0 && strcmp(pszName, g_1090fbf0->sub_1025e120()) == 0) {
		*(CAI_NamedThing **)((char *)this + 0x65e8) = g_1090fbf0;
		pObj = g_1090fbf0;
		goto done;
	}
	if (g_1090fbf4 && strcmp(pszName, g_1090fbf4->sub_1025e120()) == 0) {
		*(CAI_NamedThing **)((char *)this + 0x65e8) = g_1090fbf4;
		pObj = g_1090fbf4;
done:
		const char *pName = pObj->sub_1025e120();
		*(const char **)((char *)this + 0x65ec) = *pName ? pName : 0;
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102c4a60 size=0x4d
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
// TARGET: CAI_BaseNPCTroika::vfunc342
char CAI_BaseNPCTroika::vfunc342(int pEnt)
{
	if (m_b63d8)
		return 0;
	int p = (int)vfunc293();
	CBaseCombatCharacter *pBase = (CBaseCombatCharacter *)this;
	if (p && p == pEnt && !pBase->sub_1033c900(0x40000))
		return 0;
	return pBase->CBaseCombatCharacter::vfunc342(pEnt);
}
// END FUNCTION

// FUNCTION: 0x102c4ad0 size=0x12f
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CAI_BaseNPCTroika.h"

struct TroikaJumpView
{
	char pad0[0x649c];
	Vector m_vecJumpOrigin;
	Vector m_vecJumpTarget;
	float m_flJumpHeight;
};

void CAI_BaseNPCTroika::sub_102c4ad0(CEntityVSlots *pTarget, float flHeight, float flDist)
{
	TroikaJumpView *pView = (TroikaJumpView *)this;
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	pView->m_vecJumpOrigin = *pSelf->slot217();
	pView->m_flJumpHeight = flHeight;
	Vector dir = *pTarget->slot217() - *pSelf->slot217();
	dir.z = 0;
	float flLen = VectorNormalize(dir);
	if (flLen < flDist)
		pView->m_vecJumpTarget = *pTarget->slot217();
	else
		pView->m_vecJumpTarget = *pTarget->slot217() - dir * flDist;
}
// END FUNCTION

// FUNCTION: 0x102c4c50 size=0x4e
#include "CAI_BaseNPCTroika.h"
#include <math.h>
struct SGravVar109ef2d4 { virtual void vfunc0(); virtual char vfunc1(); char m_pad04[0x28 - 4]; float m_f28; };
struct CAI_ArcRecord { char m_pad00[8]; float m_f08; };
extern SGravVar109ef2d4 *g_109ef2d4;
void CAI_BaseNPCTroika::sub_102c4c50(CAI_ArcRecord *pRec, float flTime, int a, int b)
{
	float fGravity = g_109ef2d4->vfunc1() ? 0.0f : g_109ef2d4->m_f28;
	pRec->m_f08 = sqrt(2 * (fGravity * *(float *)((char *)this + 0x3ec) * flTime));
	sub_102c4cc0(pRec, a, b);
}
// END FUNCTION

// FUNCTION: 0x102c4cc0 size=0x119
#include "CAI_BaseNPCTroika.h"
#include "ConVar.h"
#include "Vector.h"
#include <math.h>

struct CArcGravView { char m_pad0000[0x3ec]; float m_flGravity; float GetGravity() const { return m_flGravity; } };

void CAI_BaseNPCTroika::sub_102c4cc0(CAI_ArcRecord *pRec, int a, int b)
{
	Vector *pVel = (Vector *)pRec;
	const Vector &vecStart = *(const Vector *)a;
	const Vector &vecEnd = *(const Vector *)b;
	float flGravity = g_109ef2d4->vfunc1() ? 0.0f : g_109ef2d4->m_fValue;
	Vector vecDir = vecEnd - vecStart;
	float flA = ((CArcGravView *)this)->GetGravity() * flGravity * -0.5f;
	float vz = pVel->z;
	float flDisc = vz * vz - (-vecDir.z) * flA * 4.0f;
	if (flDisc < 0.0f)
		flDisc = 0.0f;
	float flSqrt = sqrt(flDisc);
	float t = (-vz - flSqrt) / (flA + flA);
	vecDir.z = 0;
	float flLen = VectorNormalize(vecDir);
	float flScale = (t > 0.0001f) ? flLen / t : 0.0f;
	Vector vecVel = vecDir * flScale;
	pVel->x = vecVel.x;
	pVel->y = vecVel.y;
}
// END FUNCTION

// FUNCTION: 0x102c4e30 size=0x33
#include "CBaseEntity.h"
#include "Vector.h"

extern Vector g_1070d9d0;
extern Vector g_1070d1b0;

struct CTroikaEntView {
	char pad0[0x3ec];
	float m_flGravity;
	void sub_100b2f50(const Vector *p);
	void sub_100b2770(const Vector *p);
	void SetGravity(float g) { m_flGravity = g; }
	void sub_102c4e30();
};

// TARGET: sub_102c4e30
void CTroikaEntView::sub_102c4e30()
{
	((CBaseEntity *)this)->vfunc93(5, 0);
	SetGravity(0);
	sub_100b2f50(&g_1070d9d0);
	sub_100b2770(&g_1070d1b0);
}
// END FUNCTION

// FUNCTION: 0x102c4e80 size=0x1d
#include "CBaseEntity.h"
// TARGET: sub_102c4e80
void __fastcall sub_102c4e80(CBaseEntity *p)
{
    p->vfunc93(4, 0);
    float *f = (float *)p;
    float t = f[0x64b8 / 4];
    f[0x3ec / 4] = t;
}
// END FUNCTION

// FUNCTION: 0x102c4eb0 size=0x241
#include "CCollisionProperty.h"
#include <math.h>
#include "CAI_BaseNPCTroika.h"
#include "UTIL_Trace.h"
#include "CEntityVSlots.h"

struct CBoxRay
{
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_n34;

	void Init(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, char a, char b)
	{
		VectorSubtract(end, start, m_Delta);
		m_IsSwept = (m_Delta.LengthSqr() != 0);
		VectorSubtract(maxs, mins, m_Extents);
		m_Extents *= 0.5f;
		m_IsRay = (m_Extents.x * m_Extents.x + (m_Extents.y * m_Extents.y + m_Extents.z * m_Extents.z) < 1e-6);
		VectorAdd(mins, maxs, m_StartOffset);
		m_StartOffset *= 0.5f;
		VectorAdd(start, m_StartOffset, m_Start);
		m_StartOffset *= -1.0f;
		m_b32 = b;
		m_b33 = 0;
		m_n34 = 0;
		if (a && !m_IsRay)
		{
			float flLen2DSqr = m_Extents.y * m_Extents.y + m_Extents.x * m_Extents.x;
			float flLen2D = sqrt(flLen2DSqr);
			m_n34 = flLen2D;
			if (m_n34 > 1e-6)
				m_b33 = 1;
		}
	}
};

inline void TraceBoxDown(const Vector &start, const Vector &mins, const Vector &maxs, unsigned int mask, void *ignore, CGameTrace *ptr)
{
	CBoxRay ray;
	ray.Init(start, start, mins, maxs, 1, 0);
	CTraceFilterSimple traceFilter(ignore, 0);
	g_1070b254->vfunc4((Ray_t *)&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

// TARGET: CAI_BaseNPCTroika::sub_102c4eb0
char CAI_BaseNPCTroika::sub_102c4eb0()
{
	if (sub_100b3700() & 1)
		return 1;
	CGameTrace tr;
	Vector vecStart = *(Vector *)vfunc217();
	unsigned int mask = ((CEntityVSlots *)this)->slot237();
	vecStart.z -= 1.0f;
	ICollideable *pCol = (ICollideable *)((char *)this + 0x270);
	const Vector &mins = *(const Vector *)pCol->vfunc1();
	const Vector &maxs = *(const Vector *)pCol->vfunc2();
	TraceBoxDown(vecStart, mins, maxs, mask, this, &tr);
	if (tr.m_startsolid)
	{
		((CEntityVSlots *)this)->slot208((CEntityVSlots *)tr.m_pEnt);
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102c51a0 size=0x119
#include "CAI_BaseNPCTroika.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct S_Ent1 { virtual void v0(); virtual unsigned int *v1(); };
struct S_EH {
    unsigned int m_h;
    S_EH &operator=(S_Ent1 *p) { m_h = *p->v1(); return *this; }
};
struct S_Slots {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
    V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6();
    virtual CBaseEntity *s167();
    V10(d0) V10(d1) V10(d2) V10(d3) V10(d4) V10(d5) V10(d6) V10(d7) V10(d8) V10(d9)
    V10(e0) V10(e1) V10(e2)
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5();
    virtual void s304();
    V10(g0) V10(g1) V10(g2) V10(g3) V10(g4) V10(g5) V10(g6) V10(g7) V10(g8)
    virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4();
    virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8();
    virtual int s404(CBaseEntity *p);
    V10(i0) V10(i1) V10(i2) V10(i3) V10(i4) V10(i5) V10(i6) V10(i7) V10(i8) V10(i9)
    V10(j0) V10(j1) V10(j2) V10(j3) V10(j4) V10(j5) V10(j6) V10(j7) V10(j8)
    virtual void s595();
    V10(k0)
    virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void l4();
    virtual void l5(); virtual void l6(); virtual void l7();
    virtual void s614();
};
struct S_N {
    char pad0[0x1b3c]; const char *m_pszFile; int m_nLine;
    char pad1[0x5cc4 - 0x1b44]; int m_n5cc4;
    char pad2[0x60ac - 0x5cc8]; S_EH m_h60ac;
};

void CAI_BaseNPCTroika::sub_102c51a0(CBaseEntity *pEnemy)
{
    if (pEnemy) {
        if (((S_Slots *)this)->s167()) {
            if (((S_Slots *)this)->s404(((S_Slots *)this)->s167()) == 1)
                sub_1033c6b0(0x800);
        }
        if (((S_Slots *)this)->s404(pEnemy) == 1)
            sub_1033c6b0(0x800);
        sub_1026d050();
        sub_102b52a0(1, 1);
        ((S_Slots *)this)->s304();
        m_flags14bc |= 0x80840000;
        if (*(int *)((char *)pEnemy + 0xa8))
            sub_10273790("player D_LI 99", 0);
        sub_102c4470(pEnemy);
        sub_102c4640("Combat");
        ((S_N *)this)->m_pszFile = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
        ((S_N *)this)->m_nLine = 0x6e42;
        ((S_N *)this)->m_n5cc4 = 1;
        sub_1026e340(1);
        sub_10279cc0(pEnemy);
        ((S_N *)this)->m_h60ac = (S_Ent1 *)pEnemy;
        ((S_Slots *)this)->s614();
        m_flags5b84 = 0x3b1c;
        ((S_Slots *)this)->s595();
    }
}
// END FUNCTION

// FUNCTION: 0x102c5310 size=0x104
#include "CAI_BaseNPCTroika.h"

struct CTroikaV5310
{
	char m_pad0[0x1b3c];
	const char *m_pszFile1b3c;
	int m_nLine1b40;
	char m_pad1b44[0x5b84 - 0x1b44];
	int m_n5b84;
	char m_pad5b88[0x5cc4 - 0x5b88];
	int m_nState5cc4;
	char m_pad5cc8[0x60ac - 0x5cc8];
	unsigned int m_h60ac;
	char m_pad60b0[0x6338 - 0x60b0];
	int m_n6338;
	int m_n633c;
};

struct CHandleY
{
	unsigned int m_Index;
	void Set(CBaseEntity *pEnt)
	{
		if (pEnt)
			m_Index = *pEnt->vfunc1();
		else
			m_Index = 0xffffffff;
	}
};

// TARGET: CAI_BaseNPCTroika::sub_102c5310
void CAI_BaseNPCTroika::sub_102c5310(CBaseEntity *pEnemy)
{
    CTroikaV5310 *p = (CTroikaV5310 *)this;
    if (pEnemy) {
        if (vfunc167()) {
            if (vfunc404((CBaseEntity *)vfunc167()) == 1)
                sub_1033c6b0(0x800);
        }
        if (vfunc404(pEnemy) == 1)
            sub_1033c6b0(0x800);
        sub_1026d050();
        sub_102b52a0(1, 1);
        vfunc595();
        vfunc304();
        m_flags14bc |= 0x80820000;
        if (*(int *)((char *)pEnemy + 0xa8))
            sub_10273790("player D_LI 99", 0);
        p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
        p->m_nLine1b40 = 0x6e7f;
        p->m_nState5cc4 = 0xb;
        sub_1026e340(0xb);
        p->m_n6338 = 6;
        p->m_n633c = 6;
        ((CHandleY *)&p->m_h60ac)->Set(pEnemy);
        p->m_n5b84 = 0x9fbd;
    }
}
// END FUNCTION
