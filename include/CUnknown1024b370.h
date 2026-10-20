// CUnknown1024b370: an object with two plain memory blocks (pointer, allocation count, grow size) at +4 and +0x18;
// real name not yet known. The method below is its reset/purge function.
#pragma once

struct CUnknown1024b370Mem
{
	void *m_pMemory;
	int m_allocationCount;
	int m_growSize;	// -1: external memory
};

// A 16 bit symbol handle returned through a hidden pointer (the type has a copy constructor).
struct CUnknown1024b370Symbol
{
	unsigned short m_Id;

	CUnknown1024b370Symbol() {}
	CUnknown1024b370Symbol(const CUnknown1024b370Symbol &o) : m_Id(o.m_Id) {}
};

class CUnknown1024b370
{
public:
	char m_pad0000[4];
	CUnknown1024b370Mem m_mem0;	// 0x04
	char m_pad0010[8];
	CUnknown1024b370Mem m_mem1;	// 0x18
	int m_n24;	// 0x24
	void *m_p28;	// 0x28

	void sub_1024b880();	// base reset, called first
	void sub_1024b370();	// resets: base reset, clears +0x24, purges m_mem1, caches its pointer at +0x28, purges it again and m_mem0
	CUnknown1024b370Symbol sub_1024b5e0(const char *pString);	// string table lookup/insert: the 16 bit symbol of pString (0xffff for null)
};
