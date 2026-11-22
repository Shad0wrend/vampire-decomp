// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x1036b6b0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __stdcall sub_1036b6b0(int sector)
{
    g_109f3620[*g_109f3680].a = "CNPC_VChangBros::SectorIsInPit";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (sector > 0 && sector <= 2) {
        (*g_109f3680)--;
        return true;
    }
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1036b750 size=0x6b7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
// TARGET: CNPC_VChangBros::vfunc442
#include "ScopeTrace.h"
#include "CFlagsUnit.h"
#include "CAI_Motor.h"
#include "CStatDefault3List.h"
#include "CNPC_VChangBros.h"
#include "CNPC_VVampireBoss.h"
#include "CBaseCombatCharacter.h"
#include "globalvars.h"

extern CStatDefault3List g_10738d10;
extern float g_104ada40;
extern float g_104ada54;
extern float g_104ada58;
extern float g_104ada5c;

struct CCollisionIntView
{
	char m_pad0000[0x44];
	unsigned short m_usSolidFlags;	// 0x44
	void sub_100dc580(int flags);
	void SetSolidFlags(int flags) { sub_100dc580(flags); }
	void AddSolidFlags(int flags) { SetSolidFlags(m_usSolidFlags | flags); }
	void RemoveSolidFlags(int flags) { SetSolidFlags(m_usSolidFlags & ~flags); }
};

inline void AddSolidFlagsTo(CBaseEntity *pEntity, int flags)
{
	ScopeTrace scope("CBaseEntity::AddSolidFlags", pEntity ? (((CNPC_VVampireBoss *)pEntity)->m_pszName26c ? ((CNPC_VVampireBoss *)pEntity)->m_pszName26c : g_106b8540) : g_105387dc);
	((CCollisionIntView *)((char *)pEntity + 0x270))->AddSolidFlags(flags);
}

void CNPC_VChangBros::vfunc442(int *pTask)
{
	ScopeTrace scope("CNPC_VChangBros::StartTask", g_106b8540);

	switch (*pTask)
	{
	case 0x152:
		*(int *)((char *)this + 0x5ddc) = (int)sub_1036cce0();
		sub_10273e80(0);
		break;

	case 0x150:
		sub_102e0b40((float *)m_pMotor5d44);
		{
			ScopeTrace addSolid("CBaseEntity::AddSolidFlags", ((CNPC_VVampireBoss *)this)->m_pszName26c ? ((CNPC_VVampireBoss *)this)->m_pszName26c : g_106b8540);
			((CCollisionIntView *)((char *)this + 0x270))->AddSolidFlags(4);
		}
		((CBaseEntity *)this)->sub_100b3b00();
		sub_10289ee0(0x1148);
	case 0x151:
		sub_102e0b40((float *)m_pMotor5d44);
		sub_102c41b0((int)"chang_teleport_in_emitter", 0, 0, 0.0f);
		sub_103c6a00();
		m_fFacingTime = gpGlobals->curtime;
		break;

	case 0x153:
		sub_102e0b40((float *)m_pMotor5d44);
		sub_1027d9b0(0);
		m_flags14bc &= 0x7ffffffd;
		m_bJumping = false;
		sub_102c4e80();
		sub_102c41b0((int)"chang_teleport_out_emitter", 0, 0, 0.0f);
		sub_10289ee0(0x1149);
		break;

	case 0x154:
		if ((*(int *)((char *)this + 0x5ddc) = (int)sub_1036cfa0()) == 0)
		{
			m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VChangBros.cpp";
			m_nLine1b48 = 0x1aa;
			vfunc448(1);
		}
		sub_10273e80(0);
		break;

	case 0x155:
		sub_1036e160(*(int *)((char *)this + 0x5ddc));
		sub_10273e80(0);
		break;

	case 0x156:
		{
			CBaseEntity *pEnemy = m_h628c.Get();
			if (pEnemy)
			{
				sub_102e0b40((float *)m_pMotor5d44);
				CAI_Motor *pMotor = m_pMotor5d44;
				pMotor->sub_102e2020(((CAI_BaseNPC *)pEnemy)->vfunc217(), 0);
			}
		}
		sub_10289ee0(0x114c);
		m_fEnergyChargeTime = g_104ada54 + gpGlobals->curtime;
		sub_103c6eb0();
		sub_103c6df0(0, "chang_ball_charge_emitter");
		sub_103c6df0(1, "chang_ball_charge_emitter");
		sub_103c6f40();
		break;

	case 0x157:
		m_bEnergyBallSpawned = false;
		sub_10289ee0(0x114a);
		*(float *)((char *)this + 0x5d9c) = gpGlobals->curtime;
		break;

	case 0x158:
		if (sub_1036df50(*(void **)((char *)this + 0x5ddc)))
		{
			sub_10273e80(0);
		}
		else
		{
			m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VChangBros.cpp";
			m_nLine1b48 = 0x1ce;
			vfunc448(1);
		}
		break;

	case 0x159:
		*(int *)((char *)this + 0x5ddc) = (int)sub_1036d100();
		sub_10273e80(0);
		break;

	case 0x15a:
		break;

	case 0x15b:
		AddSolidFlagsTo((CBaseEntity *)this, 4);
		sub_10289ee0(0x114b);
		if (m_bCenterStored)
		{
			sub_102e0b40((float *)m_pMotor5d44);
			m_pMotor5d44->sub_102e2020((const float *)&m_vArenaCenter, 0);
		}
		m_fUnitedTime = g_104ada40 + gpGlobals->curtime;
		break;

	case 0x15c:
		sub_10289ee0(0x114c);
		break;

	case 0x15d:
		sub_102e0b40((float *)m_pMotor5d44);
		m_fLastUnitedAttackTime = gpGlobals->curtime;
		sub_10289ee0(0x114d);
		{
			ScopeTrace removeSolid("CBaseEntity::RemoveSolidFlags", ((CNPC_VVampireBoss *)this)->m_pszName26c ? ((CNPC_VVampireBoss *)this)->m_pszName26c : g_106b8540);
			((CCollisionIntView *)((char *)this + 0x270))->RemoveSolidFlags(4);
		}
		if (m_ChangType == 0)
		{
			Vector vec = m_vArenaCenter;
			vec.z = g_104ada5c + vec.z;
			sub_102c41b0((int)"chang_blast_emitter", &vec, 0, 0.0f);
			CBaseEntity *pEnemy = m_h628c.Get();
			if (pEnemy)
			{
				if (sub_1036e580((int)((CAI_BaseNPC *)pEnemy)->vfunc217()) != 4)
				{
					int stat = ((CBaseCombatCharacter *)this)->sub_10337860();
					if (stat >= 0)
					{
						float flDamage = g_10738d10.sub_101d5e80(stat)->m_cc;
						sub_103c7230(&vec, g_104ada58, flDamage);
					}
				}
			}
		}
		break;

	case 0x13b:
		if (sub_1036e580((int)vfunc217()) == 3)
			m_fLastJumpTime = gpGlobals->curtime;
		sub_103c5ac0(pTask);
		break;

	default:
		sub_103c5ac0(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1036bfc0 size=0x57f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWeaponThrown_Grenade_Frag.h"
#include "CNPC_VChangBros.h"
#include "ScopeTrace.h"
#include "CAI_Motor.h"
#include "CUnknown102e0150.h"
#include "CUnknown103498b0.h"
CBaseEntity *sub_100fbc90(const char *name, Vector *pOrigin, const float *pAngles, float flLife);
extern float g_104ada5c;
void CNPC_VChangBros::vfunc444(void *pTask)
{
    ScopeTrace t("CNPC_VChangBros::RunTask", g_106b8540);
    if (!m_bCenterStored)
        sub_1036e400();
    CNPC_VChangBros *pOther;
    bool b;
    switch (*(int *)pTask) {
    case 0x156:
        ((CAI_Motor *)*(int *)((char *)this + 0x5d44))->sub_102e1e20(-1);
        sub_10280a50();
        if (gpGlobals->curtime >= m_fEnergyChargeTime) {
            sub_10273e80(0);
            return;
        }
        break;
    case 0x150:
    case 0x151:
    case 0x153:
    case 0x15d:
        ((CAI_Motor *)*(int *)((char *)this + 0x5d44))->sub_102e1e20(-1);
        sub_10280a50();
        b = vfunc251();
        goto check;
    case 0x15b:
        ((CAI_Motor *)*(int *)((char *)this + 0x5d44))->sub_102e1e20(-1);
        sub_10280a50();
        if (vfunc251()) {
            sub_103c6eb0();
            sub_103c6df0(3, "chang_powerup_emitter");
            sub_103c6df0(2, "chang_spine_emitter");
            sub_103c6f40();
            sub_1036e8c0();
            Vector org = m_vArenaCenter;
            org.z = g_104ada5c + org.z;
            CBaseEntity *pEmitter = sub_100fbc90("chang_center_emitter", &org, g_1070d9d0, -1.0f);
            m_hCenterEmitter = pEmitter;
            sub_10273e80(0);
            return;
        }
        break;
    case 0x157:
        if (!m_bEnergyBallSpawned && *(float *)((char *)this + 0x6f8) >= 0.591f) {
            m_bEnergyBallSpawned = true;
            sub_1036dd20();
            sub_103c7150();
        }
        b = vfunc251();
        goto check;
    case 0x15a:
        pOther = sub_1036e2f0();
        if (pOther) {
            b = pOther->sub_1036e820();
check:
            if (b) {
                sub_10273e80(0);
                return;
            }
            break;
        }
        m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VChangBros.cpp";
        m_nLine1b48 = 0x255;
        vfunc448(1);
        return;
    case 0x15c:
        sub_10280a50();
        pOther = sub_1036e2f0();
        if (pOther) {
            if (m_fUnitedTime < pOther->m_fUnitedTime)
                m_fUnitedTime = pOther->m_fUnitedTime;
            if (gpGlobals->curtime >= m_fUnitedTime) {
                sub_103c7150();
                sub_1036e8c0();
                sub_10273e80(0);
                return;
            }
            break;
        }
        m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VChangBros.cpp";
        m_nLine1b48 = 0x26b;
        vfunc448(1);
        return;
    case 0x8b:
        {
            bool bBlocked = false;
            sub_10280a50();
            CEntityVSlots *pEnemy = (CEntityVSlots *)vfunc167();
            if (pEnemy) {
                CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)*(int *)((char *)pEnemy + 0x9c);
                if (pChar) {
                    Vector vec;
                    ((CUnknown102e0150 *)vfunc541())->sub_102dfed0(&vec, (CBaseEntity *)vfunc167());
                    ((CAI_Motor *)*(int *)((char *)this + 0x5d44))->sub_102e20b0(&vec.x, -2.0f);
                    char *p2 = pChar->sub_10345980((CBaseEntity *)this);
                    if (p2 && !((CUnknown103498b0 *)p2)->sub_103498b0())
                        bBlocked = true;
                    if (*(int *)((char *)this + 0xff0) == 0x1157)
                        b = pChar->sub_10345330();
                    else
                        b = vfunc251();
                    if (b) {
                        if (bBlocked) {
                            sub_10273e80(0);
                            return;
                        }
                        m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VChangBros.cpp";
                        m_nLine1b48 = 0x295;
                        vfunc448(0x21);
                        return;
                    }
                }
            }
        }
        break;
    case 0x13a:
        sub_10004edf(pTask);
        if (*(int *)((char *)this + 0xfec) != 0x2d) {
            Vector v = *(Vector *)((CEntityVSlots *)this)->slot198();
            if (v.z <= 500.0f) {
                sub_10289ee0(0x2d);
                return;
            }
        }
        break;
    default:
        sub_10004edf(pTask);
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x1036c6a0 size=0x5
#include "CNPC_VChangBros.h"
bool CNPC_VChangBros::vfunc566(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1036c6c0 size=0x72
#include "CNPC_VChangBros.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern float g_104ad9f0;

void CNPC_VChangBros::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VChangBros::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100052d6();
	*(float *)((char *)this + 0x17c) = g_104ad9f0 + gpGlobals->curtime;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1036c760 size=0x64
#include "CNPC_VChangBros.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_10631094[];
extern char g_106b8540[];

// TARGET: CNPC_VChangBros::vfunc619
void CNPC_VChangBros::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_10631094;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1036c7f0 size=0xd
#include "CUnknown1036c7f0.h"
void CUnknown1036c7f0::sub_1036c7f0(int value)
{
	m_unk66b8 = value;
}
// END FUNCTION

// FUNCTION: 0x1036c810 size=0x8a
#include "CNPC_VChangBros.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern "C" __declspec(dllimport) void __cdecl Msg(const char *fmt, ...);

void CNPC_VChangBros::sub_1036c810(int a, int b)
{
	g_109f3620[*g_109f3680].m_pszFunc = "CNPC_VChangBros::PrintTask";
	g_109f3620[*g_109f3680].m_pszName = g_106b8540;
	g_109f3620[*g_109f3680].m_pszExtra = g_106b8540;
	(*g_109f3680)++;
	Msg("%s: [%s]:%s\n", a, ((CBaseEntity *)this)->sub_1009f200(), vfunc449(b));
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1036c8d0 size=0x177
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VChangBros.h"
#include "CUnknown103160c0.h"
#include "ScopeTrace.h"

extern CGlobalEntityList *g_10566458;
extern char g_1054abdc[];
extern char g_10630064[];
extern "C" void *__RTDynamicCast(void *pObject, long lVfDelta, void *pSrcType, void *pTargetType, int bIsReference);

struct CChangBrosView : CEntityVSlots {
	char m_pad0004[0x5bb0 - 4];
	int m_nCount5bb0;
	char m_pad5bb4[0x5da4 - 0x5bb4];
	CUnknown103160c0 *m_pSquad;
	char m_pad5da8[0x628c - 0x5da8];
	unsigned int m_hEnemy;
	char m_pad6290[0x66b8 - 0x6290];
	int m_nMode;
	char m_pad66bc[0x66cc - 0x66bc];
	float m_flTime66cc;
	float GetJumpTime() const { return m_flTime66cc; }
	CUnknown103160c0 *GetSquad() const { return m_nCount5bb0 > 0 ? 0 : m_pSquad; }
};

// TARGET: CNPC_VChangBros::sub_1036c8d0
bool CNPC_VChangBros::sub_1036c8d0()
{
	ScopeTrace st("CNPC_VChangBros::CheckForJumpAttack", g_106b8540);
	CChangBrosView *p = (CChangBrosView *)this;
	if (p->m_nMode == 0) {
		CEntityVSlots *pEnemy = (CEntityVSlots *)g_10566458->sub_100290c0(&p->m_hEnemy);
		if (pEnemy) {
			if (sub_1036e580((int)pEnemy->slot217()) != 4) {
				if (sub_1036e580((int)p->slot217()) != 4) {
					if (gpGlobals->curtime - p->GetJumpTime() >= 16.0f) {
						CUnknown103160c0 *pSquad = p->GetSquad();
						if (!pSquad)
							return true;
						for (int i = 0; i < pSquad->sub_103160a0(); i++) {
							CBaseEntity *pMember = pSquad->sub_103160c0(i);
							if (pMember) {
								CChangBrosView *pOther = (CChangBrosView *)__RTDynamicCast(pMember, 0, g_1054abdc, g_10630064, 0);
								if (pOther && pOther != p && gpGlobals->curtime - pOther->GetJumpTime() < 16.0f)
									return false;
							}
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1036cab0 size=0xd9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VChangBros.h"
#include "ScopeTrace.h"
struct CChangBrosUnit : CNPC_VChangBros {
    float sub_103c6a20();
    bool sub_1036cab0();
};

// TARGET: CChangBrosUnit::sub_1036cab0
bool CChangBrosUnit::sub_1036cab0()
{
    ScopeTrace trace("CNPC_VChangBros::CheckForTeleport", g_106b8540);
    if (*(int *)((char *)this + 0x66b8) != 1) {
        if (sub_103c6a20() >= 0.1f)
            return true;
        if (sub_1036e2f0() && *(int *)((char *)this + 0x66b8) == 0) {
            float t = gpGlobals->curtime - *(float *)((char *)this + 0x66d0);
            if (sub_1036dc60() <= t)
                return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1036cbd0 size=0xc4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VChangBros.h"
#include "ScopeTrace.h"

extern float g_104ada48;

struct BrosView {
	char m_pad[0x66ec];
	float m_flTick;
};

bool CNPC_VChangBros::sub_1036cbd0()
{
	ScopeTrace trace("CNPC_VChangBros::CheckForUnited", g_106b8540);
	CNPC_VChangBros *pOther = sub_1036e2f0();
	if (pOther && gpGlobals->curtime >= (g_104ada48 + ((BrosView *)this)->m_flTick)) {
		if (!(sub_103c6830() >= 0.5f)) {
			if (!(pOther->sub_103c6830() >= 0.5f))
				return false;
		}
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1036cce0 size=0x223
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
// TARGET: CNPC_VChangBros::sub_1036cce0
#include "CNPC_VChangBros.h"
#include "CAI_BaseNPC.h"
#include "CAI_Hint.h"
#include "CAIHintSlots.h"
#include "ehandle.h"
#include "ScopeTrace.h"

extern float g_104ad9f4;

CBaseEntity *CNPC_VChangBros::sub_1036cce0()
{
	ScopeTrace trace("CNPC_VChangBros::SelectTeleportNode", g_106b8540);

	CBaseEntity *pEnemy = m_h628c.Get();
	if (!pEnemy)
		return 0;

	CAI_Hint *pHint = g_10925450;
	CAI_Hint *pBest = 0;
	CAI_Hint *pSame = 0;
	float flBest = 3.402823466e+38F;
	float flSame = 3.402823466e+38F;
	int nBrother = sub_1036e580((int)((CAI_BaseNPC *)(void *)pEnemy)->vfunc217());

	for (; pHint; pHint = pHint->m_pNext) {
		if (pHint->m_n5dc == 0x4650 || pHint->m_n5dc == 0x4653 || pHint->m_n5dc == 0x4652) {
			Vector vDist = *(Vector *)((CAI_BaseNPC *)(void *)pEnemy)->vfunc217()
				- *(Vector *)((CAI_BaseNPC *)(void *)pHint)->vfunc217();
			float flDistSqr = vDist.z * vDist.z;
			flDistSqr = flDistSqr + vDist.y * vDist.y;
			flDistSqr = flDistSqr + vDist.x * vDist.x;
			float flDist = FastSqrt(flDistSqr);
			if (flDist >= g_104ad9f4) {
				if (sub_1036d350((const Vector *)((CAI_BaseNPC *)(void *)pHint)->vfunc217(), g_104ad9f4)) {
					if (flDist < flBest) {
						pBest = pHint;
						flBest = flDist;
					}
					if (nBrother == sub_1036e580((int)((CAI_BaseNPC *)(void *)pHint)->vfunc217()) && flDist < flSame) {
						pSame = pHint;
						flSame = flDist;
					}
				}
			}
		}
	}
	if (pSame)
		pBest = pSame;

	Vector *pOrigin = (Vector *)((CAI_BaseNPC *)(void *)pBest)->vfunc217();
	*(Vector *)((char *)this + 0x66bc) = *pOrigin;
	*(float *)((char *)this + 0x66c8) = gpGlobals->curtime;
	return (CBaseEntity *)pBest;
}
// END FUNCTION

// FUNCTION: 0x1036cfa0 size=0x105
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VChangBros.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct ChangLedgeHintView : CEntityVSlots
{
    char pad[0x5d8 - 4];
    ChangLedgeHintView *m_pNext;
    int m_nHintType;
};
extern ChangLedgeHintView *g_10925450;

// TARGET: CNPC_VChangBros::sub_1036cfa0
void *CNPC_VChangBros::sub_1036cfa0()
{
    ScopeTrace trace("CNPC_VChangBros::SelectLedgeNode", g_106b8540);
    ChangLedgeHintView *pBest = 0;
    float flBest = -3.402823466e+38f;
    for (ChangLedgeHintView *pHint = g_10925450; pHint; pHint = pHint->m_pNext)
    {
        if (pHint->m_nHintType == 0x4653 && sub_1036df50(pHint))
        {
            const Vector *pHintPos = pHint->slot217();
            const Vector *pPos = ((CEntityVSlots *)this)->slot217();
            Vector vecDelta;
            VectorSubtract(*pPos, *pHintPos, vecDelta);
            float flDist = FastSqrt(vecDelta.y * vecDelta.y + vecDelta.x * vecDelta.x + vecDelta.z * vecDelta.z);
            if (flDist > flBest)
            {
                flBest = flDist;
                pBest = pHint;
            }
        }
    }
    return pBest;
}
// END FUNCTION

// FUNCTION: 0x1036d100 size=0x9c
#include "CNPC_VChangBros.h"

struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;

struct ListNode_t {
	char m_pad0000[0x5d8];
	ListNode_t *m_pNext;	// 0x5d8
	int m_type;	// 0x5dc
};
extern ListNode_t *g_10925450;

void *CNPC_VChangBros::sub_1036d100()
{
	g_109f3620[*g_109f3680].fn = "CNPC_VChangBros::SelectUnitedNode";
	g_109f3620[*g_109f3680].name = "";
	g_109f3620[*g_109f3680].extra = "";
	(*g_109f3680)++;
	int n = 0;
	for (ListNode_t *p = g_10925450; p; p = p->m_pNext) {
		if (p->m_type == 18000) {
			int mode = *(int *)((char *)this + 0x66b8);
			if (mode == 0 || (mode == 1 && n > 0)) {
				(*g_109f3680)--;
				return p;
			}
			n++;
		}
	}
	(*g_109f3680)--;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1036d1d0 size=0x78
#include "CNPC_VChangBros.h"
struct ScopeEnt { const char *name; const char *file; const char *file2; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VChangBros::vfunc448(int code)
{
    g_109f3620[*g_109f3680].name = "CNPC_VChangBros::TaskFail";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].file2 = g_106b8540;
    ++*g_109f3680;
    if (code >= 12 && code <= 15)
        *(int *)((char *)this + 0x5c54) = 0x15d;
    sub_100054bb(code);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1036d270 size=0xaa
#include "CLogicAuto.h"
#include "CNPC_VChangBros.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern float g_104ada04;

struct TeleportState_t {
	char m_pad0000[0x66bc];
	float m_vecPos[3];	// 0x66bc
	float m_flTime;	// 0x66c8
};

bool CNPC_VChangBros::sub_1036d270(float *pOut)
{
	g_109f3620[*g_109f3680].a = "CNPC_VChangBros::GetTeleportPosition";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	TeleportState_t *p = (TeleportState_t *)this;
	if (gpGlobals->curtime - p->m_flTime > g_104ada04) {
		(*g_109f3680)--;
		return false;
	}
	pOut[0] = p->m_vecPos[0];
	pOut[1] = p->m_vecPos[1];
	pOut[2] = p->m_vecPos[2];
	(*g_109f3680)--;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1036d350 size=0x220
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown103160c0.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VChangBros.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "RTTI.h"
#include "Vector.h"

extern char g_1054abdc[];
extern char g_10630064[];

static inline float Dist(const Vector &a, const Vector &b)
{
	float dx = a.x - b.x;
	float dy = a.y - b.y;
	float dz = a.z - b.z;
	return FastSqrt(dx * dx + dy * dy + dz * dz);
}

bool CNPC_VChangBros::sub_1036d350(const Vector *pPos, float flRadius)
{
	ScopeTrace trace("CNPC_VChangBros::PositionClearForTeleport", g_106b8540);

	Vector *pOrigin = ((CEntityVSlots *)this)->slot217();
	if (Dist(*pOrigin, *pPos) < flRadius)
		return false;

	if (Dist(m_vLastTeleportPosition, *pPos) < 100.0f)
		return false;

	if (m_n5bb0 > 0)
		return true;
	if (!m_p5da4)
		return true;

	CUnknown103160c0 *pSquad = (CUnknown103160c0 *)m_p5da4;
	if (pSquad->sub_10315a80(pPos, flRadius))
		return false;

	for (int i = 0; i < pSquad->sub_103160a0(); i++)
	{
		CBaseEntity *pEnt = pSquad->sub_103160c0(i);
		if (!pEnt)
			continue;
		CNPC_VChangBros *pOther = (CNPC_VChangBros *)__RTDynamicCast(pEnt, 0, g_1054abdc, g_10630064, 0);
		if (!pOther || pOther == this)
			continue;
		Vector v;
		if (!pOther->sub_1036d270(&v.x))
			continue;
		if (Dist(v, *pPos) < flRadius)
			return false;
	}

	return true;
}
// END FUNCTION

// FUNCTION: 0x1036d600 size=0x188
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VChangBros.h"
#include "CAI_BaseNPC.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include <math.h>


struct FacingEntView
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18)
	CAI_NPC_V10(19) CAI_NPC_V10(20)
	CAI_NPC_V(210) CAI_NPC_V(211) CAI_NPC_V(212) CAI_NPC_V(213) CAI_NPC_V(214) CAI_NPC_V(215) CAI_NPC_V(216)
	virtual float *vfunc217();
	virtual float *vfunc218();
	virtual float *vfunc219();
};

void sub_10139970(const Vector *pForward, float *pAngles);
float sub_100097e6(float a, float b);

// TARGET: CNPC_VChangBros::sub_1036d600
void CNPC_VChangBros::sub_1036d600()
{
	ScopeTrace trace("CNPC_VChangBros::UpdateFacingTimer", g_106b8540);
	FacingEntView *pEnemy = (FacingEntView *)EHandle_Get(*(unsigned int *)((char *)this + 0x628c));
	if (pEnemy)
	{
		Vector vecDelta = *(Vector *)((FacingEntView *)this)->vfunc217() - *(Vector *)pEnemy->vfunc217();
		float flAbsZ = (float)fabs(vecDelta.z);
		if (flAbsZ < 50.0f)
		{
			vecDelta.z = 0;
			float flDist = VectorNormalize(vecDelta);
			if (flDist <= 150.0f && flDist > 1e-5f)
			{
				float angles[3];
				sub_10139970(&vecDelta, angles);
				float flEnemyYaw = pEnemy->vfunc219()[1];
				if ((float)fabs(sub_100097e6(flEnemyYaw, angles[1])) <= 70.0f)
					return;
			}
		}
	}
	*(float *)((char *)this + 0x66d0) = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1036d800 size=0x372
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VChangBros.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown10924a1c.h"
#include "ScopeTrace.h"
#include "globalvars.h"
#include "engineiface.h"
#include "CEntityVSlots.h"

extern float g_104454c4;
extern float g_104492b8;
extern char g_10630ff8[];
#define STAMP(line, val) { m_pszFile1b30 = g_10630ff8; m_nLine1b34 = line; return val; }

// TARGET: CNPC_VChangBros::vfunc604
int CNPC_VChangBros::vfunc604(int arg)
{
	ScopeTrace st("CNPC_VChangBros::SelectScheduleMeleeCombat", g_106b8540);
	int pEnemy = vfunc167();
	if (!m_b6078 && !vfunc599(pEnemy))
	{
		float flMax = (g_10924a1c->vfunc1() ? g_104454c4 : g_10924a1c->m_fl28) + g_104492b8;
		m_pszFile1b30 = g_10630ff8;
		if (flMax < m_f6268)
		{
			m_nLine1b34 = 0x444;
			return 0xe7;
		}
		m_nLine1b34 = 0x448;
		return 0xe4;
	}
	if (sub_10269aa0(0x48))
		STAMP(0x44f, 0xcd);
	if (sub_10269d30(0xc))
		STAMP(0x454, 0xd5);
	if (sub_10269aa0(0x51))
		STAMP(0x469, 0xdd);
	bool bl = false;
	if (m_f626c > 64.0f)
	{
		if (m_fl6274 == -1.0f)
			m_fl6274 = enginerandom->vfunc1(3.0f, 4.0f) + gpGlobals->curtime;
		else if (gpGlobals->curtime >= m_fl6274)
			bl = true;
	}
	else
		m_fl6274 = -1.0f;
	if (sub_10269aa0(0x59))
		STAMP(0x484, 0x15d);
	if (!sub_10269aa0(9) && !sub_10269aa0(0x60))
		STAMP(0x49f, 0xc7);
	if (vfunc167())
	{
		if (sub_102a11d0(((CEntityVSlots *)vfunc167())->slot192()))
			STAMP(0x491, 0x15a);
	}
	float d = g_10924a1c->vfunc1() ? g_104454c4 : g_10924a1c->m_fl28;
	if (!(d <= m_f6268) && !bl)
		STAMP(0x49b, 0xd2);
	STAMP(0x497, 0xcb);
}
// END FUNCTION
