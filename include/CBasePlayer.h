// class CBasePlayer (RTTI .?AVCBasePlayer@@), primary vtable 0x1046fbb4, 469 slots.
// The derivation CBaseEntity -> CBaseToggle -> CBaseAnimating -> CBaseAnimatingOverlay ->
// CBaseFlex -> CBaseCombatCharacter -> CBasePlayer (all at +0x0) is not modelled yet, so
// only the slots and members decompiled code needs are declared, at their real offsets.
#pragma once

class CBasePlayer
{
public:
	virtual void vfunc408();

	char m_04[0x19f6 - 0x04];
	bool m_19f6;
};
