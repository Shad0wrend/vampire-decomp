// View of CAI_BaseNPC for CAI_BaseNPC::vfunc144 (0x10265ad0, slot 144, ret 4). CAI_BaseNPC itself declares no data
// members, so the function's fields are given here as a derived view (define/cast the function on it).
// The slot is still `vfunc144(int a)` in CAI_BaseNPC.h: matched callers (0x102c0f70, 0x1035c010) pass the argument
// through as an int; the argument is really a pointer to a damage record (CAI_NPCDamageRecord below).
#pragma once

#include "CAI_BaseNPC.h"
#include "Vector.h"

class CBaseEntity;
class IPhysicsObject;

// The 0x4b-byte damage record (CTakeDamageInfo layout with the two vectors typed): +0x00 four dwords,
// +0x10 / +0x1c Vector (copied with the Vector assignment, call 0x1000da76), +0x28.. dwords up to +0x44,
// +0x48 / +0x49 / +0x4a bytes.
struct CAI_NPCDamageRecord
{
	int m_n00, m_n04, m_n08, m_n0c;
	Vector m_vecForce;	// 0x10
	Vector m_vecPosition;	// 0x1c
	int m_n28;
	CBaseEntity *m_pInflictor;	// 0x2c: handed to sub_10265a90; its slot 1 (GetRefEHandle) gives the EHANDLE kept at +0x5b7c
	int m_n30, m_n34, m_n38, m_n3c, m_n40, m_n44;
	char m_b48, m_b49, m_b4a;
};

class CAI_BaseNPCUnit144 : public CAI_BaseNPC
{
public:
	char m_pad0004[0x36c - 4];
	IPhysicsObject *m_pPhysObj36c;		// 0x36c (CBaseEntity)
	char m_pad0370[0x1538 - 0x370];
	EHANDLE m_h1538;			// 0x1538 (valid when +0x153c != -1), else slot 488 runs
	int m_n153c;
	char m_pad1540[0x1a48 - 0x1540];
	CAI_NPCDamageRecord m_LastDamage;	// 0x1a48 .. 0x1a92: copy of the damage record taken while a state-4 scripted NPC is hit
	char m_pad1a93[0x1b3c - 0x1a93];
	const char *m_pszFile1b3c;		// 0x1b3c: "E:\Vampire\main\dlls\AI_BaseNPC.cpp" stamp (lines 0x217, 0x241)
	int m_nLine1b40;
	char m_pad1b44[0x5b7c - 0x1b44];
	int m_nAttacker5b7c;			// 0x5b7c: the EHANDLE value of the record's +0x2c entity, -1 without one
	char m_b5b80;				// 0x5b80
	char m_pad5b81[0x5c38 - 0x5b81];
	void *m_pSchedule5c38;			// 0x5c38: compared with sub_102cc1f0(0x3a)
	char m_pad5c3c[0x5cc0 - 0x5c3c];
	int m_nState5cc0;			// 0x5cc0: 4 = scripted
	int m_nIdealState5cc4;			// 0x5cc4: set to 7 with the 0x1b3c stamp
	char m_pad5cc8[0x5d74 - 0x5cc8];
	EHANDLE m_hScript5d74;			// 0x5d74: the scripted sequence entity (EHandleEntityList::LookupEntity sub_100290c0)
	char m_pad5d78[0x5da4 - 0x5d78];
	void *m_pSquad5da4;			// 0x5da4: left with sub_103158f0(this)
};
