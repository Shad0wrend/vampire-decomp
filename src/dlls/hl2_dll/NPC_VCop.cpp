// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x10371ee0 size=0x1e2
#include "CNPC_VCop.h"
#include "CEHandleGet.h"

extern int g_1093acac;
extern int g_1093acb0;

static inline CNPC_VCopPlayer *CopTarget(const unsigned int &rh)
{
	return (CNPC_VCopPlayer *)EHandle_Get(rh);
}

int CNPC_VCop::vfunc438()
{
	m_n1b2c = 0xc;
	switch (m_n5cc0) {
	case 1:
		if (m_b65f4) {
			char bNone = 0;
			if (!m_p6590)
				bNone = 1;
			if (!(CopTarget(m_h628c) && !CopTarget(m_h628c)->sub_1017f8d0() && !CopTarget(m_h628c)->sub_1017f770()) && !bNone)
				break;
			if (!m_b6672) {
				if (g_1093acac - g_1093acb0 <= 3) {
					m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
					m_nLine1b34 = 0x412;
					return 0x170;
				}
			}
			if (!m_b6672) {
				m_b6672 = 1;
				g_1093acb0++;
			}
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
			m_nLine1b34 = 0x40e;
			return 0x16e;
		}
		break;
	case 0xc:
		if (sub_10269d30(0x1e) && CopTarget(m_h628c)) {
			CopTarget(m_h628c)->sub_1017e6f0(0);
			return 0x6d;
		}
		sub_1026e340(1);
		break;
	}
	return CNPC_VHumanCombatant::vfunc438();
}
// END FUNCTION

// FUNCTION: 0x10372150 size=0x1d9
#include "CNPC_VCop.h"

// TARGET: CNPC_VCop::vfunc440
int CNPC_VCop::vfunc440(int arg)
{
	switch (arg) {
	case 0x103:
		return 0x15a;
	case 0x6b:
		return (m_flags14bc & 0x80000) == 0x80000 ? 0x132 : 0x15b;
	case 0x94:
		return 0x15c;
	case 0x96:
		return 0x15d;
	case 0x89:
		return 0x15e;
	case 0xaa:
		return 0x160;
	case 0xab:
		return 0x161;
	case 0xac:
		return 0x162;
	case 0xad:
		return 0x163;
	case 0xae:
		return 0x164;
	case 0xaf:
		return 0x165;
	case 0xb0:
		return 0x166;
	case 0xb1:
		return 0x167;
	case 0xb2:
		return 0x168;
	case 0xb3:
		return 0x169;
	case 0xb4:
		return 0x16a;
	case 0xb5:
		return 0x16b;
	case 0xb6:
		return 0x16c;
	case 0xb7:
		return 0x16d;
	}
	return CNPC_VHumanCombatant::vfunc440(arg);
}
// END FUNCTION

// FUNCTION: 0x103723b0 size=0x5
#include "CNPC_VCop.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VCop::vfunc375
// the game's 0x103723b0: a tail call (jmp) of CNPC_VHuman::vfunc375
int CNPC_VCop::vfunc375(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc375(a0);
}
// END FUNCTION

// FUNCTION: 0x103723d0 size=0x5
#include "CNPC_VCop.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VCop::vfunc433
// the game's 0x103723d0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc433
void CNPC_VCop::vfunc433()
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc433();
}
// END FUNCTION

// FUNCTION: 0x103723f0 size=0x236
#include "CNPC_VCop.h"
#include "CEHandleGet.h"

