// CGibShooter: gib shooter entity. Declared standalone: only the members the matched functions touch.
#pragma once

class CGibShooter
{
public:
	char m_pad0000[0x17c];
	int m_nNextThink;	// 0x17c (raw bits of the float)

	void sub_100f4730(int a, int b, int c, int d);	// slot 173: SetThink(stub 0x1000913d), then the next think time = curtime
	void sub_1000913d();	// think function
	void sub_100ac4e0(void (CGibShooter::*pfn)(), int a, int b);	// SetThink
	CGibShooter *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void vfunc103();	// slot 103 (Spawn): slot 104, SetSolid(SOLID_NONE) scope trace, effects bit 6 (+0x19c), defaults for the variance (+0x474 = 0.001f) and the shoot velocity (+0x468 = 100.0f), copies +0x450 to +0x454, resolves +0x45c through engine slot 26 into +0x470, then CBaseEntity::sub_100b3b00()
	void sub_100b3b00();	// CBaseEntity::sub_100b3b00 (stub 0x1001514a), called directly
};
