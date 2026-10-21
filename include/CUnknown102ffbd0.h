// CUnknown102ffbd0: an AI helper object (outer NPC at +4) that builds a 0x38 byte step object for an entry of the
// NPC's step list; real name not yet known.
#pragma once

#include "Vector.h"

struct CUnknown102ffbd0Item	// an entry of the step list
{
	char m_pad0000[0x6c];
	int m_n6c;	// 0x6c
	int m_nType;	// 0x70: 3 -> mode 2, 4 -> mode 3, else 0
	Vector *sub_102fb0d0(Vector *pOut, int a);	// stub 0x1000d99a: writes a position into pOut and returns it
};

struct CUnknown102ffbd0ItemList	// a CUtlVector-like list: count, then the element pointers
{
	int m_nCount;	// 0x00
	CUnknown102ffbd0Item **m_ppItems;	// 0x04
};

struct CUnknown102ffbd0Steps	// the object at +0x5d34 of the outer NPC
{
	char m_pad0000[0x2c];
	CUnknown102ffbd0ItemList *m_pItems;	// 0x2c
};

struct CUnknown102ffbd0Outer
{
	char m_pad0000[0x5d34];
	CUnknown102ffbd0Steps *m_pSteps;	// 0x5d34
};

struct CUnknown102ffbd0Obj	// the 0x38 byte step object
{
	char m_pad0000[0x38];
	CUnknown102ffbd0Obj *sub_10319df0(Vector *pPos, int a, int nMode, int b, int c);	// constructor (stub 0x100021da): returns this
};

struct CUnknown102ffbd0Pool	// the fixed size allocator at 0x10936c84
{
	void *sub_1013dc60(int nBytes);	// stub 0x1000bbd6: a block or null
};

class CUnknown102ffbd0
{
public:
	void *m_pVtbl;	// placeholder for the base's vtable pointer
	CUnknown102ffbd0Outer *m_pOuter;	// 0x04

	CUnknown102ffbd0Obj *sub_102ffbd0(int a, int index);	// creates the step object of the list entry `index` (mode from its type) for the value a; null when no block is left
};
