// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x10392d80 size=0x833
#include "CNPC_VTzimisce.h"
#include "CNPC_VMingXiao.h"
#include "CAI_Motor.h"
#include "CUnknown102e0150.h"
#include "CUnknown102e0a60.h"
#include "CUnknown102ee120.h"
#include "CUnknown10398d90.h"
#include "VectorHelpers.h"
struct CUnknown102e0a40 { void sub_102e0a40(float f); };
extern Vector g_10934060;
extern float g_1093b960;
extern const float g_104bc6cc;
struct CMingXiaoNavGoal
{
	CMingXiaoNavGoal(int t, const Vector &d, int act, float tol, unsigned fl = 0, CBaseEntity *pTgt = 0)
		: type(t), dest(d), n10(-1), activity(act), n18(-1), n1c(-1), fl20(tol), n24(fl),
		  tolerance(g_1093b960), vec2c(g_10934060), pTarget(pTgt), n3c(0)
	{
	}
	int type;
	Vector dest;
	int n10;
	int activity;
	int n18;
	int n1c;
	float fl20;
	unsigned n24;
	float tolerance;
	Vector vec2c;
	CBaseEntity *pTarget;
	int n3c;
};
inline float AngleY(const float *p) { return p[1]; }
float sub_102d61b0(int);
void sub_101cf600(CBaseEntity *);
void sub_101c0b10();
void CNPC_VMingXiao::vfunc442(void *pTask)
{
    switch (*(int *)pTask) {
    case 0x9f:
        if (sub_1032e7b0()) {
            CUnknown102ee120 *pNav = m_p5d34;
            pNav->sub_102ee1c0(sub_102d61b0(m_n1568) * 2.0f + *(float *)((char *)sub_1032e7b0() + 0x8c0) * ((float *)pTask)[1]);
            sub_10273e80(0);
            return;
        }
        m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
        m_nLine1b48 = 0x296;
        vfunc448_slot(3);
        return;
    case 0x89:
        sub_102e0b40((float *)m_pMotor5d44);
        m_f5d9c = gpGlobals->curtime;
        sub_10289ee0(0x4b);
        return;
    case 0x8a:
        sub_102e0b40((float *)m_pMotor5d44);
        m_f5d9c = gpGlobals->curtime;
        sub_10289ee0(0x4b);
        return;
    case 0x8b:
        {
            CBaseEntity *pEnemy = vfunc167();
            if (pEnemy && *(int *)((char *)pEnemy + 0x9c)) {
                sub_102e0b40((float *)m_pMotor5d44);
                Vector vec;
                ((CUnknown102e0150 *)vfunc541())->sub_102dfed0(&vec, vfunc167());
                m_pMotor5d44->sub_102e2020(&vec.x, 0);
            }
            sub_10289ee0(0x51);
            return;
        }
    case 0x8e:
        sub_10289ee0(0x52);
        return;
    case 0x14a:
        sub_1039a750();
        sub_10273e80(0);
        return;
    case 0x14b:
        return;
    case 0x14c:
        vfunc105("models/character/monster/MingXiao/MingXiao.mdl");
        m_nEffectFlags |= 0x10;
        m_n168 = 0;
        m_n16c = 0;
        m_n1568 = 0xf;
        sub_10273070(1);
        sub_101cf600(this);
        m_b6678 = 1;
        sub_10273e80(0);
        return;
    case 0x14d:
        sub_100ac4e0((int)sub_101c0b10, 0, 0);
        m_flNextThink = gpGlobals->curtime + 0.01f;
        sub_10273e80(0);
        return;
    case 0x14e:
        sub_10395ce0();
        sub_10273e80(0);
        return;
    case 0x14f:
        sub_103937d0((int)pTask, 0, 0x112a);
        return;
    case 0x150:
        sub_103937d0((int)pTask, 1, 0x112b);
        return;
    case 0x151:
        sub_103937d0((int)pTask, 2, 0x112c);
        return;
    case 0x152:
        sub_103937d0((int)pTask, 3, 0x112d);
        return;
    case 0x153:
        sub_102e0b40((float *)m_pMotor5d44);
        ((CUnknown102e0a40 *)m_pMotor5d44)->sub_102e0a40(AngleY(vfunc221()));
        ((CUnknown102e0a60 *)m_pMotor5d44)->sub_102e0a60(0x41a00000);
        sub_10289ee0(0x1131);
        return;
    case 0x154:
        sub_102e0b40((float *)m_pMotor5d44);
        ((CUnknown102e0a40 *)m_pMotor5d44)->sub_102e0a40(AngleY(vfunc221()));
        ((CUnknown102e0a60 *)m_pMotor5d44)->sub_102e0a60(0x41a00000);
        sub_10289ee0(0x1130);
        return;
    case 0x155:
        {
            sub_102e0b40((float *)m_pMotor5d44);
            CBaseEntity *pOwner = m_h6680.Get();
            vfunc388(!pOwner ? 0 : *(int *)((char *)pOwner + 0xa0), 0);
            sub_10289ee0(0x19);
            m_flTime66c0 = sub_10397f70() + gpGlobals->curtime;
            return;
        }
    case 0x156:
        {
            int n = (int)((float *)pTask)[1];
            if (n >= 0 && n <= 4) {
                ((CUnknown10398d90 *)this)->sub_10398d90(n);
                sub_10273e80(0);
                return;
            }
            sub_10398d90(0);
            sub_10273e80(0);
            return;
        }
    case 0x157:
        {
            CMingXiaoNavGoal goal(4, *(Vector *)&m_n6720, 0x13, g_104bc6cc);
            m_p5d34->sub_102ecd20(&goal, 0);
            return;
        }
    case 0x158:
        if (m_nSide671c == 4) {
            sub_10289ee0(0x112f);
            return;
        }
        sub_10289ee0(0x112e);
        return;
    case 0x159:
        if (m_nMode673c == 3 || m_nMode673c == 4) {
            sub_103990a0();
            sub_10273e80(0);
            return;
        }
        break;
    case 0x15a:
        sub_102e0b40((float *)m_pMotor5d44);
        ((CUnknown102e0a40 *)m_pMotor5d44)->sub_102e0a40(AngleY(vfunc221()));
        ((CUnknown102e0a60 *)m_pMotor5d44)->sub_102e0a60(0x41a00000);
        if (m_nSide671c == 4) {
            sub_10289ee0(0x1131);
            return;
        }
        sub_10289ee0(0x1130);
        return;
    case 0x15b:
        {
            float y = enginerandom->vfunc1(-90.0f, 90.0f);
            vfunc345("hit_yaw", y, 0);
            sub_10289ee0(0x73);
            return;
        }
    case 0x15c:
        {
            Vector vec;
            sub_10398630(m_eLastLostTentacle, &vec);
            Vector d = *(Vector *)vfunc217() - vec;
            float y = -sub_101d2c70(&d);
            y += enginerandom->vfunc1(-15.0f, 15.0f);
            vfunc345("hit_yaw", y, 0);
            sub_10289ee0(0x74);
            return;
        }
    case 0x15d:
        sub_102c4310("Ming_xiao_tentacle_damage_emitter", this, 1, -1, 0);
        sub_10273e80(0);
        return;
    case 0x15e:
        sub_102c4310("Ming_xiao_death_emitter", this, 1, -1, 0);
        sub_102c42a0("Ming_xiao_death_emitter2", this, "Bip01 Spine6", 0);
        break;
    case 0x15f:
        sub_102c4310("Ming_xiao_death_proxy_emitter", this, 1, -1, 0);
        sub_102c42a0("Ming_xiao_death_proxy_emitter2", this, "Bip01 Spine6", 0);
        break;
    default:
        sub_102a1910(pTask);
        return;
    }
    sub_10273e80(0);
}
// END FUNCTION

