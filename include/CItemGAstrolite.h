// CItemGAstrolite: declared by pcdecomp transplant for 0x10409be0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
// Real bases (RTTI): CWeaponIGeneric > CBaseCombatWeapon > CBaseAnimating > CBaseToggle > CBaseEntity; modelled as a
// CBaseEntity subclass (like CItemGKeyring) so the CBaseEntity members and slots (93 SetMoveType ...) can be used.
#pragma once

#include "CBaseEntity.h"

class CItemGAstrolite : public CBaseEntity
{
public:
	CItemGAstrolite *vfunc5(unsigned int flags);
	void sub_10013a57();
	void sub_10008c97();	// CWeaponIGeneric::vfunc103 (stub), called directly
	void vfunc103();
public:
	int vfunc80();
	int vfunc81();
	int vfunc35(CBaseEntity *pOther);	// slot 35 (plain member): 0 when m_b914, else CBaseCombatWeapon::vfunc35(pOther)

	// The item's release handling, called by CTriggerBombSite::sub_102116c0 on the astrolite it creates (after
	// CAI_BaseNPC::sub_103f6ab0, which the symbol map names for the stub 0x10015c1c):
	void sub_103f6800(CBaseEntity *pOwner);	// stub 0x1000865c, ret 4 (the argument is unused): m_b914 = 1, m_pfnTouch (+0x1ec) = 0, CAI_BaseNPC::sub_10252470(0) on this (stub 0x10009e3f: cast `((CAI_BaseNPC *)this)->sub_10252470(0)`, the symbol map knows it under that class), ClearParent (CBaseEntity::sub_100a0b20), ThinkSet(0, 0, 0) (sub_100ac4e0), slot 93 SetMoveType(0, 0), then three inlined ScopeTrace blocks (two-argument form, name = m_name26c ? m_name26c : g_106b8540, each popped right after its call) on the CCollisionProperty at +0x270 (CCollisionProperty.h): "CBaseEntity::SetSolid" -> sub_100dc480(3), "CBaseEntity::ClearSolidFlags" -> sub_100dc580(0), "CBaseEntity::AddSolidFlags" -> sub_100dc580(m_usSolidFlags | 4); finally sub_100b3840(1) (AddFlag2)

	char m_pad03e0[0x914 - 0x3e0];	// 0x3e0 .. 0x913 (the CBaseEntity members end at 0x3e0)
	char m_b914;	// 0x914: set by sub_103f6800; read by vfunc34 / vfunc35 / vfunc117 / vfunc173 (0x103f6af0 / 0x103f6b20 / 0x103f6b50 / 0x103f6b90) and cleared by vfunc103 (0x103f67d0)
};
