// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
