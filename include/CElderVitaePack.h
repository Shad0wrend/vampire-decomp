// CElderVitaePack: declared by pcdecomp transplant for 0x1040a150 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CElderVitaePack
{
public:
	CElderVitaePack *vfunc5(unsigned int flags);
	void sub_10013a57();
	char vfunc315();	// slot 315 (plain member), the pack is used up: unless the character (CAI_BaseNPCTroika::sub_10252240) is a normal one whose stat 0xf is not above zero, tells it (sub_10338b00) and hands the pack on (sub_103fca20); then sub_1033c340(0xfa) on the character; always returns false
	void sub_103fca20();	// stub 0x1000fa5b, run for the pack after the character was told
public:
	int vfunc80();
	int vfunc81();
	char m_pad0000[0x914 - 0x0];
};
