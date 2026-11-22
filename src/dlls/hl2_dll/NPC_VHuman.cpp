// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x103847f0 size=0x22f
#include "CNPC_VHuman.h"
#include "CAI_Motor.h"

struct CEnemiesView { void sub_102dfed0(Vector *pVec, int pEnemy); };
struct CHumanMotorView { void sub_102e0b40(); };
struct CHumanView
{
	char m_pad0000[0x1568];
	int m_n1568;
	char m_pad156c[0x5d44 - 0x156c];
	CAI_Motor *m_pMotor5d44;
	char m_pad5d48[0x5d9c - 0x5d48];
	float m_f5d9c;
};
struct CHumanWeaponView { char m_pad[0x8c0]; float m_f8c0; };
struct CHumanSeqView { char m_pad[0x2d8]; int m_n2d8; };
struct CHumanAnimView { char m_pad[0x6f0]; int m_n6f0; CHumanSeqView *sub_1008d990(int n); };
struct CHumanEntView { char m_pad[0x9c]; CHumanAnimView *m_p9c; };
struct CHumanMoveView { void sub_102ee1c0(float f); };
struct CHumanBaseView { void sub_102a1910(const int *pTask); };

float sub_102d61b0(int a);

// TARGET: CNPC_VHuman::vfunc442
void CNPC_VHuman::vfunc442(const int *pTask)
{
	CHumanView *pView = (CHumanView *)this;
	switch (pTask[0]) {
	case 0x9f:
		if (sub_1032e7b0()) {
			CHumanMoveView *pMove = (CHumanMoveView *)m_p5d34;
			float f = sub_102d61b0(pView->m_n1568) * 2;
			pMove->sub_102ee1c0(((CHumanWeaponView *)sub_1032e7b0())->m_f8c0 * *(const float *)&pTask[1] + f);
			sub_10273e80(0);
			return;
		}
		m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHuman.cpp";
		m_nLine1b48 = 0x138;
		vfunc448(3);
		return;
	case 0x89:
		pView->m_f5d9c = gpGlobals->curtime;
		sub_10289ee0(0x4b);
		return;
	case 0x8a:
		pView->m_f5d9c = gpGlobals->curtime;
		sub_10289ee0(0x4b);
		return;
	case 0x8b: {
		int act = 0x51;
		CHumanEntView *pEnemy = (CHumanEntView *)vfunc167();
		if (pEnemy) {
			CHumanAnimView *pAnim = pEnemy->m_p9c;
			if (pAnim) {
				Vector vec;
				((CHumanMotorView *)pView->m_pMotor5d44)->sub_102e0b40();
				((CEnemiesView *)vfunc541())->sub_102dfed0(&vec, vfunc167());
				pView->m_pMotor5d44->sub_102e2020(&vec.x, 0);
				CHumanSeqView *pSeq = pAnim->sub_1008d990(pAnim->m_n6f0);
				if (pSeq && pSeq->m_n2d8 >= 0)
					act = pSeq->m_n2d8;
			}
		}
		sub_10289ee0(act);
		return;
	}
	case 0x8e:
		sub_10289ee0(0x52);
		return;
	case 0x8f:
		sub_10289ee0(0x1156);
		return;
	case 0x8d:
		sub_10289ee0(0x1154);
		return;
	case 0x90:
		sub_10289ee0(0x1152);
		return;
	case 0x91:
		sub_10289ee0(0x1153);
		return;
	default:
		((CHumanBaseView *)this)->sub_102a1910(pTask);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x10384ab0 size=0x34c
#include "CAI_Motor.h"
#include "CLogicAuto.h"
#include "vampire.h"
#include "CNPC_VHuman.h"
#include "CAI_BaseNPC_vfunc461.h"
#include "CUnknown103498b0.h"

struct CVHumanTask444
{
	int m_nType;
	float m_flTime;
};

// TARGET: CNPC_VHuman::vfunc444
void CNPC_VHuman::vfunc444(void *pTaskRaw)
{
	CVHumanTask444 *pTask = (CVHumanTask444 *)pTaskRaw;
	switch (pTask->m_nType)
	{
	case 0x89:
	case 0x8a:
	{
		sub_10280a50();
		Vector vecEnemy = ((CEnemiesView *)vfunc541())->sub_102dfed0((CBaseEntity *)vfunc167());
		m_pMotor5d44->sub_102e20b0((const float *)&vecEnemy, -2.0f);
		if (vfunc251() || pTask->m_flTime < gpGlobals->curtime - m_flTime5d9c)
			goto complete;
		break;
	}
	case 0x8b:
	{
		bool bFlag = false;
		sub_10280a50();
		CBaseEntity *pEnemy = (CBaseEntity *)vfunc167();
		if (!pEnemy)
			return;
		CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)pEnemy->m_p9c;
		if (!pChar)
			return;
		Vector vecEnemy = ((CEnemiesView *)vfunc541())->sub_102dfed0((CBaseEntity *)vfunc167());
		m_pMotor5d44->sub_102e20b0((const float *)&vecEnemy, -2.0f);
		CUnknown103498b0 *pObj = (CUnknown103498b0 *)pChar->sub_10345980((CBaseEntity *)this);
		char bGo;
		if (m_nActivityff0 != 0x1157)
		{
			float flLimit;
			if (pObj)
			{
				if (!pObj->sub_103498b0())
					bFlag = true;
				flLimit = 0.5f;
			}
			else
				flLimit = 1.0f;
			if (flLimit <= m_fl06f8)
				bGo = 1;
			else
				bGo = vfunc251();
		}
		else
		{
			bGo = pChar->sub_10345330();
		}
		if (!bGo)
			return;
		if (sub_10295460(0x1155, 0) != -1 && bFlag)
		{
			sub_10273e80(0);
			return;
		}
		m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHuman.cpp";
		m_nLine1b48 = 0x1da;
		vfunc448(0x21);
		break;
	}
	case 0x8e:
	case 0x8f:
	case 0x90:
	case 0x91:
	{
		{
			CBaseEntity *pEnemy = (CBaseEntity *)vfunc167();
			if (pEnemy && pEnemy->m_p9c)
			{
				Vector vecEnemy = ((CEnemiesView *)vfunc541())->sub_102dfed0((CBaseEntity *)vfunc167());
				m_pMotor5d44->sub_102e20b0((const float *)&vecEnemy, -2.0f);
			}
		}
		if (vfunc251() || gpGlobals->curtime >= m_flNextAttack1564)
		{
complete:
			sub_10273e80(0);
		}
		break;
	}
	case 0x8d:
	{
		sub_10280a50();
		CBaseEntity *pEnemy = (CBaseEntity *)vfunc167();
		CBaseAnimating *pChar = pEnemy ? (CBaseAnimating *)pEnemy->m_p9c : 0;
		if (!pChar)
		{
			sub_10273e80(0);
			return;
		}
		{
			Vector vecEnemy = ((CEnemiesView *)vfunc541())->sub_102dfed0((CBaseEntity *)vfunc167());
			m_pMotor5d44->sub_102e20b0((const float *)&vecEnemy, -2.0f);
			int nSeq = *(int *)((char *)pChar + 0x6f0);
			char *pDesc = (char *)pChar->sub_1008d990(nSeq);
			if (!pDesc)
				return;
			float t = (pChar->sub_10091230(nSeq) * (gpGlobals->curtime - (*(float *)((char *)pChar + 0x174) - 0.1f))) * *(float *)((char *)pChar + 0x6f4) + *(float *)((char *)pChar + 0x6f8);
			int nCount = *(int *)(pDesc + 0x2c4);
			for (int i = 0; i < nCount; i++)
			{
				float *p = (float *)(pDesc + *(int *)(pDesc + 0x2c8) + 4 + i * 0xbc);
				if (t < *p)
					return;
			}
		}
		sub_10273e80(0);
		break;
	}
	default:
		CAI_BaseNPCTroika::vfunc444(pTaskRaw);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10384ee0 size=0x154
#include "CNPC_VHuman.h"
#include "CUnknown102e0150.h"
#include "CEHandleGet.h"

struct CHumanView438
{
	char m_pad0000[0x1b2c];
	int m_n1b2c;
	const char *m_pszFile;	// 0x1b30
	int m_nLine;	// 0x1b34
	char m_pad1b38[0x5b80 - 0x1b38];
	char m_b5b80;
	char m_pad5b81[0x5cc0 - 0x5b81];
	int m_nState;	// 0x5cc0
	char m_pad5cc4[0x65c0 - 0x5cc4];
	unsigned int m_hEnemy;	// 0x65c0
};

#define HD(x) virtual void x();
#define HT(p) HD(p##0) HD(p##1) HD(p##2) HD(p##3) HD(p##4) HD(p##5) HD(p##6) HD(p##7) HD(p##8) HD(p##9)
#define HH(p) HT(p##0) HT(p##1) HT(p##2) HT(p##3) HT(p##4) HT(p##5) HT(p##6) HT(p##7) HT(p##8) HT(p##9)

struct CHumanSlots438
{
	HH(a0) HH(b0) HH(c0) HH(d0) HH(e0)
	HT(f0) HT(f1) HT(f2) HT(f3)
	HD(g0)
	virtual CUnknown102e0150 *slot541();
	HT(h0) HT(h1) HT(h2) HT(h3) HT(h4) HT(h5) HD(h60) HD(h61)
	virtual int slot604(unsigned int flags);
	virtual int slot605(unsigned int flags);
};


int CNPC_VHuman::vfunc438()
{
	CHumanView438 *v = (CHumanView438 *)this;
	CHumanSlots438 *s = (CHumanSlots438 *)this;
	v->m_n1b2c = 0x14;
	switch (v->m_nState) {
	case 2:
		v->m_b5b80 = 0;
		if (sub_10014df8(0xb)) {
			if (s->slot541()->sub_102dfa20(EHandle_Get(v->m_hEnemy))) {
				float flLastSeen = s->slot541()->sub_102e0150(EHandle_Get(v->m_hEnemy));
				float flWindow = 1.0f;
				if (gpGlobals->curtime >= flWindow + flLastSeen) {
					v->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHuman.cpp";
					v->m_nLine = 0x261;
					return 0x56;
				}
			} else {
				v->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHuman.cpp";
				v->m_nLine = 0x269;
				return 0x56;
			}
		}
		unsigned int flags = sub_10007e19() ? ((CEntityVSlots *)sub_10007e19())->slot360() : 0;
		if (flags & 0x18000) {
			int r = s->slot604(flags);
			if (r)
				return r;
		} else {
			int r = s->slot605(flags);
			if (r)
				return r;
		}
	}
	return sub_102af660();
}
// END FUNCTION

// FUNCTION: 0x103850a0 size=0xd2
#include "CNPC_VHuman.h"
#include "CCineNPC.h"
#include "CEHandleGet.h"

struct CNPCStateView {
	char m_pad0000[0x5cc0];
	int m_nState;	// 0x5cc0
	int m_nIdealState;	// 0x5cc4
};

int CNPC_VHuman::vfunc482(char bDisregardState, int interruptLevel)
{
	int result = 1;
	if (EHandle_Get(m_h5d74)) {
		CCineNPC *pCine = (CCineNPC *)EHandle_Get(m_h5d74);
		if (!pCine->sub_101a8ac0())
			return 0;
		result = 2;
	}
	if (!((CEntityVSlots *)this)->slot158())
		return 0;
	CNPCStateView *pView = (CNPCStateView *)this;
	if (!bDisregardState && pView->m_nState != 0 && pView->m_nState != 1 && pView->m_nIdealState != 1 && (pView->m_nState != 3 || interruptLevel < 1))
		return (pView->m_nState == 4) ? result : 0;
	return result;
}
// END FUNCTION

// FUNCTION: 0x103851c0 size=0x5
#include "CNPC_VHuman.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VHuman::vfunc440
// the game's 0x103851c0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc440
int CNPC_VHuman::vfunc440(int a0)
{
	return CAI_BaseNPCTroika::vfunc440(a0);
}
// END FUNCTION

// FUNCTION: 0x103851e0 size=0x26f
#include "CNPC_VHuman.h"
struct CVH461View { char m_pad[0x65f6]; char m_b65f6; };
struct CVH461Obj { virtual bool vfunc0(); virtual bool vfunc1(); char m_pad[0x28]; int m_n2c; };
struct CVH461Dev { virtual void vfunc0(); virtual void vfunc1(); };
extern CVH461Obj *g_1092447c;
extern CVH461Dev *g_10924a6c;
extern void (__cdecl *g_109f3658)(int, const char *, ...);

#define FILE_ "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHuman.cpp"

// TARGET: CNPC_VHuman::sub_103851e0
int CNPC_VHuman::sub_103851e0()
{
	m_n1b38 = 0x14;
	switch (m_n5cc0) {
	case 0xb:
		if (sub_10269d30(0x54)) {
			m_n5cc4 = 2;
			int r = *(volatile int *)&m_n5cc4;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x3ec;
			return r;
		}
		if (sub_10269d30(0x46)) {
			m_n5cc4 = 2;
			int r = *(volatile int *)&m_n5cc4;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x3f1;
			return r;
		}
		if ((char)((char (__fastcall *)(CNPC_VHuman *))(*(void ***)this)[462])(this)) {
			m_n5cc4 = 1;
			int r = *(volatile int *)&m_n5cc4;
			m_pszFile1b3c = FILE_;
			m_nLine1b40 = 0x3f6;
			return r;
		}
		break;
	case 2:
		if (m_flags5d8c & 2) {
			if (sub_10014df8(0x46) || sub_10014df8(0x54)) {
				m_flags5d8c &= ~2;
				g_10924a6c->vfunc1();
				sub_100041b0(0x5d);
			}
		}
		if (!vfunc167())
			goto noenemy;
		else if (sub_10269d30(0x47)) {
noenemy:
			if (sub_10014df8(0x46)) {
				m_pszFile1b3c = FILE_;
				if (((CVH461View *)this)->m_b65f6) {
					m_nLine1b40 = 0x3a3;
					m_n5cc4 = 1;
				} else {
					m_nLine1b40 = 0x3a7;
					m_n5cc4 = 3;
				}
			} else if (m_h647c.Get()) {
				m_pszFile1b3c = FILE_;
				if (((CVH461View *)this)->m_b65f6) {
					m_nLine1b40 = 0x3b0;
					m_n5cc4 = 1;
				} else {
					m_nLine1b40 = 0x3b4;
					m_n5cc4 = 3;
				}
			} else if (!g_1092447c->vfunc1() && g_1092447c->m_n2c) {
				m_pszFile1b3c = FILE_;
				m_nLine1b40 = 0x3bc;
				m_n5cc4 = 0xb;
			} else {
				m_pszFile1b3c = FILE_;
				if (((CVH461View *)this)->m_b65f6) {
					m_nLine1b40 = 0x3c2;
					m_n5cc4 = 1;
				} else {
					m_nLine1b40 = 0x3c6;
					m_n5cc4 = 3;
				}
			}
			g_109f3658(2, "***Combat state with no enemy!\n");
			return m_n5cc4;
		}
		break;
	}
	return sub_102ad660();
}
// END FUNCTION

// FUNCTION: 0x103854f0 size=0x2fa
#include "CNPC_VHuman.h"
struct CVH375Obj { virtual bool vfunc0(); virtual bool vfunc1(); char m_pad[0x28]; int m_n2c; };
struct CVH375Wpn { char m_pad[0x19c]; unsigned int m_flags19c; };
struct CVH375View { char m_pad[0x6410]; bool m_b6410; };
extern CVH375Obj *g_10924f74;
extern CVH375Obj *g_10924034;
extern CVH375Obj *g_10923f5c;

// TARGET: CNPC_VHuman::vfunc375
int CNPC_VHuman::vfunc375(int act)
{
	CVH375View *v = (CVH375View *)this;
	if (vfunc513() & 0x40) {
		switch (act) {
		case 0x11: act = 9; break;
		case 0x15: act = 0x13; break;
		}
	}
	if (sub_10007e19() && (((CVH375Wpn *)sub_10007e19())->m_flags19c & 0x40) != 0x40) {
		if ((vfunc513() & 0x40) && !g_10924f74->vfunc1() && g_10924f74->m_n2c && (m_flags14bc & 0x400) == 0x400) {
			v->m_b6410 = true;
		} else if ((m_flags14b8 & 0x10000) == 0x10000) {
			v->m_b6410 = false;
		} else if ((m_flags5b84 & 0x200) == 0x200) {
			v->m_b6410 = true;
		} else {
			v->m_b6410 = false;
			switch (m_n5cc0) {
			case 2:
				v->m_b6410 = true;
				break;
			case 3:
				if ((g_10923f5c->vfunc1() || !g_10923f5c->m_n2c) && !(m_flags5d8c & 0x8000000))
					break;
				v->m_b6410 = true;
				break;
			case 0xb:
				if ((g_10924034->vfunc1() || !g_10924034->m_n2c) && !(m_flags5d8c & 0x8000000))
					break;
				v->m_b6410 = true;
				break;
			}
		}
		if (v->m_b6410) {
			switch (act) {
			case 1:
				if (sub_10007e19()) {
					void *w = (void *)sub_10007e19();
					if (((unsigned int (__fastcall *)(void *))(*(void ***)w)[360])(w) & 0x6000)
						act = 5;
				}
				break;
			case 0x3b: act = 0x3d; break;
			case 0x3c: act = 0x3e; break;
			case 0x9d: act = 0x9f; break;
			case 0x9e: act = 0xa0; break;
			case 0xa1: act = 0xa3; break;
			case 0xa2: act = 0xa4; break;
			}
		} else {
			switch (act) {
			case 9: act = 0x16; break;
			case 0x13: act = 0x17; break;
			}
		}
	} else {
		v->m_b6410 = false;
	}
	return sub_10295590(act);
}
// END FUNCTION

// FUNCTION: 0x103858b0 size=0x108
#include "CNPC_VHuman.h"

int CNPC_VHuman::vfunc376(int act)
{
	switch (act) {
	case 0x3d:
		act = 0x3b;
		break;
	case 0x3e:
		act = 0x3c;
		break;
	case 0x9f:
		act = 0x9d;
		break;
	case 0xa0:
		act = 0x9e;
		break;
	case 0xa3:
		act = 0xa1;
		break;
	case 0xa4:
		act = 0xa2;
		break;
	}
	return sub_10295710(act);
}
// END FUNCTION

// FUNCTION: 0x10385a10 size=0xd
void sub_1028fcc0(float a);

void sub_10385a10(float a)
{
	sub_1028fcc0(a);
}
// END FUNCTION

// FUNCTION: 0x10385a30 size=0x1
#include "CNPC_VHuman.h"
// TARGET: CNPC_VHuman::vfunc434
void CNPC_VHuman::vfunc434() {
}
// END FUNCTION

// FUNCTION: 0x10385a50 size=0x5
#include "CTakeDamageInfo.h"
#include "CNPC_VHuman.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VHuman::vfunc390
// the game's 0x10385a50: a tail call (jmp) of CAI_BaseNPCTroika::vfunc390
int CNPC_VHuman::vfunc390(CTakeDamageInfo *a0)
{
	return CAI_BaseNPCTroika::vfunc390(a0);
}
// END FUNCTION

// FUNCTION: 0x10385a70 size=0x5
#include "CNPC_VHuman.h"

// TARGET: CNPC_VHuman::vfunc366
bool CNPC_VHuman::vfunc366(int a, int b, int c)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x10385a90 size=0x5
#include "CNPC_VHuman.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VHuman::vfunc144
// the game's 0x10385a90: a tail call (jmp) of CAI_BaseNPCTroika::vfunc144
void CNPC_VHuman::vfunc144(int a0)
{
	CAI_BaseNPCTroika::vfunc144(a0);
}
// END FUNCTION

// FUNCTION: 0x10385ab0 size=0x12c
#include "CNPC_VHuman.h"
#include "CUnknown1025ddd0.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

struct SDifficulty {
	virtual void s0();
	virtual char s1();
	char pad[0x24];
	float m28;
};
extern SDifficulty *g_10924a1c;

struct SNotifyObj {
	virtual void s0();
	virtual void s1();
};
extern SNotifyObj *g_10924edc;

struct SHumanView
{
	char m_pad0000[0x5b84];
	unsigned int m_flags5b84;
	char m_pad5b88[0x6070 - 0x5b88];
	float m_f6070;
	float m_f6074;
	char m_b6078;
	char m_pad6079[0x6268 - 0x6079];
	float m_f6268;
	float m_f626c;
	char m_pad6270[0x65e8 - 0x6270];
	CUnknown1025ddd0 *m_pGroup;
};

struct CNPC_VHumanUnit : CNPC_VHuman
{
	char sub_10385ab0(int unused);	// "CNPC_VHuman::vfunc599"
};

char CNPC_VHumanUnit::sub_10385ab0(int unused)
{
	SHumanView *pView = (SHumanView *)this;
	if ((pView->m_flags5b84 & 2) == 2 || vfunc293() != 0) {
		pView->m_b6078 = 1;
		return 1;
	}
	if (gpGlobals->curtime >= pView->m_f6070) {
		bool bOK = true;
		double f = g_10924a1c->s1() ? 0.0f : g_10924a1c->m28;
		if ((float)(f + f) < pView->m_f6268 && vfunc308())
			bOK = false;
		if (!(pView->m_f626c > 64.0f && sub_10014df8(0x59))) {
			if (bOK) {
				pView->m_pGroup->sub_1025db70((CBaseEntity *)this);
				if ((pView->m_flags5b84 & 0x1000) == 0x1000 || pView->m_pGroup->sub_1025db70((CBaseEntity *)this)) {
					pView->m_b6078 = 1;
					pView->m_f6074 = g_1070b244->vfunc1(7.5f, 15.0f) + gpGlobals->curtime;
					g_10924edc->s1();
					return 1;
				}
			}
		}
	}
	pView->m_b6078 = 0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10385c30 size=0x8d
#include "CNPC_VHuman.h"
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

char CNPC_VHuman::vfunc600(int unused)
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

// FUNCTION: 0x10385cf0 size=0x57
#include "CNPC_VHuman.h"
struct CHumanNotify { virtual void v0(); virtual void vfunc1(); };
extern CHumanNotify *g_10924edc;
struct CHumanFields601
{
	char m_pad0000[0x6070];
	float m_f6070;
	char m_pad6074[4];
	char m_b6078;
	char m_pad6079[0x65e8 - 0x6079];
	CAI_NamedThing *m_pNamed65e8;
};
void CNPC_VHuman::vfunc601(int a)
{
	CHumanFields601 *f = (CHumanFields601 *)this;
	g_10924edc->vfunc1();
	f->m_b6078 = 0;
	if (vfunc308())
		f->m_f6070 = enginerandom->vfunc1(5.0f, 10.0f) + gpGlobals->curtime;
	f->m_pNamed65e8->sub_1025ddd0(this);
}
// END FUNCTION

// FUNCTION: 0x10385d70 size=0x9d
#include "CNPC_VHuman.h"

struct CHumanTimeScale
{
	virtual void slot0();
	virtual char slot1();
	char m_pad0004[0x24];
	float m_f28;
};
extern CHumanTimeScale *g_10924a1c;
extern float g_104454c4;
char __fastcall sub_1025db50(int *p);

// TARGET: CNPC_VHuman::vfunc602
char CNPC_VHuman::vfunc602()
{
	if ((m_flags5b84 & 2) == 2 || vfunc293())
		return 0;
	if (((CEntityVSlots *)this)->slot308())
	{
		if (gpGlobals->curtime >= m_f6074)
			return 1;
	}
	else
	{
		double x = g_10924a1c->slot1() ? g_104454c4 : g_10924a1c->m_f28;
		if ((float)(x + x) <= m_f6268 && !sub_1025db50(*(int **)((char *)this + 0x65e8)))
			return 1;
	}
	return (*(CAI_NamedThing **)((char *)this + 0x65e8))->sub_1025de90(this);
}
// END FUNCTION

// FUNCTION: 0x10385e40 size=0x5a9
#include "CNPC_VHuman.h"
#include "CUnknown10924a1c.h"
#include "Tier1.h"

#define NPC_RET(line, val) do { m_nLine1b34 = (line); m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHuman.cpp"; return (val); } while (0)

inline float GetDifficultyTime()
{
	float f;
	if (g_10924a1c->vfunc1())
		f = 0.0f;
	else
		f = g_10924a1c->m_fl28;
	return f;
}

// TARGET: CNPC_VHuman::vfunc604
int CNPC_VHuman::vfunc604(int unused)
{
	CBaseEntity *pEnemy = (CBaseEntity *)vfunc167();
	if (m_b6078)
	{
		if (vfunc602())
		{
			vfunc601((int)pEnemy);
			if (vfunc308())
				NPC_RET(0x5ff, 0xe9);
			float f = GetDifficultyTime();
			const float &dist = m_f6268;
			if ((float)(f + f) <= dist)
				NPC_RET(0x605, 0xe7);
			NPC_RET(0x609, 0xe4);
		}
	}
	else if (!vfunc599((int)pEnemy))
	{
		int r = sub_102b6fe0((int)pEnemy);
		if (r)
			return r;
		float f = GetDifficultyTime();
		if (f + 200.0f < m_f6268)
			NPC_RET(0x61b, 0xe7);
		if (enginerandom->vfunc2(0, 99) >= 25)
		{
			if (!(GetDifficultyTime() > m_f6268))
				NPC_RET(0x627, 0xe5);
		}
		NPC_RET(0x623, 0xe4);
	}
	int r = sub_102b7370();
	if (r == 0 && (r = sub_102b6fe0((int)pEnemy)) == 0)
	{
		if (sub_10269d30(0xc))
			NPC_RET(0x63d, 0xd5);
		if (sub_10269d30(0xd))
			NPC_RET(0x641, 0xd6);
		char c1 = sub_10014df8(0xf);
		char c2 = sub_10014df8(0xe);
		if (!c1 && !c2)
		{
			if (sub_10014df8(0x51))
			{
				if (vfunc308())
					NPC_RET(0x659, 0xdc);
				NPC_RET(0x65d, 0xdd);
			}
			bool bReady = false;
			if (m_f626c > 64.0f)
			{
				if (m_fl6274 == -1.0f)
					m_fl6274 = enginerandom->vfunc1(3.0f, 4.0f) + gpGlobals->curtime;
				else if (gpGlobals->curtime >= m_fl6274)
					bReady = true;
			}
			else
				m_fl6274 = -1.0f;
			if (vfunc308())
			{
				if (sub_10014df8(9) || sub_10014df8(0x1a) || sub_10014df8(0x59) || bReady)
				{
					vfunc601((int)pEnemy);
					NPC_RET(0x67f, 0xe9);
				}
			}
			if (sub_10014df8(0x59))
			{
				vfunc601((int)pEnemy);
				NPC_RET(0x687, 0x17);
			}
			if (!sub_10014df8(9) && !sub_10014df8(0x60))
				NPC_RET(0x6c1, 0xc7);
			if (pEnemy)
			{
				if (sub_102a11d0(((CEntityVSlots *)pEnemy)->slot192()))
				{
					if (vfunc308())
						NPC_RET(0x698, 0xe0);
					NPC_RET(0x69c, 0xe1);
				}
			}
			r = sub_102b7690(0, 1, 0, 1);
			if (r)
				return r;
			if (!(GetDifficultyTime() <= m_f6268 || bReady))
			{
				if (vfunc308())
					NPC_RET(0x6b7, 0xd1);
				NPC_RET(0x6bb, 0xd2);
			}
			if (vfunc308())
				NPC_RET(0x6ac, 0xca);
			NPC_RET(0x6b0, 0xcb);
		}
		if (c1 && (!c2 || g_109f3868(0, 1) == 1))
			NPC_RET(0x64b, 0xdb);
		m_nLine1b34 = 0x64f;
		r = 0xd3;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHuman.cpp";
	}
	return r;
}
// END FUNCTION

// FUNCTION: 0x10386560 size=0x322
#include "CNPC_VHuman.h"
#include "CStatusFlagList.h"
extern CStatusFlagList g_10739a4c;

#define FILE_STAMP(line) (m_nLine1b34 = (line), m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHuman.cpp")

int CNPC_VHuman::vfunc605(int unused)
{
	if (m_b6078) {
		FILE_STAMP(0x6cf);
		return 0xe3;
	}
	if (!m_p6444) {
		m_p6444 = (CBaseEntity *)((CEntityVSlots *)this)->slot609(0);
		if (!m_p6444)
			goto L1;
	}
	if (!sub_10014df8(0x2f)) {
		FILE_STAMP(0x6e4);
		return 0xec;
	}
L1:
	if (sub_10014df8(8) && vfunc307() && vfunc599(vfunc167())) {
		FILE_STAMP(0x6e9);
		return 0xe3;
	}
	if (sub_10014df8(0x3c)) {
		FILE_STAMP(0x6ee);
		return 0xb8;
	}
	int r = sub_102b8620();
	if (r) return r;
	r = sub_102b7370();
	if (r) return r;
	r = sub_102b7cf0();
	if (r) return r;
	if (!sub_10014df8(0x5f) && !sub_10014df8(8)) {
		int h = (int)vfunc167();
		if (h)
			h = *(int *)(h + 0x9c);
		if (!g_10739a4c.sub_101e3f50((CStatusTarget *)h)) {
			r = vfunc606(unused);
			if (r) return r;
			if (sub_10014df8(0x2e)) { FILE_STAMP(0x736); return 0xbd; }
			if (sub_10014df8(0x60)) { FILE_STAMP(0x73b); return 0xb1; }
			return 0;
		}
	}
	if (sub_10014df8(0x2f) || sub_10014df8(0x63)) {
		if (sub_102b7f40()) { FILE_STAMP(0x720); return 0xb8; }
		if (vfunc307() && vfunc599(vfunc167())) { FILE_STAMP(0x724); return 0xe8; }
		FILE_STAMP(0x728);
		return 0xb9;
	}
	if (sub_102b7f40()) { FILE_STAMP(0x70f); return 0xef; }
	if (vfunc307() && enginerandom->vfunc2(0, 0x63) < 0x19 && vfunc599(vfunc167())) { FILE_STAMP(0x713); return 0xe8; }
	FILE_STAMP(0x717);
	return 0xf0;
}
// END FUNCTION
