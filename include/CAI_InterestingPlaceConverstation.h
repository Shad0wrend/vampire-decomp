// CAI_InterestingPlaceConverstation: point entity; only the members recovered so far (layout padded to the real offsets).
#pragma once

struct datamap_t;
#include "CPointEntity.h"
#include "COutputEvent.h"

// 0x18-byte member objects at +0x46c (six of them), released by sub_100cd2d0.
struct CAI_IPItem : COutputEvent
{
	void sub_100cd2d0();
};

// Indexed view of the six items at +0x46c; it sits in the padding at +0x45c, 0x10 bytes before the first item.
struct CAI_IPItemsView
{
	char m_c;

	CAI_IPItem &operator[](int i) { return *(CAI_IPItem *)((char *)this + 0x10 + i * 0x18); }
};

// CUtlVector of 4-byte elements at +0x518: memory (pointer, allocation count, grow size), size, element pointer.
struct CAI_IPVec
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;

	CAI_IPVec() : m_pMemory(0), m_allocationCount(0), m_growSize(0), m_size(0), m_pElements(0) {}
};

class CAI_InterestingPlaceConverstation : public CPointEntity
{
public:
	CAI_InterestingPlaceConverstation();	// 0x102dbb00

#ifndef CPOINTENTITY_BASED
	char pad4[0x450 - 4];
#endif
	const char *m_pszTarget450;	// 0x450: the targetname of the interesting places to link ("" when null); Activate loops FindEntityByName over it
	const char *m_pszSound1;	// 0x454
	const char *m_pszSound2;	// 0x458
	CAI_IPItemsView m_items46c;	// 0x45c, indexes the items below
	char pad45d[0x46c - 0x45d];
	CAI_IPItem m_item46c, m_item484, m_item49c, m_item4b4, m_item4cc, m_item4e4;	// 0x46c, six items
	int m_n4fc;	// 0x4fc: cleared by Activate (vfunc113)
	char pad500[0x515 - 0x500];
	char m_b515;
	char m_b516;
	char pad517;
	CAI_IPVec m_vec518;	// 0x518
	char pad52c[0x608 - 0x52c];
	int m_unk608;

	void sub_102db740(int value);
	void vfunc113();	// slot 113 "Activate" (plain member): m_n4fc = 0, then for every entity named m_pszTarget450 (g_106eb5d8.sub_100f7770 loop) that dynamic_casts to CAI_InterestingPlace with m_nSlots (+0x584) == 1: its handle (slot 1) goes on the vector m_vec518 and sub_102db740(handle); others get a DevWarning; then the byte m_items46c.m_c (+0x45c) ? sub_102dc3e0() : sub_100ac4e0(0, 0, 0)
	void sub_102dc3e0();	// stub 0x10006604, tail called by vfunc113
	void vfunc104();	// Precache: precaches the two sound names, warning about an invalid first one
	const char *sub_1000b5cd();	// the entity's name (stub of 0x100ab4f0)
	void vfunc103();	// slot 103 override: the game's 0x102dbc80
	int vfunc126(int a);	// slot 126 override: the game's 0x102dbd50
	int vfunc127(int a);	// slot 127 override: the game's 0x102dbda0
	CPointEntity *vfunc5(unsigned int flags);	// slot 5 (CPointEntity's override; VC6 has no covariant returns), scalar deleting destructor: tears down the vector at +0x518 and the six items at +0x46c, the base destructor body (sub_1000cb8a), and frees the object when bit 0 of flags is set
	void sub_1000cb8a();	// base class destructor body (stub 0x1000cb8a)
public:
#ifndef CPOINTENTITY_BASED
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
#endif
	virtual datamap_t * vfunc82();
};
