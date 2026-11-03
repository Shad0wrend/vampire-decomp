// CUnk101e9570: a trait-effect-group-like record whose constructor is 0x101e9570 (base at +0x1c, the
// constructor argument stored at +0, +0x24 cleared). Only what the guarded static default entry needs.
#pragma once

class CUnk101e9570
{
public:
	CUnk101e9570(int n);	// constructor 0x101e9570: base at +0x1c, the argument at +0, +0x24 = 0
	virtual CUnk101e9570 *vfunc0(unsigned int flags);	// scalar deleting destructor (so a function-local static registers atexit)
	int m_n0000;	// 0x00: the constructor argument
	char m_pad0004[0x24];
};
