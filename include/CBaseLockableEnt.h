// CBaseLockableEnt : CBaseVampireSkillEntity (the game's RTTI .?AVCBaseLockableEnt@@). The game has no vtable of its
// own for it; the lockables below it (CPropDoorknob 0x1048c364, CPropPadlock 0x1048c89c, CItemContainerLock
// 0x1048d30c) share its slots 32..37, 39..43, 82, 193 and its new slots 273..276 (CPropDoorknob overrides 273,
// CPropPadlock 274). Declared here: 41, 42 and 193 (with CBaseEntity's signatures; the others are still declared by
// CPropDoorknob) and 273..276. Size 0x824: prop_doorknob and prop_padlock allocate 0x824.
#pragma once

#include "CBaseVampireSkillEntity.h"

class CItemGKeyring;

class CBaseLockableEnt : public CBaseVampireSkillEntity
{
public:
	unsigned int m_hAttached;	// 0x80c: handle of the door / container this lock is attached to (the doorknob
					// constructor builds it as a CBaseHandle)
	CItemGKeyring *m_pKeyring;	// 0x810: the keyring item the lock was made for
	char m_bGiveKeyring;	// 0x814
	char m_b815;	// 0x815: locked
	unsigned char m_b816;	// 0x816: sent to the player's hud in the keyring message
	char m_pad817;
	int m_n818;	// 0x818: slot 35 answer while the lock is closed
	int m_n81c;	// 0x81c: slot 35 answer while the keyring check fails
	int m_n820;	// 0x820: slot 35 answer while the keyring check passes

	bool sub_10224100();	// 0x10224100: true while the lock state at +0x780 is below 3
	void sub_102256f0(const char *pszDoorName);	// finds the door (CBaseDoor) of that name, stores its handle at +0x80c (-1
		// when none) and hands this knob to it (CBaseDoor::AddDoorknob); a missing door is warned about ("attached to
		// non-existent door") and this entity removed (the two door lockables' slot 113)
	virtual void vfunc41();	// slot 41 (0x102252f0): the use / close handler
	virtual int vfunc42(int);	// slot 42 (0x10225140): the base slot 42, then the keyring hud message
	virtual Vector vfunc193();	// slot 193 (0x102243c0) "EyePosition": the "camera_position" attachment's origin
	virtual void vfunc273();	// slot 273, new (0x10225ce0)
	virtual void vfunc274();	// slot 274, new (0x10225910)
	virtual void vfunc275();	// slot 275, new (0x10224190): the lock state at +0x780 = 1
	virtual void vfunc276();	// slot 276, new (0x102241b0)
};
