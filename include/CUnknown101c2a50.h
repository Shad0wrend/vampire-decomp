// CUnknown101c2a50: the damage-info-like object passed to TraceAttack (the dword at +0x44 is cleared by the Werewolf override); real name not yet known.
#pragma once

struct CUnknown101c2a50
{
	char m_pad0000[0x44];
	int m_n44;

	void sub_101c2a50(int value);	// stores value at +0x44
};
