// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10375120 size=0x5
#include "CNPC_VPlayerController.h"
bool CNPC_VPlayerController::vfunc363(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10375140 size=0x5
#include "CNPC_VPlayerController.h"
bool CNPC_VPlayerController::vfunc362(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10375160 size=0x5
#include "CNPC_VPlayerController.h"
bool CNPC_VPlayerController::vfunc365(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10375180 size=0x5
#include "CNPC_VPlayerController.h"
bool CNPC_VPlayerController::vfunc364(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103751a0 size=0x5
#include "CNPC_VPlayerController.h"
bool CNPC_VPlayerController::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10376f50 size=0x1e
#include "CNPC_VPlayerController.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VPlayerController::vfunc5
CNPC_VPlayerController *CNPC_VPlayerController::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103a44f0 size=0x5
#include "CNPC_VPlayerController.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VPlayerController::vfunc104
// the game's 0x103a44f0: a tail call (jmp) of CNPC_VHuman::vfunc104
void CNPC_VPlayerController::vfunc104()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103a4510 size=0x45
#include "CNPC_VPlayerController.h"

struct CPlayerControllerView
{
	char m_pad[0x63f0];
	char m_b63f0;
};

const char **sub_1042bff0(const char **pOut, const char *psz);

void CNPC_VPlayerController::vfunc103()
{
	sub_103c4ef0();
	sub_10332aa0(1, 3, 0);
	((CPlayerControllerView *)this)->m_b63f0 = 1;
	const char *pszName;
	sub_100a0420(*sub_1042bff0(&pszName, "playercontroller"));
	sub_100b3840(0x10);
}
// END FUNCTION

// FUNCTION: 0x103a4700 size=0x13
#include "CNPC_VPlayerController.h"
#include "CAI_BaseNPCTroika.h"

void __fastcall sub_10002a7c(CNPC_VPlayerController *self);

#define VT(n) virtual void vt##n();
#define VT10(p) VT(p##0) VT(p##1) VT(p##2) VT(p##3) VT(p##4) VT(p##5) VT(p##6) VT(p##7) VT(p##8) VT(p##9)

struct CNPC_VPlayerControllerVtbl
{
	VT10(0) VT10(1) VT10(2) VT10(3) VT10(4) VT10(5) VT10(6) VT10(7) VT10(8) VT10(9)
	VT10(10) VT10(11) VT10(12) VT10(13) VT10(14) VT10(15) VT10(16) VT10(17) VT10(18) VT10(19)
	VT10(20) VT10(21) VT10(22) VT10(23) VT10(24) VT10(25) VT10(26) VT10(27) VT10(28) VT10(29)
	VT10(30) VT10(31) VT10(32) VT10(33) VT10(34) VT10(35) VT10(36) VT10(37) VT10(38) VT10(39)
	VT10(40) VT10(41) VT10(42) VT10(43) VT10(44) VT10(45) VT10(46) VT10(47) VT10(48) VT10(49)
	VT10(50) VT10(51) VT10(52) VT10(53) VT10(54) VT10(55) VT10(56) VT10(57) VT10(58) VT10(59)
	VT10(60)
	VT(610) VT(611) VT(612) VT(613)
	virtual void vt614();
};

void CNPC_VPlayerController::vfunc431()
{
	sub_10002a7c(this);
	((CNPC_VPlayerControllerVtbl *)this)->vt614();
}
// END FUNCTION

// FUNCTION: 0x103a4730 size=0x1
#include "CNPC_VPlayerController.h"
void CNPC_VPlayerController::vfunc488()
{
}
// END FUNCTION

// FUNCTION: 0x103a4750 size=0x1
#include "CNPC_VPlayerController.h"
void CNPC_VPlayerController::vfunc489()
{
}
// END FUNCTION

// FUNCTION: 0x103a4770 size=0x1
#include "CNPC_VPlayerController.h"
void CNPC_VPlayerController::vfunc490()
{
}
// END FUNCTION

// FUNCTION: 0x103a4790 size=0x1
#include "CNPC_VPlayerController.h"
void CNPC_VPlayerController::vfunc491()
{
}
// END FUNCTION

// FUNCTION: 0x103a47b0 size=0x1
#include "CNPC_VPlayerController.h"
void CNPC_VPlayerController::vfunc492()
{
}
// END FUNCTION

// FUNCTION: 0x103a47d0 size=0x1
#include "CNPC_VPlayerController.h"
void CNPC_VPlayerController::vfunc493()
{
}
// END FUNCTION

// FUNCTION: 0x103a47f0 size=0x1
#include "CNPC_VPlayerController.h"
void CNPC_VPlayerController::vfunc494()
{
}
// END FUNCTION

// FUNCTION: 0x103a4810 size=0x1
#include "CNPC_VPlayerController.h"
void CNPC_VPlayerController::vfunc495()
{
}
// END FUNCTION

// FUNCTION: 0x103a4830 size=0x1
#include "CNPC_VPlayerController.h"
void CNPC_VPlayerController::vfunc496()
{
}
// END FUNCTION

// FUNCTION: 0x103a4850 size=0x1
#include "CNPC_VPlayerController.h"
void CNPC_VPlayerController::vfunc497()
{
}
// END FUNCTION

// FUNCTION: 0x103a4870 size=0xd
struct CNPC_VHumanFwd;
struct CNPC_VPlayerControllerFwd {
    void sub_103a4870(int a);
};
struct CNPC_VHumanFwd {
    void sub_10385a10(int a);
};

// TARGET: sub_103a4870
void CNPC_VPlayerControllerFwd::sub_103a4870(int a)
{
    a = *(volatile int *)&a;
    ((CNPC_VHumanFwd *)this)->sub_10385a10(a);
}
// END FUNCTION

// FUNCTION: 0x103a4890 size=0x6
#include "CNPC_VPlayerController.h"
int CNPC_VPlayerController::vfunc138()
{
    return 2;
}
// END FUNCTION

// FUNCTION: 0x103a48b0 size=0x74
#include "CNPC_VPlayerController.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
struct S103a48b0Owner {
    char m_pad[0x1480];
    char m_b1480;
    char sub_100b5190();
};
struct S103a48b0Ent {
    char m_pad[0x9c];
    S103a48b0Owner *m_pOwner;
};
int CNPC_VPlayerController::vfunc404(void *pEnt)
{
    if (!pEnt)
        return 0;
    unsigned int h = *(unsigned int *)((char *)this + 0x60ac);
    void *pTarget;
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        pTarget = s->m_Serial == (int)(h >> 13) ? (void *)s->m_pEntity : 0;
    } else
        pTarget = 0;
    if (pEnt == pTarget)
        return 3;
    S103a48b0Owner *pOwner = ((S103a48b0Ent *)pEnt)->m_pOwner;
    if (pOwner && pOwner->m_b1480 && !pOwner->sub_100b5190())
        return 1;
    return 4;
}
// END FUNCTION

// FUNCTION: 0x103a4950 size=0x4c
#include "CNPC_VPlayerController.h"

struct CPlayerCtrlEnt
{
	const char *sub_1000b5cd();	// GetDebugName (stub 0x1000b5cd)
};

struct CPlayerCtrlPlayer
{
	void sub_1000fa33(int a, float f, const char *pszText);	// stub 0x1000fa33
};

struct CPlayerCtrlOwner
{
	char m_pad00[0xa8];
	CPlayerCtrlPlayer *m_pPlayer;	// 0xa8
};

const char *sub_100067f3(const char *pszFormat, ...);	// stub of 0x101d3730, __cdecl

// TARGET: CNPC_VPlayerController::vfunc300
void CNPC_VPlayerController::vfunc300(CPlayerCtrlEnt *pEnt, int b, int c)
{
	CPlayerCtrlOwner *pOwner = ((CPlayerCtrlOwner *(__fastcall *)(CNPC_VPlayerController *))(*(void ***)this)[97])(this);
	if (!pOwner)
		return;
	CPlayerCtrlPlayer *pPlayer = pOwner->m_pPlayer;
	if (pPlayer) {
		const char *pszName;
		if (pEnt)
			pszName = pEnt->sub_1000b5cd();
		else
			pszName = "UNKNOWN";
		pPlayer->sub_1000fa33(4, -1.0f, sub_100067f3("CNPC_VPlayerController::Event_TookLife %s", pszName));
	}
}
// END FUNCTION

// FUNCTION: 0x103a49c0 size=0x71
#include "CNPC_VPlayerController.h"

#define SV(n) virtual void v##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct SlotOwner {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8)
	SV(90) SV(91) SV(92) SV(93) SV(94) SV(95) SV(96)
	virtual SlotOwner *v97();
	char pad[0xa8 - 4];
	struct SlotAnim *m_pAnim;
};

struct SlotAnim {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23)
	SV(240) SV(241) SV(242) SV(243) SV(244)
	virtual void v245(int a, int b, int c, int d, int e);
};

extern void (*g_109f364c)(const char *);

void CNPC_VPlayerController::vfunc245(int a, int b, int c, int d, int e)
{
	sub_1000cefa(a, b, c, d, e);
	SlotOwner *pOwner = ((SlotOwner *)this)->v97();
	if (pOwner && pOwner->m_pAnim) {
		pOwner->m_pAnim->v245(a, b, c, d, e);
		return;
	}
	g_109f364c("Player Controller NPC adding extra animations, but is not attached to a player. This is probably bad.\n");
}
// END FUNCTION

// FUNCTION: 0x103a4a60 size=0x38
#include "CNPC_VPlayerController.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"

void sub_1000ede0();
extern void *g_109f364c;

// TARGET: CNPC_VPlayerController::vfunc246
void CNPC_VPlayerController::vfunc246()
{
    sub_1000ede0();
    CBaseEntity *pOwner = ((CBaseEntity *)this)->vfunc97();
    if (pOwner != 0)
    {
        CBasePlayer *pPlayer = *(CBasePlayer **)((char *)pOwner + 0xa8);
        if (pPlayer != 0)
        {
            pPlayer->vfunc246();
            return;
        }
    }
    ((int (__cdecl *)(const char *))g_109f364c)("Player Controller NPC removing extra animations, but is not attached to a player. This is probably bad.\n");
}
// END FUNCTION
