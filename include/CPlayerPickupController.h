// CPlayerPickupController (RTTI .?AVCPlayerPickupController@@): base CBaseEntity at +0x0.
// Holds the object the player carries (entity handle at +0x59c) and the player at +0x5cc.
#pragma once

#include "CBaseEntity.h"
#include "CUnknown1040cb60.h"
#include "CBaseCombatCharacter.h"

class CPlayerPickupController : public CBaseEntity
{
public:
	char m_pad03e0[0x450 - sizeof(CBaseEntity)];
	CUnknown1040cb60 m_Carry;	// 0x450
	char m_pad0450[0x59c - 0x450 - sizeof(CUnknown1040cb60)];
	unsigned int m_hCarried;	// 0x59c: entity handle of the carried object
	char m_pad05a0[0x5cc - 0x5a0];
	CBaseCombatCharacter *m_pPlayer;	// 0x5cc

	void sub_1040d0a0(char bThrow);	// drops the carried object: releases m_Carry, passes the object to sub_101895d0 and tells the player's active weapon (slot 315), then removes itself
};
