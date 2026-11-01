// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
