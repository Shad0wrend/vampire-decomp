// CBreakableProp: declared by pcdecomp transplant for 0x1018f230 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CBreakableProp
{
public:
	CBreakableProp *vfunc5(unsigned int flags);
	void vfunc103();	// "CBreakableProp::Spawn"-like: base spawn, slot 265, take-damage mode from the health, default 0.1 at +0xdc, AddFlag(0x20000000)
	void sub_10011793();	// CBaseProp::vfunc103 (jump stub)
	void vfunc144(void *pInfo);	// "BreakableProp::Break"-like: clears flag 0x2000 / 0x40000, remembers the attacker's handle (+0x768), sets a think function, no damage taking, thinks again in a millisecond
	void sub_10007fe5(void *pfnThink, int a, int b);	// SetThink-like helper (stub of 0x100ac4e0)
	void vfunc265();	// slot 265: when the health (+0x210) is 5 and both list nodes (+0x730, +0x748) are empty, sets the health to 0 and warns ("HACK DESTRUCTABLE PROP HEALTH HACK", "Setting entity %-4d's health to 0")
	const char *sub_1009f200();	// CBaseEntity::GetClassname
	const char *sub_100ab4f0();	// the entity's name for debug output (stub 0x1000b5cd)
	int vfunc124();	// slot 124 "DrawDebugTextOverlays": the base's line offset, plus one line "Health: %d" when the text overlay bit (bit 0 of +0x224) is set
	int sub_10096100();	// CBaseAnimating::vfunc124 (stub 0x10007d97), called directly

	char m_pad0000[0x210];
	int m_iHealth;	// 0x210
	char m_pad0214[0x224 - 0x214];
	unsigned char m_fTextOverlayFlags;	// 0x224
	char m_pad0225[0x2e0 - 0x225];
	int m_pEdict;	// 0x2e0
};
