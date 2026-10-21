// CPlayerPickupController (RTTI .?AVCPlayerPickupController@@): base CBaseEntity at +0x0.
// Holds the carry state (object at +0x450, its entity handle at +0x59c) and the player at +0x5cc.
#pragma once

#include "CBaseEntity.h"
#include "CUnknown1040cb60.h"
#include "CBaseCombatCharacter.h"

class CPlayerPickupController : public CBaseEntity
{
public:
	char m_pad03e0[0x450 - sizeof(CBaseEntity)];
	CUnknown1040cb60 m_Carry;	// 0x450
	CBaseCombatCharacter *m_pPlayer;	// 0x5cc

	void sub_1040d0a0(char bThrow);	// releases the carried object (m_Carry), passes it to sub_101895d0 with the player and tells the player's active weapon (slot 315), then removes itself
	void sub_1040cfd0(CBaseCombatCharacter *pPlayer, CBaseEntity *pObject);	// "PickupObject"-like: unless the player's active weapon agrees (slot 316), drops everything (sub_1040d0a0(0)); else takes pObject (move type 2 when it was 1), sets the carry flag / constant at +0x490 / +0x495, remembers the player and hands both to the carry object (sub_1040c5d0)
	void sub_100a0670(CBaseEntity *pOwner, int a);	// stub 0x10005650
};
