// CUnknown1024b370: an object with two plain memory blocks (pointer, allocation count, grow size) at +4 and +0x18;
// real name not yet known (a CUtlSymbolTable-like linked list of 12 byte nodes plus a list of malloc'd strings).
// The method below is its reset/purge function.
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
	CUnknown1024b370Symbol(unsigned short id) : m_Id(id) {}
	CUnknown1024b370Symbol(const CUnknown1024b370Symbol &o) : m_Id(o.m_Id) {}
	bool IsValid() const { return m_Id != 0xffff; }
};

#include "CUnknown1024b2d0.h"

class CUnknown1024b370
{
public:
	CUnknown1024b370(int arg, int count, char flag) { ((CUnknown1024b2d0 *)this)->sub_1013d2b0(arg, count, flag); }
	char m_pad0000[4];
	CUnknown1024b370Mem m_mem0;	// 0x04
	unsigned short m_s10;	// 0x10: list head (0xffff when empty)
	unsigned short m_s12;	// 0x12
	unsigned short m_s14;	// 0x14: first free node
	unsigned short m_s16;	// 0x16: node count
	CUnknown1024b370Mem m_mem1;	// 0x18
	int m_n24;	// 0x24
	void *m_p28;	// 0x28

	void sub_1013d7c0();	// DevMsg("%4d - %s\n") for every symbol: its index and its string
	int sub_1013d820();	// the node count (m_s12, stub 0x10004aca)
	void sub_1013d730();	// "RemoveAll" of the node list: re-links every node into the free list (sub_1024bf80 per node, highest first), resets the heads, then frees every string of m_mem1 and clears +0x24
	void sub_1013d330();	// resets: base reset, clears +0x24, purges m_mem1, caches its pointer at +0x28, purges it again and m_mem0
	CUnknown1024b370Symbol sub_1013d3a0(const char *pString);	// Find: the symbol of pString or 0xffff (CUtlSymbolTable::Find)
	CUnknown1024b370Symbol sub_1013d520(const char *pString);	// string table lookup/insert: the 16 bit symbol of pString (0xffff for null)
		// per node worker called by the reset (stub 0x100075cc)
};
