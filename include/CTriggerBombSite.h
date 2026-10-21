// CTriggerBombSite: declared by pcdecomp transplant for 0x10216f70 from CBaseButton (0x100c8760);
// only what matched code needs, as plain members (no vtable pointer is declared, so offsets start at 0).
#pragma once

class CTriggerBombSite
{
public:
	CTriggerBombSite *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	bool vfunc32(void *pOther);	// slot 32: false when disabled (+0x55c), or when the player object at pOther+0xa8 does not point back to this entity (handle at +0x1cb8) or this entity's own handle at +0x8c resolves to another object
	void vfunc176(void *pOther);	// slot 176 (EndTouch): lets the toucher's trigger list at +0x568 handle it, then clears the player's bomb site handle (+0x1cb8) when it resolves to this entity
	void sub_10211870(void *pSender, void *pParam);	// called through the stub at 0x1000d913 with the owner object and the argument by CUnknown103f6a20::sub_103f6a20

	char m_pad0000[0x8c];
	unsigned int m_hOwner008c;	// 0x008c
	char m_pad0090[0x55c - 0x90];
	bool m_bDisabled;	// 0x055c
};