// TARGET: CNPC_VCop::sub_103723f0
int CNPC_VCop::sub_103723f0()
{
	EHANDLE &hPlayer = (EHANDLE &)m_h628c;
	bool bPlayer = false;
	if (sub_10269aa0(0x25) && sub_10269aa0(0xa)) {
		if (sub_10269aa0(0x6d)) {
			CBaseEntity *pPlayer = hPlayer.Get();
			if (m_h6160.Get() == pPlayer)
				bPlayer = true;
		}
		if (sub_10269aa0(0x70)) {
			CBaseEntity *pPlayer = hPlayer.Get();
			if (m_h618c.Get() == pPlayer)
				bPlayer = true;
		}
	}
	if (sub_10269aa0(0x4c) || sub_10269aa0(0x4d) || sub_10269aa0(0x4e)) {
		m_b5b80 = 0;
		CBaseEntity *pPlayer = hPlayer.Get();
		if (m_h5b7c.Get() == pPlayer)
			goto LPursue;
	}
	if (bPlayer) {
LPursue:
		((CNPC_VCopSlots *)this)->slot597((CNPC_VCopPlayer *)hPlayer.Get(), 10);
		((CNPC_VCopSlots *)this)->slot596(hPlayer.Get());
		m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
		m_nLine1b40 = 0x527;
		return m_n5cc4 = 2;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103726c0 size=0x302
#include "CNPC_VCop.h"
#include "CEHandleGet.h"

// TARGET: CNPC_VCop::vfunc461
int CNPC_VCop::vfunc461()
{
	m_n1b38 = 0xc;
	switch (m_n5cc0) {
	case 0xc:
		if (sub_10269d30(0x21)) {
			((CNPC_VCopSlots *)this)->slot597((CNPC_VCopPlayer *)EHandle_Get(m_h628c), 10);
			((CNPC_VCopSlots *)this)->slot596(EHandle_Get(m_h628c));
			m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
			m_nLine1b40 = 0x5e1;
			return m_n5cc4 = 8;
		}
		if (sub_10269d30(0x1f)) {
			((CNPC_VCopSlots *)this)->slot597((CNPC_VCopPlayer *)EHandle_Get(m_h628c), 10);
			((CNPC_VCopSlots *)this)->slot596(EHandle_Get(m_h628c));
			m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
			m_nLine1b40 = 0x5f1;
			return m_n5cc4 = 8;
		}
		if (sub_10269d30(0x22)) {
			((CNPC_VCopSlots *)this)->slot597((CNPC_VCopPlayer *)EHandle_Get(m_h628c), 10);
			((CNPC_VCopSlots *)this)->slot596(EHandle_Get(m_h628c));
			m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
			m_nLine1b40 = 0x601;
			return m_n5cc4 = 2;
		}
		if (sub_10269d30(0x20)) {
			((CNPC_VCopSlots *)this)->slot597((CNPC_VCopPlayer *)EHandle_Get(m_h628c), 10);
			((CNPC_VCopSlots *)this)->slot596(EHandle_Get(m_h628c));
			m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
			m_nLine1b40 = 0x611;
			return m_n5cc4 = 2;
		}
		m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
		m_nLine1b40 = 0x616;
		return m_n5cc4 = 1;
	case 1:
	case 3: {
		int nIdeal = sub_103723f0();
		if (nIdeal)
			return m_n5cc4 = nIdeal;
		break;
	}
	}
	return CNPC_VHumanCombatant::vfunc461();
}
// END FUNCTION

// FUNCTION: 0x10372aa0 size=0xd
struct CNPC_VHumanCombatantFwd;
struct CNPC_VCopFwd {
    void sub_10372aa0(int a);
};
struct CNPC_VHumanCombatantFwd {
    void sub_10387500(int a);
};

// TARGET: sub_10372aa0
void CNPC_VCopFwd::sub_10372aa0(int a)
{
    a = *(volatile int *)&a;
    ((CNPC_VHumanCombatantFwd *)this)->sub_10387500(a);
}
// END FUNCTION

// FUNCTION: 0x10372ac0 size=0x5
#include "CNPC_VCop.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VCop::vfunc434
// the game's 0x10372ac0: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VCop::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x10372ae0 size=0x5
#include "CTakeDamageInfo.h"
#include "CNPC_VCop.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VCop::vfunc390
// the game's 0x10372ae0: a tail call (jmp) of CNPC_VHuman::vfunc390
int CNPC_VCop::vfunc390(CTakeDamageInfo *a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc390(a0);
}
// END FUNCTION

// FUNCTION: 0x10372b00 size=0x11
#include "CNPC_VCop.h"

// TARGET: CNPC_VCop::vfunc420
void CNPC_VCop::vfunc420()
{
	CNPC_VHumanCombatant::vfunc420();
	m_b6670 = 0;
}
// END FUNCTION

// FUNCTION: 0x10372b30 size=0x5
#include "CNPC_VCop.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VCop::vfunc366
// the game's 0x10372b30: a tail call (jmp) of CNPC_VHuman::vfunc366
bool CNPC_VCop::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x10372b50 size=0x5
#include "CNPC_VCop.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VCop::vfunc144
// the game's 0x10372b50: a tail call (jmp) of CNPC_VHuman::vfunc144
void CNPC_VCop::vfunc144(void *a0)
{
#define a0 ((int)a0)
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc144(a0);
#undef a0
}
// END FUNCTION

// FUNCTION: 0x10372b70 size=0xaa
#include "CGlobalEntityList.h"
#include "CNPC_VCop.h"
extern unsigned int g_1093ac3c;
extern float g_1093aca8;
extern CGlobalEntityList *g_10566458;

static inline CGlobalEntityList_Ent *LookupHandle(unsigned int h)
{
	if (h != -1) {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13))
			return pSlot->m_pEntity;
	}
	return 0;
}

int CNPC_VCop::vfunc404(CNPC_VCopTarget *pEnt)
{
	if (!pEnt)
		return 0;
	if ((void *)pEnt == (void *)LookupHandle(g_1093ac3c) && gpGlobals->curtime < g_1093aca8)
		return 1;
	CNPC_VCopPlayer *pPlayer = pEnt->m_pPlayer;
	if (pPlayer) {
		if (pPlayer->sub_1017f8d0())
			return 1;
		if (pPlayer->sub_1017f770() > 0)
			return 1;
	}
	return sub_10299da0(pEnt);
}
// END FUNCTION

