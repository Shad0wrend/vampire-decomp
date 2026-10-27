// CAI_InterestingPlace: declared by pcdecomp transplant for 0x102d9ae0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

struct CAI_IPSlot	// 0x1c byte record; only the first dword is touched so far
{
	int m_first;
	char m_pad[0x18];
};

class CAI_InterestingPlace : public CBaseEntity
{
public:
	CAI_InterestingPlace *vfunc5(unsigned int flags);
	virtual void vfunc103();	// Spawn-like: looks up the place type by the name at +0x544 (removes the entity with a warning when unknown), allocates the slot records (+0x580, count +0x584), turns the number at +0x574 (1..32) into a bit mask, clamps the value at +0x578 to 0..5
	virtual void vfunc130(int a);	// the base implementation (CBaseEntity::vfunc130), then, when a type name is set, looks the place type up (removing the entity with a warning when unknown), then sub_102d9eb0
	void sub_1000a25e();
	CAI_InterestingPlace *sub_102d99d0();	// as in CKeepUpright (transplant)
	void sub_102d9eb0();	// stub 0x10008701
	void sub_102daac0(int a);	// stub 0x10015889
	void sub_102d9b10();	// the destructor body (stub 0x1000a25e): stores the vtable, frees the slot records (+0x580), unlinks the place from the global chain (head 0x10927194, next pointer at +0x540, count 0x10927198), then destroys the outputs: the eight at +0x480 (last first), then +0x468 and +0x450, and runs the base destructor body (sub_1000cb8a)
	void sub_1000cb8a();	// base class destructor body (stub 0x1000cb8a), tail called

	char m_pad03e0[0x544 - 0x3e0];
	const char *m_pszTypeName;	// 0x544
	int m_pType;	// 0x548: the place type record, found by name
	char m_pad054c[0x574 - 0x54c];
	int m_nGroup;	// 0x574: 1..32 on load, then a single bit mask
	int m_nPriority;	// 0x578: clamped to 0..5
	char m_pad057c[4];
	CAI_IPSlot *m_pSlots;	// 0x580
	int m_nSlots;	// 0x584
	int m_n588;	// 0x588
public:
    virtual datamap_t * vfunc82();
};
