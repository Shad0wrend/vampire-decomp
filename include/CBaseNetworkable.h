// CBaseNetworkable: the networkable part of an entity (vptr, IServerNetworkable vptr, edict at +8). Only what decompiled code needs.
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

class CBaseNetworkable
{
public:
	virtual void vfunc0();
	virtual char * vfunc1();
	virtual int vfunc2();
	virtual void vfunc3();
	virtual int vfunc4();
	virtual int vfunc5();
	virtual void vfunc6(CBaseNetworkableBits_t *pBits);	// sets the bit of this edict's index
	int m_pad04;
	CBaseNetworkableEdict_t *m_pEdict;	// 0x8

	int sub_100b7de0();	// the engine's index of the edict
	void sub_100b7da0();	// releases the edict
};
