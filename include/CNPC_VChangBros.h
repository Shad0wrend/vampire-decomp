// CNPC_VChangBros: the Chang brothers NPC. Only what decompiled code needs.
#pragma once

#include "CNPC_VHuman.h"

class CNPC_VChangBros : public CNPC_VHuman
{
public:
	// Slot 440 (TranslateSchedule override); declared as a plain member.
	int vfunc440(int schedule);
	void vfunc619(int arg);
	void sub_1000c27a(int arg);
	void vfunc103();	// "CNPC_VChangBros::Spawn": scope trace around the base spawn
	virtual void vfunc104();	// "CNPC_VChangBros::Precache": scope trace (no entity name), base precache, 7 particle emitters, 4 weapon items
	void vfunc431();	// "CNPC_VChangBros::NPCThink": scope trace around the base think, then schedules the next think
	int vfunc461();	// "CNPC_VChangBros::SelectIdealState": scope trace, sets the ideal state (+0x1b38) to 10, then the base implementation
	void vfunc448(int code);	// "CNPC_VChangBros::TaskFail": scope trace, a failure code in 12..15 stores 0x15d at +0x5c54, then the base implementation
	void sub_1036c810(int a, int b);	// "CNPC_VChangBros::PrintTask": scope trace, then Msg("%s: [%s]:%s\n", a, classname, vfunc449(b))
	void *sub_1036d100();	// "CNPC_VChangBros::SelectUnitedNode": scope trace, walks the global entity list (type 18000 at +0x5dc, next at +0x5d8) for the first, or the second when the mode at +0x66b8 is 1
	bool sub_1036d270(float *pOut);	// "CNPC_VChangBros::GetTeleportPosition": scope trace, copies the vector at +0x66bc to pOut when it is recent enough (time at +0x66c8)
	float sub_1036dc60();	// "CNPC_VChangBros::GetFacingTimeTo": scope trace, 21.0f when the int at +0x5bb0 is positive or the object at +0x5da4 is set and its count (0x10013426) is below 2, else 7.0f
	CNPC_VChangBros *sub_1036e2f0();	// "CNPC_VChangBros::GetOtherBrother": scope trace, the first other Chang brother in the squad at +0x5da4 (null while the int at +0x5bb0 is positive or without a squad)
	void sub_1036e400();	// "CNPC_VChangBros::StoreArenaCenter": scope trace, stores the origin of the first type 0x4651 entity at +0x66dc and sets the flag at +0x66e8
	bool sub_1036e820();	// "CNPC_VChangBros::ReadyForUnited": scope trace, true while the current schedule is 0x15a or 0x15b
	bool sub_1036cbd0();	// "CNPC_VChangBros::CheckForUnited": scope trace; true when the other brother exists, the tick at +0x66ec plus 30.0f is not after the current time (+0xc of the global 0x1070b228) and not both brothers' sub_103c6830 values are below 0.5f
	float sub_103c6830();	// CNPC_VVampireBoss member (stub 0x10002b58), a float value compared with 0.5f
	void sub_10012855(int flags);	// sets the solid flags, called with 0x209000
	void sub_10014876();	// CNPC_VVampire::vfunc103, called directly
	int sub_10011225();	// CNPC_VHuman::vfunc461, called directly
	void sub_100052d6();	// CNPC_VVampireBoss::vfunc431, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
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
};
