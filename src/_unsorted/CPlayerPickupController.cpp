// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040ce30 size=0x5
#include "CPlayerPickupController.h"
bool CPlayerPickupController::vfunc157(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1040ce50 size=0x3
#include "CPlayerPickupController.h"

void CPlayerPickupController::vfunc226(int a)
{
}
// END FUNCTION

// FUNCTION: 0x1040ce70 size=0x3
#include "CPlayerPickupController.h"
void CPlayerPickupController::vfunc229(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1040ce90 size=0x6
#include "datamap.h"
#include "CPlayerPickupController.h"
namespace lifted {
extern char g_106839a0;
}
datamap_t * CPlayerPickupController::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_106839a0);
}
// END FUNCTION

// FUNCTION: 0x1040d170 size=0x23d
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "Ray_t.h"
#include "utlmemory.h"
#include "CPlayerPickupController.h"
#include "IPhysicsObject.h"
#include "CEHandleGet.h"
#include "globalvars.h"
#include <stdlib.h>

struct SConVarX
{
	virtual void vfunc0();
	virtual char IsZero();
	char m_pad0004[0x28 - 4];
	float m_flValue;
};

extern SConVarX *g_1094abac;

// TARGET: CPlayerPickupController::vfunc173
void CPlayerPickupController::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float flUseValue)
{
	CBaseEntity *pPlayer = pActivator;
	if (pPlayer)
		pPlayer = (CBaseEntity *)pPlayer->m_pA8;
	if (pPlayer != (CBaseEntity *)m_pPlayer)
		return;

	CBaseEntity *pObject = (CBaseEntity *)g_10566458->sub_100290c0(&m_Carry.m_hEntity);
	if (!pObject || !useType || (*(unsigned int *)((char *)m_pPlayer + 0x2088) & 0x800) || m_Carry.sub_1040c080() > 12.0f)
	{
		sub_1040d0a0(0);
	}
	else if (*(unsigned char *)((char *)m_pPlayer + 0x2088) & 1)
	{
		sub_1040d0a0(1);

		Vector vecPos;
		((CBaseCombatCharacter *)m_pPlayer)->sub_100b7fa0(vecPos.Base(), 0, 0);

		float flMass = (float)((((IPhysicsObject *)pObject->m_obj36c)->vfunc12() > 15.0f) ? 15.0 : ((((IPhysicsObject *)pObject->m_obj36c)->vfunc12() < 0.5) ? 0.5 : ((IPhysicsObject *)pObject->m_obj36c)->vfunc12()));
		float flFactor = (flMass - 0.5f) * 0.2413793f + 0.5f;
		float flScale = (g_1094abac->IsZero() ? 0.0f : g_1094abac->m_flValue) * flFactor;

		vecPos.x *= flScale;
		vecPos.y *= flScale;
		vecPos.z *= flScale;
		((IPhysicsObject *)pObject->m_obj36c)->vfunc30(&vecPos);

		Vector vecRand;
		vecRand.x = rand() * 0.0006103702f - 10.0f;
		vecRand.y = rand() * 0.0006103702f - 10.0f;
		vecRand.z = rand() * 0.0006103702f - 10.0f;
		Vector vecVel = vecRand * flFactor;
		((IPhysicsObject *)pObject->m_obj36c)->vfunc34(&vecVel);
	}
	else if (useType == 2)
		m_Carry.sub_1040f940(m_pPlayer, 12.0f);
}
// END FUNCTION

// FUNCTION: 0x10411b50 size=0x2b
#include "CPlayerPickupController.h"

struct CGargoyleMemberUnit {
	void sub_10011a77();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CPlayerPickupController::vfunc5
CBaseEntity *CPlayerPickupController::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x450))->sub_10011a77();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
