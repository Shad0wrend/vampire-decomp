// CUnk101f0b50: a trait-effect-group-like record whose constructor is 0x101f0b50 (the argument stored at +0).
// Only what the guarded static default entry needs.
#pragma once

class CUnk101f0b50
{
public:
	CUnk101f0b50(int n);	// constructor 0x101f0b50
	virtual CUnk101f0b50 *vfunc0(unsigned int flags);	// scalar deleting destructor (so a function-local static registers atexit)
	int m_n0000;	// 0x00: the constructor argument
	char m_pad0004[0x24];
};
