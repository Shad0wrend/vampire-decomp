// CUnknown1020a240: object owning a growable list of 0x90 byte screen message records at +0x450
// (memory, allocation count, grow size, size, element pointer); real name not yet known.
// Called by CFire::vfunc103 with the object returned by sub_1020a0a0.
#pragma once

struct CUnknown1020a240Msg	// 0x90 bytes
{
	char m_text[0x80];
	int m_a;
	int m_b;
	int m_c;
	int m_d;
};

class CUnknown1020a240
{
public:
	char pad0[0x450];
	CUnknown1020a240Msg *m_pMemory;	// 0x450
	int m_allocationCount;	// 0x454
	int m_growSize;	// 0x458
	int m_size;	// 0x45c
	CUnknown1020a240Msg *m_pElements;	// 0x460

	void sub_1020a240(const char *text, int a, int b, int c, int d);	// appends a message record (text truncated to 0x80 chars)
};
