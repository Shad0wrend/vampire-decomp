// C_BatSwarm: hand-written minimal header (members read by matched functions only)
#pragma once
#include "C_BaseAnimating.h"
#include "CUtlLinkedList776.h"

class C_BatSwarm : public C_BaseAnimating
{
public:
	C_BatSwarm() {}
	void sub_1002aa30();
	virtual void vfunc38(int a, int b);
	int sub_1002a8e0(int flags, int a1);
	char m_pad0014[0x790 - 0x14];
	CUtlLinkedList776 m_list;	// 0x790
};
