// CTriggerHurt: declared by pcdecomp transplant for 0x101c5c30 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseTrigger.h"

class CTriggerHurt : public CBaseTrigger
{
public:
	CTriggerHurt();	// 0x101c5ca0
	CTriggerHurt *sub_101c5ca0();
	CTriggerHurt *vfunc5(unsigned int flags);	// scalar deleting destructor (declared as a plain member: the base's slot 5 is a placeholder): empties the damaged-entity vector at +0x5f4, destructs the six outputs and the base, then deletes itself when bit 0 of flags is set
	void sub_1000cb8a();	// destructor body of the base entity, called directly
	int sub_101c6550(float flDeltaTime);	// "CTriggerHurt::HurtAllTouching": stamps the damage time (+0x59c) with curtime, empties the damaged list count (+0x600), then hurts every live entity of the touching list (data object type 1) with flDeltaTime * the damage (+0x598); returns how many were hurt
	bool sub_101c5f40(CBaseEntity *pOther, float flDamage);	// "CTriggerHurt::HurtEntity": hurts pOther, true when it was
	void vfunc176(CBaseEntity *pOther);	// slot 176 "CTriggerHurt::EndTouch": when pOther passes the trigger filters and is not yet in the damaged-entity vector (+0x5f4, size +0x600) hurts it once with half the damage-per-second (+0x598 * a constant); then CBaseTrigger::vfunc176
	void sub_101c55d0(CBaseEntity *pOther);	// CBaseTrigger::vfunc176 (stub 0x1001346c), called directly

	float m_flDamage;	// 0x598
	float m_flLastDmgTime;	// 0x59c
	char m_pad05a0[0x5c0 - 0x5a0];
	int m_i5c0;
	COutputEvent m_out5c4;
	COutputEvent m_out5dc;
	int m_i5f4;
	int m_i5f8;
	int m_i5fc;
	int m_i600;
	int m_i604;
};
