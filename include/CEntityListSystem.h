// CEntityListSystem: declared by pcdecomp transplant for 0x100f91c0 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

struct CEntityListSystem_Ent
{
	char m_pad0000[0x26b];
	unsigned char m_bFlags;	// 0x26b
	void sub_100085a8();
};

class CEntityListSystem
{
public:
	char m_pad0000[4];
	CEntityListSystem_Ent **m_pEntities;	// 0x04: pending entity list
	char m_pad0008[8];
	int m_nEntities;	// 0x10

	CEntityListSystem *vfunc8(unsigned int flags);
	void sub_1000cfbd();
	void sub_100f8ec0();	// takes a copy of the pending list, empties it and calls sub_100085a8 on each entity whose flag bit 0 is set
	void vfunc5();	// slot 5: hands the two global pending lists (0x107036b0, 0x10703650) to the global entity list, then empties and frees both vectors
};
