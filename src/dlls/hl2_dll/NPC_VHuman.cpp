// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
