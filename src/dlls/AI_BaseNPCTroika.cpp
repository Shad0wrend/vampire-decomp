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

// FUNCTION: 0x102b8d20 size=0x287
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
extern int g_shiftTest;

namespace block_102b8d20 {
struct CUnknown100290c0 : EHandleEntityList
{
	unsigned int sub_100290c0(unsigned int *ph);
};
unsigned int CUnknown100290c0::sub_100290c0(unsigned int *ph)
{
	unsigned int h = *ph;
	if (h == 0xffffffff)
		return 0;
	EHandleEntInfo *p = &m_EntPtrArray[h & 0x1fff];
	if (p->m_SerialNumber == (int)(h >> g_shiftTest))
		return (unsigned int)p->m_pEntity;
	return 0;
}
}
using namespace block_102b8d20;

#define LIST ((CUnknown100290c0 *)EHandleDetail::g_10566458)
#define H5B78 (*(CHandle<CEntityVSlots> *)((char *)this + 0x5b78))
#define H6160 (*(CHandle<CEntityVSlots> *)((char *)this + 0x6160))
#define H618C (*(CHandle<CEntityVSlots> *)((char *)this + 0x618c))
#define TVEC (*(Vector *)((char *)this + 0x5dd0))

int CAI_BaseNPCTroika::sub_102b8d20(int a, int b)
{
	unsigned int *ph = (unsigned int *)((char *)this + 0x5b78);
	if (LIST->sub_100290c0(ph))
	{
		CBaseEntity *pEnemy = (CBaseEntity *)((CEntityVSlots *)LIST->sub_100290c0(ph))->slot167();
		if (pEnemy)
		{
			if (vfunc404(pEnemy) == 1)
			{
				CEntityVSlots *pAI = *(CEntityVSlots **)(LIST->sub_100290c0(ph) + 0x94);
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
