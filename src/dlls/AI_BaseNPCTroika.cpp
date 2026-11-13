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
#define sub_102af660() sub_102af660(); virtual int vfunc438()
#include "CAI_BaseNPCTroika.h"
#undef sub_102af660
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
static int g_shiftTest = 13;  // the game's shr 0xd; the same-unit copy must read it for VC6 to compile the caller as the game

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
