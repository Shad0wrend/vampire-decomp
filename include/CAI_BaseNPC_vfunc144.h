// View of CAI_BaseNPC for CAI_BaseNPC::vfunc144 (0x10265ad0, slot 144, ret 4). CAI_BaseNPC itself declares no data
// members, so the function's fields are given here as a derived view (cast `this`, or define the function on it).
// The slot is still `vfunc144(int a)` in CAI_BaseNPC.h: matched callers (0x102c0f70, 0x1035c010) pass the argument
// through as an int; the argument is really a pointer to a damage record (CTakeDamageInfo-like, see below).
#pragma once

#include "CAI_BaseNPC.h"
#include "ehandle.h"
#include "Vector.h"

// The 0x4b-byte damage record (CTakeDamageInfo layout with the two vectors typed): +0x00 four dwords,
// +0x10 / +0x1c Vector (copied with the Vector assignment, call 0x1000da76), +0x28.. dwords up to +0x44,
// +0x48 / +0x49 / +0x4a bytes. +0x2c is the entity pointer (inflictor) whose slot 1 gives the EHANDLE.
struct CAI_NPCDamageRecord
{
	int m_n00, m_n04, m_n08, m_n0c;
	Vector m_vecForce;	// 0x10
	Vector m_vecPosition;	// 0x1c
	int m_n28;
	CBaseEntity *m_pInflictor;	// 0x2c: CAI_BaseNPCUnit144::sub_10265a90(m_pInflictor) is called with it; slot 1 -> EHANDLE (+0x5b7c)
	int m_n30, m_n34, m_n38, m_n3c, m_n40, m_n44;
	char m_b48, m_b49, m_b4a;
};

class CAI_BaseNPCUnit144 : public CAI_BaseNPC
{
public:
	char m_pad0004[0x153c - 4 - 0x1534];		// placeholder keeps the offsets below absolute; see the real layout notes
};
