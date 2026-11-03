// CNPC_VAndreiBlood (RTTI .?AVCNPC_VAndreiBlood@@): base CNPC_VHuman (CNPC_VHuman.h).
#pragma once

#include "CNPC_VHuman.h"
#include "COutputEvent.h"

class CNPC_VAndreiBlood : public CNPC_VHuman
{
public:
	virtual void vfunc103();	// slot 103 "CNPC_VAndreiBlood::Spawn": scope trace (no entity name), sub_1026dc00(0x200000), the CNPC_VVampire version (sub_103c4ef0), clears the fields +0x66b8 .. +0x66ce, stamps curtime at +0x66d0, sets the byte at +0x66d4, clears +0x66d8, then sub_1035e950()
	virtual void vfunc104();
	virtual void vfunc113();	// slot 113 "CNPC_VAndreiBlood::Activate": scope trace (no entity name), the Troika version, then the state at +0x5cc0 / +0x5cc4 = 2, the source file / line markers at +0x1b30 / +0x1b34 and sub_102ae750(0x6b, 0)
	int vfunc390(void *pInfo);	// slot 390 "CNPC_VAndreiBlood::OnTakeDamage_Alive": scope trace (no entity name), copies the damage info (0x4c bytes); the damage is the VDmg record's GetDmg or the float at +0x30; with the combat byte at +0x66cc counts the hit (+0x66d8) and, when stat 0xf + damage reaches stat 0x11 of the character's default list, sets the byte at +0x66cd; then (unless that test failed) zeroes the copy's damage and its VDmg record's fields +4 / +0xc; CNPC_VHuman::vfunc390 on the copy
	void vfunc444(const void *pTask);	// slot 444 "CNPC_VAndreiBlood::RunTask": scope trace (no entity name), task 0x150 faces the player (sub_1035e5f0); 0x151 clears the take-damage mode once the float at +0x6f8 reaches 0.5f and completes with the schedule; 0x152 ends the combat start (slot 67, mode 2, counters cleared) before the same; 0x154 marks +0x66d4 when done; 0x156 completes once marked, out of hits (+0x66d8 >= +0x66dc) or 5 seconds after the stamp at +0x66d0; else CNPC_VVampireBoss::vfunc444
	void sub_103c5f40(const void *pTask);	// CNPC_VVampireBoss::vfunc444 (stub 0x10004edf), called directly
	void vfunc431();	// slot 431 "CNPC_VAndreiBlood::NPCThink": scope trace, the CNPC_VVampireBoss version (0x100052d6), trace depth back
	void vfunc619(int arg);	// slot 619, not modelled as virtual yet
	void sub_1000c27a(int arg);
	int vfunc127(int arg);	// slot 127 (overrides CBaseEntity's)
	int sub_1000b28f(int arg);
	void vfunc433();	// slot 433 (overrides CAI_BaseNPC's)
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433, called directly
	void sub_10015839(int a);	// slot 616 implementation shared with CAI_BaseNPCTroika
	virtual CAI_BaseNPC *vfunc5(unsigned int flags);	// as in CPhysForce (transplant); VC6 has no covariant returns
	void sub_10004110();	// as in CPhysForce (transplant)
	void sub_1035cd00();	// destructor body (stub 0x10004110): scope trace "CNPC_VAndreiBlood::Destructor", vtables, releases the two entities behind the handles at +0x66e0 / +0x66e4, the output at +0x6664, then the Troika destructor body
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc420();	// "CNPC_VAndreiBlood::NPCInit": scope trace, the CNPC_VVampireBoss version, then copies the global vector at 0x1070d1b0 to +0x66c0
	void sub_103c5840();	// CNPC_VVampireBoss::vfunc420, called directly
	void sub_1035e3c0(const char *pszEmitter);	// "CNPC_VAndreiBlood::StartSummonEmitter": like StartBloodEmitter, but keeps the handle at +0x66e4 and attaches the emitter to this NPC's "Bip01_R_Hand" (slot 243 with this, 2, the name) before running its slot 241
	void sub_1035e1a0(const char *pszEmitter);	// "CNPC_VAndreiBlood::StartBloodEmitter": scope trace (no entity name), with a name: removes the old emitter (handle at +0x66e0), creates the named emitter at this NPC's origin (sub_100fbc90, zero vector, no lifetime), keeps its handle and, when it resolves, hands this NPC to it (sub_100faf60) and runs its slot 241
	void sub_1035e5f0();	// "CNPC_VAndreiBlood::FacePlayerAdvance": scope trace (no entity name), when the entity behind the handle at +0x628c resolves, hands slot 217 of it (with the global at 0x104a6f80) to the object at +0x5d44 (sub_102e20b0, stub 0x10007248)
	virtual int vfunc438();	// slot 438 "CNPC_VAndreiBlood::SelectSchedule": scope trace (no entity name), sets +0x1b2c = 4, then schedule 0x15b without the byte at +0x66cc, 0x15e with the byte at +0x66cd, 0x15d / 0x15c (by sub_1035e920) while the byte at +0x66d4 is clear and the count at +0x66d8 is below +0x66dc, else 0x15a
	bool sub_1035e920();	// stub 0x1000eba6
	void sub_1035dd00(inputdata_t *pInput);	// "CNPC_VAndreiBlood::InputTriggerCombat": scope trace (no entity name), sets the byte at +0x66cc, AddClassRelationship(1, 1, 10), slot 461 (SelectIdealState), stamps the source file / line at +0x1b30 / +0x1b34 and runs sub_102ae750(0x15c, 0)
	void vfunc432(int arg);	// slot 432: without the combat byte at +0x66cc sets the state +0x5cc0 / +0x5cc4 to 1, adds the class relationship (1, 4, 10) while the entity of the handle at +0x628c is not classified 4 and clears bit 2 of +0x5b64; with the byte the state becomes 2; then CNPC_VHuman::vfunc432
	void sub_10332aa0(int a, int b, int c);	// "AddClassRelationship" (stub 0x10013cf5), called directly
	void sub_10385a10(int arg);	// CNPC_VHuman::vfunc432 (stub 0x1000698d), called directly
	void sub_1026dc00(unsigned int flags);	// stub 0x10012855, called directly by Spawn with 0x200000
	void sub_103c4ef0();	// CNPC_VVampire::vfunc103 (stub 0x10014876), called directly
	void sub_1035e950();	// stub 0x1000a6f0, called by Spawn last
	CBaseEntity *sub_1035ddd0();	// "CNPC_VAndreiBlood::SelectTeleportNode": scope trace (no entity name), without a live enemy (handle +0x628c) null; otherwise walks the global list of teleport nodes (type 17000 / 0x4269) and picks, by a coin flip, the nearest or the farthest of those that are far enough from the enemy and pass PositionClearForTeleport; stores its origin at +0x66c0 and returns it
	bool sub_1035e030(const Vector *pPos, float flMinDistance);	// "CNPC_VAndreiBlood::PositionClearForTeleport": scope trace (no entity name), false when pPos is closer than flMinDistance to this NPC (slot 217 origin) or closer than 100.0f to the saved position at +0x66c0, else true

	char m_pad65c0[0x6664 - 0x65c0];
	COutputEvent m_Output6664;
	char m_pad667c[0x66b8 - 0x667c];
	int m_n66b8;
	int m_n66bc;
	Vector m_vec66c0;	// 0x66c0: the saved position
	char m_b66cc;	// combat started
	char m_b66cd;
	char m_b66ce;
	char m_pad66cf;
	float m_f66d0;	// curtime stamp
	char m_b66d4;
	char m_pad66d5[3];
	int m_n66d8;
	int m_n66dc;	// 0x66dc: the number of hits before the combat ends
	unsigned int m_h66e0;
	unsigned int m_h66e4;
public:
	int vfunc461();	// slot 461: sets the ideal-state stamp +0x1b38 to 4; 1 + the combat byte
    virtual CAI_CondOwner * vfunc580();
    virtual const char * vfunc451();
public:
	virtual bool vfunc566(int);
};
