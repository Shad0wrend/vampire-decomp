// CBaseNetworkable: the networkable part of an entity (vptr, IServerNetworkable vptr, edict at +8). Only what decompiled code needs.
// RTTI: IServerUnknown at +0 (5 slots), IServerNetworkable at +4 (15 slots); the constructor 0x100b7920 stores their
// vftables first, then its own (0x10451518 / 0x104514cc).
#pragma once

#include "engineserver.h"
#include "CBaseHandle.h"	// IHandleEntity

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

// The 8 byte member at +0x14 of CBaseNetworkable; its constructor 0x10146640 zeroes it (three bytes, two words).
struct CBaseNetworkableSub14
{
	unsigned char m_b0, m_b1, m_b2;
	unsigned char m_pad3;
	unsigned short m_w4, m_w6;
	CBaseNetworkableSub14() { sub_10146640(); }
	void *sub_10146640();
};

class IServerUnknown : public IHandleEntity	// RTTI .?AVIServerUnknown@@, 5 slots (0-1 IHandleEntity's)
{
public:
	virtual char * vfunc2() = 0;	// slot 2: GetCollideable
	virtual char * vfunc3() = 0;	// slot 3: GetNetworkable
	virtual void * vfunc4() = 0;	// slot 4: GetBaseEntity
};

class IServerNetworkable	// RTTI .?AVIServerNetworkable@@, 15 slots (slot 14, the destructor, is the only one with a body)
{
public:
	virtual class CGlobalEntityList_Ent *n0() = 0;	// GetEntityHandle
	virtual void n1() = 0; virtual void n2() = 0; virtual void n3() = 0; virtual void n4() = 0;
	virtual void n5() = 0; virtual void n6() = 0; virtual void n7() = 0; virtual void n8() = 0; virtual void n9() = 0;
	virtual void n10() = 0; virtual void n11() = 0; virtual void n12() = 0;
	virtual void * vfunc4() = 0;	// slot 13: GetBaseEntity, IServerUnknown's slot 4 too: CBaseNetworkable's one override fills both (the game's slot 13 is its adjustor thunk 0x100b7e30, sub ecx,4; jmp vfunc4)
	virtual ~IServerNetworkable() {}	// slot 14: the scalar deleting destructor 0x100b7970 (vftable store, operator delete when bit 0)
	void *vfunc14(char flags);	// 0x100b7970 under its provisional name (that block writes the destructor out)
};

class CBaseNetworkable : public IServerUnknown, public IServerNetworkable
{
public:
	CBaseNetworkable();	// 0x100b7920
	virtual int vfunc0(int a0);
	virtual unsigned int * vfunc1();
	virtual char * vfunc2();
	virtual char * vfunc3();
	virtual void * vfunc4();
	virtual int vfunc5();
	virtual void vfunc6(CBaseNetworkableBits_t *pBits);	// sets the bit of this edict's index
	// IServerNetworkable's slots (`this` = the +4 subobject). The bodies are matched under provisional names
	// (0x100b7a00 .. 0x100b7d80); the symbol map knows these names for them.
	virtual CGlobalEntityList_Ent *n0();	// 0x100b7a00: this - 4
	virtual void n1();	// 0x100b7780: its ServerClass
	virtual void n2();	// 0x100b7c40
	virtual void n3();	// 0x100b7c60
	virtual void n4();	// 0x100b7c80: the edict
	virtual void n5();	// 0x100b7a20
	virtual void n6();	// 0x100b7a40: Release, `delete this` through slot 14
	virtual void n7();	// 0x100b7a70
	virtual void n8();	// 0x100b7cc0
	virtual void n9();	// 0x100b7ca0
	virtual void n10();	// 0x100b7c00
	virtual void n11();	// 0x100b7c20
	virtual void n12();	// 0x100b7d80
	virtual ~CBaseNetworkable();	// IServerNetworkable's slot 14: body 0x100b7ad0 (CNetSub::sub_100b7ad0), scalar deleting destructor 0x100b7a90
	CBaseNetworkableEdict_t *m_pEdict;	// 0x8
	int m_n0c;	// 0xc: -1 after the constructor
	int m_n10;	// 0x10
	CBaseNetworkableSub14 m_Sub14;	// 0x14: the 8 byte object zeroed by 0x10146640 (three bytes, two words); that function is CUnknown10146640::sub_10146640, a struct the matched source defines itself

	int sub_100b7de0();	// the engine's index of the edict
	void sub_100b7da0();	// releases the edict
	void sub_100b7b40();
	void sub_100b7b70(CBaseNetworkableEdict_t *pEdict);	// Init-like: sub_100b7b40, then gEntList.AddNetworkableEntity(this, entindex())
};
