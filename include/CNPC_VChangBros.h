// CNPC_VChangBros: the Chang brothers NPC. Only what decompiled code needs.
#pragma once
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"

#include "CNPC_VHuman.h"

class CNPC_VChangBros : public CNPC_VHuman
{
public:
	// Slot 440 (TranslateSchedule override); declared as a plain member.
	int vfunc440(int schedule);
	virtual CAI_BaseNPC *vfunc5(unsigned int flags);	// deleting destructor
	void vfunc619(int arg);
	void sub_1000c27a(int arg);
	void vfunc103();	// "CNPC_VChangBros::Spawn": scope trace around the base spawn
	virtual void vfunc104();	// "CNPC_VChangBros::Precache": scope trace (no entity name), base precache, 7 particle emitters, 4 weapon items
	void vfunc431();	// "CNPC_VChangBros::NPCThink": scope trace around the base think, then schedules the next think
	void vfunc433();	// slot 433 "CNPC_VChangBros::GatherCondition": scope trace (no entity name), the Troika base, sub_1036d600, clears the conditions 0x79 / 0x7c, then sets 0x79 / 0x7a / 0x7c when CheckForJumpAttack / sub_1036cab0 / CheckForUnited hold (each after a slot 1 call on the global 0x10924a6c)
	void sub_1036d600();	// stub 0x1000a353, run after the base GatherCondition
	void sub_10269a20(int condition);	// CAI_BaseNPC member (stub 0x100041b0): sets the condition
	int vfunc461();	// "CNPC_VChangBros::SelectIdealState": scope trace, sets the ideal state (+0x1b38) to 10, then the base implementation
	void vfunc448(int code);	// "CNPC_VChangBros::TaskFail": scope trace, a failure code in 12..15 stores 0x15d at +0x5c54, then the base implementation
	void sub_1036c810(int a, int b);	// "CNPC_VChangBros::PrintTask": scope trace, then Msg("%s: [%s]:%s\n", a, classname, vfunc449(b))
	void *sub_1036d100();	// "CNPC_VChangBros::SelectUnitedNode": scope trace, walks the global entity list (type 18000 at +0x5dc, next at +0x5d8) for the first, or the second when the mode at +0x66b8 is 1
	bool sub_1036d270(float *pOut);	// "CNPC_VChangBros::GetTeleportPosition": scope trace, copies the vector at +0x66bc to pOut when it is recent enough (time at +0x66c8)
	CBaseEntity *sub_1036dd20();	// "CNPC_VChangBros::SpawnEnergyBall": scope trace (no entity name), creates an "item_w_chang_energy_ball" in front of / beside / above the origin (40 forward, -10 right, 50 up) and, with a live enemy (handle +0x628c), hands it slot 372(this, 800.0f, enemy); returns it
	float sub_1036dc60();	// "CNPC_VChangBros::GetFacingTimeTo": scope trace, 21.0f when the int at +0x5bb0 is positive or the object at +0x5da4 is set and its count (0x10013426) is below 2, else 7.0f
	CNPC_VChangBros *sub_1036e2f0();	// "CNPC_VChangBros::GetOtherBrother": scope trace, the first other Chang brother in the squad at +0x5da4 (null while the int at +0x5bb0 is positive or without a squad)
	void sub_1036e400();	// "CNPC_VChangBros::StoreArenaCenter": scope trace, stores the origin of the first type 0x4651 entity at +0x66dc and sets the flag at +0x66e8
	bool sub_1036e820();	// "CNPC_VChangBros::ReadyForUnited": scope trace, true while the current schedule is 0x15a or 0x15b
	bool sub_1036cbd0();	// "CNPC_VChangBros::CheckForUnited": scope trace; true when the other brother exists, the tick at +0x66ec plus 30.0f is not after the current time (+0xc of the global 0x1070b228) and not both brothers' sub_103c6830 values are below 0.5f
	bool sub_1036c8d0();	// "CNPC_VChangBros::CheckForJumpAttack": scope trace (no entity name); in mode 0 (+0x66b8) with the enemy (handle +0x628c) and this brother both not in brother state 4 and the jump timer (+0x66cc) older than 5 seconds: true when alone (the counter +0x5bb0 positive or no squad at +0x5da4) or when no other brother of the squad jumped within the last 5 seconds
	float sub_103c6830();	// CNPC_VVampireBoss member (stub 0x10002b58), a float value compared with 0.5f
	void sub_10012855(int flags);	// sets the solid flags, called with 0x209000
	void sub_10014876();	// CNPC_VVampire::vfunc103, called directly
	int vfunc438();	// "CNPC_VChangBros::SelectSchedule": scope trace (no entity name), ideal state (+0x1b2c) = 10, then the schedules 0x15a .. 0x15e picked by the convars at 0x1093aa2c / 0x1093a984 / 0x1093a9cc and the conditions 0x7c / 0x79 / 0x7a / 0x59 while the enemy (handle +0x628c) is gone or slot 404 answers 1, else the human implementation
	int sub_10015ad2();	// CNPC_VHuman::vfunc438, called directly (stub 0x10015ad2)
	int sub_10011225();	// CNPC_VHuman::vfunc461, called directly
	void sub_100052d6();	// CNPC_VVampireBoss::vfunc431, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int vfunc604(int arg);	// 0x1036d800 "CNPC_VChangBros::SelectScheduleMeleeCombat" (plain member override of CAI_BaseNPCTroika's slot 604): melee schedule pick, stamps m_pszFile1b30 / m_nLine1b34
	void sub_100054bb(int code);	// CAI_BaseNPCTroika::vfunc448, called directly
	int *sub_1028a150();	// the NPC's current schedule record (first dword is the schedule id), 0 when none
	void sub_1036e8c0();	// "CNPC_VChangBros::KillCenterEmitter": scope trace (no entity name), when the entity behind the handle at +0x66f4 resolves calls its slot 242 and SetNextThink(0.1f)
	int vfunc127(int a);	// "CNPC_VChangBros::Restore": scope trace (no entity name), the CNPC_VVampireBoss restore, then the float at +0x64b8 = 2.3f and the body emitter names 0 and 1 "chang_powerup_emitter", 2 "chang_spine_emitter"; returns the base result
	void vfunc420();	// "CNPC_VChangBros::NPCInit": scope trace (no entity name), the CNPC_VVampireBoss init, clears the teleport state at +0x66bc..+0x66d0 and the flag at +0x66e8, stamps the tick at +0x66ec, sets the float at +0x64b8 and the body emitter names (as in Restore)
	void sub_10013e85();	// CNPC_VVampireBoss::vfunc420, called directly
	void sub_103c6df0(int index, const char *name);	// CNPC_VVampireBoss::sub_103c6df0 (stub 0x10010fd7): sets body emitter name `index`
	int sub_1036e580(int slot);	// stub 0x10011068: maps the value of slot 217 to a brother id
	bool sub_1000e93f(int id);	// stub of sub_1036b6b0 (id in 1..2), called with this in ecx
	bool vfunc530(CBaseEntity *pOther);	// "CNPC_VChangBros::IsUnreachable"-style check: scope trace, true for the pairing of brother ids, else the base
	bool sub_102741e0(CBaseEntity *pOther);	// CAI_BaseNPC::vfunc530, called directly
	void sub_1036e160(int bSetup);	// "CNPC_VChangBros::SetupSuperJump": scope trace (no entity name); with bSetup stores this entity's origin and the enemy's (+0x5ddc) origin as the jump start and target (+0x649c / +0x64a8), the height difference (the higher z minus this z, plus 50 or 150 when it is within 4 units) at +0x64b4, then sub_10269b50(0x7b) and sub_102c4e80()
	void sub_10269b50(int schedule);	// CAI_BaseNPC member (stub 0x10015839), called directly
	void sub_102c4e80();	// stub 0x10011a31, called directly
	void *sub_1036cfa0();	// "CNPC_VChangBros::SelectLedgeNode": scope trace (no entity name); of the hints of type 0x4653 that sub_1036df50 accepts, the one farthest from this entity (stub 0x1036cfa0's callers: vfunc442)
	bool sub_1036df50(void *pHint);	// stub 0x10006d70: whether a ledge hint is acceptable
	float sub_103c6b70(const Vector *pFrom, const Vector *pTo, const float *pPoint);	// stub 0x1000de86: a distance-like value of pPoint against the segment from pFrom to pTo (a CNPC_VVampireBoss member)
public:
    virtual CAI_CondOwner * vfunc580();
    virtual const char * vfunc451();
public:
	virtual bool vfunc566(int);
};
