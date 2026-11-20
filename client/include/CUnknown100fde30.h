// CUnknown100fde30: an object with two CUniformRandomStream members (+0x58, +0xe4) and two 0x24-byte records at +0x174 / +0x198; real name not yet known.
#pragma once

class __declspec(dllimport) CUniformRandomStream
{
public:
	CUniformRandomStream();
	char m_data[0x8c];
};

struct CUnknown100fde30RecHead	// the two leading floats of a record
{
	float m_a;	// -FLT_MAX
	float m_b;	// 10.0
	CUnknown100fde30RecHead() { m_b = 10.0f; }
};

struct CUnknown100fde30RecList	// the CUtlLinkedList<T, unsigned short> part of a record (memory, head / tail / free = invalid, counts 0)
{
	int m_c, m_d, m_e;
	unsigned short m_f, m_g, m_h;	// 0xffff
	short m_i, m_j;
	CUnknown100fde30RecList()
	{
		m_c = 0;
		m_d = 0;
		m_e = 0;
		m_f = 0xffff;
		m_g = 0xffff;
		m_h = 0xffff;
		m_i = m_j = 0;
	}
};

// The base classes give the game's store order: m_b first, the list, then m_k and m_a (0x100fde30).
struct CUnknown100fde30Rec : CUnknown100fde30RecHead, CUnknown100fde30RecList
{
	int m_k;

	CUnknown100fde30Rec()
	{
		m_k = 0;
		m_a = -3.402823466e+38f;
	}
};

struct CUnknown100fde30Node	// a node of the linked lists: 8 bytes of data, the previous / next indices
{
	char m_Data[8];
	unsigned short m_Previous;	// 0x08
	unsigned short m_Next;	// 0x0a
};

// The two records are CUtlLinkedList<T, unsigned short>s with 12 byte nodes behind two leading floats: the view of one.
struct CUnknown100fde30List
{
	float m_f00;	// 0x00
	float m_f04;	// 0x04
	CUnknown100fde30Node *m_pMemory;	// 0x08
	int m_allocationCount;	// 0x0c
	int m_growSize;	// 0x10 (-1: the memory is not owned)
	unsigned short m_Head;	// 0x14
	unsigned short m_Tail;	// 0x16
	unsigned short m_FirstFree;	// 0x18
	unsigned short m_ElementCount;	// 0x1a
	unsigned short m_NumAlloced;	// 0x1c

	static unsigned short InvalidIndex() { return (unsigned short)~0; }
	CUnknown100fde30Node &InternalElement(unsigned short i) { return m_pMemory[i]; }
};

struct CUnknown100fde30Owner	// the object the dword at +0x170 is released through (slot 5)
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(int handle);
};

class CUnknown100fde30
{
public:
	char m_pad0000[0x58];
	char m_stream1[0x8c];	// 0x58, a CUniformRandomStream
	char m_stream2[0x8c];	// 0xe4, a CUniformRandomStream
	int m_field170;
	CUnknown100fde30Rec m_rec1;	// 0x174
	CUnknown100fde30Rec m_rec2;	// 0x198

	CUnknown100fde30 *sub_100e2a10();	// constructor: builds both random streams and both records, clears +0x170; returns this
		// releases the object behind +0x170 (when set), then RemoveAll + Purge of both linked lists (the views of the records)
		// unless the game check (global 0x10566258, slot 10) says so: changes the pitch (100 + 120 * x^0.3) and volume (0.7 + 0.3 * x^0.3) of the sound handle at +0x170 over a random 1..2 s, x = flSpeed / 150 clamped to 1
	CUnknown100fde30List *List1() { return (CUnknown100fde30List *)&m_rec1; }
	CUnknown100fde30List *List2() { return (CUnknown100fde30List *)&m_rec2; }
};
