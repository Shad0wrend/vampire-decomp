// CHunterChar: the character object (at +0xa8 of an entity) the hunter grabs; class not known yet.
#pragma once

class CHunterChar
{
public:
	virtual void vfunc0();
	virtual unsigned int *vfunc1();
	void sub_1017f830();	// one hold less: when the count at +0x1d14 reaches 0 calls sub_1017fa70, then logs "OnHunterPursuitStart" with the count when the convar g_107258dc is on

	char m_pad0004[0x1d14 - 4];
	int m_nHolds1d14;	// 0x1d14
};
