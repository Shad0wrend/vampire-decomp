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
public:
	int vfunc80();
	int vfunc81();

	// The item's drop / release handling, called by CTriggerBombSite::sub_102116c0 on the astrolite it creates:
	void sub_103f6800(CBaseEntity *pOwner);	// stub 0x1000865c: m_b914 = 1, m_pfnTouch (+0x1ec) = 0, CAI_BaseNPC::sub_10252470-style owner call sub_10252470(0), ClearParent (CBaseEntity::sub_100a0b20), ThinkSet(0, 0, 0) (sub_100ac4e0), slot 93 SetMoveType(0, 0), then three inlined ScopeTrace blocks on the collision property at +0x270 (name = m_name26c ? m_name26c : g_106b8540): "CBaseEntity::SetSolid" -> SetSolid(3) (sub_100dc480), "CBaseEntity::ClearSolidFlags" -> SetSolidFlags(0) (CFlagsUnit::sub_100dc580), "CBaseEntity::AddSolidFlags" -> SetSolidFlags(m_usSolidFlags | 4); finally AddFlag2(1) (CBaseEntity::sub_100b3840)
	void sub_10252470(int a);	// stub 0x10009e3e: the call the astrolite makes first (the matched CAI_BaseNPC::sub_10252470 shape: one stack argument, 0 here)
	void sub_103f6ab0(CBaseEntity *pEnt);	// stub 0x10015c1c: called by the bomb site with itself, just before sub_103f6800 (the matched CAI_BaseNPC::sub_103f6ab0 stores pEnt's handle)

	char m_pad03e0[0x914 - 0x3e0 - 0x0];	// 0x3e0 .. 0x913 (CBaseEntity members above end at 0x3e0)
	char m_b914;	// 0x914: set by sub_103f6800; read by vfunc34 / vfunc35 / vfunc117 / vfunc173 (0x103f6af0 / 0x103f6b20 / 0x103f6b50 / 0x103f6b90) and cleared by vfunc103 (0x103f67d0)
};
