// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a78c0 size=0xd6c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSabbatLeader.h"
#include "CBaseEntity.h"
#include "CAI_Motor.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CGlobalEntityList.h"
#include "CStatDefault3List.h"
#include "CUnknown1070b248.h"
#include "ScopeTrace.h"
#include "globalvars.h"
#include "Vector.h"

extern CUnknown1070b248 *g_1070b248;
extern CGlobalEntityList *g_10566458;
extern CStatDefault3List g_10738d10;
extern float g_104c3cb0;
extern float g_104c3cb4;
extern float g_104c3cb8;
extern float g_104c3cec;
extern float g_104c3d04;
extern float g_104c3d0c;
extern float g_104c3d10;
extern float g_1093c340;
extern float g_104454c4;

struct CGravityCvar
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad04[0x28 - 0x4];
	float m_f28;
};
extern CGravityCvar *g_109ef2d4;

inline float GetGravity()
{
	if (g_109ef2d4->vfunc1())
		return g_104454c4;
	return g_109ef2d4->m_f28;
}

#define S(n) virtual void n();
#define S10(p) S(p##0) S(p##1) S(p##2) S(p##3) S(p##4) S(p##5) S(p##6) S(p##7) S(p##8) S(p##9)
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CSabbatSlot621
{
	S100(a) S100(b) S100(c) S100(d) S100(e) S100(f)
	S10(g0) S10(g1) S(h0)
	virtual void slot621();
};

struct CSabbatCalls
{
	void sub_102c4ad0(CEntityVSlots *pEnt, float a, float b);
	void sub_102c41b0(const char *pszName, const Vector *pPos, int a, int b);
	int sub_10337860();
	void sub_103c7230(const Vector *pOrigin, float flRadius, float flDamage);
	void sub_103c6f40();
	void sub_100b2770(const Vector &vecVelocity);
	void sub_1009d1e0();
	void sub_100b3b00();
	void sub_103a9760x();
};

struct CSabbatFlags
{
	char m_pad[0x14bc];
	unsigned int m_n14bc;
};

