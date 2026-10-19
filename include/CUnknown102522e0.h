// CUnknown102522e0: weapon-like entity with an owner handle at +0x88c; real name not yet known (called by CWeaponMelee::vfunc372).
#pragma once

class CUnknown102522e0
{
public:
	char m_pad0000[0x88c];
	unsigned int m_hOwner;	// 0x088c

	int sub_102522e0();	// resolves the owner through the handle: its field at +0xa8 when set, else (when its field at +0x98 is set) the field at +0xa8 of the entity its slot 97 returns; 0 otherwise
};
