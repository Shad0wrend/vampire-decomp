// CCineNPC: scripted-sequence NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once
#include "string_t.h"

class CBaseEntity;
class CBaseAnimating;
class CCineNPC;

// Element of the three 0x18-byte containers at +0x5f9c, +0x5fb4 and +0x5fcc[8].
struct CCineNPCSlot
{
	int m_data[6];
	void sub_10015708();	// destructor
	void sub_100cd660(CBaseEntity *pEnt, CCineNPC *pOwner, int a);	// stub 0x10010794: hands (entity, owner, 0) to the container
};

class CCineNPC
{
public:
	virtual bool vfunc585();
	virtual char vfunc117();	// slot 117: the base ObjectCaps with bit 1 cleared

	CCineNPC *vfunc5(unsigned int flags);	// deleting destructor
	CCineNPC *sub_101a62d0();	// constructor body 0x101a62d0 (returns this; called by the scripted_sequence / aiscripted_sequence / aiscripted_schedule factories 0x101a6260, 0x101a8fe0, 0x101a96b0): CAI_BaseNPC ctor body 0x1027c300 (stub 0x10006659); m_hNPC5f94 = -1; the COutputEvent ctor (0x100cd2a0, stub 0x10002ddd) on m_slotA, m_slotB and m_slots[0..7] in that order (the loop of 8 is a member array); vptr 0x104771e4 at +0, 0x104771b8 (CAI_DefMovementSink part) at +0x19b0; flags |= 0x1000 at +0x4c
	void sub_101a7230(int slot);	// hands (entity of the handle at +0x10c, this, 0) to output slot 1..8
	void sub_1000c9cd();	// base-class destructor body
	char sub_101a8930();	// stub 0x1000c6da: true when the byte at +0x5f90 is set and the entity of the handle at +0x5ce4 resolves and answers slot 158 with true
	void sub_101a8c30();	// "CancelScript" (stub 0x1000f187): DevMsg "Cancelling script: %s" (the name at +0x5f48), then cancels the scripted sequence entities of this entity's name (this one when it has none)
	void sub_101a7500(int unused);	// "InputCancelScript" (takes one unused stack argument): DevMsg(2, "InputCancelScript: Cancelling script '%s'") with the name at +0x5f48 (or ""), then sub_101a7170(this)
	void sub_101a77a0(void *pNpc);	// warns (DevWarning) that a scripted sequence (this) was asked to play on a ScriptHidden NPC (pNpc), after setting the byte at +0x5d78 of pNpc
	char sub_101a8ac0();	// stub 0x1000e6a6: asked of the scripted sequence entity by CAI_BaseNPC::sub_10278090; true lets the NPC take part. With the NPC entity (handle at +0x5f94) live: false (Msg "%s is specified as the Next Script...") while +0x5f58 is set, false (Msg "%s is a priority script...") when the entity has flag bit 9 of +0x204, else true
	void *sub_101a7600();	// finds the NPC to play the script: walks the entities named like this one (name at +0x5f54, search start at +0x5f98) and returns the first NPC (object at +0x94) that accepts (slot 482 == 1), else the last one that accepts as a fallback (== 2), else null; Msg "Found %s, but can't play!" for the others unless flag bit 11 of +0x204 is set
	char sub_101a7760();	// stub 0x1000db93 for 0x101a7600 then (flag bit 10 of +0x204) remembers the NPC as the search start (+0x5f98) and hands it to CAI_BaseNPC::sub_10279cc0; true when an NPC was found
	void sub_101a8070();	// "StartScript"-like (scripted.cpp): when sub_101a7760 finds an NPC clears the byte at +0x5f91, runs slot 583 and prints DevMsg(2, "script \"%s\" using NPC \"%s\"\n"); else cancels the script (sub_101a8c30), prints DevMsg(2, "script \"%s\" can't find NPC \"%s\"\n") and retries one second later (next think at +0x17c)
	void vfunc459();	// slot 459 (declared as a plain member): unless sub_101a8930() holds, clears twelve NPC conditions (and the byte at +0x5b80) of the NPC (object at +0x94) of the entity behind the handle at +0x5ce4
	void sub_101a7390(int unused);	// "BeginSequence" (takes one unused stack argument): warns when called before the next think (+0x17c) was reached and pushes the time at +0x5f74 out; else, when sub_101a7760 finds an NPC whose NPC object (state +0x5d70 0 or 2) accepts slot 585(1) on its slot 482, runs slot 583; with no NPC behind the handle at +0x5ce4 arms the think function sub_101a8070 and stamps the current time as the next think
	const char *sub_1000b5cd();	// CBaseEntity::GetDebugName (stub 0x1000b5cd), called directly
	int sub_100ac4e0(void *pFunc, int a, int b);	// CBaseEntity::ThinkSet (stub 0x10007fe5), called directly
	char vfunc584(CBaseAnimating *pNpc, const char *pszSequence, char bLoop);	// slot 584: marks the script as started (byte at +0x5f91), looks the sequence up on pNpc (Warning when unknown, then sequence 0), resets its sequence info; without a name and with bLoop set hands pNpc to sub_101a8460 and returns false; developer Msg "Sequence %s targeting %s is starting" and sub_101a6ec0; returns true
	void sub_101a8460(CBaseAnimating *pNpc);	// stub 0x10012a80: the sequence is done: developer Msg "Sequence %s targeting %s is done" and sub_101a6ec0 (stub 0x10002225), then either sub_101a8640 or (with a named follow-up sequence at +0x5f4c that is not live at +0x5f94) the NPC's state 2 and slot 584 on that sequence, then hands (the entity behind +0x10c, this, 0) to the container at +0x5fb4
	void sub_101a8640(CBaseAnimating *pNpc);	// stub 0x10013a7a
	void sub_101a6ec0();	// called directly
	void vfunc103();	// slot 103 (declared as a plain member): SetSolid(0), AddSolidFlags(4), SetMoveType(0, 0), clears the bytes at +0x1480 / +0x1481, arms StartScript (sub_101a8070) when it has no name or flag bit 4 is set, sets the byte at +0x5f90 from flag bit 5, SetAbsolute-like sub_100b3b00, resets the NPC handle and search start, AddFlag2(0x10)
	bool vfunc362(int unused);	// slot 362
	bool vfunc364(int unused);	// slot 364
	bool vfunc365(int unused);	// slot 365: always false
	bool vfunc72(int a);	// slot 72 (ret 4: one unused stack argument): always false
	void vfunc113();	// slot 113 "CCineNPC::Activate" (declared as a plain member): the base work, then finds the NPC named at +0x5f54 (the first one with an NPC object at +0x94; DevMsg "Could not find NPC %s in CCineNPC::Activate for %s" when none), plays the sounds of its model for the three names at +0x5f44 / +0x5f4c / +0x5f48 (sub_10428880; DevMsg "NPC %s has no model in CCineNPC::Activate for %s" without a model), looks up the entity named at +0x5f58 and keeps its handle at +0x5f94 (the name is cleared when that is gone)
	void sub_100a0bc0();	// CBaseEntity::vfunc113 (stub 0x10001226), called directly
	CCineNPC *sub_101a8130();	// stub 0x1000b348: the scripted sequence entity named at +0x5f5c (found with the entity list, cast to CCineNPC), null when there is none or it has no NPC object at +0x94
	void sub_101a81a0();	// releases the NPC of the entity behind the handle at +0x5ce4: clears its schedule (sub_10273e80(0)), lets the entity named at +0x5f5c release first when it is another one, resets its animation (slot 584 with the script name at +0x5f48) and the move state, then fires the output at +0x5f9c with the entity behind the handle at +0x10c

