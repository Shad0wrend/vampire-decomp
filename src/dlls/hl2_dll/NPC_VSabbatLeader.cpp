// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
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

// FUNCTION: 0x103a8990 size=0x7b4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "ehandle.h"
#include "CEHandleGet.h"
#include "globalvars.h"
#include "engineserver.h"
#include "engineiface.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "CFlagsUnit.h"
#include "CAI_Motor.h"
#include "CNPC_VSabbatLeader.h"

struct CUnk1093c34c
{
	virtual void v0();
	virtual char v1();
	char pad[0x28];
	int m2c;
};
struct CTaskArg { int m0, m4, m8, mc, m10, m14, m18, m1c; };
extern CUnk1093c34c *g_1093c34c;
extern float g_104c3cd0;
extern float g_104c3cd8;
extern float g_104c3cec;
extern float g_1093c33c;
float sub_101d2c70(Vector *p);

inline int ENTINDEX444(int pEdict) { return engine->vfunc35(pEdict); }
static inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline void MotorSetIdealYawAndUpdate(Vector *v, CAI_Motor *m)
{
	m->sub_102e1c10(sub_101d2c70(v), -1.0f);
}

struct CFlagsUnitI
{
	char pad[0x44];
	unsigned short m_usFlags;
	void sub_100dc580(int flags);
};
inline void RemoveSolidFlagsInline(CFlagsUnitI *p, int f)
{
	p->sub_100dc580(p->m_usFlags & ~f);
}

