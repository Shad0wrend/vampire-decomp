// CBlueBloodPack: declared by pcdecomp transplant for 0x1040a120 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CBlueBloodPack
{
public:
	CBlueBloodPack *vfunc5(unsigned int flags);
	void sub_10013a57();
	char vfunc315();	// slot 315 (plain member), the pack is used up: feeds the character (sub_10252240) blood for as many units as the owner info block (sub_102517b0, count at +0x4fee0) holds, unless it is dead and has no blood stat; always returns false
	void sub_103fc5f0();	// stub 0x1000ef57, run after the feeding
public:
	int vfunc80();
	int vfunc81();
	char m_pad0000[0x914 - 0x0];
};
