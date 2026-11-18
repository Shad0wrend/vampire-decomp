// CTriggerHurt: declared by pcdecomp transplant for 0x101c5c30 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseTrigger.h"
#include "utlvector.h"
#include "ehandle.h"

class CTriggerHurt : public CBaseTrigger
{
public:
	CTriggerHurt();	// 0x101c5ca0
	CTriggerHurt *sub_101c5ca0();
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (declared as a plain member: the base's slot 5 is a placeholder): empties the damaged-entity vector at +0x5f4, destructs the six outputs and the base, then deletes itself when bit 0 of flags is set
	void sub_1000cb8a();	// destructor body of the base entity, called directly
	int sub_101c6550(float flDeltaTime);	// "CTriggerHurt::HurtAllTouching": stamps the damage time (+0x59c) with curtime, empties the damaged list count (+0x600), then hurts every live entity of the touching list (data object type 1) with flDeltaTime * the damage (+0x598); returns how many were hurt
	bool sub_101c5f40(CBaseEntity *pOther, float flDamage);	// "CTriggerHurt::HurtEntity": hurts pOther, true when it was
	void vfunc175(CBaseEntity *pOther);	// slot 175 "CTriggerHurt::Touch": the next think time (+0x17c) is raised to the current time when it is below it (the base's touch slot is CBaseEntity::vfunc175)
	void vfunc176(CBaseEntity *pOther);	// slot 176 "CTriggerHurt::EndTouch": when pOther passes the trigger filters and is not yet in the damaged-entity vector (+0x5f4, size +0x600) hurts it once with half the damage-per-second (+0x598 * a constant); then CBaseTrigger::vfunc176
	void sub_101c55d0(CBaseEntity *pOther);	// CBaseTrigger::vfunc176 (stub 0x1001346c), called directly
	virtual void vfunc103();	// slot 103 (Spawn): CBaseEntity::vfunc103, sub_101c5080, the think function 0x1000cc89, then the push vector (+0x5b4) = the unit vector from the origin (slot 217) to the target position (+0x5a8) scaled by the speed (+0x5a4)
	void sub_101c5080();	// stub 0x1000dfd0, called directly by vfunc103
	void sub_101c63d0();	// 0x101c63d0: resets the hurt timer (the trigger's base init, then clears +0x17c)
	void sub_101c6670(int a);	// when the trigger is not disabled (byte +0x55c) hurts everything touching it for 1.0f; else enables it, sets the think function 0x101c63d0 and the next think to curtime + 0.1f
	void sub_101c6390();	// 0x101c6390: when sub_101c6550(3.0f) hurt anything, the next think time (+0x17c) is curtime + 3.0f

	float m_flDamage;	// 0x598
	float m_flLastDmgTime;	// 0x59c
	int m_nDamageType5a0;	// 0x5a0: the damage type (the second argument of slot 143; bit 3 gates the secondary hurt block of sub_101c5f40)
	float m_flSpeed5a4;	// 0x5a4
	Vector m_vecTarget5a8;	// 0x5a8
	Vector m_vecPushDir5b4;	// 0x5b4
	int m_i5c0;
	COutputEvent m_out5c4;
	COutputEvent m_out5dc;
	CUtlVector<EHANDLE> m_hurtEntities;	// 0x5f4: the entities hurt since the last damage time (size at +0x600)
public:
    virtual datamap_t * vfunc82();
};