// FUNCTION: 0x103937d0 size=0x10f
#include "CBaseEntity.h"
#include "CNPC_VMingXiao.h"
#include "globalvars.h"
void __fastcall sub_102e0b40(CAI_Motor *);
#define V1(n) virtual void n##a(); 
#define V10(n) V1(n##0) V1(n##1) V1(n##2) V1(n##3) V1(n##4) V1(n##5) V1(n##6) V1(n##7) V1(n##8) V1(n##9)
#define V100(n) V10(n##0) V10(n##1) V10(n##2) V10(n##3) V10(n##4) V10(n##5) V10(n##6) V10(n##7) V10(n##8) V10(n##9)
struct CWeaponSlotView361
{
	V100(a) V100(b) V100(c)
	V10(d) V10(e) V10(f) V10(g) V10(h) V10(i)
	virtual void pad0();
	virtual int vfunc361(int act);
};
// TARGET: CNPC_VMingXiao::sub_103937d0
void CNPC_VMingXiao::sub_103937d0(int a, int nSlot, int act)
{
	sub_102e0b40(m_pMotor5d44);
	CBaseEntity *pTarget = m_h667c.Get();
	vfunc388(!pTarget ? 0 : pTarget->m_n00a0, 0);
	CWeaponSlotView361 *pWeapon = (CWeaponSlotView361 *)sub_1032e7b0();
	if (!pWeapon) {
		vfunc448_slot(0x1f);
		return;
	}
	CBaseEntity *pGoal = vfunc167();
	int id = !pGoal ? 0 : (int)pGoal->m_p9c;
	int req = pWeapon->vfunc361(act);
	int seq = vfunc376_slot(req);
	int out = -1;
	if (vfunc331(pWeapon, id, act, &out) && out >= 0)
		vfunc311(act, seq, out);
	else
		sub_10289ee0(act);
	m_flSlotTimeA[nSlot] = sub_103983d0(nSlot) + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10393930 size=0x5d8
#include "CNPC_VMingXiao.h"
#include "CAI_Motor.h"
#include "CBaseAnimating.h"
#include "CUnknown102e0150.h"
#include "CUnknown102e0a60.h"
void CNPC_VMingXiao::vfunc444(void *pTask)
{
    switch (*(int *)pTask) {
    case 0x89:
    case 0x8a:
        {
            sub_10280a50();
            CBaseEntity *pEnemy = vfunc167();
            Vector vec;
            ((CUnknown102e0150 *)vfunc541())->sub_102dfed0(&vec, pEnemy);
            m_pMotor5d44->sub_102e20b0(&vec.x, -2.0f);
            if (vfunc251() || ((float *)pTask)[1] < gpGlobals->curtime - *(float *)((char *)this + 0x5d9c)) {
                sub_10273e80(0);
                return;
            }
        }
        break;
    case 0x8b:
        {
            sub_10280a50();
            CBaseEntity *pEnemy = vfunc167();
            if (pEnemy && *(int *)((char *)pEnemy + 0x9c)) {
                Vector vec;
                ((CUnknown102e0150 *)vfunc541())->sub_102dfed0(&vec, vfunc167());
                m_pMotor5d44->sub_102e20b0(&vec.x, -2.0f);
            }
            if (vfunc251()) {
                sub_10273e80(0);
                return;
            }
        }
        break;
    case 0x8e:
        {
            sub_10280a50();
            CBaseEntity *pEnemy = vfunc167();
            CBaseAnimating *pChar = 0;
            if (pEnemy)
                pChar = *(CBaseAnimating **)((char *)pEnemy + 0x9c);
            if (!pChar) {
                sub_10273e80(0);
                return;
            }
            pChar->sub_100952d0(-1);
            int nSeq = *(int *)((char *)pChar + 0x6f0);
            char *pDesc = (char *)pChar->sub_1008d990(nSeq);
            if (pDesc) {
                float flCycle = pChar->sub_10091230(nSeq) * (gpGlobals->curtime - (*(float *)((char *)pChar + 0x174) - 0.1f)) * *(float *)((char *)pChar + 0x6f4) + *(float *)((char *)pChar + 0x6f8);
                for (int i = 0; i < *(int *)(pDesc + 0x2c4); i++) {
                    if (flCycle < *(float *)(pDesc + *(int *)(pDesc + 0x2c8) + 4 + i * 0xbc))
                        return;
                }
                sub_10273e80(0);
                return;
            }
            break;
        }
    case 0x14b:
        sub_1039aa20();
        return;
    case 0x14f:
    case 0x150:
    case 0x151:
    case 0x152:
        {
            CBaseEntity *pEnemy = vfunc167();
            Vector vec;
            ((CUnknown102e0150 *)vfunc541())->sub_102dfed0(&vec, pEnemy);
            m_pMotor5d44->sub_102e20b0(&vec.x, -1.0f);
            sub_10280a50();
            if (vfunc251()) {
                CBaseEntity *pOwner = m_h6680.Get();
                vfunc388(!pOwner ? 0 : *(int *)((char *)pOwner + 0xa0), 0);
                sub_10273e80(0);
                return;
            }
        }
        break;
    case 0x153:
    case 0x154:
        {
            sub_10280a50();
            CBaseEntity *pEnemy = vfunc167();
            if (pEnemy) {
                Vector vec;
                ((CUnknown102e0150 *)vfunc541())->sub_102dfed0(&vec, pEnemy);
                if (!vfunc364(&vec))
                    m_pMotor5d44->sub_102e20b0(&vec.x, -2.0f);
            }
            if (vfunc251()) {
                if (m_nMode673c)
                    sub_103990c0();
                ((CUnknown102e0a60 *)m_pMotor5d44)->sub_102e0a60(0x43340000);
                m_flSlotTimeA[4] = m_flSlotTimeA[5] = sub_103983d0(m_nSide671c) + gpGlobals->curtime;
                sub_10273e80(0);
                return;
            }
        }
        break;
    case 0x155:
        {
            CBaseEntity *pEnemy = vfunc167();
            Vector vec;
            ((CUnknown102e0150 *)vfunc541())->sub_102dfed0(&vec, pEnemy);
            m_pMotor5d44->sub_102e20b0(&vec.x, -1.0f);
            sub_10280a50();
            if (vfunc251()) {
                sub_10273e80(0);
                return;
            }
        }
        break;
    case 0x158:
        sub_10280a50();
        if (vfunc251()) {
            if (m_nMode673c != 3)
                sub_10398db0();
            sub_10273e80(0);
            return;
        }
        break;
    case 0x15a:
        {
            sub_10280a50();
            CBaseEntity *pEnemy = vfunc167();
            if (pEnemy) {
                Vector vec;
                ((CUnknown102e0150 *)vfunc541())->sub_102dfed0(&vec, pEnemy);
                if (!vfunc364(&vec))
                    m_pMotor5d44->sub_102e20b0(&vec.x, -2.0f);
            }
            if (vfunc251()) {
                if (m_nMode673c)
                    sub_103990c0();
                ((CUnknown102e0a60 *)m_pMotor5d44)->sub_102e0a60(0x43340000);
                sub_10273e80(0);
                return;
            }
        }
        break;
    case 0x15b:
    case 0x15c:
        sub_10280a50();
        if (vfunc251()) {
            sub_10289ee0(1);
            sub_10273e80(0);
            return;
        }
        break;
    default:
        sub_102aacf0(pTask);
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x10394090 size=0x6c
#include "CUnknown10398d90.h"
#include "CNPC_VMingXiao.h"
struct CUnknown102e0a60 { void sub_102e0a60(int); };
void CNPC_VMingXiao::vfunc448(int a)
{
    switch (*(int *)((char *)this + 0x673c)) {
    case 3:
    case 4:
        (*(CUnknown102e0a60 **)((char *)this + 0x5d44))->sub_102e0a60(0x43340000);
        break;
    case 0:
    case 1:
    case 2:
        goto other;
    default:
    other:
        ((CUnknown10398d90 *)this)->sub_10398d90(0);
        *(int *)((char *)this + 0x6718) = -1;
        break;
    }
    sub_1029adb0(a);
}
// END FUNCTION

// FUNCTION: 0x10394120 size=0x84
#include "CNPC_VMingXiao.h"

// TARGET: CNPC_VMingXiao::vfunc437
int CNPC_VMingXiao::vfunc437()
{
	m_n1b2c = 0x19;
	if (m_nState5cc0 == 5) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		m_nLine1b34 = 0x4f6;
		return 0x157;
	}
	CBaseEntity *pEnt = m_h6680.Get();
	vfunc388(!pEnt ? 0 : pEnt->m_n00a0, 0);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103941e0 size=0x2c1
#include "CNPC_VMingXiao.h"
#include "CUnknown10739d08.h"
#include "CUnknown1093bb5c.h"
extern CUnknown10739d08 g_10739d08;

struct CMingXiaoTuningView
{
	char pad[0xc];
	float m_fc;
	float m_f10;
	float GetC() const { return m_fc; }
	float Get10() const { return m_f10; }
};

int CNPC_VMingXiao::vfunc438()
{
	m_n1b2c = 0x19;
	switch (m_nState5cc0)
	{
	case 1:
	case 3:
		m_nLine1b34 = 0x51c;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		return 0x44;
	case 2:
		break;
	default:
		return sub_102af660();
	}

	m_b5b80 = 0;
	int r = sub_10396dc0();
	if (r)
		return r;

	int i;
	for (i = 0; i < 6; i++)
	{
		if (sub_10014df8(i + 0x77))
		{
			m_nLine1b34 = 0x530;
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
			return i + 0x158;
		}
	}

	if (sub_10014df8(0x7d))
	{
		m_nLine1b34 = 0x53d;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		return 0x15e;
	}
	if (sub_10014df8(0x48))
	{
		m_nLine1b34 = 0x543;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		return 0x160;
	}
	r = sub_10396bc0();
	if (r)
		return r;
	if (sub_10398870())
	{
		m_nLine1b34 = 0x55a;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		return 0x162;
	}
	if (!g_1093bb5c->vfunc1() && g_1093bb5c->m_p2c)
	{
		if (m_f6268 < 120.0f)
		{
			if (gpGlobals->curtime >= m_f674c)
			{
				if (m_n670c < 3 && !g_1093bb5c->vfunc1() && g_1093bb5c->m_p2c)
					m_f674c = ((CMingXiaoTuningView *)g_10739d08.sub_101e8da0())->Get10() + gpGlobals->curtime;
				else
					m_f674c = ((CMingXiaoTuningView *)g_10739d08.sub_101e8da0())->GetC() + gpGlobals->curtime;
				m_nLine1b34 = 0x56c;
				m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
				return 0x15f;
			}
			if (sub_10014df8(0x7e))
			{
				m_f674c = gpGlobals->curtime;
				if (sub_10398030(2, 0))
				{
					m_nLine1b34 = 0x578;
					m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
					return 0x15a;
				}
				if (sub_10398030(3, 0))
				{
					m_nLine1b34 = 0x57c;
					m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
					return 0x15b;
				}
				if (sub_10398030(0, 0))
				{
					m_nLine1b34 = 0x580;
					m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
					return 0x158;
				}
				if (sub_10398030(1, 0))
				{
					m_nLine1b34 = 0x584;
					m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
					return 0x159;
				}
			}
		}
	}
	m_nLine1b34 = 0x58a;
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	return 0x165;
}
// END FUNCTION

// FUNCTION: 0x10394570 size=0x1c
#include "CNPC_VMingXiao.h"

// TARGET: CNPC_VMingXiao::vfunc440
int CNPC_VMingXiao::vfunc440(int a)
{
	if (a != 0x147)
		return sub_102b12f0(a);
	return 0x16f;
}
// END FUNCTION

// FUNCTION: 0x103945a0 size=0x96
#include "CNPC_VMingXiao.h"

typedef char (__fastcall *PFN_CHAR)(void *);
typedef int (__fastcall *PFN_INT)(void *);

int CNPC_VMingXiao::vfunc461()
{
	char *p = (char *)this;
	volatile int *state = (int *)(p + 0x5cc4);
	*(int *)(p + 0x1b38) = 0x19;
	if (!((PFN_CHAR)(*(void ***)this)[158])(this) || ((PFN_INT)(*(void ***)this)[464])(this) == 7) {
		*(const char **)(p + 0x1b3c) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		*(int *)(p + 0x1b40) = 0x5da;
		*state = 7;
	}
	int r = ((PFN_INT)(*(void ***)this)[167])(this);
	*(const char **)(p + 0x1b3c) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	int ret;
	if (r) {
		*state = 2;
		ret = *state;
		*(int *)(p + 0x1b40) = 0x5e0;
		return ret;
	}
	*state = 1;
	ret = *state;
	*(int *)(p + 0x1b40) = 0x5e4;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10394670 size=0x5
#include "CNPC_VMingXiao.h"
#include "CAI_BaseNPCTroika.h"
// TARGET: CNPC_VMingXiao::vfunc375
// the game's 0x10394670: a tail call (jmp) of CAI_BaseNPCTroika::sub_10295590
int CNPC_VMingXiao::vfunc375(int a0)
{
	return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::sub_10295590(a0);
}
// END FUNCTION

// FUNCTION: 0x10394690 size=0xe0
#include "CNPC_VMingXiao.h"
int CNPC_VMingXiao::vfunc376(int act)
{
    switch (act) {
    case 0x3d:
        return 0x3b;
    case 0x3e:
        return 0x3c;
    case 0x9f:
        return 0x9d;
    case 0xa0:
        return 0x9e;
    case 0xa3:
        return 0xa1;
    case 0xa4:
        return 0xa2;
    default:
        return sub_1000fb14(act);
    }
}
// END FUNCTION

// FUNCTION: 0x103947b0 size=0x12f
#include "CNPC_VMingXiao.h"
#include "CUnknown10739d08.h"
extern CUnknown10739d08 g_10739d08;

struct CRateBlockView
{
	float m_f[32];
	float F5() const { return m_f[5]; }
	float F6() const { return m_f[6]; }
	float F7() const { return m_f[7]; }
	float F19() const { return m_f[19]; }
	float F20() const { return m_f[20]; }
	float F21() const { return m_f[21]; }
	float F22() const { return m_f[22]; }
	float F23() const { return m_f[23]; }
	float F24() const { return m_f[24]; }
};
static inline CRateBlockView *G() { return (CRateBlockView *)g_10739d08.sub_101e8da0(); }

// TARGET: CNPC_VMingXiao::vfunc465
void CNPC_VMingXiao::vfunc465(int act)
{
	bool bTentacle = false;
	CRateBlockView *p;
	if (sub_10398870()) {
		if (act == 9 || act == 0x13) {
			bTentacle = true;
			sub_1008d230(G()->F7());
		} else {
			p = G();
			if (act != 0x4b)
				sub_1008d230(p->F5());
			else
				sub_1008d230(p->F6());
		}
	} else {
		float base;
		float step;
		if (act == 9 || act == 0x13) {
			bTentacle = true;
			base = (float)(G()->F23() * 1.0);
			step = (float)(G()->F24() * 1.0);
		} else {
			p = G();
			if (act != 0x4b) {
				base = (float)(p->F19() * 1.0);
				step = (float)(G()->F20() * 1.0);
			} else {
				base = (float)(p->F21() * 1.0);
				step = (float)(G()->F22() * 1.0);
			}
		}
		float rate = step * (6 - m_n670c) + base;
		sub_1008d230(rate > 0.1 ? rate : 0.1);
	}
	bool bCover = act == 0x1132 || bTentacle;
	if (bCover)
		sub_1039ab30();
	else
		sub_1039aca0();
	sub_10295a60(act);
}
// END FUNCTION

// FUNCTION: 0x10394930 size=0x30
#include "CNPC_VMingXiao.h"
#include "CUnknown10739d08.h"

extern CUnknown10739d08 g_10739d08;

float CNPC_VMingXiao::vfunc516()
{
	int act = *(int *)((char *)this + 0xfec);
	if (act >= 0x112a && act <= 0x112d)
		return g_10739d08.sub_101e8da0()[0x12];
	return g_10739d08.sub_101e8da0()[0x11];
}
// END FUNCTION

// FUNCTION: 0x10394970 size=0xd
void __fastcall sub_1000704f(void *pThis, int dummy, float a);

// TARGET: sub_10394970
void __fastcall sub_10394970(void *pThis, int dummy, float a)
{
	sub_1000704f(pThis, dummy, a);
}
// END FUNCTION

// FUNCTION: 0x10394990 size=0x3b4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VMingXiao.h"
#include "ScopeTrace.h"
#include "CVProfile.h"
#include "engineiface.h"

void __fastcall sub_10002a7c(void *pThis);
void __fastcall sub_102c43f0(void *pThis);

// TARGET: CNPC_VMingXiao::vfunc431
void CNPC_VMingXiao::vfunc431()
{
	ScopeTrace trace("CNPC_VMingXiao::NPCThink", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	CVProfile *prof = g_109f3648;
	if (prof->m_enabled || !prof->m_bAtRoot) {
		if (prof->m_pCurNode->m_pszName != "CNPC_VMingXiao_NPCThink")
			prof->m_pCurNode = prof->m_pCurNode->GetSubNode("CNPC_VMingXiao_NPCThink", 0, "Unaccounted");
		CVProfNode *node = prof->m_pCurNode;
		node->m_nCurFrameCalls++;
		if (node->m_nRecursions++ == 0) {
			unsigned long *p = (unsigned long *)&node->m_CurFrameTime;
			__asm {
				mov ecx, p
				rdtsc
				mov [ecx], eax
				mov [ecx + 4], edx
			}
			g_109f3648->PushGroup(node->m_nBudgetGroupID);
		}
		prof->m_bAtRoot = false;
	}

	switch ((unsigned int)m_nMode673c)
	{
	case 0:
		m_flags14bc |= 0x80000400;
		break;
	case 1:
	case 2:
		m_flags14bc &= 0x7ffffbff;
		{
			float *pOrigin = vfunc217();
			Vector vec = *(Vector *)&m_f672c + *(Vector *)pOrigin;
			vfunc518((int)&vec, 1.0f, 0.5f, 0.0f);
		}
		break;
	case 3:
		m_flags14bc |= 0x80000400;
		break;
	case 4:
		m_flags14bc |= 0x80000400;
		break;
	default:
		m_flags14bc |= 0x80000400;
		break;
	}

	if (enginerandom->vfunc2(0, 99) < 10)
	{
		vfunc217();
		vfunc219();
		sub_102c42a0("Ming_xiao_slimetrail_emitter", this, "Bip01 TailRoot", 0);
		sub_102c42a0("Ming_xiao_slimetrail_emitter2", this, "Bip01 Tail1", 0);
		sub_102c42a0("Ming_xiao_slimetrail_emitter2", this, "Bip01 Tail2", 0);
		sub_102c42a0("Ming_xiao_slimetrail_emitter2", this, "Bip01 Tail3", 0);
		sub_102c42a0("Ming_xiao_slimetrail_emitter2", this, "Bip01 Tail4", 0);
		sub_102c42a0("Ming_xiao_slimetrail_emitter2", this, "Bip01 Tail5", 0);
		sub_102c42a0("Ming_xiao_slimetrail_emitter2", this, "Bip01 Tail6", 0);
	}

	if (!sub_10398870())
	{
		for (int i = 0; i < 6; i++)
		{
			if (m_fl170 > m_flSlotTimeB[i])
			{
				m_n6710 &= ~(1 << i);
				m_flSlotTimeB[i] = 3.402823466e38f;
				m_n670c++;
				sub_10398800();
				m_f6748 = sub_103986b0();
			}
		}
	}

	if (!sub_10398870())
		sub_10399610();

	sub_10399c70();
	sub_102c43f0(this);
	sub_10002a7c(this);

	prof = g_109f3648;
	if (!prof->m_bAtRoot || prof->m_enabled) {
		CVProfNode *node = prof->m_pCurNode;
		if (--node->m_nRecursions == 0 && node->m_nCurFrameCalls != 0) {
			CUnknownCycle100335e0 now;
			now.m_Int64 = 0;
			unsigned long *p = (unsigned long *)&now;
			__asm {
				mov ecx, p
				rdtsc
				mov [ecx], eax
				mov [ecx + 4], edx
			}
			CUnknownCycle100335e0 *pc = &node->m_CurFrameTime;
			pc->m_Int64 = now.m_Int64 - pc->m_Int64;
			node->m_TotalTime += pc->m_Int64;
			g_109f3648->PopGroup();
		}
		if (node->m_nRecursions == 0)
			prof->m_pCurNode = prof->m_pCurNode->m_pParent;
		prof->m_bAtRoot = (prof->m_pCurNode == prof->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x10394e40 size=0x2cf
#include "CBaseCombatWeapon.h"
#include "CNPC_VMingXiao.h"
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include "CUnknown10252450.h"
#include "CUnknown1039ab10.h"
#include "CDevFlagObj.h"
#include "CCollisionProperty.h"
#include "globalvars.h"
#include "ehandle.h"
#include "Vector.h"

extern CDevFlagObj *g_10924a6c;

// TARGET: CNPC_VMingXiao::vfunc433
void CNPC_VMingXiao::vfunc433()
{
	((CAI_BaseNPC *)this)->sub_10269b50(0x77);
	((CAI_BaseNPC *)this)->sub_10269b50(0x78);
	((CAI_BaseNPC *)this)->sub_10269b50(0x79);
	((CAI_BaseNPC *)this)->sub_10269b50(0x7a);
	((CAI_BaseNPC *)this)->sub_10269b50(0x7b);
	((CAI_BaseNPC *)this)->sub_10269b50(0x7c);
	((CAI_BaseNPC *)this)->sub_10269b50(0x7d);
	sub_102b27f0();

	if (((CEntityVSlots *)this)->slot464() == 1)
		return;

	bool bTent = false;
	for (int i = 0; i < 6; i++)
	{
		if (!sub_10398030(i, 0))
			continue;
		bTent = true;
		if (!sub_10398030(i, 1))
			continue;
		g_10924a6c->vfunc1();
		((CAI_BaseNPC *)this)->sub_10269a20(i + 0x77);
	}
	if (!bTent)
	{
		g_10924a6c->vfunc1();
		((CAI_BaseNPC *)this)->sub_10269a20(0x7e);
	}

	if (m_f6264 > 200.0f)
	{
		if (!((CUnknown1039ab10 *)this)->sub_1039ab10())
		{
			CBaseEntity *pEntity = m_h6680.Get();
			if (pEntity)
			{
				CBaseCombatWeapon *pWeapon = *(CBaseCombatWeapon **)((char *)pEntity + 0xa0);
				if (pWeapon)
				{
					CEntityVSlots *pTarget = (CEntityVSlots *)((CEntityVSlots *)this)->slot167();
					if (pTarget)
					{
						float flAttackTime = ((CUnknown10252450 *)pWeapon)->sub_10252450(0);
						if (flAttackTime <= gpGlobals->curtime)
						{
							if (gpGlobals->curtime >= m_flTime66c0)
							{
								Vector vecOrigin = *((CEntityVSlots *)this)->slot217();
								Vector vecBodyTarget;
								pTarget->slot197((int)&vecBodyTarget, (int)pTarget->slot217(), 1, 0);

								Vector vecDelta = vecBodyTarget - vecOrigin;
								Vector vecDir;
								vecDir.x = vecDelta.y;
								vecDir.y = -vecDelta.x;
								vecDir.z = 0.0f;
								VectorNormalize(vecDir);

								CCollisionProperty *pColl = (CCollisionProperty *)((char *)pTarget + 0x270);
								float *pMins = pColl->vfunc1();
								float *pMaxs = pColl->vfunc2();
								vecDir *= (pMaxs[0] - pMins[0]) * 0.3f;

								Vector vecTest = vecBodyTarget + vecDir;
								if (((CEntityVSlots *)pWeapon)->slot364(&vecOrigin, &vecTest, 0))
								{
									vecTest = vecBodyTarget - vecDir;
									if (((CEntityVSlots *)pWeapon)->slot364(&vecOrigin, &vecTest, 0))
									{
										g_10924a6c->vfunc1();
										((CAI_BaseNPC *)this)->sub_10269a20(0x7d);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103951d0 size=0x7c
#include "CBaseEntity.h"
#include "CNPC_VMingXiao.h"

const char *CNPC_VMingXiao::vfunc408(int index)
{
	switch (index) {
	case 0x77:
		return "xfr";
	case 0x78:
		return "xfl";
	case 0x79:
		return "xmr";
	case 0x7a:
		return "xml";
	case 0x7b:
		return "xbr";
	case 0x7c:
		return "xbl";
	case 0x7d:
		return "xsp";
	case 0x7e:
		return "xmh";
	default:
		return sub_10011590(index);
	}
}
// END FUNCTION

// FUNCTION: 0x10395270 size=0x6
#include "CNPC_VMingXiao.h"
int CNPC_VMingXiao::vfunc409()
{
    return 0x7f;
}
// END FUNCTION

// FUNCTION: 0x10395290 size=0x1
#include "CNPC_VMingXiao.h"
void CNPC_VMingXiao::vfunc434()
{
}
// END FUNCTION

// FUNCTION: 0x103952b0 size=0x1b4
#include "CNPC_VMingXiao.h"
#include "CUnknown10739d08.h"
extern CUnknown10739d08 g_10739d08;

int CNPC_VMingXiao::sub_103952b0(int a)
{
	int result;
	switch (*(int *)((char *)this + 0x1594)) {
	case 1:
		result = -2;
		break;
	case 4:
		if (sub_10398000(1))
			result = 1;
		else if (sub_10398000(3))
			result = 3;
		else
			result = sub_10398000(5) ? 5 : -1;
		break;
	case 8:
		if (sub_10398000(3))
			result = 3;
		else
			result = sub_10398000(5) ? 5 : -1;
		break;
	case 5:
		if (sub_10398000(0))
			result = 0;
		else if (sub_10398000(2))
			result = 2;
		else
			result = sub_10398000(4) ? 4 : -1;
		break;
	case 9:
		if (sub_10398000(2))
			result = 2;
		else
			result = sub_10398000(4) ? 4 : -1;
		break;
	case 6:
		result = sub_10398000(5) ? 5 : -1;
		break;
	case 7:
		result = sub_10398000(4) ? 4 : -1;
		break;
	default:
		result = -1;
		int roll = enginerandom->vfunc2(0, 99);
		if (((int *)g_10739d08.sub_101e8da0())[11] > roll) {
			if (sub_10398000(1)) {
				result = 1;
			} else if (sub_10398000(0)) {
				result = 0;
			} else if (sub_10398000(3)) {
				result = 3;
			} else if (sub_10398000(2)) {
				result = 2;
			} else if (sub_10398000(5)) {
				result = 5;
			} else if (sub_10398000(4)) {
				result = 4;
			}
		}
		break;
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x103954e0 size=0x120
#include "CNPC_VMingXiao.h"
#include "CEntityVSlots.h"

struct CNPC_VMingXiaoV
{
	bool sub_10398000(int n);
};

int CNPC_VMingXiao::sub_103954e0(int a, void *pWeapon)
{
	if (pWeapon && (((CEntityVSlots *)pWeapon)->slot360() & 0x18000))
		return sub_103952b0(a);
	else {
		switch (*(int *)((char *)this + 0x1594)) {
		case 1:
			return -2;
		case 4:
			if (sub_10398000(1))
				return 1;
			if (sub_10398000(3))
				return 3;
			return sub_10398000(5) ? 5 : -1;
		case 8:
			if (sub_10398000(3))
				return 3;
			return sub_10398000(5) ? 5 : -1;
		case 6:
			return sub_10398000(5) ? 5 : -1;
		case 5:
			if (sub_10398000(0))
				return 0;
			if (sub_10398000(2))
				return 2;
			return sub_10398000(4) ? 4 : -1;
		case 9:
			if (((CNPC_VMingXiaoV *)this)->sub_10398000(2))
				return 2;
		case 7:
			return ((CNPC_VMingXiaoV *)this)->sub_10398000(4) ? 4 : -1;
		}
		return -1;
	}
}
// END FUNCTION

// FUNCTION: 0x10395650 size=0xa8
#include "CBaseEntity.h"
#include "CNPC_VMingXiao.h"

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)
struct SWeaponVt {
	SL100(a) SL100(b) SL100(c)
	SL10(d0) SL10(d1) SL10(d2) SL10(d3) SL10(d4) SL10(d5)
	virtual unsigned int vfunc360();
};

inline int StateToCode(int state)
{
    switch (state) {
    case 1:
        return -2;
    case 4:
        return 1;
    case 5:
        return 0;
    case 8:
        return 3;
    case 9:
        return 2;
    case 6:
        return 5;
    case 7:
        return 4;
    default:
        return -1;
    }
}

int CNPC_VMingXiao::sub_10395650(int a, void *pWeapon)
{
    if (pWeapon && (((SWeaponVt *)pWeapon)->vfunc360() & 0x18000))
        return sub_103952b0(a);
    return StateToCode(*(int *)((char *)this + 0x1594));
}
// END FUNCTION

// FUNCTION: 0x10395730 size=0x5
#include "CNPC_VMingXiao.h"
struct CWrap10395730 { int sub_10395730(int, void *); };
// TARGET: sub_10395730
// the game's 0x10395730: a tail call (jmp) of CNPC_VMingXiao::sub_10395650
int CWrap10395730::sub_10395730(int a0, void *a1)
{
	return ((CNPC_VMingXiao *)this)->CNPC_VMingXiao::sub_10395650(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x10395750 size=0x2c8
#include "CNPC_VMingXiao.h"
#include "CTakeDamageInfo.h"
#include "CVDmg_t.h"
#include "CUnknown10739d08.h"
struct CTDIView101c2b10 { void sub_101c2b10(int a); };
extern CUnknown10739d08 g_10739d08;
void sub_1023e4b0(CNPC_VMingXiao *pNpc, int n);
inline float Tune24() { return g_10739d08.sub_101e8da0()[9]; }
inline float Tune28() { return g_10739d08.sub_101e8da0()[10]; }

// TARGET: CNPC_VMingXiao::sub_10395750
void CNPC_VMingXiao::sub_10395750(int index, CTakeDamageInfo *pInfo, void *pWeapon)
{
	if (pWeapon && ((int (__fastcall *)(void *))(*(void ***)pWeapon)[0x5a0 / 4])(pWeapon) & 0x18000) {
		float dmg;
		if (pInfo->m_pVDmg00)
			dmg = (float)pInfo->m_pVDmg00->sub_101faa70();
		else
			dmg = pInfo->m_flDamage;
		pInfo->m_flDamage = Tune28() * dmg;
	}
	if (index > -1) {
		if (sub_10398000(index)) {
			float dmg;
			if (pInfo->m_pVDmg00)
				dmg = (float)pInfo->m_pVDmg00->sub_101faa70();
			else
				dmg = pInfo->m_flDamage;
			m_flSlotValue[index] = m_flSlotValue[index] - dmg;
			if (m_flSlotValue[index] <= 0.0f)
				sub_10397410(index);
			float *pOrigin = vfunc219();
			Vector vecA = *(Vector *)pOrigin;
			Vector vecB = *(Vector *)&pInfo->m_pos1c;
			sub_102c41d0("Ming_xiao_tentacle_damage_emitter", &vecB, &vecA, 0);
			if (!m_b63d8) {
				float d;
				if (pInfo->m_pVDmg00)
					d = (float)pInfo->m_pVDmg00->sub_101faa70();
				else
					d = pInfo->m_flDamage;
				sub_1023e4b0(this, (int)d);
			}
			pInfo->m_flDamage = 0;
			((CTDIView101c2b10 *)pInfo)->sub_101c2b10(1);
		} else {
			float dmg;
			if (pInfo->m_pVDmg00)
				dmg = (float)pInfo->m_pVDmg00->sub_101faa70();
			else
				dmg = pInfo->m_flDamage;
			float n = (float)(int)dmg;
			pInfo->m_flDamage = (float)(int)(n / Tune24() > 1.0f ? n / Tune24() : 1.0f);
		}
		return;
	}
	if (index == -2 && m_n670c <= 2) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		m_nLine1b34 = 0x8a5;
		sub_102ae750(0x16b, 0);
		switch (m_nMode673c) {
		case 1:
		case 2:
			sub_10398fd0();
			return;
		case 3:
		case 4:
			sub_103990a0();
			return;
		}
		return;
	}
	float dmg;
	if (pInfo->m_pVDmg00)
		dmg = (float)pInfo->m_pVDmg00->sub_101faa70();
	else
		dmg = pInfo->m_flDamage;
	float n = (float)(int)dmg;
	pInfo->m_flDamage = (float)(int)(n / Tune24() > 1.0f ? n / Tune24() : 1.0f);
}
// END FUNCTION

// FUNCTION: 0x10395ae0 size=0x75
#include "CNPC_VMingXiao.h"

struct CNPC_VMingXiaoUnit : CNPC_VMingXiao
{
	int sub_10012b3e(int a, void *pWeapon);	// sub_10395650 as the game calls it (through the stub)
};

void CNPC_VMingXiao::vfunc390(CTakeDamageInfo *pInfo)
{
	if (sub_10398870()) {
		sub_102beda0(pInfo);
		return;
	}
	CTakeDamageInfo info = *pInfo;
	void *pWeapon;
	if (info.m_pAttacker == 0)
		pWeapon = 0;
	else
		pWeapon = info.m_pAttacker->m_pWeapon;
	int nCode = ((CNPC_VMingXiaoUnit *)this)->sub_10012b3e((int)&info, pWeapon);
	sub_10395750(nCode, &info, pWeapon);
	sub_102beda0(&info);
}
// END FUNCTION

// FUNCTION: 0x10395b80 size=0x5
#include "CNPC_VMingXiao.h"
bool CNPC_VMingXiao::vfunc366(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10395ba0 size=0x9c
#include "CNPC_VMingXiao.h"
#include "CEHandleGet.h"
struct CUnk1093b9b4 { virtual char vf0(); virtual char vf1(); char pad[0x28]; int m_n2c; };
extern CUnk1093b9b4 *g_1093b9b4;
// TARGET: CNPC_VMingXiao::vfunc144
void CNPC_VMingXiao::vfunc144(void *a)
{
#define a ((int)a)
	if (m_bActive6744) {
		CGlobalEntityList_Ent *pEnt = EHandle_Get(m_hOwner6670);
		if (pEnt)
			((CNPC_VMingXiao *)pEnt)->sub_10397a50(this);
		if (!g_1093b9b4->vf1() && g_1093b9b4->m_n2c) {
			if (!sub_10398870()) {
				sub_10397e90();
				sub_10397f00();
			}
		}
		sub_102bf340(a);
	} else {
		*(int *)((char *)this + 0x200) = 1;
		sub_10395c70();
	}
#undef a
}
// END FUNCTION

// FUNCTION: 0x10395c70 size=0x4f
#include "CNPC_VMingXiao.h"
#include "CAI_BaseNPCTroika.h"
void CNPC_VMingXiao::sub_10395c70()
{
	*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	*(int *)((char *)this + 0x1b34) = 0x916;
	if (sub_10398870())
		((CAI_BaseNPCTroika *)this)->sub_102ae750(0x16e, 1);
	else
		((CAI_BaseNPCTroika *)this)->sub_102ae750(0x16d, 1);
	*(int *)((char *)this + 0x200) = 1;
	*((char *)this + 0x6744) = 1;
	*((char *)this + 0x63d8) = 1;
}
// END FUNCTION

// FUNCTION: 0x10395ce0 size=0x10
#include "CNPC_VMingXiao.h"

// TARGET: sub_10395ce0
void __fastcall sub_10395ce0(CNPC_VMingXiao *pThis)
{
	if (!pThis->m_bActive6744)
		pThis->sub_10395c70();
}
// END FUNCTION

// FUNCTION: 0x10395d00 size=0x90
#include "CBaseEntity.h"
#include "CNPC_VMingXiao.h"

Vector CNPC_VMingXiao::vfunc574(const Vector &vecPos, int a, int b)
{
	Vector vecTarget;
	sub_10278650(&vecTarget, &vecPos, a, b);
	vecTarget.z += 20.0f;
	Vector vecDir = vecTarget - vecPos;
	VectorNormalize(vecDir);
	return vecDir;
}
// END FUNCTION

// FUNCTION: 0x10395dc0 size=0x17
#include "CNPC_VMingXiao.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;

// TARGET: CNPC_VMingXiao::vfunc599
bool CNPC_VMingXiao::vfunc599(int unused)
{
	m_b6078 = 1;
	g_10924edc->b();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10395df0 size=0x17
#include "CNPC_VMingXiao.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;

// TARGET: CNPC_VMingXiao::vfunc600
bool CNPC_VMingXiao::vfunc600(int unused)
{
	m_b6078 = 1;
	g_10924edc->b();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10395e20 size=0x19
#include "CNPC_VMingXiao.h"

struct IUnk10924edc
{
	virtual void v0();
	virtual void v1();
};
extern IUnk10924edc *g_10924edc;

// TARGET: vfunc601
void CNPC_VMingXiao::vfunc601(int a)
{
	g_10924edc->v1();
	m_b6078 = 0;
}
// END FUNCTION

// FUNCTION: 0x10395e50 size=0x3
#include "CNPC_VMingXiao.h"
bool CNPC_VMingXiao::vfunc602()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10395e70 size=0xcd
#include "CNPC_VMingXiao.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CNPC_VMingXiao::vfunc603
float CNPC_VMingXiao::vfunc603(float *pCurrent, float *pTarget)
{
    if (*pTarget + 32.0f < *pCurrent)
        return g_1070b244->vfunc1(-30.0f, 30.0f);
    if (*pCurrent < *pTarget - 32.0f) {
        *pCurrent = *pTarget;
        if (g_1070b244->vfunc2(0, 1))
            return g_1070b244->vfunc1(170.0f, 179.0f);
        return g_1070b244->vfunc1(-170.0f, -179.0f);
    }
    if (g_1070b244->vfunc2(0, 1))
        return g_1070b244->vfunc1(80.0f, 120.0f);
    return g_1070b244->vfunc1(-80.0f, -120.0f);
}
// END FUNCTION

// FUNCTION: 0x10395f80 size=0x51
#include "CNPC_VMingXiao.h"
void sub_1009d940(float *p, int mode);
void sub_1009d960(float *p, int mode);
int CNPC_VMingXiao::vfunc126(int a)
{
	int i;
	for (i = 0; i < 6; i++)
		sub_1009d940(&m_flSlotTimeB[i], 4);
	int r = sub_102993c0(a);
	for (i = 0; i < 6; i++)
		sub_1009d960(&m_flSlotTimeB[i], 4);
	return r;
}
// END FUNCTION

// FUNCTION: 0x10396000 size=0x35
struct CUnknownTroikaBase
{
	int sub_1000527c(int a);
};

void sub_10015311(void *pValue, int nBytes);

struct CUnknown10396000
{
	char m_pad0000[0x66f4];
	float m_fl66f4[6];

	int sub_10396000(int a);
};

// TARGET: CUnknown10396000::sub_10396000
int CUnknown10396000::sub_10396000(int a)
{
	int result = ((CUnknownTroikaBase *)this)->sub_1000527c(a);
	for (int i = 0; i < 6; i++)
	{
		sub_10015311(&m_fl66f4[i], 4);
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x10396050 size=0x5f2
#include "CNPC_VMingXiao.h"
inline float *VPtr(const Vector &r) { return (float *)&r.x; }
#include "CUnknown10924a1c.h"
#include "engineiface.h"
#include "Tier1.h"
#define STAMP(l) m_nLine1b34 = (l); m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp"
static inline float ScaleVal() { return g_10924a1c->vfunc1() ? 0.0f : g_10924a1c->m_fl28; }
#define SCALE (ScaleVal())
int CNPC_VMingXiao::vfunc604(int unused)
{
    if (m_b6078) {
        if (vfunc602()) {
            vfunc601((int)vfunc167());
            if (vfunc308()) {
                STAMP(0xa3f);
                return 0xe9;
            }
            const float &dist = m_f6268;
            if (SCALE * 2.0f <= dist) {
                STAMP(0xa45);
                return 0xe7;
            }
            STAMP(0xa49);
            return 0xe4;
        }
    } else {
        if (!vfunc599((int)vfunc167())) {
            if (SCALE + 200.0f < m_f6268) {
                STAMP(0xa54);
                return 0xe7;
            }
            if (enginerandom->vfunc2(0, 99) >= 0x19) {
                if (!(SCALE > m_f6268)) {
                    STAMP(0xa60);
                    return 0xe5;
                }
            }
            STAMP(0xa5c);
            return 0xe4;
        }
    }
    int r = sub_102b7370();
    if (r)
        return r;
    if (sub_10014df8(0x48)) {
        if (vfunc308()) {
            vfunc601((int)vfunc167());
            STAMP(0xa73);
            return 0xe9;
        }
        STAMP(0xa7d);
        return 0xcd;
    }
    if (sub_1001482b(0xc)) {
        STAMP(0xa84);
        return 0xd5;
    }
    char bF = sub_10014df8(0xf);
    char bE = sub_10014df8(0xe);
    if (!bF) {
        if (!bE) {
            if (sub_10014df8(0x51)) {
                bool b = vfunc308();
                m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
                if (b) {
                    m_nLine1b34 = 0xa9c;
                    return 0xdc;
                }
                m_nLine1b34 = 0xaa0;
                return 0xdd;
            }
            bool bTime = false;
            if (m_f626c > 64.0f) {
                if (m_n6274 == 0xbf800000) {
                    m_f6274 = enginerandom->vfunc1(3.0f, 4.0f) + gpGlobals->curtime;
                } else if (gpGlobals->curtime >= m_f6274) {
                    bTime = true;
                }
            } else {
                m_f6274 = -1.0f;
            }
            if (vfunc308() && (sub_10014df8(9) || sub_10014df8(0x1a) || sub_10014df8(0x59) || bTime)) {
                vfunc601((int)vfunc167());
                STAMP(0xac2);
                return 0xe9;
            }
            if (sub_10014df8(0x59)) {
                vfunc601((int)vfunc167());
                STAMP(0xaca);
                return 0x17;
            }
            if (!sub_10014df8(9) && !sub_10014df8(0x60)) {
                STAMP(0xb04);
                return 0xc7;
            }
            if (vfunc167()) {
                                if (sub_1000c10d(VPtr(((CNPC_VMingXiao *)vfunc167())->vfunc192()))) {
                    bool b = vfunc308();
                    m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
                    if (b) {
                        m_nLine1b34 = 0xadb;
                        return 0xe0;
                    }
                    m_nLine1b34 = 0xadf;
                    return 0xe1;
                }
            }
            r = sub_10005dd0(0, 1, 0, 1);
            if (r)
                return r;
            if (!(SCALE <= m_f6268) && !bTime) {
                bool b = vfunc308();
                m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
                if (b) {
                    m_nLine1b34 = 0xafa;
                    return 0xd1;
                }
                m_nLine1b34 = 0xafe;
                return 0xd2;
            }
            bool b = vfunc308();
            m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
            if (b) {
                m_nLine1b34 = 0xaef;
                return 0xca;
            }
            m_nLine1b34 = 0xaf3;
            return 0xcb;
        }
    }
    if (bF && (!bE || g_109f3868(0, 1) == 1)) {
        STAMP(0xa8e);
        return 0xdb;
    }
    STAMP(0xa92);
    return 0xd3;
}
// END FUNCTION

// FUNCTION: 0x103967d0 size=0x31a
#include "CNPC_VMingXiao.h"
#include "CBaseAnimating.h"

#define FILE_STAMP(line) (m_nLine1b34 = (line), m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp")

// TARGET: CNPC_VMingXiao::vfunc605
int CNPC_VMingXiao::vfunc605(int unused)
{
	if (m_b6078) {
		FILE_STAMP(0xb12);
		return 0xe3;
	}
	if (!m_pTarget6444) {
		m_pTarget6444 = (CBaseEntity *)vfunc609(0);
		if (!m_pTarget6444)
			goto L1;
	}
	if (!sub_10014df8(0x2f)) {
		FILE_STAMP(0xb27);
		return 0xec;
	}
L1:
	if (sub_10014df8(8) && vfunc307() && vfunc599((int)vfunc167())) {
		FILE_STAMP(0xb2c);
		return 0xe3;
	}
	int r = sub_102b8620();
	if (r) return r;
	r = sub_102b7370();
	if (r) return r;
	r = sub_102b7cf0();
	if (r) return r;
	if (!sub_10014df8(0x5f) && !sub_10014df8(8)) {
		r = vfunc606(unused);
		if (r) return r;
		if (sub_10014df8(0x2e)) { FILE_STAMP(0xb6e); return 0xbd; }
		if (sub_10014df8(0x60)) { FILE_STAMP(0xb73); return 0xb1; }
		return 0;
	}
	if (!sub_10014df8(0x2f) && !sub_10014df8(0x63)) {
		if (((CBaseAnimating *)this)->sub_1008dc40(0x10, -1) && !sub_10014df8(0x2c) && enginerandom->vfunc2(0, 0x63) < 0x4b) {
			FILE_STAMP(0xb49);
			return 0xef;
		}
		if (vfunc307() && enginerandom->vfunc2(0, 0x63) < 0x19 && vfunc599((int)vfunc167())) {
			FILE_STAMP(0xb4d);
			return 0xe8;
		}
		FILE_STAMP(0xb51);
		return 0xf0;
	}
	if (((CBaseAnimating *)this)->sub_1008dc40(0x10, -1) && !sub_10014df8(0x2c) && enginerandom->vfunc2(0, 0x63) < 0x4b) {
		FILE_STAMP(0xb58);
		return 0xb8;
	}
	if (vfunc307() && vfunc599((int)vfunc167())) {
		FILE_STAMP(0xb5c);
		return 0xe8;
	}
	FILE_STAMP(0xb60);
	return 0xb9;
}
// END FUNCTION

// FUNCTION: 0x10396bc0 size=0x181
#include "CNPC_VMingXiao.h"
#include "CEHandleGet.h"
#include "globalvars.h"
#include "engineiface.h"
#include "CUnknown10739d08.h"
#include "CUnknown103662d0.h"
#include "CUnknown10398d90.h"
#include "CUnknown102718e0.h"

extern CUnknown10739d08 g_10739d08;

int CNPC_VMingXiao::sub_10396bc0()
{
	EHANDLE *ph = &m_h6718;
	if (ph->Get())
		return 0;
	if (gpGlobals->curtime < m_flSlotTimeA[5])
		return 0;
	if (gpGlobals->curtime < m_flSlotTimeA[4])
		return 0;
	CBaseEntity *pTarget = vfunc167();
	if (pTarget)
		vfunc530(pTarget);
	sub_10014df8(9);
	int nRoll = enginerandom->vfunc2(0, 99);
	if (*(int *)((char *)g_10739d08.sub_101e8da0() + 8) > nRoll)
		m_h6718 = sub_10398b20(&m_nSide671c, (Vector *)&m_n6720, (Vector *)&m_n672c);
	if (!ph->Get())
		return 0;
	((CUnknown103662d0 *)this)->sub_103662d0(*(CUnknown102718e0 *)ph, 20.0f);
	sub_102c4380(ph->Get());
	((CUnknown10398d90 *)this)->sub_10398d90(1);
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	m_nLine1b34 = 0xbc3;
	return 0x167;
}
// END FUNCTION

// FUNCTION: 0x10396dc0 size=0x97
#include "CNPC_VMingXiao.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

static inline bool HandleValid(const unsigned int *ph)
{
	if (*ph == 0xffffffff)
		return false;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[*ph & 0x1fff];
	return s->m_Serial == (int)(*ph >> 13) && s->m_pEntity;
}

int CNPC_VMingXiao::sub_10396dc0()
{
	if (HandleValid((unsigned int *)((char *)this + 0x6718))
		&& *(int *)((char *)this + 0x673c) >= 3 && *(int *)((char *)this + 0x673c) <= 4) {
		if (sub_10014df8(0x7b)) {
			*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
			*(int *)((char *)this + 0x1b34) = 0xbe1;
			return 0x15c;
		}
		if (sub_10014df8(0x7c)) {
			*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
			*(int *)((char *)this + 0x1b34) = 0xbe5;
			return 0x15d;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10396e90 size=0xd2
#include "CNPC_VMingXiao.h"
#include "CCineNPC.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

struct CNPCStateView {
	char m_pad0000[0x5cc0];
	int m_nState;	// 0x5cc0
	int m_nIdealState;	// 0x5cc4
	char m_pad5cc8[0x5d74 - 0x5cc8];
	unsigned int m_h5d74;	// 0x5d74
};

int CNPC_VMingXiao::vfunc482(char bDisregardState, int interruptLevel)
{
	CNPCStateView *pView = (CNPCStateView *)this;
	int result = 1;
	if (EHandle_Get(pView->m_h5d74)) {
		CCineNPC *pCine = (CCineNPC *)EHandle_Get(pView->m_h5d74);
		if (!pCine->sub_101a8ac0())
			return 0;
		result = 2;
	}
	if (!((CEntityVSlots *)this)->slot158())
		return 0;
	if (!bDisregardState && pView->m_nState != 0 && pView->m_nState != 1 && pView->m_nIdealState != 1 && (pView->m_nState != 3 || interruptLevel < 1))
		return (pView->m_nState == 4) ? result : 0;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10396fb0 size=0x3
#include "CNPC_VMingXiao.h"
bool CNPC_VMingXiao::vfunc70()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10396fd0 size=0x18
#include "CNPC_VMingXiao.h"

char CNPC_VMingXiao::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
}
// END FUNCTION

// FUNCTION: 0x10397000 size=0x98
#include "CNPC_VMingXiao.h"

#define V4(x) virtual void x##a(); virtual void x##b(); virtual void x##c(); virtual void x##d();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)
#define V64(x) V16(x##a) V16(x##b) V16(x##c) V16(x##d)

struct EntSlot {
	void *ent;
	unsigned int serial;
	int pad;
};
extern char *g_10566458;

struct EntV {
	V64(a) V64(b) V16(c) V16(d) V4(e)
	virtual char v164();
};

static inline void *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntSlot *s = &((EntSlot *)(g_10566458 + 4))[h & 0x1fff];
		if (s->serial == (h >> 13))
			return s->ent;
	}
	return 0;
}

bool CNPC_VMingXiao::vfunc166(CBaseEntity *pOther)
{
	unsigned int *p = (unsigned int *)((char *)this + 0x66a8);
	for (int i = 0; i < 6; i++, p++) {
		if (ResolveHandle(p[-7]) == pOther)
			return (bool)(0);
		if (ResolveHandle(p[0]) == pOther)
			return (bool)(0);
	}
	if (pOther && !((EntV *)pOther)->v164())
		return (bool)(0);
	return (bool)(1);
}
// END FUNCTION

// FUNCTION: 0x103970d0 size=0x214
#include "CNPC_VMingXiao.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown10739d08.h"
#include "CUnknown1073dc28.h"
#include "CVStatList_t.h"
#include "ScopeTrace.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
extern CUnknown10739d08 g_10739d08;

// TARGET: CNPC_VMingXiao::vfunc348
int CNPC_VMingXiao::vfunc348()
{
	ScopeTrace trace("CBaseCombatCharacter::HealthToPercent", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);

	int iMax = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x11);
	float flTent = g_10739d08.sub_101e8da0()[0] * 6.0f;
	int iTentacle = (int)(flTent * 0.25f);
	int iHealth = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);

	int iNew = iTentacle;
	for (int i = 0; i < 6; i++) {
		if (sub_10398000(i))
			iNew += (int)(m_flSlotValue[i] * -0.25f);
	}

	int iSum = iTentacle + iMax;
	float flPercent = (float)(iMax - iHealth) / iMax;
	return (int)((m_iMaxHealth * (iMax - iHealth) / iMax) * (1.0f - flPercent) + ((iSum - iNew - iHealth) * m_iMaxHealth / iSum) * flPercent);
}
// END FUNCTION

// FUNCTION: 0x10397380 size=0x62
#include "CNPC_VMingXiao.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CDevFlagObj.h"
#include "CUnknown103160c0.h"
extern CDevFlagObj *g_10924a6c;
void CNPC_VMingXiao::sub_10397380(CNPC_VMingXiaoTentacle *pTentacle)
{
	CBaseEntity *pTarget = ((CBaseEntity *(__fastcall *)(void *))(*(void ***)this)[167])(this);
	if (pTarget) {
		pTentacle->sub_10332ca0(pTarget, 1, 5);
		pTentacle->vfunc596(pTarget);
		g_10924a6c->vfunc1();
		pTentacle->sub_10269a20(0x54);
		if (*(int *)((char *)this + 0x5bb0) <= 0) {
			CUnknown103160c0 *pSquad = *(CUnknown103160c0 **)((char *)this + 0x5da4);
			if (pSquad)
				pSquad->sub_103161a0((int)pTarget);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10397410 size=0x408
#include "CNPC_VMingXiao.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CUnknown10310c10.h"
extern CUnknown10310c10 g_1093bb9c;
__declspec(dllimport) void DevMsg(const char *, ...);
float *sub_102d6100(int);
float *sub_102d6120(int);

// TARGET: CNPC_VMingXiao::sub_10397410
void *CNPC_VMingXiao::sub_10397410(int nSlot)
{
	m_eLastLostTentacle = nSlot;
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	m_nLine1b34 = 0xcac;
	sub_102ae750(0x16c, 0);
	switch (m_nMode673c) {
	case 1:
	case 2:
		sub_10398fd0();
		break;
	case 3:
	case 4:
		if (nSlot == m_nSide671c)
			sub_103990a0();
	}
	const char *pszAtt = sub_10398680(nSlot);
	sub_102c42a0("Ming_xiao_tentacle_burst_emitter", this, pszAtt, 0);
	Vector vecSpawn;
	sub_10398630(nSlot, &vecSpawn);
	Vector vecOrg = *(Vector *)vfunc219();
	Vector vecA = *(Vector *)sub_102d6100(0x11);
	Vector vecB = *(Vector *)sub_102d6120(0x11);
	Vector pos = vecSpawn;
	float flRadius = 20.0f;
	int nTry = 0;
	int nDir = 0;
	while (!sub_102a0fb0(&pos, 0x2400b, &vecA, &vecB)) {
		switch (nDir) {
		case 0:
			pos.x = vecSpawn.x + flRadius;
			pos.y = vecSpawn.y + flRadius;
			break;
		case 1:
			pos.x = vecSpawn.x + flRadius;
			pos.y = vecSpawn.y;
			break;
		case 2:
			pos.x = vecSpawn.x + flRadius;
			pos.y = vecSpawn.y - flRadius;
			break;
		case 3:
			pos.x = vecSpawn.x;
			pos.y = vecSpawn.y - flRadius;
			break;
		case 4:
			pos.x = vecSpawn.x - flRadius;
			pos.y = vecSpawn.y - flRadius;
			break;
		case 5:
			pos.x = vecSpawn.x - flRadius;
			pos.y = vecSpawn.y;
			break;
		case 6:
			pos.x = vecSpawn.x - flRadius;
			pos.y = vecSpawn.y + flRadius;
			break;
		case 7:
			pos.x = vecSpawn.x;
			pos.y = vecSpawn.y + flRadius;
			break;
		}
		nDir++;
		if (nDir > 7) {
			flRadius += 20.0f;
			nDir = 0;
		}
		nTry++;
		if (nTry >= 0x20)
			DevMsg("ERROR:  FAILED TO FIND SPAWN LOC FOR TENTACLE.\n");
	}
	CNPC_VMingXiao *pEnt = (CNPC_VMingXiao *)g_1093bb9c.sub_10310cf0(pos);
	if (pEnt) {
		CNPC_VMingXiaoTentacle *pTent = (CNPC_VMingXiaoTentacle *)pEnt;
		pEnt->vfunc218(&vecOrg.x);
		Vector dir = vecSpawn - *(Vector *)vfunc217();
		VectorNormalize(dir);
		dir *= 100.0f;
		dir.x += enginerandom->vfunc1(-10.0f, 10.0f);
		dir.y += enginerandom->vfunc1(-10.0f, 10.0f);
		dir.z += enginerandom->vfunc1(5.0f, 20.0f);
		dir *= 0.1f;
		pEnt->sub_100b2770(dir);
		pEnt->vfunc614();
		pTent->m_nSlotIndex6660 = nSlot;
		sub_10397380(pTent);
		int &rh = *(int *)&pTent->m_hMingXiao;
		rh = *(int *)vfunc1();
		m_hSlotOld[nSlot] = *(int *)pEnt->vfunc1();
		m_n6710 |= 1 << nSlot;
		m_n670c--;
		sub_10398800();
		m_f6748 = sub_103986b0();
	}
	return pEnt;
}
// END FUNCTION

// FUNCTION: 0x10397930 size=0x75
#include "CNPC_VMingXiao.h"
#include "CBaseAnimatingOverlay.h"


struct CObj10739d08 {
	struct CVal { float a; float b; } *sub_101e8da0();
	float GetB() { return sub_101e8da0()->b; }
};
extern CObj10739d08 g_10739d08;

// TARGET: CNPC_VMingXiao::sub_10397930
void CNPC_VMingXiao::sub_10397930(int index)
{
	m_hSlotOld[index] = -1;
	m_bSlotFlag[index] = 0;
	m_hSlotNew[index] = -1;
	m_flSlotValue[index] = g_10739d08.GetB();
	m_flSlotTimeA[index] = gpGlobals->curtime + 10.0f;
	m_flSlotTimeB[index] = gpGlobals->curtime + 1.0f;
	((CBaseAnimatingOverlay *)this)->sub_100991b0(index + 0x1124, 1);
}
// END FUNCTION

// FUNCTION: 0x103979d0 size=0x52
#include "CNPC_VMingXiao.h"
#include "CNPC_VMingXiaoTentacle.h"
void CNPC_VMingXiao::sub_103979d0(CNPC_VMingXiaoTentacle *pTentacle)
{
	if (pTentacle) {
		int index = pTentacle->m_nSlotIndex6660;
		if (((EHANDLE *)&m_hSlotOld[index])->Get() == (CBaseEntity *)pTentacle)
			sub_10397930(index);
	}
}
// END FUNCTION

// FUNCTION: 0x10397a50 size=0xb9
#include "CNPC_VMingXiao.h"
#include "CUnknown10739d08.h"
#include "CEHandleGet.h"

extern CUnknown10739d08 g_10739d08;
extern float g_104454c4;


struct TentView {
	char m_pad[0x6674];
	int m_nIndex;
};

struct TuneBlock64
{
	char m_pad0000[0x64];
	float m_flBase;	// 0x64
	float m_flStep;	// 0x68
};

inline TuneBlock64 *Tune64()
{
	return (TuneBlock64 *)g_10739d08.sub_101e8da0();
}

void CNPC_VMingXiao::sub_10397a50(void *pTentacle)
{
	TentView *pTent = (TentView *)pTentacle;
	if (pTent) {
		double dBase = Tune64()->m_flBase;
		float flBase = (float)dBase;
		double dStep = Tune64()->m_flStep;
		float flTime = (float)dStep * (6 - m_n670c) + flBase;
		if (!(flTime > g_104454c4))
			flTime = g_104454c4;
		m_flTime66a4 = flTime + gpGlobals->curtime;
		if ((TentView *)EHandle_Get((unsigned int &)m_hSlotNew[pTent->m_nIndex]) == pTent)
			sub_10397930(pTent->m_nIndex);
	}
}
// END FUNCTION

// FUNCTION: 0x10397b40 size=0xe1
#include "CNPC_VMingXiao.h"
struct EntInfo { void *ent; int serial; int pad; };
extern char *g_10566458;

bool CNPC_VMingXiao::sub_10397b40(void *pTentacle)
{
    char *t = (char *)this;
    if (pTentacle && !(gpGlobals->curtime < *(float *)(t + 0x66a4))) {
        int idx = *(int *)((char *)pTentacle + 0x6660);
        unsigned int h = *(unsigned int *)(t + 0x66a8 + idx * 4);
        void *pEnt;
        if (h != 0xffffffff) {
            EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
            if (e->serial == (h >> 13))
                pEnt = e->ent;
            else
                pEnt = 0;
        } else
            pEnt = 0;
        if (pEnt == pTentacle) {
            if (*(char *)(t + 0x6684 + idx) == 1)
                return true;
            int count = 0;
            for (int i = 0; i < 6; i++) {
                unsigned int h2 = *(unsigned int *)(t + 0x668c + i * 4);
                bool valid = false;
                if (h2 != 0xffffffff) {
                    EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
                    if (e->serial == (h2 >> 13) && e->ent)
                        valid = true;
                }
                if (valid || *(char *)(t + 0x6684 + i) == 1)
                    count++;
            }
            if (count < 1) {
                *(char *)(t + 0x6684 + idx) = 1;
                return true;
            }
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10397c70 size=0x110
#include "CNPC_VMingXiaoTentacle.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CNPC_VMingXiao.h"

extern CGlobalEntityList *g_10566458;

struct CMXVec3 {
	float x, y, z;
};

#define D(x) virtual void x();
#define T(p) D(p##0) D(p##1) D(p##2) D(p##3) D(p##4) D(p##5) D(p##6) D(p##7) D(p##8) D(p##9)
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)

class CMXTentacleSlots
{
public:
	D(s0)
	virtual unsigned int *vfunc1();
	D(s2) D(s3) D(s4) D(s5) D(s6) D(s7) D(s8) D(s9)
	T(a1) T(a2) T(a3) T(a4) T(a5) T(a6) T(a7) T(a8) T(a9)
	H(h1)
	T(c0)
	D(s210) D(s211) D(s212) D(s213) D(s214) D(s215) D(s216)
	virtual CMXVec3 *vfunc217();
	virtual void vfunc218(const CMXVec3 *pAngles);
	virtual CMXVec3 *vfunc219();
	H(h2) H(h3) H(h4)
	T(e5) T(e6) T(e7) T(e8) T(e9) T(f0) T(f1) T(f2) T(f3)
	D(s610) D(s611) D(s612) D(s613)
	virtual void vfunc614();
};

struct CMXSpawner {
	CMXTentacleSlots *sub_10310cf0(CMXVec3 vOrigin);	// the NPC maker's tentacle spawn (stub 0x1000e863)
};
extern CMXSpawner g_1093bc54;

CNPC_VMingXiaoTentacle *CNPC_VMingXiao::sub_10397c70(CNPC_VMingXiaoTentacle *pTentacle)
{
	if (!pTentacle)
		return 0;
	CMXTentacleSlots *pOld = (CMXTentacleSlots *)pTentacle;
	int nIndex = *(int *)((char *)pTentacle + 0x6660);
	unsigned int h = *(unsigned int *)((char *)this + nIndex * 4 + 0x66a8);
	CGlobalEntityList_Slot *t = g_10566458->m_Slots;
	void *pEnt = (h != 0xffffffff && t[h & 0x1fff].m_Serial == (int)(h >> 13)) ? (void *)t[h & 0x1fff].m_pEntity : 0;
	if (pEnt != pTentacle)
		return 0;
	if (!*((char *)this + nIndex + 0x6684))
		return 0;
	CMXTentacleSlots *pNew = g_1093bc54.sub_10310cf0(*pOld->vfunc217());
	if (pNew) {
		*(unsigned int *)((char *)this + nIndex * 4 + 0x668c) = *pNew->vfunc1();
		pNew->vfunc218(pOld->vfunc219());
		*(int *)((char *)pNew + 0x6674) = nIndex;
		if (this)
			*(unsigned int *)((char *)pNew + 0x6670) = *vfunc1();
		else
			*(unsigned int *)((char *)pNew + 0x6670) = 0xffffffff;
		*((char *)pNew + 0x6678) = 1;
		pNew->vfunc614();
		sub_10397380((CNPC_VMingXiaoTentacle *)pNew);
	}
	return (CNPC_VMingXiaoTentacle *)pNew;
}
// END FUNCTION

// FUNCTION: 0x10397dd0 size=0x1d
// TARGET: CUnk10397dd0::sub_10397dd0
struct CUnk10397dd0
{
    char pad[0x66c0];
    int m_66c0;
    void sub_10397dd0(int a, int b);
};
void CUnk10397dd0::sub_10397dd0(int a, int b)
{
    if (a && b)
    {
        m_66c0 = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10397e00 size=0x64
#include "CGlobalEntityList.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CNPC_VMingXiao.h"

#define S1(p, n) virtual void p##n();
#define S10(p) S1(p,0) S1(p,1) S1(p,2) S1(p,3) S1(p,4) S1(p,5) S1(p,6) S1(p,7) S1(p,8) S1(p,9)
struct Slots217 {
    S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
    S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
    S10(c0)
    S1(v, 0) S1(v, 1) S1(v, 2) S1(v, 3) S1(v, 4) S1(v, 5) S1(v, 6)
    virtual float *f217();
};

extern CGlobalEntityList *g_10566458;

// TARGET: CNPC_VMingXiao::sub_10397e00
void CNPC_VMingXiao::sub_10397e00(CBaseEntity *pEnt)
{
    if (!pEnt)
        return;
    unsigned int *ph = (unsigned int *)((char *)this + 0x66a8);
    for (int i = 6; i; i--, ph++) {
        unsigned int h = *ph;
        CGlobalEntityList_Slot *s;
        CNPC_VMingXiaoTentacle *pTentacle;
        if (h != 0xffffffff
            && (s = &g_10566458->m_Slots[h & 0x1fff])->m_Serial == (int)(h >> 13)
            && (pTentacle = (CNPC_VMingXiaoTentacle *)s->m_pEntity) != 0
            && (CBaseEntity *)pTentacle != pEnt)
            pTentacle->sub_1039ef90(((Slots217 *)pEnt)->f217());
    }
}
// END FUNCTION

// FUNCTION: 0x10397e90 size=0x45
#include "CNPC_VMingXiao.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CEHandleGet.h"

void CNPC_VMingXiao::sub_10397e90()
{
	for (int i = 0; i < 6; i++) {
		CNPC_VMingXiaoTentacle *pTentacle = (CNPC_VMingXiaoTentacle *)EHandle_Get(*(unsigned int *)&m_hSlotOld[i]);
		if (pTentacle)
			pTentacle->sub_1039ea60();
	}
}
// END FUNCTION

// FUNCTION: 0x10397f00 size=0x45
#include "CNPC_VMingXiao.h"
#include "CNPC_VMingXiaoTentacle.h"

void CNPC_VMingXiao::sub_10397f00()
{
	for (int i = 0; i < 6; i++) {
		CNPC_VMingXiaoTentacle *pTentacle = (CNPC_VMingXiaoTentacle *)((CHandle<CBaseEntity> *)m_hSlotNew)[i].Get();
		if (pTentacle)
			pTentacle->sub_10395ce0();
	}
}
// END FUNCTION

// FUNCTION: 0x10397f70 size=0x6f
#include "CUnknown10739d08.h"

extern CUnknown10739d08 g_10739d08;
extern float g_104454c4;

struct TuneBlock
{
	char m_pad0000[0x20];
	float m_flGrace;	// 0x20
	char m_pad0024[0x6c - 0x24];
	float m_flBase;	// 0x6c
	float m_flStep;	// 0x70
};

inline TuneBlock *Tune()
{
	return (TuneBlock *)g_10739d08.sub_101e8da0();
}

struct CNPC_VMingXiaoUnit
{
	char m_pad0000[0x670c];
	int m_n670c;	// 0x670c
	char sub_10398870();	// stub 0x10012f26
	float sub_10397f70();
};

float CNPC_VMingXiaoUnit::sub_10397f70()
{
	if (sub_10398870())
		return Tune()->m_flGrace;
	double dBase = Tune()->m_flBase;
	float flBase = (float)dBase;
	double dStep = Tune()->m_flStep;
	float flTime = (float)dStep * (6 - m_n670c) + flBase;
	if (!(flTime > g_104454c4))
		flTime = g_104454c4;
	return flTime;
}
// END FUNCTION

// FUNCTION: 0x10398000 size=0x19
#include "CNPC_VMingXiao.h"

// TARGET: sub_10398000
char CNPC_VMingXiao::sub_10398000(int code)
{
	return (m_n6710 & (1 << code)) == 0;
}
// END FUNCTION

// FUNCTION: 0x10398030 size=0x2e0
#include "CNPC_VMingXiao.h"
#include "CUnknown1039ab10.h"
#include "CEntityVSlots.h"
#include "ehandle.h"
#include "globalvars.h"

char CNPC_VMingXiao::sub_10398030(int nIndex, char bFlag)
{
	if (!sub_10398000(nIndex))
		return 0;
	if (gpGlobals->curtime < m_flSlotTimeA[nIndex])
		return 0;

	int act = -1;
	switch (nIndex)
	{
	case 0:
		if (((CUnknown1039ab10 *)this)->sub_1039ab10())
			return 0;
		if (m_f6264 < 100.0f)
			return 0;
		if (m_f6264 >= 300.0f)
			return 0;
		act = 0x112a;
		break;
	case 1:
		if (((CUnknown1039ab10 *)this)->sub_1039ab10())
			return 0;
		if (m_f6264 < 100.0f)
			return 0;
		if (m_f6264 >= 300.0f)
			return 0;
		act = 0x112b;
		break;
	case 2:
		if (((CUnknown1039ab10 *)this)->sub_1039ab10())
			return 0;
		if (m_f6264 < 100.0f)
			return 0;
		if (m_f6264 >= 200.0f)
			return 0;
		act = 0x112c;
		break;
	case 3:
		if (((CUnknown1039ab10 *)this)->sub_1039ab10())
			return 0;
		if (m_f6264 < 100.0f)
			return 0;
		if (m_f6264 >= 200.0f)
			return 0;
		act = 0x112d;
		break;
	case 4:
	case 5:
		if (((CUnknown1039ab10 *)this)->sub_1039ab10())
			return 0;
		if (m_f6264 < 150.0f)
			return 0;
		if (!m_h6718.Get())
			return 0;
		if (m_nSide671c != nIndex)
			return 0;
		break;
	}

	if (bFlag && act != -1)
	{
		CEntityVSlots *pTarget = (CEntityVSlots *)m_h667c.Get();
		void *pObj = pTarget ? *(void **)((char *)pTarget + 0xa0) : 0;
		if (!pObj)
			return 0;
		int seq = ((CEntityVSlots *)pObj)->slot361(act);
		int u = vfunc376_slot(seq);
		void *pEnemyObj = vfunc167();
		if (pEnemyObj)
			pEnemyObj = *(void **)((char *)pEnemyObj + 0x9c);
		int out = -1;
		if (!vfunc331(pObj, (int)pEnemyObj, u, &out) || out < 0)
			return 0;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x103983d0 size=0x1e0
#include "CNPC_VMingXiao.h"
#include "CUnknown10739d08.h"

extern CUnknown10739d08 g_10739d08;

inline float *TV() { return g_10739d08.sub_101e8da0(); }
inline float TG(int off) { float f = *(float *)((char *)TV() + off); return f; }

// TARGET: sub_103983d0
float __fastcall sub_103983d0(CNPC_VMingXiao *pThis, int unused, int nSide)
{
	float flBase;
	float flRate;
	switch (nSide) {
	case 0:
	case 1:
		if (pThis->m_f6264 > 200.0f)
			TV();
		flBase = pThis->m_f6264 > 150.0f ? TG(0x34) : TG(0x38);
		{
			float flMin = TG(0x74);
			flRate = flMin + TG(0x78) * (6 - pThis->m_n670c);
		}
		if (!(flRate > 0.0f))
			flRate = 0.0f;
		return flRate * flBase;
	case 2:
	case 3:
		flBase = pThis->m_f6264 > 150.0f ? TG(0x3c) : TG(0x40);
		flRate = TG(0x74);
		flRate += TG(0x78) * (6 - pThis->m_n670c);
		if (!(flRate > 0.0f))
			flRate = 0.0f;
		return flRate * flBase;
	case 4:
	case 5:
		if (pThis->m_f6264 > 200.0f) {
			flBase = TG(0x7c);
			flRate = TG(0x80);
		} else {
			flBase = TG(0x84);
			flRate = TG(0x88);
		}
		flRate = flRate * (6 - pThis->m_n670c) + flBase;
		if (!(flRate > 0.0f))
			flRate = 0.0f;
		return flRate;
	}
	return 20.0f;
}
// END FUNCTION

// FUNCTION: 0x10398630 size=0x37
#include "CBaseAnimating.h"

struct CUnknown10398630
{
	int sub_10398680(int a);
	void sub_10398630(int a, int b);
};

// TARGET: CUnknown10398630::sub_10398630
void CUnknown10398630::sub_10398630(int a, int b)
{
	int bone = ((CBaseAnimating *)this)->sub_10092550(sub_10398680(a));
	if (bone < 0)
	{
		bone = 0;
	}
	float vecOut[3];
	((CBaseAnimating *)this)->sub_100926e0(bone, b, (int)vecOut);
}
// END FUNCTION

// FUNCTION: 0x10398680 size=0x1f
#include "vampire.h"
extern const char *g_106433ac[];
// TARGET: sub_10398680
const char *__stdcall sub_10398680(int i)
{
    if (i < 0 && i >= 6)
        return g_106433ac[0];
    return g_106433ac[i];
}
// END FUNCTION

// FUNCTION: 0x103986b0 size=0x90
#include "CNPC_VMingXiao.h"
namespace block_103986b0 {
struct CNPC_VMingXiaoUnit : CNPC_VMingXiao
{
	char sub_10398000(int i);
};
char CNPC_VMingXiaoUnit::sub_10398000(int i)
{
	return (m_n6710 & (1 << i)) == 0;
}
}
using namespace block_103986b0;

// TARGET: ?sub_103986b0@CNPC_VMingXiao@@QAEMXZ
float CNPC_VMingXiao::sub_103986b0()
{
	CNPC_VMingXiaoUnit *self = (CNPC_VMingXiaoUnit *)this;
	float sum = 0.0f;
	int n = 0;
	int denom = 0;
	if (self->sub_10398000(0)) {
		sum += 400.0f;
		n += 2;
		denom = n;
	}
	if (self->sub_10398000(1)) {
		sum += 400.0f;
		n += 2;
		denom = n;
	}
	if (self->sub_10398000(2)) {
		sum += 300.0f;
		n += 2;
		denom = n;
	}
	if (self->sub_10398000(3)) {
		sum += 300.0f;
		n += 2;
		denom = n;
	}
	if (n > 0)
		return sum / denom;
	return 300.0f;
}
// END FUNCTION

// FUNCTION: 0x10398770 size=0xa
#include "ConVar.h"
ConVar g_1093bb10("debug_tentacle_mask", "-1", 0);
// END FUNCTION

// FUNCTION: 0x10398800 size=0x4f
#include "CNPC_VMingXiao.h"
struct CTuning1093bb14
{
	virtual void vfunc0();
	virtual bool vfunc1();
	int m_n04, m_n08, m_n0c, m_n10, m_n14, m_n18, m_n1c, m_n20, m_n24, m_n28;
	int m_n2c;
};
extern CTuning1093bb14 *g_1093bb14;

inline bool Tuning_IsValid() { return g_1093bb14->vfunc1() || g_1093bb14->m_n2c > -1; }
inline int Tuning_GetValue() { if (g_1093bb14->vfunc1()) return 0; return g_1093bb14->m_n2c; }

void CNPC_VMingXiao::sub_10398800()
{
	if (Tuning_IsValid())
		*(int *)((char *)this + 0x67c) = Tuning_GetValue();
	else
		*(int *)((char *)this + 0x67c) = m_n6710;
}
// END FUNCTION

// FUNCTION: 0x10398870 size=0xf
// TARGET: sub_10398870
bool __fastcall sub_10398870(char *pThis)
{
	return *(int *)(pThis + 0x6674) != -1;
}
// END FUNCTION

// FUNCTION: 0x10398890 size=0xda
#include "CNPC_VMingXiao.h"

void CNPC_VMingXiao::sub_10398890(const float *pOrigin, int nMode, Vector *pOutPoint, Vector *pOutAxis)
{
	const Vector &vecOrigin = *(const Vector *)pOrigin;
	if (nMode == 4) {
		Vector vecExtent = m_vecExtent629c * -70.0f;
		Vector vecBase = m_vecAxis6290 * 15.0f + vecOrigin;
		*pOutPoint = vecBase + vecExtent;
	} else {
		Vector vecExtent = m_vecExtent629c * -70.0f;
		Vector vecBase = m_vecAxis6290 * 15.0f + vecOrigin;
		*pOutPoint = vecBase - vecExtent;
	}
	*pOutAxis = m_vecAxis6290;
}
// END FUNCTION

// FUNCTION: 0x103989b0 size=0x113
#include "CEntityVSlots.h"
#include <math.h>

extern float g_104454c4;

struct MingTurnView : CEntityVSlots
{
    char pad0004[0x6290 - 4];
    float m_flDirA_x;	// 0x6290
    float m_flDirA_y;	// 0x6294
    char pad6298[0x629c - 0x6298];
    float m_flDirB_x;	// 0x629c
    float m_flDirB_y;	// 0x62a0

    bool sub_10398000(int nMove);	// stub 0x10001802
};

// TARGET: sub_103989b0
bool __fastcall sub_103989b0(MingTurnView *pThis, int unused, const Vector &vecTarget, int *pOut)
{
    Vector vecDelta = vecTarget - *pThis->slot217();
    if (fabs(vecDelta.z) > 64.0)
        return false;
    vecDelta.z = 0.0f;
    VectorNormalize(vecDelta);
    float flDot = vecDelta.x * pThis->m_flDirA_x + vecDelta.y * pThis->m_flDirA_y;
    if (flDot < -0.17f || flDot > 0.5f)
        return false;
    if (vecDelta.x * pThis->m_flDirB_x + vecDelta.y * pThis->m_flDirB_y > g_104454c4)
    {
        if (pThis->sub_10398000(4))
        {
            *pOut = 4;
            return true;
        }
    }
    else
    {
        if (pThis->sub_10398000(5))
        {
            *pOut = 5;
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10398b20 size=0x1eb
#include "CNPC_VMingXiao.h"
#include "CNPC_VWerewolf.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"
#include <math.h>

extern CGlobalEntityList g_106eb5d8;
extern Vector g_1070d1b0;
extern char g_106b8540[];
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);

struct IGameClientsX
{
	virtual void v0();
	virtual bool vfunc1();
	char m_pad[0x28];
	int m_n2c;
};
extern IGameClientsX *g_1093ba8c;

// TARGET: CNPC_VMingXiao::sub_10398b20
CBaseEntity *CNPC_VMingXiao::sub_10398b20(int *pSide, Vector *pOutPoint, Vector *pOutAxis)
{
	if (!(m_f6264 < 150.0f)) {
		if (sub_10398000(4) || sub_10398000(5)) {
			if (!g_1093ba8c->vfunc1() && g_1093ba8c->m_n2c) {
				CBaseEntity *pEnt = 0;
				CBaseEntity *pBest = 0;
				float flRadius = 257.0f;
				Vector vecCenter = *((CEntityVSlots *)this)->slot217();
				do {
					pEnt = g_106eb5d8.sub_100f8490(pEnt, 6, &vecCenter, flRadius);
					if (!pEnt)
						break;
					if (((CNPC_VWerewolf *)this)->sub_10366400((int)pEnt))
						continue;
					const char *pszName = pEnt->m_name26c ? pEnt->m_name26c : g_106b8540;
					if (_strnicmp(pszName, "Pedestal", 8) != 0)
						continue;
					Vector vVel;
					Vector vAng;
					((CEntityVSlots *)pEnt)->slot199(&vVel, &vAng);
					if ((float)fabs(vVel.x - g_1070d1b0.x) > 0.1f)
						continue;
					if ((float)fabs(vVel.y - g_1070d1b0.y) > 0.1f)
						continue;
					if ((float)fabs(vVel.z - g_1070d1b0.z) <= 0.1f) {
						if (!sub_103989b0(((CEntityVSlots *)pEnt)->slot217(), pSide))
							continue;
						Vector *pOrigin = ((CEntityVSlots *)pEnt)->slot217();
						float dx = vecCenter.x - pOrigin->x;
						float dy = vecCenter.y - pOrigin->y;
						float dz = vecCenter.z - pOrigin->z;
						flRadius = pfSqrt(dx * dx + dy * dy + dz * dz);
						pBest = pEnt;
					}
				} while (1);
				if (pBest) {
					sub_10398890((const float *)((CEntityVSlots *)pBest)->slot217(), *pSide, pOutPoint, pOutAxis);
					return pBest;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10398d90 size=0xd
#include "CUnknown10398d90.h"
void CUnknown10398d90::sub_10398d90(int value)
{
	m_unk673c = value;
}
// END FUNCTION

// FUNCTION: 0x10398db0 size=0x1a5
#include "CBaseAnimating.h"
#include "CBaseEntity.h"
#include "CNPC_VMingXiao.h"
#include "CEntityVSlots.h"
#include "CRagdollProp.h"
#include "CPhysicsAnimlink.h"
#include "CUnknown10398d90.h"

CEntityVSlots *sub_100a9ab0(const char *pszClassname, const float *pOrigin, const float *pAngles, CEntityVSlots *pOwner);
extern float g_1070d1b0[3];
extern float g_1070d9d0[3];

bool CNPC_VMingXiao::sub_10398db0()
{
	if (!m_h6718.Get())
		return false;
	CEntityVSlots *pLink = sub_100a9ab0("phys_animlink", g_1070d1b0, g_1070d9d0, 0);
	if (!pLink)
		return false;
	int nBone;
	if (m_nSide671c == 4)
		nBone = sub_10092550("Bip01 R ThrowingTenticle5");
	else
		nBone = sub_10092550("Bip01 L ThrowingTenticle5");
	if (nBone < 0)
		return false;
	int pPhys = m_h6718.Get()->m_obj36c;
	if (!pPhys)
		return false;
	CRagdollProp *pRagdoll = dynamic_cast<CRagdollProp *>(m_h6718.Get());
	if (pRagdoll) {
		pPhys = pRagdoll->vfunc265("Bone01");
		if (!pPhys)
			return false;
	}
	Vector vecA(0, 0, 0);
	Vector vecB(0, 0, 0);
	((CPhysicsAnimlink *)pLink)->sub_1014f210((CBaseAnimating *)this, nBone, (void *)pPhys, (int)&vecA, (int)&vecB);
	m_h6738 = (CBaseEntity *)pLink;
	((CUnknown10398d90 *)this)->sub_10398d90(3);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10398fd0 size=0x91
#include "CBaseEntity.h"
#include "CNPC_VMingXiao.h"
#include "CUnknown10398d90.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
void sub_1000e255(CGlobalEntityList_Ent *pEnt);	// stub 0x1000e255 for 0x101cd970

inline CGlobalEntityList_Ent *LookupEntity(unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
	if (pSlot->m_Serial != (int)(h >> 13))
		return 0;
	return pSlot->m_pEntity;
}

// TARGET: CNPC_VMingXiao::sub_10398fd0
void CNPC_VMingXiao::sub_10398fd0()
{
	char *p = (char *)this;
	if (LookupEntity(*(unsigned int *)(p + 0x6738)))
	{
		unsigned int h = *(volatile unsigned int *)(p + 0x6738);
		CGlobalEntityList_Slot *pSlot;
		CGlobalEntityList_Ent *pEnt = (h != 0xffffffff && (pSlot = &g_10566458->m_Slots[h & 0x1fff])->m_Serial == (int)(h >> 13)) ? pSlot->m_pEntity : 0;
		sub_1000e255(pEnt);
		*(unsigned int *)(p + 0x6738) = 0xffffffff;
	}
	*(unsigned int *)(p + 0x6718) = 0xffffffff;
	sub_10013110(0.75f);
	((CUnknown10398d90 *)this)->sub_10398d90(0);
}
// END FUNCTION

// FUNCTION: 0x103990a0 size=0x5
#include "CNPC_VMingXiao.h"
struct CWrap103990a0 { void sub_103990a0(); };
// TARGET: sub_103990a0
// the game's 0x103990a0: a tail call (jmp) of CNPC_VMingXiao::sub_10398fd0
void CWrap103990a0::sub_103990a0()
{
	((CNPC_VMingXiao *)this)->CNPC_VMingXiao::sub_10398fd0();
}
// END FUNCTION

// FUNCTION: 0x103990c0 size=0x432
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CNPC_VMingXiao.h"
#include "CRagdollProp.h"
#include "CUnknown100290c0.h"
#include "CUnknown10398d90.h"
#include "ConVar.h"
#include "IPhysicsObject.h"

extern ConVar g_1093bbc8;
extern ConVar g_1093bc10;
extern ConVar g_1093b9f8;
extern char g_1057c684[];
extern char g_10538764[];
extern "C" void *__cdecl __RTDynamicCast(void *p, long off, void *src, void *dst, int bThrow);
void sub_101cd970(CBaseEntity *p);
float sub_101d2c70(const Vector *v);
float sub_1013d580(float a, float b);
Vector sub_101d2f40(float flYaw);
Vector *sub_1032b960();

// ming_xiao_throw_base / ming_xiao_throw_power / ming_xiao_throw_hds (unit_210)
#define MINGXIAO_THROW_BASE (g_1093bc10.GetFloat())
#define MINGXIAO_THROW_POWER (g_1093bbc8.GetFloat())
#define MINGXIAO_THROW_HDS (g_1093b9f8.GetFloat())

struct CBoundsView { char pad[0x274]; Vector mins; Vector maxs; };

#define LOOK(h) ((CBaseEntity *)((CUnknown100290c0 *)g_10566458)->sub_100290c0((unsigned int *)&(h)))


void CNPC_VMingXiao::sub_103990c0()
{
	if (LOOK(m_h6738)) {
		sub_101cd970(LOOK(m_h6738));
		*(CBaseHandle *)&m_h6738 = (IHandleEntity *)0;
	}
	CBaseEntity *pEnt = vfunc167();
	if (pEnt) {
		Vector vecOrigin = *(Vector *)((CNPC_VMingXiao *)LOOK(m_h6718))->vfunc220();
		Vector vecTarget;
		sub_102c36d0(vecOrigin, pEnt, MINGXIAO_THROW_POWER, 0, &vecTarget);
		CBoundsView *pb = (CBoundsView *)pEnt;
		Vector *pSize = sub_1032b960();
		VectorSubtract(pb->maxs, pb->mins, *pSize);
		vecTarget.z += pSize->z * 0.5f;
		Vector dir = vecTarget - vecOrigin;
		float flLenSqr = dir.LengthSqr();
		float flVecYaw = sub_101d2c70(&dir);
		float flYaw = vfunc221()[1];
		float flDiff = sub_1013d580(flVecYaw, flYaw);
		if (flDiff <= -20.0f) {
			float z = dir.z;
			dir = sub_101d2f40(flYaw - 20.0f);
			dir.z = z;
		} else if (flDiff >= 20.0f) {
			float z = dir.z;
			dir = sub_101d2f40(flYaw + 20.0f);
			dir.z = z;
		}
		VectorNormalize(dir);
		float flSpeed;
		if (MINGXIAO_THROW_BASE + MINGXIAO_THROW_POWER * flLenSqr > 1000.0f)
			flSpeed = MINGXIAO_THROW_BASE + MINGXIAO_THROW_POWER * flLenSqr;
		else
			flSpeed = 1000.0f;
		float flGrav = MINGXIAO_THROW_HDS;
		dir = dir * flSpeed;
		dir.z += flGrav * flLenSqr;
		CRagdollProp *pRag = (CRagdollProp *)__RTDynamicCast(LOOK(m_h6718), 0, g_10538764, g_1057c684, 0);
		if (pRag) {
			Vector zero(0, 0, 0);
			pRag->vfunc266((int)&dir, (int)&zero);
		} else {
			IPhysicsObject *pPhys = (IPhysicsObject *)m_h6718.Get()->m_obj36c;
			if (pPhys) {
				Vector zero(0, 0, 0);
				Vector vel, angVel;
				pPhys->vfunc40(&vel.x, &angVel.x);
				pPhys->vfunc39(&dir.x, &zero.x);
			}
		}
	}
	m_h6718 = (CBaseEntity *)0;
	sub_10013110(0.75f);
	((CUnknown10398d90 *)this)->sub_10398d90(0);
}
// END FUNCTION

// FUNCTION: 0x10399610 size=0x22b
#include "CNPC_VMingXiaoTentacle.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VMingXiao.h"
#include "CEHandleGet.h"
#include "CVProfile.h"
#include "ScopeTrace.h"

void CNPC_VMingXiao::sub_10399610()
{
	ScopeTrace trace("CNPC_VMingXiao::CoordinateTroops", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CVProfile *pProf = g_109f3648;
	if (pProf->m_enabled || !pProf->m_bAtRoot) {
		if (pProf->m_pCurNode->m_pszName != "CNPC_VMingXiao_CoordinateTroops")
			pProf->m_pCurNode = pProf->m_pCurNode->GetSubNode("CNPC_VMingXiao_CoordinateTroops", 0, "Unaccounted");
		CVProfNode *pNode = pProf->m_pCurNode;
		pNode->m_nCurFrameCalls++;
		if (pNode->m_nRecursions++ == 0) {
			unsigned long *pSample = (unsigned long *)&pNode->m_CurFrameTime;
			__asm {
				mov ecx, pSample
				rdtsc
				mov [ecx], eax
				mov [ecx + 4], edx
			}
			g_109f3648->PushGroup(pNode->m_nBudgetGroupID);
		}
		pProf->m_bAtRoot = false;
	}
	CNPC_VMingXiaoTentacle *pTentacle;
	unsigned int *pHandle = (unsigned int *)&m_hSlotOld[m_n6740];
	pTentacle = (CNPC_VMingXiaoTentacle *)EHandle_Get(*pHandle);
	if (pTentacle)
		sub_103998d0(pTentacle);
	pHandle = (unsigned int *)&m_hSlotNew[m_n6740];
	pTentacle = (CNPC_VMingXiaoTentacle *)EHandle_Get(*pHandle);
	if (pTentacle)
		sub_103999f0(pTentacle);
	if (++m_n6740 >= 6)
		m_n6740 = 0;
	g_109f3648->ExitScopeInlined();
}
// END FUNCTION

// FUNCTION: 0x103998d0 size=0xd4
#include "CNPC_VMingXiao.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CEntityVSlots.h"

void CNPC_VMingXiao::sub_103998d0(CNPC_VMingXiaoTentacle *pTentacle)
{
	if (pTentacle->m_nAct65c8 == 0x163 || pTentacle->m_nAct65c8 == 0x165 || pTentacle->m_n6670 != 2)
		return;
	Vector *pMine = ((CEntityVSlots *)this)->slot217();
	Vector *pTheirs = ((CEntityVSlots *)pTentacle)->slot217();
	Vector vecDir = *pTheirs - *pMine;
	if (!(VectorNormalize(vecDir) > 128.0f)
		&& !(vecDir.x * m_vecAxis6290.x + vecDir.y * m_vecAxis6290.y < 0.25))
		pTentacle->sub_1039ef90((float *)((CEntityVSlots *)this)->slot217());
}
// END FUNCTION

// FUNCTION: 0x103999f0 size=0x1fd
#include "CNPC_VMingXiao.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CUnknown1039aaf0.h"

void CNPC_VMingXiao::sub_103999f0(CNPC_VMingXiaoTentacle *pTentacle)
{
	CNPC_VMingXiaoTentacle *pTarget = (CNPC_VMingXiaoTentacle *)vfunc167();
	if (!pTentacle || !pTarget)
		return;

	((CUnknown1039aaf0 *)this)->sub_1039aaf0(0);
	((CUnknown1039aaf0 *)pTentacle)->sub_1039aaf0(0);

	Vector vecThis = *(Vector *)vfunc217();
	Vector vecTentacle = *(Vector *)pTentacle->vfunc217();
	Vector vecTarget = *(Vector *)pTarget->vfunc217();

	Vector vecToTentacle = vecTentacle - vecThis;
	Vector vecToTarget = vecTarget - vecThis;
	Vector vecTentacleToTarget = vecTarget - vecTentacle;

	float flDistTentacle = pfVectorNormalize(vecToTentacle);
	float flDistTarget = pfVectorNormalize(vecToTarget);
	float flDistTentacleTarget = pfVectorNormalize(vecTentacleToTarget);

	if (flDistTentacle < flDistTarget && vecToTentacle.Dot(vecToTarget) > 0.965f)
		((CUnknown1039aaf0 *)this)->sub_1039aaf0(1);

	if (flDistTentacle < flDistTentacleTarget && vecToTentacle.Dot(vecTentacleToTarget) < -0.965f)
		((CUnknown1039aaf0 *)pTentacle)->sub_1039aaf0(1);
}
// END FUNCTION

// FUNCTION: 0x10399c70 size=0x95
struct ScopeEntry { const char *a; const char *b; const char *c; };
class CVProfile {
public:
	__declspec(dllimport) void EnterScope(const char *, int, const char *, bool);
	__declspec(dllimport) void ExitScope();
};
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern CVProfile *g_109f3648;
extern char g_10647288[];
extern char g_106472b4[];
extern char g_1053a868[];
extern char g_106b8540[];
extern char g_105387dc[];

// TARGET: sub_10399c70
void __fastcall sub_10399c70(char *self)
{
	const char *name;
	if (self) {
		name = *(const char **)(self + 0x26c);
		if (!name)
			name = g_106b8540;
	} else {
		name = g_105387dc;
	}
	g_109f3620[*g_109f3680].a = g_10647288;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	g_109f3648->EnterScope(g_106472b4, 0, g_1053a868, false);
	g_109f3648->ExitScope();
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10399d40 size=0x148
#include "CNPC_VMingXiao.h"
#include "CEntityVSlots.h"

void sub_10144a30(const Vector &vecOrigin, const Vector &vecDir, float flA, float flB, int r, int g, int b, int a, float flC);

void CNPC_VMingXiao::vfunc123()
{
	if (*(unsigned int *)&m_pad0224 & 0x20000000) {
		sub_10144a30(*((CEntityVSlots *)this)->slot220(), Vector(1.0f, 0.0f, 0.0f), 100.0f, 8.0f, 255, 32, 32, 128, 0.0f);
		sub_10144a30(*((CEntityVSlots *)this)->slot220(), Vector(1.0f, 0.0f, 0.0f), 150.0f, 8.0f, 255, 32, 32, 128, 0.0f);
		sub_10144a30(*((CEntityVSlots *)this)->slot220(), Vector(1.0f, 0.0f, 0.0f), 200.0f, 8.0f, 255, 32, 32, 128, 0.0f);
		sub_10144a30(*((CEntityVSlots *)this)->slot220(), Vector(1.0f, 0.0f, 0.0f), 300.0f, 8.0f, 255, 32, 32, 128, 0.0f);
	}
	sub_1029ca50();
}
// END FUNCTION

// FUNCTION: 0x10399ef0 size=0xb5
struct CSurfaceProps
{
	virtual void a0(); virtual void a1(); virtual void a2();
	virtual unsigned short v3(const char *pszName);
};

struct CTraceBuf { char data[1400]; };

extern CSurfaceProps *g_10723944;
extern char g_1055022c[];
extern void sub_100c4600(CTraceBuf *, int, char *, char *);
extern char sub_100c4d50(void *, char *, char *, CTraceBuf *, int, char *);

bool __stdcall sub_10399ef0(void *a1, int a2, char *a3, char *a4, char *a5, int a6)
{
	CTraceBuf buf;
	sub_100c4600(&buf, a6, a4, a5);
	if (sub_100c4d50(a1, a4, a5, &buf, a2, a3)) {
		int idx = *(int *)(a5 + *(int *)(a5 + 8) + *(int *)(a3 + 0x50) * 0x20);
		int off = *(int *)(a4 + 0xf4);
		*(char **)(a3 + 0x3c) = g_1055022c;
		*(unsigned short *)(a3 + 0x42) = 0x8000;
		int rel = idx * 0xa0;
		CSurfaceProps *pSurf = g_10723944;
		char *pElem = rel + off + a4;
		*(unsigned short *)(a3 + 0x40) = pSurf->v3(pElem + *(int *)(pElem + 0x98));
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10399fe0 size=0x17f
#include "CBaseAnimating.h"
#include "CNPC_VMingXiao.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

bool CNPC_VMingXiao::vfunc100(int a, int b, int c)
{
	int i;
	int off;
	char *pSet;
	ScopeTrace trace("CNPC_VMingXiao::TestHitboxes", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	char *pHdr = (char *)((CBaseAnimating *)this)->sub_100952d0(-1);
	if (!pHdr)
		return false;
	if (!*((char *)this + 0x6678))
		return false;
	if (*(int *)(pHdr + 0x100) < 7)
		return false;
	int cache = ((CBaseAnimating *)this)->sub_10095460();
	pSet = pHdr + *(int *)(pHdr + 0x104);
	if (pSet && *(int *)(pSet + 4)) {
		if (sub_10399ef0(a, b, c, pHdr, pSet, cache))
			return true;
	}
	i = 0;
	off = 12;
	do {
		if (sub_10398000(i)) {
			pSet = pHdr + off + *(int *)(pHdr + 0x104);
			if (pSet && *(int *)(pSet + 4)) {
				if (sub_10399ef0(a, b, c, pHdr, pSet, cache))
					return true;
			}
		}
		i = i + 1;
		off += 12;
	} while (off < 0x54);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1039a1c0 size=0xa
#include "ConCommand.h"
void sub_1039a250(void);
ConCommand g_1093bae4("ming_xiao_particle", sub_1039a250, "Use this command force ming xiao to show one of her particles.", 0, 0);
// END FUNCTION

// FUNCTION: 0x1039a250 size=0x398
#include "CNPC_VMingXiao.h"
#include "CGlobalEntityList.h"
#include "CTakeDamageInfo.h"
#include "CEntityLookup.h"
#include "CUnknown1039a6e0.h"
#include "CUnknown10398630.h"
#include "globalvars.h"
#include "engineserver.h"
#include "ehandle.h"

extern CGlobalEntityList g_106eb5d8;
extern "C" int __cdecl _strcmpi(const char *, const char *);
void sub_101d26b0(Vector, const char *, CBaseEntity *, int, int, int);
void sub_101d2780(Vector, const char *, CBaseEntity *, int, int, int);

void sub_1039a250()
{
	const char *name = engine->vfunc84(1);
	if (!name || !*name)
		return;
	CNPC_VMingXiao *pPlayer = (CNPC_VMingXiao *)sub_101193b0();
	if (!pPlayer)
		return;
	CNPC_VMingXiao *pEnt = (CNPC_VMingXiao *)g_106eb5d8.sub_100f8370(0, 0x200);
	for (; pEnt; pEnt = (CNPC_VMingXiao *)g_106eb5d8.sub_100f8370(pEnt, 0x200)) {
		if (pEnt->sub_10398870())
			continue;
		if (!_strcmpi(name, "spit") || !_strcmpi(name, "0")) {
			pEnt->m_flTime66c0 = 0;
			for (int i = 0; i < 6; i++)
				pEnt->m_flSlotTimeA[i] = gpGlobals->curtime + 5.0f;
		} else if (!_strcmpi(name, "tentacle") || !_strcmpi(name, "1")) {
			CTakeDamageInfo info;
			bool done = false;
			info.sub_101c26d0(pPlayer->sub_1032e7b0(), pPlayer, 200.0f, 0, 0, 0, -1);
			info.sub_101c2a10(-1);
			int i = 0;
			do {
				if (done)
					break;
				if (pEnt->sub_10398000(i)) {
					Vector v;
					((CUnknown10398630 *)pEnt)->sub_10398630(i, &v);
					info.m_pos1c = *(CTDIPos *)&v;
					switch (i) {
					case 0: ((CUnknown1039a6e0 *)pEnt)->sub_1039a6e0(5); break;
					case 1: ((CUnknown1039a6e0 *)pEnt)->sub_1039a6e0(4); break;
					case 2: ((CUnknown1039a6e0 *)pEnt)->sub_1039a6e0(9); break;
					case 3: ((CUnknown1039a6e0 *)pEnt)->sub_1039a6e0(8); break;
					case 4: ((CUnknown1039a6e0 *)pEnt)->sub_1039a6e0(7); break;
					case 5: ((CUnknown1039a6e0 *)pEnt)->sub_1039a6e0(6); break;
					default: ((CUnknown1039a6e0 *)pEnt)->sub_1039a6e0(5); break;
					}
					pEnt->sub_100a1250(&info);
					done = true;
				}
				i++;
			} while (i < 6);
		} else if (!_strcmpi(name, "baby") || !_strcmpi(name, "2")) {
			for (int i = 0; i < 6; i++) {
				CNPC_VMingXiao *pT = (CNPC_VMingXiao *)((EHANDLE *)&pEnt->m_hSlotOld[i])->Get();
				if (pT)
					pT->m_n6674 = (int &)gpGlobals->curtime;
			}
		} else if (!_strcmpi(name, "die") || !_strcmpi(name, "3")) {
			CTakeDamageInfo info;
			info.sub_101c26d0(pPlayer->sub_1032e7b0(), pPlayer, 5000.0f, 0, 0, 0, -1);
			info.sub_101c2a10(-1);
			for (int i = 0; i < 6; i++) {
				if (pEnt->sub_10398000(i)) {
					((CUnknown1039a6e0 *)pEnt)->sub_1039a6e0(1);
					pEnt->sub_100a1250(&info);
				}
			}
		} else if (_strcmpi(name, "damage")) {
			_strcmpi(name, "4");
		}
	}
	if (!_strcmpi(name, "player") || !_strcmpi(name, "5")) {
		sub_101d26b0(pPlayer->vfunc192(), "Ming_xiao_vomit_player_emitter", pPlayer, 1, -1, 0);
		sub_101d2780(pPlayer->vfunc192(), "Ming_xiao_hud_vomit_emitter", pPlayer, 0xe, 0, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1039a6e0 size=0xd
#include "CUnknown1039a6e0.h"
void CUnknown1039a6e0::sub_1039a6e0(int value)
{
	m_unk1594 = value;
}
// END FUNCTION

// FUNCTION: 0x1039a700 size=0x34
extern char g_10647090[];

struct CMingXiaoView {
    char pad0[0x1b30];
    const char *m_psz1b30;
    int m_n1b34;
    void sub_10013cf5(int a, int b, int c);
    void sub_1000198d(int a, int b);
    void sub_1039a700(int unused);
};

// TARGET: CMingXiaoView::sub_1039a700
void CMingXiaoView::sub_1039a700(int unused)
{
    sub_10013cf5(1, 1, 10);
    m_psz1b30 = g_10647090;
    m_n1b34 = 0x14b1;
    sub_1000198d(0x156, 0);
}
// END FUNCTION

// FUNCTION: 0x1039a750 size=0x23a
// TARGET: CNPC_VMingXiao::sub_1039a750

#include "CNPC_VMingXiao.h"

class CUnknown10097310
{
public:
	void sub_10097310(void *pEnt);
};

class CUnk102ae750
{
public:
	void sub_102ae750(int a, int b);
};

void sub_101cf600(void *p);
CBaseEntity *sub_10136580(const char *pszName);
void sub_101d1280(void *p);

void CNPC_VMingXiao::sub_1039a750()
{
	this->sub_10272650(1);
	m_nEffectFlags |= 0x10;
	m_n168 = 0;
	m_n16c = 0;
	*(int *)((char *)this + 0x1568) = 0xf;
	this->sub_10273070(1);
	sub_101cf600(this);

	CNPC_VMingXiao *pTwin = 0;
	CBaseEntity *pFound = sub_10136580("npc_VMingXiao");
	if (pFound)
		pTwin = (CNPC_VMingXiao *)pFound->m_pNPC98;

	pTwin->m_flags204 |= 4;
	pTwin->vfunc62(this->vfunc217());
	pTwin->vfunc64(this->vfunc221());
	pTwin->vfunc202(this);
	((CUnknown10097310 *)pTwin)->sub_10097310(this);
	pTwin->m_f63b4 = 4096.0f;
	sub_101d1280(pTwin);
	pTwin->m_nEffectFlags |= 0x60;
	pTwin->vfunc614();
	pTwin->vfunc105("models/character/monster/MingXiao/MingXiao.mdl");
	pTwin->m_nEffectFlags &= 0xffffff9f;
	pTwin->m_bAlpha1a3 = 1;
	pTwin->m_n168 = 0x1f;
	pTwin->m_n16c = 2;
	*(int *)((char *)pTwin + 0x155c) = (int)*this->vfunc1();

	const char *pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";

	float flTime; flTime = gpGlobals->curtime;
	*(float *)((char *)this + 0x1560) = flTime;
	pTwin->m_nState5cc0 = 5;

	*(float *)((char *)pTwin + 0x1560) = flTime;
	*(char *)((char *)pTwin + 0x1480) = 1;
	*(const char **)((char *)pTwin + 0x1b3c) = pszFile;

	*(int *)((char *)pTwin + 0x5cc4) = 5;
	*(int *)((char *)pTwin + 0x1b40) = 0x14df;
	*(const char **)((char *)pTwin + 0x1b30) = pszFile;
	*(int *)(0x1b34 + (char *)pTwin) = 0x14e0;

	((CUnk102ae750 *)pTwin)->sub_102ae750(0x157, 0);

	*(pTwin->m_a6348 + 0) = this->m_a6348[0];
	pTwin->m_a6348[1] = this->m_a6348[1];
	*(pTwin->m_a6348 + 2) = this->m_a6348[2];
	pTwin->m_a6348[3] = this->m_a6348[3];
	pTwin->m_a6348[4] = *(4 + this->m_a6348);
	pTwin->m_a6420[0] = this->m_a6420[0];
	pTwin->m_a6420[1] = *(this->m_a6420 + 1);
	pTwin->m_a6420[2] = this->m_a6420[2];
	*(pTwin->m_a6420 + 3) = this->m_a6420[3];
	pTwin->m_a6420[4] = this->m_a6420[4];

	m_n168 = 0x1e;
	m_n16c = 2;
	*(int *)((char *)this + 0x155c) = (int)*pTwin->vfunc1();

	this->sub_102c4310("Ming_xiao_transform_emitter", this, 1, -1, 0);
	this->sub_102c4310("Ming_xiao_transform_emitter2", (CBaseEntity *)this, 0, -1, 0);
}

/* judged with these header patches (not saved):
[
 {
  "path": "CNPC_VMingXiao.h",
  "old": "virtual void vfunc202_slot();",
  "new": "virtual void vfunc202_slot(CBaseEntity *pOwner);"
 },
 {
  "path": "CNPC_VMingXiao.h",
  "old": "virtual void vfunc221_slot();",
  "new": "virtual float *vfunc221_slot();"
 },
 {
  "path": "CNPC_VMingXiao.h",
  "old": "virtual int vfunc609(char bForce);",
  "new": "virtual int vfunc609(char bForce);\n\tvirtual void vfunc610();\n\tvirtual void vfunc611();\n\tvirtual void vfunc612();\n\tvirtual void vfunc613();\n\tvirtual void vfunc614();"
 }
]
*/
// END FUNCTION
