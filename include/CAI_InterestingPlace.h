// CAI_InterestingPlace: declared by pcdecomp transplant for 0x102d9ae0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"
#include "datamap.h"

struct CAI_IPSlot	// 0x1c byte record; only the first dword is touched so far
{
	int m_first;
	char m_pad[0x18];
};

class CAI_InterestingPlace;

struct CAI_IPBaseDtor
{
	~CAI_IPBaseDtor();
	char m_pad[0x70];
};

class CAI_InterestingPlace : public CBaseEntity
{
public:
	virtual ~CAI_InterestingPlace();
	virtual CBaseEntity *vfunc5(unsigned int flags);
	virtual void vfunc103();	// Spawn-like: looks up the place type by the name at +0x544 (removes the entity with a warning when unknown), allocates the slot records (+0x580, count +0x584), turns the number at +0x574 (1..32) into a bit mask, clamps the value at +0x578 to 0..5
	virtual void vfunc130(int a);	// the base implementation (CBaseEntity::vfunc130), then, when a type name is set, looks the place type up (removing the entity with a warning when unknown), then sub_102d9eb0
	void sub_1000a25e();
	CAI_InterestingPlace *sub_102d99d0();	// as in CKeepUpright (transplant)
	void sub_102daf80(int nArg);	// 0x102daf80 "CAI_InterestingPlace::DrawDebugOverlay"-like (called by 0x102db670 over the global chain head 0x10927194, next +0x540): draws the place's box (m_vec54c / m_vec558) and text (type name, priorities, slot boxes) when the debug mode m_b57c / m_b57d is set
	void sub_102d9eb0();	// stub 0x10008701
	void sub_102daac0(int a);	// stub 0x10015889
	void sub_102d9b10();	// the destructor body (stub 0x1000a25e): stores the vtable, frees the slot records (+0x580), unlinks the place from the global chain (head 0x10927194, next pointer at +0x540, count 0x10927198), then destroys the outputs: the eight at +0x480 (last first), then +0x468 and +0x450, and runs the base destructor body (sub_1000cb8a)
	void sub_1000cb8a();	// base class destructor body (stub 0x1000cb8a), tail called

	CAI_IPBaseDtor m_baseDtor3e0;
	COutputEvent m_Output450;	// 0x450: the constructor 0x102d99d0 builds the outputs (stub 0x10002ddd) before it stores the vtable
	COutputEvent m_Output468;	// 0x468
	COutputEvent m_Outputs480[8];	// 0x480 .. 0x540: built in a loop, destroyed last first
	CAI_InterestingPlace *m_pNext540;	// 0x540: the previous head of the global chain (head 0x10927194, count 0x10927198)
	const char *m_pszTypeName;	// 0x544
	int m_pType;	// 0x548: the place type record, found by name
	Vector m_vec54c;	// 0x54c: the debug box mins (sub_10142aa0 first vector)
	Vector m_vec558;	// 0x558: the debug box maxs (sub_10142aa0 second vector)
	int m_n564;	// 0x564: cleared by the constructor
	float m_fMinStayTime;	// 0x0568
	float m_fMaxStayTime;	// 0x056c
	bool m_bMatchOrientation;	// 0x0570
	bool m_bHolsterWeapon;	// 0x0571
	char m_pad0572[0x574 - 0x572];
	int m_nGroup;	// 0x574: 1..32 on load, then a single bit mask
	int m_nPriority;	// 0x578: clamped to 0..5
	char m_b57c;	// 0x57c: set to 1 by the constructor
	char m_b57d;	// 0x57d: cleared by the constructor
	char m_b57e;	// 0x57e: cleared by the constructor
	char m_pad057f;
	CAI_IPSlot *m_pSlots;	// 0x580
	int m_nSlots;	// 0x584
	int m_n588;	// 0x588
	int m_n58c;	// 0x58c: cleared by the constructor
	int m_n590;	// 0x590: cleared by the constructor
	CAI_IPSlot m_Slots594[4];	// 0x594 .. 0x604: the constructor clears the first dword of each in a loop
	int m_n604;	// 0x604: cleared by the constructor
	int m_n608;	// 0x608: cleared by the constructor (object size 0x60c)
public:
    virtual datamap_t * vfunc82();
};

inline CAI_IPBaseDtor::~CAI_IPBaseDtor()
{
	((CAI_InterestingPlace *)((char *)this - 0x3e0))->sub_1000cb8a();
}
