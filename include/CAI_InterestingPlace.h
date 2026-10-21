// CAI_InterestingPlace: declared by pcdecomp transplant for 0x102d9ae0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

struct CAI_IPPart	// 0x18 byte member object (constructor: stub 0x10002ddd)
{
	char m_pad[0x18];
	void sub_100cd2a0();	// constructor body (stub 0x10002ddd)
};

class CAI_InterestingPlace : public CBaseEntity
{
public:
	CAI_InterestingPlace *vfunc5(unsigned int flags);
	void sub_1000a25e();
	CAI_InterestingPlace *sub_102d99d0();	// the constructor: entity base constructor (stub 0x100090fc, argument 0), ten 0x18 byte parts at +0x450, the vtable, links the entity into the global list (head 0x10927194, count 0x10927198) and clears its fields
	void sub_100090fc(int a);	// the entity base constructor (stub 0x100090fc for 0x1009d980), called directly
};