	char m_pad0004[0x10c - 4];
	unsigned int m_h010c;	// 0x10c: entity handle
	char m_pad0110[0x17c - 0x110];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x204 - 0x180];
	unsigned int m_flags204;	// 0x204
	char m_pad0208[0x26c - 0x208];
	const char *m_pszName26c;	// 0x26c: the entity name
	char m_pad0270[0x1480 - 0x270];
	char m_b1480;	// 0x1480
	char m_b1481;	// 0x1481
	char m_pad1482[0x5ce4 - 0x1482];
	unsigned int m_hTarget5ce4;	// 0x5ce4: entity handle of the entity the script targets
	char m_pad5ce8[0x5f44 - 0x5ce8];
	string_t m_iszPreIdle;	// 0x5f44
	const char *m_pszScript5f48;	// 0x5f48: the script's name
	const char *m_pszSequence5f4c;	// 0x5f4c: the follow-up sequence name
	string_t m_iszCustomMove;	// 0x5f50
	const char *m_pszTarget5f54;	// 0x5f54: the name of the NPC the script plays on
	int m_n5f58;	// 0x5f58
	string_t m_iszLinkedSequence;	// 0x5f5c
	int m_fMoveTo;	// 0x5f60
	int m_iFinishSchedule;	// 0x5f64
	int m_n5f68;	// 0x5f68
	float m_flRepeat;	// 0x5f6c
	int m_iDelay;	// 0x5f70
	float m_flTime5f74;	// 0x5f74
	int m_saved_movetype;	// 0x5f78
	int m_saved_movecollide;	// 0x5f7c
	int m_saved_solid;	// 0x5f80
	int m_saved_solidflags;	// 0x5f84
	int m_saved_effects;	// 0x5f88
	int m_saved_troika_flags;	// 0x5f8c
	char m_b5f90;	// 0x5f90
	char m_b5f91;	// 0x5f91
	char m_pad5f92[0x5f94 - 0x5f92];
	unsigned int m_hNPC5f94;	// 0x5f94: entity handle of the NPC the script plays on
	CBaseEntity *m_pSearchStart5f98;	// 0x5f98: where the name search resumes
	CCineNPCSlot m_slotA;	// 0x5f9c
	CCineNPCSlot m_slotB;	// 0x5fb4
	CCineNPCSlot m_slots[8];	// 0x5fcc
	void vfunc180();	// slot 180: CAI_BaseNPC::vfunc180, then sub_101a7170(this)
	int vfunc370(int a);	// slot 370: calls slot 368 with a, returns a
	int vfunc371(int a);	// slot 371: calls slot 369 with a, returns a
};
