// CTriggerWWZone (RTTI .?AVCTriggerWWZone@@): trigger zone; CBaseTrigger / CBaseToggle are not modelled, so the
// entity base is used directly. A vector of entity handles lives at +0x598 (data pointer; allocation count,
// grow size and the element count at +0x5a4 follow). Only what decompiled code needs.
#pragma once
#include "CBaseTrigger.h"

#include "CBaseEntity.h"

class CTriggerWWZone : public CBaseTrigger
{
public:
	unsigned int *m_pHandles;	// 0x598
	int m_nHandleAlloc;	// 0x59c
	int m_nHandleGrow;	// 0x5a0
	int m_nHandles;	// 0x5a4

	CTriggerWWZone *sub_103dad80();
	void vfunc175(CBaseEntity *pOther);
	void vfunc176(CBaseEntity *pOther);
	void sub_103daf10();	// calls slot 77 on every valid entity of the handle list
	virtual void vfunc119();	// "CTriggerWWZone::Kill": scope trace (entity name), disables the trigger (CBaseTrigger::sub_101c4dd0), sets the think function to the stub at 0x10015b68 and the next think to curtime + 1.0f
	virtual void vfunc113();	// "CTriggerWWZone::Activate": scope trace (entity name), the base activation, then sub_1000dfd0
	void sub_100113a6();	// CBaseTrigger::vfunc113 (Activate), called directly
	virtual void vfunc251();	// slot 251: sets the zone up when it is not yet (sub_103da730, sub_103daa30), then stores the handle of the entity named at +0x5b0 in +0x5b4 (-1 when none)
	void sub_103da730();	// stub 0x100090e8, set-up step
	void sub_103daa30();	// stub 0x1000966a, set-up step
	void sub_1000dfd0();	// the zone's own activation step (stub of 0x101c5080)
	CTriggerWWZone *vfunc5(unsigned char flags);	// scalar deleting destructor, declared as a plain member: purges the handle vector at +0x598 (twice, like the inlined CUtlVector destructor), destroys the four outputs at +0x580 / +0x568 / +0x4bc / +0x4a4, the base destructor body (sub_1000cb8a), and frees the object when bit 0 of flags is set
	void sub_1000cb8a();	// base class destructor body (stub 0x1000cb8a)
	void sub_103cecd0(CBaseEntity *pEnt);	// stores pEnt at +0x66c4, and clears it again unless pEnt's dword at +0x5dc is 0x3aa3

	char m_pad05a8[0x5ac - 0x5a8];
	int m_n5ac;	// 0x5ac: non-zero once the zone has been set up
	const char *m_pszName5b0;	// 0x5b0: the name of the entity the zone looks up
	unsigned int m_h5b4;	// 0x5b4: its handle, -1 when not found
	char m_pad05b8[0x66c4 - 0x5b8];
	CBaseEntity *m_pEnt66c4;	// 0x66c4
	char m_pad66c8[0x66e8 - 0x66c8];
	unsigned int m_flags66e8;
public:
    virtual datamap_t * vfunc82();
};
