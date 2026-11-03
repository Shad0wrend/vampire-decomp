// CAI_TestHull: declared by pcdecomp transplant for 0x102d77d0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CAI_TestHull
{
public:
	CAI_TestHull *vfunc5(unsigned int flags);
	void sub_100033a0();
	void vfunc103();	// Spawn: picks the first hull (of 0x16) the allowed-hull mask accepts, makes the entity a bbox, solid flags |= 4, no move type, health 50, flag 0x40000, then slot 66
	void vfunc521(int a, int b, int c);	// slot 521: calls sub_1001484e with the three arguments and the constant 1024.0f three times
	void sub_1001484e(int a, int b, int c, float d, float e, float f);	// stub 0x1001484e, called directly (takes six stack arguments)
	int sub_1000d8b9();	// stub 0x1000d8b9: the mask of allowed hulls
	void sub_1000dc29(int a);	// stub 0x1000dc29
public:
	char vfunc117();
	float vfunc522();
	float vfunc523();
	char m_pad0000[0x5f48 - 0x0];
};
