// CNPC_Crow: crow NPC (base chain not modelled). Only what decompiled code needs.
#pragma once

struct datamap_t;

#include "Vector.h"

class CBaseEntity;
class CAI_Motor;

class CNPC_Crow
{
public:
	char pad0[0x204];
	unsigned int m_flags204;	// 0x204: bit 4 is handed to SetFlightMode by Spawn
	char pad208[0x210 - 0x208];
	int m_n210;	// 0x210: set to the frame time by Spawn
	char pad214[0x26c - 0x214];
	const char *m_name26c;	// 0x26c: the entity name
	char pad270[0x6f8 - 0x270];
	float m_fl6f8;	// 0x6f8: a random delay drawn by the event 0x22 handler (vfunc465)
	char pad6fc[0x1568 - 0x6fc];
	int m_n1568;	// 0x1568
	int m_n156c;	// 0x156c
	char pad1570[0x1574 - 0x1570];
	float m_f1574;	// 0x1574
	char pad1578[0x5cc0 - 0x1578];
	int m_n5cc0;	// 0x5cc0: schedule state
	char pad5cc4[0x5d44 - 0x5cc4];
	CAI_Motor *m_pMotor5d44;	// 0x5d44
	char pad5d48[0x5ddc - 0x5d48];
	CBaseEntity *m_pTarget5ddc;	// 0x5ddc
	char pad5de0[0x5f48 - 0x5de0];
	float m_f5f48;	// 0x5f48: next think time
	char pad5f4c[0x5f50 - 0x5f4c];
	int m_n5f50;	// 0x5f50: morale
	char m_b5f54;	// 0x5f54

	void sub_10357be0(float flSpeed);	// steers toward the target at +0x5ddc: velocity 170.0f * speed along the direction, yaw / pitch from it
	bool sub_10357e50(const Vector &dir, float flDist, Vector *pOut);	// stub 0x1000b334, called directly

	Vector vfunc192();	// slot 192: the origin (slot 220) raised by 6.0f, returned by value (hidden result pointer)
	int vfunc197(int a, int b, int c, int d);	// slot 197: calls slot 192 with a (as the result buffer) and returns a

	// Slot 546.
	int vfunc546(int arg);
	CNPC_Crow *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_1000c9cd();	// as in CPhysForce (transplant)
	void sub_103580d0(int mode);	// "CNPC_Crow::SetFlightMode": mode 1 flies (removes flag 1, adds 0x400), any other mode lands (removes 0x400); then the movement helpers, move type 4 and sub_100b3b00()
	void sub_1027d9b0(int a);	// stub 0x10011e14 (0x1027d9b0 forwards to sub_102eeba0 of the object at +0x5d34), called directly
	void sub_1026dc30(int a);	// stub 0x1001005f, called directly
	void sub_1026dc00(int a);	// stub 0x10012855, called directly
	int sub_102767d0();	// CAI_BaseNPC::vfunc124 (stub 0x1000e624), called directly
	int vfunc124();	// slot 124 "DrawDebugTextOverlays": the base's line offset; with the text overlay bit (bit 0 of +0x224) a "morale: %d" line (+0x5f50) and, with an enemy, an "enemy (dist): %s (%g)" line (+0x5f4c)
	int vfunc438();	// slot 438 "SelectSchedule": crow schedules by the conditions (morale +0x5f50, enemy distance +0x5f4c, next think time +0x5f48), else the base's
	int sub_1027d990();	// the state of the navigator object at +0x5d34 (stub 0x100023a1), called directly
	int sub_100b3700();	// CBaseEntity::GetFlags (stub 0x10008b84), called directly
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition (stub 0x10014df8), called directly
	void sub_10269b50(int condition);	// CAI_BaseNPC condition setter (stub 0x10015839), called directly
	int sub_1028a380();	// CAI_BaseNPC::vfunc438 (stub 0x10001d57), tail called directly
	void sub_103581b0(CBaseEntity *pTarget);	// takes off toward pTarget: with a target, flight mode 1, the NPC is lifted 1.0f (UTIL_SetOrigin), then its absolute velocity is the unit direction to the target's origin (slot 220) times 170.0f
	void sub_100b2770(const Vector &vec);	// CBaseEntity absolute velocity setter (stub 0x1000489a), called directly
	void vfunc481(CBaseEntity *pEnemy);	// slot 481 (plain member): stores the distance to pEnemy (slot 220 positions) at +0x5f4c and sets the condition 0x78 below 256.0f and 0x77 below 512.0f (each after asking the dev flag object at 0x10924a6c), then CAI_BaseNPC::vfunc481
	void sub_10269a20(int condition);	// CAI_BaseNPC condition setter (stub 0x100041b0), called directly
	void sub_10270b20(CBaseEntity *pEnemy);	// CAI_BaseNPC::vfunc481 (stub 0x10002a95), called directly
	void vfunc465(int nEvent);	// slot 465: event 0x22 draws m_fl6f8 = RandomFloat(0, 0.75f) from the random stream at 0x1070b244
	bool vfunc525(int a);	// slot 525: when the navigator state (sub_1027d990) is 2, sub_1000b61d(a) and true; else false
	void sub_1000b61d(int a);	// the member called by vfunc525 (stub 0x1000b61d)
	void vfunc103();	// slot 103 "Spawn": CAI_BaseNPC::vfunc103, model models/crow.mdl, solid 2, flight setup and a random think delay / morale
	void sub_10273200();	// CAI_BaseNPC::vfunc103 (stub 0x100026da), called directly
	void sub_10273070(int a);	// CAI_BaseNPC member (stub 0x1000dc29), called directly
	void sub_1009f380(const Vector *pOffset);	// CBaseEntity view offset setter (stub 0x10015bfe), called directly
	void sub_10327960(int a);	// CBaseCombatCharacter member (stub 0x1000ce82), called directly
	void sub_100aaa40(int a);	// CBaseEntity member (stub 0x10013c00), called directly
	void sub_1026dc60();	// stub 0x1000d990, called directly
	void sub_10332aa0(int classId, int disposition, int priority);	// "CBaseCombatCharacter::AddClassRelationship" (stub 0x10013cf5), called directly
public:
	datamap_t * vfunc82();
	int vfunc138();
	bool vfunc394();
	void vfunc434();
	int vfunc451();
	bool vfunc452();
	int vfunc473();
	int vfunc488();
	int vfunc489();
	int vfunc490();
	int vfunc491();
	int vfunc511();
	float vfunc516();
	int vfunc580();
};