// FUNCTION: 0x10372c50 size=0x48
#include "CNPC_VCop.h"
#include "CAI_BaseNPCTroika.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CNPCView
{
	S100(a) S100(b) S10(c0)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
	virtual void d5(); virtual void d6();
	virtual Vector *vfunc217();
	char m_pad3d4[0x3d4 - 4];
	Vector m_vec3d4;
};

struct CThisView
{
	S100(a) S100(b) S100(c) S100(d) S100(e)
	S10(f0) S10(f1) S10(f2) S10(f3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3();
	virtual void vfunc544(CNPCView *pNPC, Vector *pOrigin, Vector *pVel);
};

CNPCView * __stdcall sub_102707d0(int a);

void CNPC_VCop::vfunc596(int a)
{
	if (a) {
		CNPCView *pNPC = sub_102707d0(a);
		((CAI_BaseNPC *)this)->sub_10279a50((int)pNPC);
		((CThisView *)this)->vfunc544(pNPC, pNPC->vfunc217(), &pNPC->m_vec3d4);
		a = (int)pNPC;
	}
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc596(a);
}
// END FUNCTION

// FUNCTION: 0x10372cc0 size=0xc9
#include "CNPC_VCop.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;

static inline CBaseEntity *ResolveHandle(unsigned int h)
{
	EntInfo *e;
	return (h != 0xffffffff && (e = &g_10566458->m_entries[h & 0x1fff], e->m_serial == (int)(h >> 13))) ? e->m_pEntity : 0;
}

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CCopSlots
{
	S100(a) S100(b) S100(c) S100(d) S10(e0) S10(e1) S10(e2) S10(e3) S10(e4) S10(e5)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
	virtual int vfunc464();	// the NPC state
	void sub_10273790(const char *pszMessage, int a);
	void sub_102b4fb0(CBaseEntity *pTarget, int a);	// CAI_BaseNPCTroika::vfunc597
};

struct CNPC_VCopUnit
{
	virtual void v0();
	virtual unsigned int *vfunc1();	// GetRefEHandle
	void sub_1017f650();
};

void CNPC_VCop::vfunc597(CBaseEntity *pTarget, int a)
{
	if (pTarget == ResolveHandle(m_h628c)) {
		if (!ResolveHandle(*(unsigned int *)((char *)this + 0x6664))) {
			if (((CCopSlots *)this)->vfunc464() == 2) {
				CNPC_VCopUnit *pPlayer;
				if (pTarget == 0)
					pPlayer = 0;
				else
					pPlayer = *(CNPC_VCopUnit **)((char *)pTarget + 0xa8);
				pPlayer->sub_1017f650();
				if (pPlayer)
					*(unsigned int *)((char *)this + 0x6664) = *pPlayer->vfunc1();
				else
					*(unsigned int *)((char *)this + 0x6664) = 0xffffffff;
			}
		}
		((CCopSlots *)this)->sub_10273790("Player D_HT 10", 0);
	}
	((CCopSlots *)this)->sub_102b4fb0(pTarget, a);
}
// END FUNCTION

// FUNCTION: 0x10372dd0 size=0xee
#include "CNPC_VCop.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102dfaa0.h"
#include "CEHandleGet.h"

extern char g_106b8540[];
const char *sub_101d3730(const char *pszFormat, const char *pszFile, int nLine);

struct CopView {
	char m_pad0000[0x1a94];
	unsigned int m_h1a94;
	char m_pad1a98[0x6668 - 0x1a98];
	int m_n6668;
};

void CNPC_VCop::vfunc598(CBaseEntity *pTarget)
{
	CAI_BaseNPCTroika *pNPC = (CAI_BaseNPCTroika *)this;
	CopView *pView = (CopView *)this;
	if (pTarget == (CBaseEntity *)EHandle_Get(m_h628c)) {
		pNPC->sub_10332ca0(pTarget, 4, 0);
		pView->m_n6668 = 0;
		if ((CBaseEntity *)pNPC->vfunc167() == pTarget)
			pNPC->sub_10279a50(0);
		if ((CBaseEntity *)EHandle_Get(pView->m_h1a94) == pTarget)
			pNPC->sub_10279b70(0);
		((CUnknown102dfaa0 *)pNPC->vfunc541())->sub_102dfaa0(pTarget, (int)sub_101d3730("%s(%d) :", "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp", 0x73b));
		sub_10273790("Player D_NU 10", 0);
	} else {
		pNPC->CAI_BaseNPCTroika::vfunc598(pTarget);
	}
}
// END FUNCTION
