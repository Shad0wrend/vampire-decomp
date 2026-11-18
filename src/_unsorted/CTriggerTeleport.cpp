// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c9150 size=0x6
#include "datamap.h"
#include "CTriggerTeleport.h"
namespace lifted {
extern char g_1059dfa4;
}
datamap_t * CTriggerTeleport::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059dfa4);
}
// END FUNCTION

// FUNCTION: 0x101c91e0 size=0x3c
#include "CTriggerTeleport.h"

// TARGET: CTriggerTeleport::CTriggerTeleport
CTriggerTeleport::CTriggerTeleport()
{
	m_n59c = 0;
}
// END FUNCTION

// FUNCTION: 0x101c9230 size=0x4c
#include "CTriggerTeleport.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerTeleport::vfunc5
CBaseEntity *CTriggerTeleport::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x101c92a0 size=0x5
#include "CTriggerTeleport.h"
#include "CBaseTrigger.h"
// TARGET: CTriggerTeleport::vfunc103
// the game's 0x101c92a0: a tail call (jmp) of CBaseTrigger::sub_101c5080
void CTriggerTeleport::vfunc103()
{
	((CBaseTrigger *)this)->CBaseTrigger::sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x101c92c0 size=0x33f
#include "CLogicAuto.h"
#include "CTriggerTeleport.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "CBaseTrigger.h"
#include "engineserver.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
void sub_1013a7e0(const Vector &v, float ang, Vector &out);

struct CTeleportCollView { virtual Vector *slot0(); virtual Vector *slot1(); };
struct CTeleportPortal {
	char pad[0x1f58];
	Vector m_vecA;
	Vector m_vecB;
	float m_flYaw;
	float m_flTime;
	int m_n;
};
struct CTeleportOther : CEntityVSlots {
	char pad[0xa8 - 4];
	CTeleportPortal *m_pPortal;
	char pad2[0x270 - 0xac];
	CTeleportCollView m_Coll;
	char pad3[0x3d4 - 0x274];
	Vector m_vecVel;
};

static inline float anglemod(float a)
{
	a = (360.0f / 65536) * ((int)(a * (65536.0f / 360.0f)) & 65535);
	return a;
}

static inline float GetYaw(const Vector *v)
{
	return v->y;
}

// TARGET: CTriggerTeleport::vfunc175
void CTriggerTeleport::vfunc175(CBaseEntity *pOther)
{
	if (!sub_101c5460(pOther))
		return;
	const char *pszTarget = *(const char **)((char *)this + 0x20c);
	CEntityVSlots *pentTarget = (CEntityVSlots *)g_106eb5d8.sub_100f7770(0, pszTarget ? pszTarget : g_106b8540, pOther, 0);
	if (!pentTarget)
		return;
	CTeleportOther *pEnt = (CTeleportOther *)pOther;
	CEntityVSlots *pentLandmark = 0;
	Vector vecLandmarkOffset(0, 0, 0);
	if (m_targetName598) {
		pentLandmark = (CEntityVSlots *)g_106eb5d8.sub_100f7770(0, m_targetName598, pOther, 0);
		if (pentLandmark) {
			vecLandmarkOffset = *pEnt->slot220() - *pentLandmark->slot220();
		}
	}
	pOther->sub_100b3640(1);
	Vector tmp = *pentTarget->slot220();
	if (!pentLandmark && pEnt->m_pPortal) {
		tmp.z -= pEnt->m_Coll.slot1()->z;
	}
	Vector vecVelocity(0, 0, 0);
	QAngle angles(0, 0, 0);
	const QAngle *pAngles;
	Vector *pVelocity;
	float flYaw;
	Vector vecSrc, vecDst;
	if (!pentLandmark) {
		pAngles = (QAngle *)pentTarget->slot221();
		pVelocity = 0;
		flYaw = pAngles->y;
		flYaw -= GetYaw(pEnt->slot219());
		vecSrc = *pEnt->slot217();
		vecDst = *pentTarget->slot217();
	} else {
		flYaw = pentTarget->slot221()->y;
		flYaw -= GetYaw(pentLandmark->slot221());
		angles = *(QAngle *)pEnt->slot221();
		pAngles = &angles;
		angles.y = anglemod(angles.y + flYaw);
		vecVelocity = pEnt->m_vecVel;
		pVelocity = &vecVelocity;
		sub_1013a7e0(vecVelocity, flYaw, vecVelocity);
		sub_1013a7e0(vecLandmarkOffset, flYaw, vecLandmarkOffset);
		vecSrc = *pentLandmark->slot217();
		vecDst = *pentTarget->slot217();
	}
	tmp += vecLandmarkOffset;
	pEnt->slot181(&tmp, (int)pAngles, (int)pVelocity);
	CTeleportPortal *pPortal = pEnt->m_pPortal;
	if (pPortal) {
		pPortal->m_vecA = vecSrc;
		pPortal->m_vecB = vecDst;
		pPortal->m_flYaw = flYaw;
		pPortal->m_flTime = engine->vfunc119(0);
		pPortal->m_n = m_n59c;
	}
}
// END FUNCTION