// TARGET: CNPC_VSabbatLeader::vfunc444
void CNPC_VSabbatLeader::vfunc444(const int *pTask)
{
	ScopeTrace trace("CNPC_VSabbatLeader::RunTask", g_106b8540);
	CEntityVSlots *me = (CEntityVSlots *)this;
	if (!g_1093c34c->v1() && g_1093c34c->m2c != 0 && m_b66b8 == 0 && m_nState5cc0 != 5
		&& sub_10266c80(me->slot217(), g_104c3cd0))
	{
		CTaskArg arg;
		arg.m8 = 0;
		arg.m14 = -1;
		arg.m18 = 0;
		sub_103aa3b0((int)&arg);
	}
	switch (*pTask)
	{
	case 0xbc:
	case 0xbd:
		if (!sub_102c1170())
			sub_103c5f40(pTask);
		return;
	default:
	base:
		sub_103c5f40(pTask);
		return;
	case 0x139:
		if (me->slot251())
		{
			CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
			enginesound->vfunc3(&filter, ENTINDEX444(m_nEdict2e0), 2, "Character/Monster/Andrei_Transformed/jump_retreat.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		}
		goto base;
	case 0x13c:
		if (m_bTrackPlayer)
		{
			sub_10280a50();
			CEntityVSlots *pPlayer = (CEntityVSlots *)EHandle_Get(m_hPlayer);
			if (pPlayer)
			{
				CAI_Motor *pMotor = m_pMotor5d44;
				pMotor->sub_102e20b0((const float *)pPlayer->slot217(), g_104c3cec);
				Vector dir = *pPlayer->slot217() - *me->slot217();
				if (VectorNormalize(dir) > 0.0001f)
				{
					sub_1000489a(&(dir * 100.0f));
				}
			}
		}
		goto base;
	case 0x13a:
		if (sub_1027d990() == 1 && (sub_100b3700() & 1))
		{
			m_flTime5d9c = gpGlobals->curtime;
			sub_103c6a00();
			sub_103aaa80();
		}
		if (m_bTrackPlayer && !sub_103aaf50())
			sub_103aad40();
		goto base;
	case 0x15c:
		MotorSetIdealYawAndUpdate(me->slot198(), m_pMotor5d44);
		m_pMotor5d44->m_30 = 0;
		sub_100b3640(1);
		if (m_fl6f8 >= g_1093c33c && !m_bLargeSplashSpawned)
		{
			m_bLargeSplashSpawned = 1;
			sub_103ab110("bloodsplash_emitter", (CEntityVSlots *)m_pHint5ddc);
			sub_103ab110("andrei_splash_huge-emitter", (CEntityVSlots *)m_pHint5ddc);
			CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
			enginesound->vfunc3(&filter, ENTINDEX444(m_nEdict2e0), 2, "Character/Monster/Andrei_Transformed/dive_in_splash.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		}
		if (me->slot251())
		{
			m_fl3ec = 1.0f;
			sub_1027d9b0(0);
			m_bJumping = 0;
			me->slot66();
			sub_10273e80(0);
		}
		return;
	case 0x36:
	case 0x37:
	case 0x9a:
	case 0x160:
		sub_10280a50();
		if (me->slot167())
		{
			Vector pos = *((CEntityVSlots *)me->slot167())->slot217();
			m_pMotor5d44->sub_102e20b0((const float *)&pos, g_104c3cd8);
		}
		if (me->slot251())
			sub_10273e80(0);
		return;
	case 0x15d:
		sub_10280a50();
		m_pMotor5d44->sub_102e1e20(-1);
		if (me->slot251())
		{
			m_flTime5d9c = gpGlobals->curtime;
			sub_103c6a00();
			sub_103aaa80();
			me->slot67();
			m_nEffectFlags &= 0xffffffdf;
			{
				const char *file = m_pszName26c ? m_pszName26c : g_106b8540;
				g_109f3620[*g_109f3680].name = "CBaseEntity::RemoveSolidFlags";
				g_109f3620[*g_109f3680].file = file;
				g_109f3620[*g_109f3680].line = g_106b8540;
				(*g_109f3680)++;
				CFlagsUnitI *pf = (CFlagsUnitI *)((char *)this + 0x270);
				int f = 4;
				pf->sub_100dc580(pf->m_usFlags & ~f);
				(*g_109f3680)--;
			}
			sub_10273e80(0);
		}
		return;
	case 0x15e:
		if (gpGlobals->curtime > m_fWarningFinishTime)
			sub_10273e80(0);
		return;
	case 0x161:
	case 0x163:
		if (me->slot251())
			sub_10273e80(0);
		return;
	case 0x162:
		if (gpGlobals->curtime - m_fl669c > 1.0f)
			sub_10273e80(0);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x103a9340 size=0x84
#include "CNPC_VSabbatLeader.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = g_106b8540;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

char CNPC_VSabbatLeader::sub_103a9340(CNPC_VSabbatLeaderHint *pHint)
{
    CScopeGuard guard("CNPC_VSabbatLeader::FValidateHintType");
    if (pHint->m_hintType >= 16000 && pHint->m_hintType <= 16005)
        return 1;
    return 0;
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

// FUNCTION: 0x103a9540 size=0x1a9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CNPC_VSabbatLeader.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

extern CNPC_VSabbatLeaderHint *g_10925450;
void sub_10139970(const float *pDir, float *pAngles);
float sub_1013d580(float a, float b);

CNPC_VSabbatLeaderHint *CNPC_VSabbatLeader::sub_103a9540()
{
	ScopeTrace trace("CNPC_VSabbatLeader::SelectTeleportArchway", g_106b8540);
	CEntityVSlots *pPlayer = (CEntityVSlots *)EHandle_Get(m_hPlayer);
	if (!pPlayer)
		return 0;
	CNPC_VSabbatLeaderHint *pBest = 0;
	float flBest = 3.402823466e+38f;
	for (CNPC_VSabbatLeaderHint *pHint = g_10925450; pHint; pHint = pHint->m_pNext)
	{
		if (pHint->m_hintType == 0x3e82)
		{
			const Vector *pHintOrigin = ((CEntityVSlots *)pHint)->slot217();
			Vector vecDelta = *pPlayer->slot217() - *pHintOrigin;
			Vector vecDir = vecDelta;
			vecDir.z = 0;
			if (vecDir.Length2D() >= 24.0f)
			{
				float ang[3];
				sub_10139970(&vecDir.x, ang);
				float flYaw = pPlayer->slot219()->y;
				float flDiff = (float)fabs(sub_1013d580(flYaw, ang[1]));
				if (flDiff < flBest)
				{
					flBest = flDiff;
					pBest = pHint;
				}
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x103a9760 size=0x2b6
#include "CBaseEntity.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSabbatLeader.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"
#include "Vector.h"
#include "VectorHelpers.h"
#include <math.h>

extern CNPC_VSabbatLeaderHint *g_10925450;

void __cdecl sub_10139970(const Vector *pDir, Vector *pAngles);

extern float g_104c3cfc;
extern float g_104c3d00;
CNPC_VSabbatLeaderHint *CNPC_VSabbatLeader::sub_103a9760()
{
	ScopeTrace st("CNPC_VSabbatLeader::SelectDiveInPoint", g_106b8540);

	CBaseEntity *pPlayer = g_10566458->sub_100290c0(&m_hPlayer);
	if (!pPlayer)
		return 0;

	Vector vecDir = *((CEntityVSlots *)pPlayer)->slot217() - *((CEntityVSlots *)this)->slot217();
	vecDir.z = 0.0f;
	float flDist = VectorNormalize(vecDir);
	if (flDist < 45.0f)
		return 0;

	CNPC_VSabbatLeaderHint *pBest = 0;
	float flBest;
	if ((int)pPlayer == -1) flBest = 3.4028235e38f; else flBest = 3.4028235e38f;
	for (CNPC_VSabbatLeaderHint *pHint = g_10925450; pHint; pHint = pHint->m_pNext)
	{
		if (pHint->m_hintType == 0x3e85)
		{
			Vector vecToHint = *((CEntityVSlots *)pPlayer)->slot217() - *((CEntityVSlots *)pHint)->slot217();
			vecToHint.z = 0.0f;
			float flHintDist = vecToHint.Length2D();

			if (flHintDist >= g_104c3cfc)
			{
				Vector vecHintDir = *((CEntityVSlots *)pHint)->slot217() - *((CEntityVSlots *)this)->slot217();
				float flHintDirLen = VectorNormalize(vecHintDir);

				if (flHintDirLen > 0.0001f)
				{
					if (DotProduct(vecHintDir, vecDir) < 0.0f)
					{
						Vector vecAngles;
						sub_10139970(&vecToHint, &vecAngles);

						float flPlayerYaw = ((CEntityVSlots *)pPlayer)->slot219()->y;
						float flYawDiff = fabs(sub_1013d580(flPlayerYaw, vecAngles.y));
						if (flYawDiff + flHintDist < flBest)
						{
							flBest = flYawDiff + flHintDist;
							pBest = pHint;
						}
					}
				}
			}
		}
	}

	return pBest;
}
// END FUNCTION

// FUNCTION: 0x103a9ad0 size=0x1b1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CNPC_VSabbatLeader.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"
#include "QAngle.h"
#include "Vector.h"

extern CNPC_VSabbatLeaderHint *g_10925450;
void __cdecl sub_10139970(const Vector &, QAngle &);
float __cdecl sub_1013d580(float, float);
extern float g_104c3cfc;

inline float Dist2D_103a9ad0(const Vector &vecDir)
{
	float flDist = vecDir.Length2D();
	return flDist;
}
CNPC_VSabbatLeaderHint *CNPC_VSabbatLeader::sub_103a9ad0()
{
	ScopeTrace trace("CNPC_VSabbatLeader::SelectDiveOutPoint", g_106b8540);
	CEntityVSlots *pPlayer = (CEntityVSlots *)EHandle_Get(m_hPlayer);
	if (!pPlayer)
		return 0;
	CNPC_VSabbatLeaderHint *pBest = 0;
	float flBest = 3.402823466e+38f;
	for (CNPC_VSabbatLeaderHint *pHint = g_10925450; pHint; pHint = pHint->m_pNext)
	{
		if (pHint->m_hintType == 0x3e85)
		{
			const Vector *pHintOrigin = ((CEntityVSlots *)pHint)->slot217();
			Vector vecDir = *pPlayer->slot217() - *pHintOrigin;
			vecDir.z = 0;
			float dist = Dist2D_103a9ad0(vecDir);
			if (dist >= g_104c3cfc)
			{
				QAngle angles;
				sub_10139970(vecDir, angles);
				Vector *pStartAng = pPlayer->slot219();
				float yaw = pStartAng->y;
				float score = (float)fabs(sub_1013d580(yaw, angles.y)) + dist;
				if (score < flBest)
				{
					flBest = score;
					pBest = pHint;
				}
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x103a9d00 size=0x6c
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

int CNPC_VSabbatLeader::sub_103a9d00()
{
	ScopeTrace trace("CNPC_VSabbatLeader::FlipFailureType", g_106b8540);
	return m_nFailureType = 1 - m_nFailureType;
}
// END FUNCTION

// FUNCTION: 0x103a9d90 size=0xa5
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

extern float g_104c3cc8;
extern float g_104c3cc4;

// TARGET: CNPC_VSabbatLeader::sub_103a9d90
bool CNPC_VSabbatLeader::sub_103a9d90()
{
    ScopeTrace trace("CNPC_VSabbatLeader::CheckForJumpCondition", g_106b8540);
    if (sub_103c67f0(g_104c3cc8))
        return true;
    if (sub_103c6a20() >= g_104c3cc4)
        return true;
    return sub_103aabc0();
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

// FUNCTION: 0x103a9fd0 size=0x64
#include "CNPC_VSabbatLeader.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1064efb4[];
extern char g_106b8540[];

// TARGET: CNPC_VSabbatLeader::vfunc619
void CNPC_VSabbatLeader::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_1064efb4;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
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
