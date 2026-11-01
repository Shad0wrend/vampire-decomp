// CEnvFireSensor: declared by pcdecomp transplant for 0x1010c250 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

class CEnvFireSensor
{
public:
	CEnvFireSensor *vfunc5(unsigned int flags);
	void vfunc134();	// think: while enabled (byte at +0x450) re-arms the think (a quarter of the time at +0x45c, 0.1 at the least) and sums the heat of the fires within the radius at +0x454; below the level at +0x458 resets the accumulator (+0x460) and ends a started sensor (OnHeatLevelEnd, +0x47c); else accumulates the interval and, once it reaches the time, starts it (OnHeatLevelStart, +0x464)
	void sub_1010c150();	// provisional: first-call init, sets the enabled byte at +0x450 and the time at +0x17c

	char m_pad0000[0x17c];
	int m_field17c;
	char m_pad180[0x450 - 0x180];
	unsigned char m_bEnabled450;
	unsigned char m_b451;
	char m_pad452[0x460 - 0x452];
	int m_field460;
public:
	datamap_t * vfunc82();
};
