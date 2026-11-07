// CClientPosSync: owner of the per-client position records the function at 0x10188de0 walks
// (class name and vtable not known; no caller found). Two parallel arrays of 32 records, one slot
// per client (index = IndexOfEdict(edict) - 1): the wanted state at +0x20 and the last state sent at +0x7a0.
#pragma once
#include "Vector.h"

struct CClientPosRecord	// 0x3c bytes
{
	char m_bActive;		// +0x00: record in use
	char m_pad01[7];
	unsigned int m_nFlags;	// +0x08 (wanted array only): 0x100 origin, 0x200 angles, 0x400 collision bounds changed
	Vector m_vecOrigin;	// +0x0c
	Vector m_vecAngles;	// +0x18
	Vector m_vecMins;	// +0x24
	Vector m_vecMaxs;	// +0x30
};

class CClientPosSync
{
public:
	char m_pad0000[0x18];
	unsigned int m_nClientMask;	// 0x18: bit (client index - 1) set for clients that take part
	bool m_bEnabled;	// 0x1c
	char m_pad001d[3];
	CClientPosRecord m_Wanted[32];	// 0x20
	CClientPosRecord m_Last[32];	// 0x7a0

	void sub_10188de0(int unused);	// 0x10188de0 (ret 4, the argument is not read): for clients 1..maxClients with both records active, compares the entity's collision bounds (+0x270 slots 1/2), angles (slot 221) and origin (slot 220) with the last sent ones and applies the wanted ones (sub_100adf10, slot 64, sub_101cf5c0(ent, pos, bTraced) after one or two hull traces, mask 0x201400b, CTraceFilterSimple(ent, ent->+0x368))
};