inline CGlobalEntityList_Ent *LookupEntity(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

inline float JumpHeight() { return g_104c3cb0; }

struct CSabbatEdictView
{
	char m_pad[0x2e0];
	int m_nEdict2e0;
	int edict() { return m_nEdict2e0; }
	int entindex() { return engine->vfunc35(edict()); }
};
#define EV ((CSabbatEdictView *)this)

#define ME ((CEntityVSlots *)this)
#define CALLS ((CSabbatCalls *)this)
#define SNDTHIS ((CEntitySoundOriginView *)this)

#include "UtlMem.h"
// Real inlines the original called: baseentity.h CBaseEntity::GetGravity()/SetGravity() (m_flGravity +0x3ec) and the
// game's inline CBaseEntity::AddSolidFlags (scope trace + CollisionProp()->AddSolidFlags, as in AI_BaseNPC.cpp),
// ai_basenpc.h CAI_BaseNPC::GetMotor() / GetHintNode().
struct CSabbatLeaderV : CNPC_VSabbatLeader
{
	float GetGravity() const { return m_fl3ec; }
	void SetGravity(float gravity) { m_fl3ec = gravity; }
	void AddSolidFlags(int flags)
	{
		ScopeTrace t2("CBaseEntity::AddSolidFlags", m_pszName26c ? m_pszName26c : g_106b8540, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(flags);
	}
	CAI_Motor *GetMotor() { return m_pMotor5d44; }
	CNPC_VSabbatLeaderHint *GetHintNode() { return m_pHint5ddc; }
};
#define NPC ((CSabbatLeaderV *)this)
inline void SetJH(float *d, float f) { *d = f; }
// TARGET: CNPC_VSabbatLeader::vfunc442
void CNPC_VSabbatLeader::vfunc442(const int *pTask)
{
	ScopeTrace trace("CNPC_VSabbatLeader::StartTask", g_106b8540, g_106b8540);
	if (m_bParticleSpawned && (*pTask < 0x161 || *pTask > 0x162)) {
		m_bParticleSpawned = 0;
		sub_103c7150();
	}
	switch (*pTask) {
	case 0x36:
	case 0x37:
		((CSabbatSlot621 *)this)->slot621();
		sub_1000de7c(pTask);
		break;
	case 0x6e:
	case 0x92:
	case 0x93:
	case 0xe5:
		sub_102c4e80();
		if (sub_1027d990() == 1) {
			NPC->GetMotor()->vfunc8();
			sub_1027d9b0(0);
			m_bJumping = 0;
		}
		sub_1000de7c(pTask);
		break;
	case 0x14e:
		m_b66b8 = 1;
		m_b6496 = 1;
		m_flTime5d9c = gpGlobals->curtime;
		sub_1000de7c(pTask);
		break;
	case 0x150:
		sub_103c59d0(0x3e80, 2);
		break;
	case 0x151:
		sub_103c59d0(0x3e80, 4);
		break;
	case 0x152:
		sub_103c59d0(0x3e81, 2);
		break;
	case 0x153:
		sub_103c59d0(0x3e82, 2);
		break;
	case 0x154:
		m_pHint5ddc = sub_103a9760();
		if (!m_pHint5ddc) {
			m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VSabbatLeader.cpp";
			m_nLine1b48 = 0x25a;
			ME->slot448(1);
		} else
			sub_10273e80(0);
		break;
	case 0x155:
		m_pHint5ddc = sub_103a9540();
		sub_10273e80(0);
		break;
	case 0x156:
		m_pHint5ddc = sub_103a9ad0();
		sub_10273e80(0);
		break;
	case 0x157: {
		CPASAttenuationFilter filter(SNDTHIS);
		g_1070b248->vfunc3(&filter, EV->entindex(), 2, "Character/Monster/Andrei_Transformed/ambient_run.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		sub_10273e80(0);
		break;
	}
	case 0x158: {
		CPASAttenuationFilter filter(SNDTHIS);
		g_1070b248->vfunc7((const CRecipientFilter *)EV->entindex(), 2, "Character/Monster/Andrei_Transformed/ambient_run.wav");
		sub_10273e80(0);
		break;
	}
	case 0x159:
		sub_103c59d0(0x3e83, 2);
		break;
	case 0x15a:
		m_b66e5 = 0;
		m_nFailureCount = 0;
		m_vJumpOrigin = *ME->slot217();
		m_vJumpTarget = *((CEntityVSlots *)NPC->GetHintNode())->slot217();
		SetJH(&m_fJumpHeight, g_104c3cb0);
		m_bTrackPlayer = 0;
		m_b66d5 = 0;
		sub_10273e80(0);
		break;
	case 0x15b: {
		m_nFailureCount = 0;
		CEntityVSlots *pPlayer = (CEntityVSlots *)LookupEntity(m_hPlayer);
		if (pPlayer && !sub_103a9e70()) {
			CALLS->sub_102c4ad0(pPlayer, g_104c3cb4, g_104c3cb8);
			CPASAttenuationFilter filter(SNDTHIS);
			g_1070b248->vfunc3(&filter, EV->entindex(), 2, "Character/Monster/Andrei_Transformed/Leap_Down_Attack_1.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
			m_bTrackPlayer = 1;
			m_b66d5 = 0;
			sub_10273e80(0);
		} else {
			m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VSabbatLeader.cpp";
			m_nLine1b48 = 0x28d;
			ME->slot448(1);
		}
		break;
	}
	case 0x15c: {
		m_b66e5 = 0;
		NPC->SetGravity(0.1f);
		m_nFailureCount = 0;
		m_bTrackPlayer = 0;
		m_b66d5 = 1;
		sub_10289ee0(0x113f);
		m_nEffectFlags |= 0x20;
		NPC->AddSolidFlags(4);
		CALLS->sub_100b3b00();
		Vector vecVel = *((CEntityVSlots *)m_pHint5ddc)->slot217() - *ME->slot217();
		float flSpeed = VectorNormalize(vecVel) / g_1093c340;
		vecVel = vecVel * flSpeed;
		float flGravity = GetGravity();
		vecVel.z = (NPC->GetGravity() * flGravity) * g_1093c340 * 0.5f;
		CALLS->sub_100b2770(vecVel);
		sub_1027d9b0(1);
		m_bJumping = 1;
		m_bLargeSplashSpawned = 0;
		break;
	}
	case 0x15d: {
		m_b66d5 = 0;
		ME->slot67();
		CALLS->sub_1009d1e0();
		CALLS->sub_100b3b00();
		m_nEffectFlags |= 0x10;
		CEntityVSlots *pPlayer = (CEntityVSlots *)LookupEntity(m_hPlayer);
		if (pPlayer) {
			sub_102e0b40((float *)NPC->GetMotor());
			NPC->GetMotor()->sub_102e20b0((const float *)pPlayer->slot217(), g_104c3cec);
		}
		CPASAttenuationFilter filter(SNDTHIS);
		g_1070b248->vfunc3(&filter, EV->entindex(), 2, "Character/Monster/Andrei_Transformed/dive_out_splash.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		sub_103ab110("andrei_splash_dive_out-emitter", (CEntityVSlots *)NPC->GetHintNode());
		sub_10289ee0(0x1140);
		break;
	}
	case 0x15e: {
		sub_102e0b40((float *)NPC->GetMotor());
		ME->slot216(((CEntityVSlots *)NPC->GetHintNode())->slot217());
		Vector vec = *ME->slot220();
		ME->slot181(&vec, 0, 0);
		ME->slot62(&vec.x);
		m_b66d5 = 0;
		{
			CPASAttenuationFilter filter(SNDTHIS);
			g_1070b248->vfunc3(&filter, EV->entindex(), 2, "Character/Monster/Andrei_Transformed/splash_warning.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		}
		m_fWarningFinishTime = gpGlobals->curtime + g_104c3d04;
		if (0) EV->edict(); if (0) EV->edict();
		break;
	}
	case 0x15f:
		((CSabbatFlags *)this)->m_n14bc |= 0x80000800;
		sub_10273e80(0);
		break;
	case 0x160: {
		CPASAttenuationFilter filter(SNDTHIS);
		g_1070b248->vfunc3(&filter, EV->entindex(), 2, "Character/Monster/Andrei_Transformed/roar_1.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		sub_10289ee0(0x1141);
		break;
	}
	case 0x161:
		m_b66e5 = 1;
		CALLS->sub_103c6f40();
		m_bParticleSpawned = 1;
		sub_10289ee0(0x1142);
		break;
	case 0x162:
		sub_10289ee0(0x1143);
		break;
	case 0x163: {
		Vector pos = *ME->slot217();
		float flUp = g_104c3d0c;
		pos.z = flUp + pos.z;
		CALLS->sub_102c41b0("Andrei_blast_emitter", &pos, 0, 0);
		int iStat = CALLS->sub_10337860();
		if (iStat >= 0) {
			float flDamage = *(float *)((char *)g_10738d10.sub_101d5e80(iStat) + 0xcc);
			CALLS->sub_103c7230(&pos, g_104c3d10, flDamage);
		}
		sub_10289ee0(0x1144);
		m_flTime5d9c = gpGlobals->curtime;
		break;
	}
	default:
		sub_1000de7c(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103a9400 size=0xf1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSabbatLeader.h"
#include "ScopeTrace.h"

// TARGET: CNPC_VSabbatLeader::vfunc448
void CNPC_VSabbatLeader::vfunc448(int a)
{
    ScopeTrace trace("CNPC_VSabbatLeader::TaskFail", g_106b8540);
    if (a >= 0xc && a <= 0xf) {
        m_nFailureCount++;
        if ((float)m_nFailureCount >= 6.0f) {
            if (sub_103a9d00()) {
                m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VSabbatLeader.cpp";
                m_nLine1b34 = 0x3f4;
                sub_102ae750(0x161, 0);
                return;
            }
            m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VSabbatLeader.cpp";
            m_nLine1b34 = 0x3f9;
            sub_102ae750(0x160, 0);
            return;
        }
    }
    sub_1029adb0(a);
}
// END FUNCTION

// FUNCTION: 0x103a9e70 size=0x105
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CNPC_VSabbatLeader.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"

#define S(n) virtual void n();
#define S10(p) S(p##0) S(p##1) S(p##2) S(p##3) S(p##4) S(p##5) S(p##6) S(p##7) S(p##8) S(p##9)
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct SabbatEntSlots
{
	S100(a) S100(b) S10(c0)
	S(d0) S(d1) S(d2) S(d3) S(d4) S(d5) S(d6)
	virtual float *slot217();
};

extern CGlobalEntityList *g_10566458;
extern CNPC_VSabbatLeaderHint *g_10925450;
extern float g_104c3ccc;

inline CGlobalEntityList_Ent *LookupEntity(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

bool CNPC_VSabbatLeader::sub_103a9e70()
{
	ScopeTrace t("CNPC_VSabbatLeader::PlayerInNoJumpZone", g_106b8540);
	SabbatEntSlots *pPlayer = (SabbatEntSlots *)LookupEntity(m_hPlayer);
	if (pPlayer) {
		CNPC_VSabbatLeaderHint *pHint = g_10925450;
		while (pHint) {
			if (pHint->m_hintType == 0x3e84) {
				if (sub_103c6570(pHint, pPlayer->slot217()) <= g_104c3ccc) {
					if (sub_103c6570(pHint, ((SabbatEntSlots *)this)->slot217()) <= g_104c3ccc)
						return true;
				}
			}
			pHint = pHint->m_pNext;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x103aa060 size=0x29e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSabbatLeader.h"
#include "CEntityVSlots.h"
#include "CUnknown10924a1c.h"
#include "ScopeTrace.h"

extern const char g_1064ed7c[];

inline float GetDifficultyRange()
{
	if (g_10924a1c->vfunc1())
		return 0.0f;
	return g_10924a1c->m_fl28;
}

int CNPC_VSabbatLeader::vfunc604(int unused)
{
	ScopeTrace trace("CNPC_VSabbatLeader::SelectScheduleMeleeCombat", g_106b8540);

	CEntityVSlots *slots = (CEntityVSlots *)this;

	if (!m_b6078)
	{
		if (!slots->slot599((CEntityVSlots *)slots->slot167()))
		{
			double f = g_10924a1c->vfunc1() ? 0.0f : g_10924a1c->m_fl28;
			if (m_f6268 > (float)(f + f))
			{
				m_pszFile1b30 = g_1064ed7c;
				m_nLine1b34 = 0x4f0;
				return 0xe7;
			}
			m_pszFile1b30 = g_1064ed7c;
			m_nLine1b34 = 0x4f4;
			return 0x15f;
		}
	}

	if (sub_10269aa0(0x48))
	{
		m_pszFile1b30 = g_1064ed7c;
		m_nLine1b34 = 0x500;
		return 0xcd;
	}

	if (sub_10269aa0(0x51))
	{
		m_pszFile1b30 = g_1064ed7c;
		m_nLine1b34 = 0x50c;
		return 0xdd;
	}

	if (m_f626c > 64.0f)
	{
		if (m_fl6274 == -1.0f)
			m_fl6274 = enginerandom->vfunc1(3.0f, 4.0f) + gpGlobals->curtime;
	}
	else
	{
		m_fl6274 = -1.0f;
	}

	if (sub_10269aa0(0x59))
	{
		slots->slot601(slots->slot167());
		m_pszFile1b30 = g_1064ed7c;
		m_nLine1b34 = 0x528;
		return 0x15b;
	}

	if (sub_10269aa0(0x60) && m_f6268 < 120.0f)
	{
		m_pszFile1b30 = g_1064ed7c;
		m_nLine1b34 = 0x535;
		return 0xdd;
	}

	if (!sub_10269aa0(9) && !sub_10269aa0(0x60))
	{
		m_pszFile1b30 = g_1064ed7c;
		m_nLine1b34 = 0x53d;
		return 0xc7;
	}

	m_pszFile1b30 = g_1064ed7c;
	m_nLine1b34 = 0x53b;
	return 0xcb;
}
// END FUNCTION

// FUNCTION: 0x103aa3b0 size=0x92
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSabbatLeader.h"
#include "ScopeTrace.h"

void CNPC_VSabbatLeader::sub_103aa3b0(int unused)
{
    ScopeTrace st("CNPC_VSabbatLeader::StartTransformation", g_106b8540);
    m_b66b8 = 1;
    sub_10332aa0(1, 1, 10);
    m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VSabbatLeader.cpp";
    m_nLine1b34 = 0x549;
    sub_102ae750(0x163, 0);
}
// END FUNCTION
