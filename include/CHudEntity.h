// CHudEntity: declared by pcdecomp transplant for 0x1012ede0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CHudEntity
{
public:
	CHudEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc104();	// slot 104: the text at +0x454 (the default string when unset) through the global at 0x1070b22c (slot 13, flags 0), stored at +0x458

	char m_pad0004[0x454 - 4];
	char *m_p454;	// 0x454
	int m_n458;	// 0x458
};
