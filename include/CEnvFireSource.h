// CEnvFireSource: declared by pcdecomp transplant for 0x1010c220 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CFire;

class CEnvFireSource
{
public:
	CEnvFireSource *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc103();	// stub 0x10003e9f when the flag byte at +0x204 bit 0 is set, else stub 0x10009a02
	void vfunc134();	// think: while enabled (byte at +0x450) re-arms the think (curtime + 0.25) and warms every fire found around the origin (slot 217 of this with the radius at +0x454) by 0.25 * the damage at +0x458

	char m_pad0000[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x204 - 0x180];
	unsigned char m_flags204;
	char m_pad0205[0x450 - 0x205];
	char m_bEnabled;	// 0x450
	char m_pad0451[3];
	int m_nRadius;	// 0x454: the argument handed to slot 217 when looking for fires
	float m_flDamage;	// 0x458
};
