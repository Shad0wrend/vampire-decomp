// CCameraAnimated: animated camera entity (CBaseAnimating based); only what decompiled code needs.
#pragma once

// 0x18-byte member objects of CCameraAnimated, released by sub_100cd2d0 (their destructor).
struct CCameraAnimatedItem
{
	char m_pad[0x18];

	void sub_100cd2d0();
};

class CCameraAnimated
{
public:
	char m_pad0000[0x730];
	CCameraAnimatedItem m_items730[8];
	char m_pad07f0[0x8];
	CCameraAnimatedItem m_item7f8;
	CCameraAnimatedItem m_item810;

	void sub_1008b3c0(); // base class destructor
	CCameraAnimated *vfunc5(unsigned char flags); // scalar deleting destructor
};
