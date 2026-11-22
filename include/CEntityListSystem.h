// CEntityListSystem (RTTI .?AVCEntityListSystem@@): base CAutoGameSystem (GameSystemRoot.h); the game's object is
// 0xc bytes (CEntityTouchManager 0x107036b0 follows).
#pragma once

#include "GameSystemRoot.h"

struct CEntityListSystem_Ent
{
	char m_pad0000[0x26b];
	unsigned char m_bFlags;	// 0x26b
	void sub_100085a8();
};

class CEntityListSystem : public CAutoGameSystem
{
public:
	char m_pad0008[4];	// 0x08

	CEntityListSystem *vfunc8(unsigned int flags);	// slot 8 written out: the scalar deleting destructor
	void sub_1000cfbd();
	void vfunc5();	// slot 5: hands the two global pending lists (0x107036b0, 0x10703650) to the global entity list, then empties and frees both vectors
	void vfunc2();	// slot 2: sub_100f8960 on the global object at 0x10703634, then like slot 5 but through the (deduplicating) sub_100f6d80
	void vfunc4();	// slot 4 (0x100f9080): a tail call of sub_1000fd6c on the global 0x10703634
	void vfunc7();	// slot 7 (0x100f9160): a tail call of sub_10015b1d on the pending list 0x107036b0
};
