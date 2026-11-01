// CUnk101c4840: a 0x1c byte object that hooks a callback into a global list: two values (+0, +4) and an embedded
// list node (+8) that is linked into the global list by its constructor body. Real name not yet known.
#pragma once

class CUnknown101c4690	// the default constructor of the list node: next = prev = this, count 0
{
public:
	void *sub_101c4690();	// stub 0x10011ed7
};

class CUnk101c4710	// the list node: +0 next, +4 prev, +8 argument, +0xc callback, +0x10 context
{
public:
	void sub_101c4710(int pfnCallback, int pContext, int nArg);	// stub 0x10004bdd: links the node into the global list
	char m_pad0000[0x14];
};

class CUnk101c4840
{
public:
	int m_n0000;	// 0x00: first constructor argument
	int m_n0004;	// 0x04: second constructor argument
	CUnk101c4710 m_Node;	// 0x08: the node that prints "%s %d" through sub_101c4880 for this object

	CUnk101c4840 *sub_101c4840(int a, int b, int nArg);	// constructor (called by stub 0x...): default-constructs the node, stores a / b, links the node with the callback sub_101c4880 and this as its context
};
