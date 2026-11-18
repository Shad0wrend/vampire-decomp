// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c87c0 size=0x6
#include "datamap.h"
#include "CTriggerPush.h"
namespace lifted {
extern char g_1059de58;
}
datamap_t * CTriggerPush::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059de58);
}
// END FUNCTION

// FUNCTION: 0x101c8910 size=0x4c
#include "CTriggerPush.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerPush::vfunc5
CBaseEntity *CTriggerPush::vfunc5(unsigned int flags)
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

// FUNCTION: 0x101c8aa0 size=0x85
#include "CTriggerPush.h"
#include "CEntityVSlots.h"

extern Vector g_1070d9d0;	// vec3_angle

void CTriggerPush::vfunc103()
{
	CBaseEntity::vfunc103();
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	if (*pSlots->slot221() == g_1070d9d0) {
		Vector vecAngles(0, 360, 0);
		pSlots->slot64(&vecAngles.x);
	}
	sub_101c5080();
	*(int *)((char *)this + 0x59c) = *(int *)((char *)this + 0x164);
}
// END FUNCTION

// FUNCTION: 0x101c8c40 size=0x3a1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "IPhysicsObject.h"
#include "CTriggerPush.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include <math.h>

void sub_101cd940(CTriggerPush *p);
extern float g_104454c4;

// TARGET: CTriggerPush::vfunc175
void CTriggerPush::vfunc175(CBaseEntity *pOther)
{
	bool bSolid;
	{
		ScopeTrace trace("CBaseEntity::IsSolid", pOther ? (pOther->m_name26c ? pOther->m_name26c : g_106b8540) : g_105387dc);
		bSolid = pOther->m_n2b0 && !(pOther->m_b2b4 & 4);
	}
	if (!bSolid)
		return;
	if (pOther->vfunc92() == 1)
		return;
	if (!sub_101c5460(pOther))
		return;

	if (m_flags204 & 0x80) {
		Vector v = m_flSpeed164 * *(Vector *)m_vecMovedir + *(Vector *)pOther->m_vel3d4;
		pOther->sub_100b2e30(&v.x);
		if (pOther->m_vel3d4[2] > g_104454c4)
			pOther->sub_100b3640(1);
		sub_101cd940(this);
		return;
	}
	switch (pOther->vfunc94()) {
	case 0: case 8: case 9: case 0xb: case 0xc:
		break;
	case 7:
		if (pOther->m_obj36c) {
			((IPhysicsObject *)pOther->m_obj36c)->vfunc30(&(m_flSpeed164 * *(Vector *)m_vecMovedir * 100.0f * gpGlobals->frametime));
		}
		break;
	default: {
		Vector v = m_flSpeed164 * *(Vector *)m_vecMovedir;
		if (pOther->sub_100b3700() & 0xa00) {
			if (fabs(m_flSpeed164) < 0.10000000149011612)
				break;
			pOther->sub_100b2e30(&v.x);
			break;
		}
		if (pOther->sub_100b3700() & 0x800000) {
			v = v + pOther->m_vecBaseVelocity;
		}
		if (v.z > g_104454c4 && (pOther->sub_100b3700() & 1)) {
			pOther->sub_100b3640(1);
			Vector p = *((CEntityVSlots *)pOther)->slot220();
			p.z += 1.0f;
			pOther->vfunc62(&p.x);
		}
		pOther->m_vecBaseVelocity = v;
		pOther->sub_100b3580(0x800000);
		break;
	}
	}
}
// END FUNCTION
