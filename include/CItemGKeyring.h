// CItemGKeyring: declared by pcdecomp transplant for 0x10407a70 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CItemGKeyring : public CBaseEntity
{
public:
	CItemGKeyring *sub_10407b30();
	CItemGKeyring();	// 0x10407b30: the weapon base constructor 0x103f42b0 (CWeaponIGeneric), then the five dwords at +0x914..+0x924 cleared and the vtable
	int sub_10407e10(const char *pszKey);	// stub 0x100036ed: index of the 0xc0 byte key record (vector at +0x914, count at +0x920) whose name (first 0x60 bytes) matches pszKey case-insensitively, -1 when none
	void sub_10408220(void *pInventory);	// stub 0x1000a939, called with the player's inventory object (+0x245c)
	void sub_10407e90(CBaseEntity *pEnt);	// stub 0x10010adc, called by CBasePlayer::sub_101784c0 with the entity it was given
	virtual CBaseEntity *vfunc5(unsigned int flags);	// slot 5 (scalar deleting destructor, plain member): the vector at +0x914 goes, then the weapon base's destructor body (sub_10250c50), then the delete when bit 0 of flags is set
public:
    virtual datamap_t * vfunc82();
    virtual void vfunc130(int);
public:
    virtual int vfunc81();
    virtual int vfunc80();
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc180();	// slot 180 (0x10408380): a tail call of CBaseEntity::vfunc180 (a base declares it plain vfunc180: this one hides it)
};
