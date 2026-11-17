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
