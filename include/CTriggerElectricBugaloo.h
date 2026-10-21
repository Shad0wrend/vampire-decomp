// CTriggerElectricBugaloo: only what matched code needs, as plain members (no vtable pointer is declared, so offsets start at 0).
#pragma once

class CTriggerElectricBugaloo
{
public:
	bool vfunc32(void *pOther);	// slot 32: same as CTriggerBombSite::vfunc32, with the player's back-pointer handle at +0x1cbc
	void vfunc175(void *pOther);	// slot 175 (Touch): the base Touch, then when the entity behind the handle at +0x8c is pOther hands it (resolved again) to sub_10231790
	void sub_100a4af0(void *pOther);	// CBaseEntity::vfunc175 (Touch), called directly
	void sub_10231790(void *pEnt);	// called through the stub at 0x10013eda
	void vfunc176(void *pOther);	// slot 176 (EndTouch): when sub_10007d15(pOther) holds, registers pOther with the member at +0x568; then clears the player's back-pointer handle (+0x1cbc of the object at pOther+0xa8) when it points at this trigger
	bool sub_10007d15(void *pOther);	// stub of 0x101c5460, called with the touching entity

	char m_pad0000[0x8c];
	unsigned int m_hOwner008c;	// 0x008c
	char m_pad0090[0x55c - 0x90];
	bool m_bDisabled;	// 0x055c
};
