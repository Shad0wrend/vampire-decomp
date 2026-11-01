// CAI_DynamicLink: declared by pcdecomp transplant for 0x102cceb0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CAI_DynamicLink
{
public:
	CAI_DynamicLink *vfunc5(unsigned int flags);
	void sub_10009101();
	void sub_102ccee0();	// destructor body: vtable, unlinks from the global list (head at 0x1092541c), then the base destructor
	void sub_102ccce0();	// "CAI_DynamicLink::SetLinkState": finds the link between the two nodes (ids at +0x454 / +0x458) in the AI network and sets or clears its off bit (0x1000) from the state at +0x45c; complains when a node id is invalid or the link does not exist
	void sub_102ccc80(int a);	// stub-less member: sets the state at +0x45c to 1 and runs sub_102ccce0 the first time (the argument is unused)
	bool sub_102ccc10();	// whether the link's source node (id +0x454; a bad id bumps the global 0x106c994c) has a connection to the destination node id (+0x458)
	CAI_DynamicLink *sub_102cce60();	// the constructor body: the constraint anchor base, the vtable, both node ids -1, the state 0, then the link is pushed on the global list (head at 0x1092541c)

	char m_pad0000[0x450];
	CAI_DynamicLink *m_pNext;	// 0x450: next link of the global list (head at 0x1092541c)
	int m_nSrcID;	// 0x454
	int m_nDestID;	// 0x458
	int m_nLinkState;	// 0x45c
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
