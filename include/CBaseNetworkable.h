// CBaseNetworkable: the networkable part of an entity (vptr, IServerNetworkable vptr, edict at +8). Only what decompiled code needs.
// RTTI: IServerUnknown at +0 (5 slots), IServerNetworkable at +4 (15 slots); the constructor 0x100b7920 stores their
// vftables first, then its own (0x10451518 / 0x104514cc).
#pragma once

#include "engineserver.h"

// The bit vector handed to vfunc6: its bytes at +0x10.
struct CBaseNetworkableBits_t
{
	char m_pad0000[0x10];
	unsigned char *m_pBits;	// 0x10
};

struct CBaseNetworkableEdict_t
{
	char m_pad0000[0x40];
	int m_n40;	// 0x40
	unsigned char m_b44;	// 0x44
};

class IServerUnknown	// RTTI .?AVIServerUnknown@@ (its IHandleEntity base is not modelled: the game's constructor stores no IHandleEntity vptr)
{
public:
	virtual void vfunc0() = 0;
	virtual char * vfunc1() = 0;
	virtual int vfunc2() = 0;
	virtual void vfunc3() = 0;
	virtual int vfunc4() = 0;
};

class IServerNetworkable	// RTTI .?AVIServerNetworkable@@, 15 slots (slot 14 is the only one with a body)
{
public:
	virtual void n0() = 0; virtual void n1() = 0; virtual void n2() = 0; virtual void n3() = 0; virtual void n4() = 0;
	virtual void n5() = 0; virtual void n6() = 0; virtual void n7() = 0; virtual void n8() = 0; virtual void n9() = 0;
	virtual void n10() = 0; virtual void n11() = 0; virtual void n12() = 0; virtual void n13() = 0; virtual void n14() = 0;
	void *vfunc14(char flags);	// the scalar deleting destructor (vftable store, operator delete when bit 0, returns this)
};

class CBaseNetworkable : public IServerUnknown, public IServerNetworkable
{
public:
	CBaseNetworkable();	// 0x100b7920
	virtual void vfunc0();
	virtual char * vfunc1();
	virtual int vfunc2();
	virtual void vfunc3();
	virtual int vfunc4();
	virtual int vfunc5();
	virtual void vfunc6(CBaseNetworkableBits_t *pBits);	// sets the bit of this edict's index
	CBaseNetworkableEdict_t *m_pEdict;	// 0x8
	int m_n0c;	// 0xc: -1 after the constructor
	int m_n10;	// 0x10
	char m_Sub14[8];	// 0x14: the 8 byte object zeroed by 0x10146640 (three bytes, two words); that function is CUnknown10146640::sub_10146640, a struct the matched source defines itself

	int sub_100b7de0();	// the engine's index of the edict
	void sub_100b7da0();	// releases the edict
};
