// CUnknown10056a00: class with a two-state flag at +0x453 and two state-switch methods (0x10056a00 / 0x10056a30);
// real name not yet known.
#pragma once

class CUnknown10056a00
{
public:
	void sub_10056a00();	// state on: remembers the current value, flag at +0x453 set
	void sub_10056a30();	// state off
	void sub_10056a60();	// toggles between the two

	char m_pad0000[0x450];
	char m_cState450;
	char m_cState451;
	char m_pad0452;
	char m_bFlag453;
};
