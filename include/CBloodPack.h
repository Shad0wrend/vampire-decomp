// CBloodPack: declared by pcdecomp transplant for 0x1040a0f0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CBloodPack
{
public:
	CBloodPack *vfunc5(unsigned int flags);
	void sub_10013a57();
	void sub_103fc190();	// decrements the count at +0x8d0 while the object from sub_10014fab() is set; at zero calls sub_10013601 on it and then sub_10007fe5(0x10015b68, 0, 0)
};
