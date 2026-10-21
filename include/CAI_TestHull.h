// CAI_TestHull: declared by pcdecomp transplant for 0x102d77d0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CAI_TestHull
{
public:
	CAI_TestHull *vfunc5(unsigned int flags);
	void sub_100033a0();
	void vfunc103();	// Spawn: picks the first hull (of 0x16) the allowed-hull mask accepts, makes the entity a bbox, solid flags |= 4, no move type, health 50, flag 0x40000, then slot 66
	int sub_1000d8b9();	// stub 0x1000d8b9: the mask of allowed hulls
	void sub_1000dc29(int a);	// stub 0x1000dc29
};
