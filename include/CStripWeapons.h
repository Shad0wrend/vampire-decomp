// CStripWeapons: declared by pcdecomp transplant for 0x10184480 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CStripWeapons
{
public:
	CStripWeapons *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc173(void *pActivator, void *pCaller, int useType, float value);	// slot 173 "CStripWeapons::Use": removes all items from the activating player (or the local player when the activator is no player and the rules are not deathmatch); `this` is not used
	char m_pad0000[0x450 - 0x0];
};
