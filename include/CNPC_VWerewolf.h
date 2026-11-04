// CNPC_VWerewolf: the werewolf NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once
#include "CAI_Hint.h"
#include "Vector.h"

struct datamap_t;

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct inputdata_t;
struct CUnknown101c2a50;
class CBaseEntity;
class CNPC_VWerewolf;
class CHintData_WW;

struct CNPC_VWerewolfTimer
{
	int m_key;
	float m_time;
};

// CUtlVector<CNPC_VWerewolfTimer> embedded at +0x665c.
struct CNPC_VWerewolfTimerVec
{
	CNPC_VWerewolfTimer *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	CNPC_VWerewolfTimer *m_pElements;

	CNPC_VWerewolfTimer &Element(int i) { return m_pMemory[i]; }
	void FastRemove(int elem)
	{
		if (m_size > 0) {
			memmove(&Element(elem), &Element(m_size - 1), sizeof(CNPC_VWerewolfTimer));
			m_size--;
		}
	}
};

// CUtlVector<int> embedded at +0x668c (the most recent schedule changes, at most 50 are kept).
struct CNPC_VWerewolfIntVec
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;
};

struct CNPC_VWerewolfVec3
{
	float x, y, z;
};

// The node list of the AI network held by the helper object: element count at +0, node pointer array at +4.
struct CNPC_VWerewolfNodeNet
{
	int m_nNodes;
	void **m_ppNodes;

	int sub_102f3c10(CNPC_VWerewolf *pNPC, const float *pOrigin);	// stub 0x1000827e: the index of the node nearest to the origin, -1 when there is none
};

struct CNPC_VWerewolfNodeOwner
{
	char m_pad0000[0x156c];
	bool sub_103d6d00(Vector vecPos);	// "CNPC_VWerewolf::HullInSolid": scope trace (entity name or NULL ENTITY); takes the hull from m_field1568 (CBaseCombatCharacter.h +0x1568), its mins (sub_102d6100) and maxs (sub_102d6120), and traces that box at vecPos with CTraceFilterSimple(this, 7), engine trace 0x1070b254 slot 4, mask 0x202400b; the debug line goes through sub_10146570 when 0x10738960 answers; returns trace.allsolid (byte at trace+0x36)
	int m_n156c;
};

// The object at +0x5d34 (class not known yet).
struct CNPC_VWerewolfHelper5d34
{
	int sub_10004e58(const CNPC_VWerewolfVec3 *pA, const CNPC_VWerewolfVec3 *pB);

	char m_pad00[4];
	CNPC_VWerewolfNodeOwner *m_pOwner;	// 0x04
	int m_n08;	// 0x08
	int m_n0c;	// 0x0c
	char m_pad10[0x2c - 0x10];
	CNPC_VWerewolfNodeNet *m_pNet;	// 0x2c
};

// The current schedule at +0x5c38 (class not known yet): only its id.
struct CNPC_VWerewolfSchedule
{
	char m_pad00[0x40];
	int m_id40;	// 0x40
};

// The hint object at +0x66b0 (class not known yet).
struct CNPC_VWerewolfHint66b0
{
	char m_pad0000[0x5d8];
	CNPC_VWerewolfHint66b0 *m_pNext;	// 0x5d8: next hint of the global list (head at 0x10925450)
	int m_nType;	// 0x5dc: the hint type
	void sub_102d1420(float delay);	// stub 0x10013d68: clears the dword at +0x5e0 to -1 and stores delay + curtime at +0x5ec
};

// A node of the global hint list (head at 0x10925450): only the link to the next one.
struct CNPC_VWerewolfHintLink
{
	char m_pad0000[0x5d8];
	CNPC_VWerewolfHintLink *m_pNext;	// 0x5d8
};

class CNPC_VWerewolf
{
public:

	char pad04[0x198];
	unsigned int m_nEffectFlags;	// 0x19c: bit 6 is tested by UpdateConditionCanSpecialMove
	char pad1a0[0xcc];
	const char *m_name26c;
	char pad270[0x2e0 - 0x270];
	int m_pEdict2e0;	// 0x2e0: the entity's edict
	char pad2e4[0x1b2c - 0x2e4];
	int m_n1b2c;	// 0x1b2c: the schedule-selection debug id (SelectSchedule stores 0x29)
	const char *m_pszFile1b30;	// 0x1b30: source file of the last schedule choice (SelectSchedule / TranslateSchedule record it)
	int m_nLine1b34;	// 0x1b34: its line
	char pad1b38[0x5c38 - 0x1b38];
	CNPC_VWerewolfSchedule *m_pSchedule5c38;	// 0x5c38
	char pad5c3c[0x5cc0 - 0x5c3c];
	int m_nState5cc0;	// 0x5cc0: the NPC state SelectSchedule switches on (0..0xe)
	char pad5cc4[0x5d34 - 0x5cc4];
	CNPC_VWerewolfHelper5d34 *m_pHelper5d34;	// 0x5d34
	char pad5d38[0x5f2d - 0x5d38];
	char m_b5f2d;	// 0x5f2d
	char pad5f2e[0x6264 - 0x5f2e];
	float m_f6264;	// 0x6264
	char pad6268[0x665c - 0x6268];
	CNPC_VWerewolfTimerVec m_Timers;	// 0x665c
	int m_nCacheTick;	// 0x6670: engine tick of the cached vector
	CNPC_VWerewolfVec3 m_vCache;	// 0x6674: cached vector
	int m_nDoorState;	// 0x6680
	unsigned int m_hRotDoor1;	// 0x6684: entity handle of the func_movelinear "rotdoor1"
	unsigned int m_hRotDoor2;	// 0x6688: entity handle of the func_movelinear "rotdoor2"
	CNPC_VWerewolfIntVec m_History;	// 0x668c
	char m_b66a0;	// 0x66a0: the doors / hint data were set up
	char m_b66a1;	// 0x66a1
	char pad66a2[2];
	int m_n66a4;	// 0x66a4

	char m_b66a8;	// 0x66a8
	char m_b66a9;	// 0x66a9
	char pad66aa[2];
	int m_n66ac;	// 0x66ac: cleared by TeleportOut
	CNPC_VWerewolfHint66b0 *m_pHint66b0;	// 0x66b0
	class CBaseEntity *m_pLastUsedTeleportHint;	// 0x66b4
	int m_n66b8;	// 0x66b8: cleared by CheckAllRandomMoveHints
	CNPC_VWerewolfHint66b0 *m_pHint66bc;	// 0x66bc: the move hint
	class CBaseEntity *m_pLastUsedMoveHint;	// 0x66c0
	CNPC_VWerewolfHint66b0 *m_pHint66c4;	// 0x66c4: the break hint
	char m_b66c8;	// 0x66c8
	char pad66c9[0x66cc - 0x66c9];
	float m_f66cc;	// 0x66cc
	float m_f66d0;	// 0x66d0
	int m_nTick66d4;	// 0x66d4: engine tick of the random-move-hint search
	float m_fl66d8;	// 0x66d8: curtime of that search
	bool sub_103cf770();	// "CNPC_VWerewolf::CheckAllRandomMoveHints" (0x103cf770): walks the global hint list, tests each hint with sub_103d2810 / sub_103d7dc0 and HasPath, records the hints it tried and returns the search report
	CNPC_VWerewolfVec3 m_vSnap66dc;	// 0x66dc: set from the global vector at 0x1070d1b0 by SnapToAnimationPoint
	unsigned int m_nFlags66e8;	// 0x66e8: attack state bits (4 and 0x100 make GatherAttackConditions compare heights)
	float m_flTeleport66ec;	// 0x66ec
	float m_flTime66f0;	// 0x66f0: the time of the last teleport out
	char pad66f4[0x66f8 - 0x66f4];
	float m_flNodeTime;	// 0x66f8: time stamp of the cached node
	void *m_pNode;	// 0x66fc: cached nearest node
	char pad6700[0x6708 - 0x6700];
	int m_n6708;	// 0x6708
	int m_n670c;	// 0x670c
	char pad6710[0x6714 - 0x6710];
	char *m_pHintMem6714;	// 0x6714: CUtlVector<CHintData_WW> (0x48 byte records): memory
	int m_nHintAlloc6718;	// 0x6718: allocation count
	int m_nHintGrow671c;	// 0x671c: grow size (-1 = memory not owned)
	int m_n6720;	// 0x6720: count of the hint records
	char *m_pHintElems6724;	// 0x6724: the vector's debug view of the memory
	char m_Out6728[0x18];	// 0x6728: a COutputEvent (destroyed by sub_100cd2d0); the holder sub_103cc890 hands the dying enemy to
	char m_Out6740[0x18];	// 0x6740: a COutputEvent
	char m_Out6758[0x18];	// 0x6758: a COutputEvent
	char m_OnTeleportOut[0x18];	// 0x6770: a COutputEvent (fired with the target as activator)
	char m_OnTeleportIn[0x18];	// 0x6788: a COutputEvent (fired with the target as activator)

	void sub_103d4d60();	// "CNPC_VWerewolf::TeleportIn": scope trace (entity name), PositionAtHint of the teleport hint, slot 67, clears effect bit 5, RemoveSolidFlags(4) with its own scope trace, stamps curtime at +0x66ec, fires the output at +0x6788 with the target (slot 167); unless the dev object at 0x1093f73c says otherwise plays "dev/ww_tele_in.wav" and a debug message to the target's player
	void sub_103cc5c0();	// "CNPC_VWerewolf::UpdateConditionCanSpecialMove": scope trace (entity name); nothing while the current schedule is one of the types 0x15f / 0x15b / 0x15a / 0x160 or bit 6 of +0x19c is set; else keeps the move hint (+0x66bc) valid (clearing it when it fails the tests, condition 0x78 and a signal to the object behind 0x10924a6c when it passes) and with condition 0x59 and no hint calls sub_103d2a10 or sub_103d14f0 depending on sub_103cf5f0
	void sub_103d4a60();	// "CNPC_VWerewolf::TeleportOut": scope trace (entity name), stamps curtime at +0x66f0, slot 66, effect bit 5, AddSolidFlags(4) with its own scope trace, clears +0x66ac / +0x66e8, fires the output at +0x6770 with the target (slot 167); unless the dev object at 0x1093f73c says otherwise plays "dev/ww_tele_out.wav" and a debug message to the target's player
	void sub_103d2a10();	// stub 0x10012a99
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly
	void sub_103d14f0();	// stub 0x1000296e
	bool sub_103d1200();	// "CNPC_VWerewolf::FindEgressHint": scope trace (entity name); keeps the move hint (+0x66bc) while HasPath holds from this entity to its ground point and from its end point to the target (slot 167), else clears it and takes a hint of type 0x3aa8 of the global list that HasPath and slot 617 accept
	bool sub_103d1e50();	// both doors are valid and close together (door state 2 is always true)
	int sub_10366490(int key);
	bool sub_10366400(int key);

	// Slot 421, called directly so far; declared as a plain member.
	void vfunc421();
	bool vfunc201(void *pEnt, int b, int *pOut, int d);	// slot 201 "CNPC_VWerewolf::FVisible": scope trace (entity name); false for no entity; true unless one global flag byte is set or the second one is set and the dword at +0xa8 of pEnt is non-zero, in which case *pOut (when given) is cleared and false returned

	void vfunc259(int *pEvent);	// slot 259 "CNPC_VWerewolf::HandleAnimEvent": event 0x3eb hands the integer in its text to the first hint object set (+0x66b0, +0x66bc, +0x66c4; else the base), 0x802..0x805 sub_103d8c10, 0x834 a debug marker at the "Bip01" attachment, 0x835 sub_103d8df0, 0x836..0x83d nothing, the rest the Troika base
	void sub_1029b290(int *pEvent);	// CAI_BaseNPCTroika::vfunc259 (stub 0x100146e1), called directly
	void sub_103d8c10();	// stub 0x1001529e: the event 0x802..0x805 handler
	void sub_103d8df0();	// stub 0x10003369: the event 0x835 handler
	void vfunc113();	// slot 113 "CNPC_VWerewolf::Activate": scope trace (entity name), then CAI_BaseNPCTroika::vfunc113
	void sub_103d1ca0();	// "CNPC_VWerewolf::StartSearchTimer": stores the time stamp counter in a global
	bool sub_103d1d60(const char *pszName, bool bValue);	// "CNPC_VWerewolf::ReportSearchTimer": scope trace + cycle sample; returns bValue
	void *sub_103d7620(int key);	// "CNPC_VWerewolf::GetDataForHint": scope trace (entity name), the 0x48-byte record at +0x6714 (count at +0x6720) whose key at +4 equals the argument, or null
	void sub_103d99a0(inputdata_t *pInput);	// "CNPC_VWerewolf::InputToggleDoorState": scope trace (entity name), stores the integer input clamped to 0..3 at +0x6680 (0 when the input is not an integer)
	void vfunc465(const char *msg);	// slot 465, scope-traced wrapper
	void vfunc516();	// slot 516 "CNPC_VWerewolf::MaxYawSpeed": scope trace (entity name), then the base implementation
	void vfunc620();	// slot 620 "CNPC_VWerewolf::DrawBBoxOverlay": scope trace (entity name), the base overlay (sub_1009f4e0) when sub_103cf5f0 answers true, else the box overlay helper 0x10008f44 (green, 50 / 255 / 50)
	bool sub_103cf5f0();	// stub 0x1000d562
	void sub_1009f4e0();	// stub 0x10005164, the base DrawBBoxOverlay
	bool vfunc566(void *pHint);	// slot 566 "CNPC_VWerewolf::FValidateHintType": scope trace (entity name), true when the hint type at +0x5dc is in 0x3a98..0x3aaa but not 0x3a9f
	int sub_103d3220(void *pHint);	// "CNPC_VWerewolf::GetHintTeleportPriority": scope trace (entity name), maps the hint type at +0x5dc of pHint to a priority (0x3a98 -> 1, 0x3a99 -> 2, 0x3a9a/0x3a9b -> 3, 0x3a9f -> 4, else 0)
	char vfunc68(void *pOther);	// slot 68 "CNPC_VWerewolf::ShouldIgnoreCollision": scope trace (entity name); true when bit 1/2/4 of the byte at +0x4c of pOther is set or bit 3 of its GetFlags2, else CAI_BaseNPCTroika::vfunc68(pOther)
	char sub_1029afc0(void *pOther);	// CAI_BaseNPCTroika::vfunc68 (stub 0x1000f9de), called directly
	char vfunc69(void *pOther);	// slot 69 "CNPC_VWerewolf::NavIgnoreCollision": scope trace (entity name); true when bit 1/2/4 of the byte at +0x4c of pOther is set or bit 3 of its GetFlags2, else CAI_BaseNPCTroika::sub_1029b180(pOther)
	char sub_1029b180(void *pOther);	// CAI_BaseNPCTroika::sub_1029b180 (stub 0x100014b0), called directly
	void sub_10295a60(const char *msg);
	CNPC_VWerewolf *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10003648();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int sub_103d0db0(CNPC_VWerewolfVec3 a, CNPC_VWerewolfVec3 b);	// scope trace (entity name) "CNPC_VWerewolf::HasPath", forwards both vectors to the helper object at +0x5d34 and returns its result
	void sub_103d7420(CHintData_WW *pData);	// "CNPC_VWerewolf::InitPathableHint": scope trace (entity name), walks the global hint list (0x10925450, next at +0x5d8): each hint other than pData's own is added as pathable when it shares pData's entity (sub_103d6390), else when HasPath from the first / second vector of pData to the hint origin (slot 217)
	void sub_103d4760();	// "CNPC_VWerewolf::ClearTeleportHint": scope trace (entity name), when the hint object at +0x66b0 is set calls its sub_102d1420(0), then clears the pointer
	void sub_103d4690();	// "CNPC_VWerewolf::ClearMoveHint": scope trace (entity name), when the hint object at +0x66bc is set calls its sub_102d1420(0), then clears the pointer and sets condition 0x78
	void sub_103d44e0(CNPC_VWerewolfHint66b0 *pHint, char flag);	// "CNPC_VWerewolf::SetMoveHint": scope trace (entity name), clears the current move hint (sub_103d4690) when set, stores flag at +0x66c8 and pHint at +0x66bc, calls slot 1 of the object behind the global 0x10924a6c, then sub_10269a20(0x78)
	int vfunc461();	// slot 461 "CNPC_VWerewolf::SelectIdealState": scope trace (entity name), picks the schedule (+0x1b40) and the ideal state (+0x5cc4) from the conditions, then SetState
	int sub_102ad660();	// CAI_BaseNPCTroika::vfunc461 (stub 0x1000e49e), called directly
	void sub_1026e340(int newState);	// CAI_BaseNPC::SetState (stub 0x10002554), called directly
	void sub_10269a20(int condition);	// CAI_BaseNPC condition setter (stub 0x100041b0), called directly
	void sub_10015839(int condition);	// CAI_BaseNPC::sub_10269b50 "SetCondition" (stub 0x10015839), called directly
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition (stub 0x10014df8), called directly
	unsigned int sub_1033c9c0();	// CBaseCombatCharacter::sub_1033c9c0 "GetMiscFlags" (stub 0x1000b672), called directly
	void sub_1033c770(unsigned int flags);	// CBaseCombatCharacter "RemoveMiscFlag" (stub 0x10011531), called directly
	void sub_103cca80();	// slot 305 "CNPC_VWerewolf::RemoveBaseFightingItems": scope trace (entity name), when bit 4 of the misc flags is set removes the "item_w_werewolf_attacks" weapon (sub_1021fee0(this, name)) and clears that bit
	void vfunc141(CUnknown101c2a50 *pInfo, int b, int c);	// slot 141 "CNPC_VWerewolf::TraceAttack": scope trace (entity name), clears the dword at +0x44 of pInfo, then the base implementation
	void sub_10015b13(CUnknown101c2a50 *pInfo, int b, int c);	// CAI_BaseNPC::vfunc141 (stub 0x10015b13), called directly
	int vfunc142(CUnknown101c2a50 *pInfo);	// slot 142 "CNPC_VWerewolf::OnTakeDamage": scope trace (entity name), builds a local copy of the damage info (0x4c bytes) and clears its dword at +0x44 (never used afterwards), then returns the base implementation's result for the original info
	int sub_102bed30(CUnknown101c2a50 *pInfo);	// CAI_BaseNPCTroika::vfunc142 (stub 0x10004647), called directly
	void sub_103d45c0(CNPC_VWerewolfHint66b0 *pHint);	// "CNPC_VWerewolf::SetTeleportHint": scope trace (entity name), clears the current hint (sub_103d4760) when set, resets the byte at +0x66c8, stores pHint at +0x66b0
	void *sub_10335950(const char *pszClassname);	// CBaseCombatCharacter "Weapon_OwnsThisType"-like lookup by classname (stub 0x10015195), called directly
	void sub_1033c6b0(unsigned int flags);	// CBaseCombatCharacter "AddMiscFlag" (stub 0x100153a7), called directly
	void sub_103cc9b0();	// slot 304 "CNPC_VWerewolf::GiveBaseFightingItems": scope trace (entity name), when the character does not own "item_w_werewolf_attacks" gives it (sub_1021fe50(this, name, 0)) and sets misc flag bit 4
	CNPC_VWerewolfVec3 sub_103d9c90();	// returns the cached vector (+0x6674), recomputed through sub_102c3b50 from the target entity (slot 167) when the engine tick (global 0x1070b22c, slot 120) changed
	void sub_102c3b50(CBaseEntity *pTarget, CNPC_VWerewolfVec3 v, CNPC_VWerewolfVec3 *pCache, int *pLocal);	// called through the stub at 0x100041d3
	bool sub_103d8550(void *pHint);	// "CNPC_VWerewolf::IsValidBreakHint": scope trace (entity name), false for no hint or a hint that sub_102d14c0 rejects, else true when the hint type at +0x5dc is 0x3aa3
	bool sub_103d6000(void *pHint);	// "CNPC_VWerewolf::SetHintActivity": scope trace (entity name); false for no hint, else positions at the hint and sets the activity picked from the hint type at +0x5dc (sub_10289ee0), false for an unknown type
	void sub_10289ee0(int activity);	// stub 0x10014524, called directly
	void sub_103d6280(void *pHint);	// "CNPC_VWerewolf::PositionAtHint": scope trace (entity name), unless pHint is null: builds the hint's position (sub_103d6770) and sets the origin (slot 62), angles (slot 216) and the ground-entity-like slot 218 from the hint's slot 219, then sub_100b3b00()
	CNPC_VWerewolfVec3 *sub_103d6770(CNPC_VWerewolfVec3 *pOut, void *pHint);	// "CNPC_VWerewolf::GetHintGroundpoint" (stub 0x100024ff): scope trace (entity name); the stored position (3 floats at +8) of the 0x48-byte record at +0x6714 (count at +0x6720) whose key at +4 is pHint, else a DevWarning and the ground point of the hint's absolute origin (sub_103d6a40); returns pOut
	CNPC_VWerewolfVec3 *sub_103d68d0(CNPC_VWerewolfVec3 *pOut, void *pHint);	// "CNPC_VWerewolf::GetHintTargetGroundpoint": like GetHintGroundpoint but the stored position is at +0x14 of the record and the fallback uses the hint's end point (sub_103d6650)
	void sub_103d6a40(CNPC_VWerewolfVec3 *pOut, CNPC_VWerewolfVec3 vOrigin);	// "CNPC_VWerewolf::GetGroundpoint" (stub 0x10002199): traces down from the origin and writes the ground point into pOut
	void sub_100b3b00();	// CBaseEntity::sub_100b3b00 (stub 0x1001514a), called directly
	CNPC_VWerewolfVec3 sub_103d6650(void *pHint);	// "CNPC_VWerewolf::GetHintEndpoint": scope trace (entity name), the zero vector for no hint, else the absolute origin (slot 217) of the hint's entity
	CBaseEntity *sub_103d6390(void *pHint);	// the entity of a hint (stub 0x10008094)
	float sub_103d7210(CBaseEntity *pHint);	// "CNPC_VWerewolf::GetForwardYawFor": scope trace (entity name); the yaw of the direction from the forward hint (sub_103d7090) to the hint's entity, shifted by a constant for the hint types 0x3a9a / 0x3a9d (+) and 0x3a9b / 0x3a9e (-), the hint's own yaw for 0x3aa3 / 0x3aa5, wrapped into 0..360
	void *sub_103d0ad0();	// "CNPC_VWerewolf::GetNearestNode"-like: the nearest AI node, cached in +0x66fc for the time stamp at +0x66f8; recomputed through the helper's node net (stub 0x1000827e) from the origin (slot 220)
	void *sub_103d6520(void *pHint);	// "CNPC_VWerewolf::FindHintEndEntity": scope trace (entity name), follows the hint chain: the hint's target name (+0x468) is looked up (dynamic_cast to CAI_Hint) and, when that has a target name too, its entity is returned, else the hint itself
	void vfunc491();	// slot 491 "CNPC_VWerewolf::ExertHvySound...": scope trace (entity name), plays the sound index of the "Pain" record of the global sound table 0x1073dc28 (looked up once into a function-local static) on this entity (channel 2, volume 1.0)
	const char *vfunc408(int condition);	// slot 408 "CNPC_VWerewolf::GetShortConditionName"-like: scope trace (entity name), "ww0".."ww4" for the conditions 0x77..0x7b, else the CAI_BaseNPC implementation
	const char *sub_1027ede0(int condition);	// CAI_BaseNPC::vfunc408 (stub 0x10011590), called directly
	int vfunc440(int schedule);	// slot 440 "CNPC_VWerewolf::TranslateSchedule": scope trace (entity name), schedules 0x43 / 0xb7 / 0xf0 become 0x15c / 0x157 / 0xb1 (recording the source file and line in the fields at +0x1b30 / +0x1b34), everything else goes to CAI_BaseNPCTroika::vfunc440
	int sub_102b12f0(int schedule);	// CAI_BaseNPCTroika::vfunc440 (stub 0x10001997), called directly
	void vfunc435(int arg);	// slot 435 "CNPC_VWerewolf::OnScheduleChange": scope trace (entity name), the base implementation, then drops the oldest entry of the history at +0x668c once it holds more than 50 and appends arg
	bool vfunc617(CNPC_VWerewolfVec3 a, int b, int c, CNPC_VWerewolfVec3 d);	// slot 617 "CNPC_VWerewolf::EnemyCouldSeeHull...": scope trace (entity name); false while the global at 0x1093d694 answers slot 1 false with its field +0x2c set, or when the target (slot 167) answers slot 158 false; else CNPC_VBaseBoss::vfunc617
	bool sub_10366510(CNPC_VWerewolfVec3 a, int b, int c, CNPC_VWerewolfVec3 d);	// CNPC_VBaseBoss::vfunc617 (stub 0x10007cd4), called directly
	const char *sub_103ceb60(void *pHint);	// "CNPC_VWerewolf::HintTypeName": "<HINT_WEREWOLF_...> (<debug name of the hint>)" formatted into a global 0x40 byte buffer (0x1093d4a0) from the hint type at +0x5dc (0x3a98..0x3aaa, else HINT_UNKNOWN); returns the buffer
	void sub_103d9f90();	// "CNPC_VWerewolf::SnapToAnimationPoint": scope trace (entity name), sub_1008eec0("Bip01", 1, 1), sub_10273180(0), then copies the global vector at 0x1070d1b0 to +0x66dc, clears the byte at +0x66a8 and sets the dwords at +0x6708 / +0x670c to -1
	void sub_1008eec0(const char *pszName, int a, int b);	// CBaseAnimating member (stub 0x1000577c), called directly
	void sub_10273180(int a);	// CAI_BaseNPC member (stub 0x10013b97), called directly
	void sub_103cade0();	// finds the doors of the level: calls slot 251 on every "trigger_werewolf_zone", then stores the handles of the func_movelinear entities named "rotdoor1" / "rotdoor2" (-1 when missing) at +0x6684 / +0x6688
	void vfunc103();	// slot 103 "CNPC_VWerewolf::Spawn": scope trace (entity name), the model name pointer at +0x10e4 (the global "Werewolf" text unless empty), CAI_BaseNPCTroika::vfunc103, entity flag 0x2000, then resets a few fields and the collision property
	void sub_10298d30();	// CAI_BaseNPCTroika::vfunc103 (stub 0x1000303a), called directly
	void sub_100b3580(unsigned int flags);	// CBaseEntity::AddFlag (stub 0x10003620), called directly
	void sub_100b3900(unsigned int flags);	// CBaseEntity::RemoveFlag2 (stub 0x1000df44), called directly
	void sub_100b3840(unsigned int flags);	// CBaseEntity::AddFlag2 (stub 0x100027bb), called directly
	void vfunc561(int a, int b);	// slot 561 "CNPC_VWerewolf::GatherAttackConditions": scope trace (entity name); when the attack state bits (+0x66e8: 4 or 0x100) are set and the target (slot 167) is more than 40 units above or below this entity (slot 217 heights) sets conditions 0x51 and 0x52 and stops, else the CAI_BaseNPC implementation
	void sub_1026dd10(int a, int b);	// CAI_BaseNPC::vfunc561 (stub 0x1000ca4f), called directly
	bool sub_103d2810(void *pHint);	// "CNPC_VWerewolf::IsImperativeRandomMoveHint": scope trace (entity name); for a hint of type 0x3aa8 whose time check against the global at 0x1093d574 passes and that slot 617 / HasPath accept, true; else sub_103d2070(pHint)
	bool sub_103d2070(void *pHint);	// the fallback of sub_103d2810 (stub 0x10005911)
	bool sub_103d3360(void *pHint);	// stub 0x100137dc: the hint test of the mode 3 (run by sub_103cb4b0)
	bool sub_103d8060(void *pHint);	// stub 0x100143bc: the hint test of the mode 4
	bool sub_103d7dc0(void *pHint);	// stub 0x10010424: the hint test of the mode 5
	bool sub_103d8300(void *pHint);	// stub 0x10013796: the hint test of the mode 6
	int sub_103d5590(void *pHint);	// stub 0x10015d7a: adds the hint as pathable
	void sub_103d7710();	// stub 0x100034a4, called directly by NPCThink
	void sub_103d93b0();	// stub 0x1000e93a, called directly by NPCThink
	void sub_10292de0();	// CAI_BaseNPCTroika::vfunc431 (stub 0x10002a7c), called directly
	void vfunc431();	// slot 431 "CNPC_VWerewolf::NPCThink"
	void sub_103cb4b0();	// walks the global hint list (0x10925450, next at +0x5d8) and, by the mode of the global object at 0x1093f95c (0 while its slot 1 is true, else the dword at +0x2c; modes 1..6 pick one of sub_103d2070 / sub_103d2810 / sub_103d3360 / sub_103d8060 / sub_103d7dc0 / sub_103d8300), runs sub_103d5590 on every hint the test accepts
	bool sub_103d8300(CAI_Hint *pHint);	// "CNPC_VWerewolf::IsValidTeleportHint": scope trace (entity name), false for no hint, when the attack state bit 4 of +0x66e8 is set, for a locked hint (CAI_Hint::sub_102d14c0), when slot 566 refuses the hint, for the hint types 0x3aa3..0x3aa8, for a hint of kind 1 at +0x470 while bit 6 of +0x66e8 is set, or when the hint's end entity (sub_103d6390) is unselectable (CBaseEntity::sub_100b5190); else true
	void sub_103cc450();	// "CNPC_VWerewolf::UpdateConditionShouldBreakHint": scope trace (entity name), SetCondition(0x7b); the break hint handle at +0x66c4 is dropped unless bit 1 of the attack state (+0x66e8) is set; with a valid break hint (sub_103d8550) and HasPath from this entity's origin (slot 217) to the hint's ground point it signals the object behind the global 0x10924a6c (slot 1) and sets condition 0x7b again (sub_10269a20)
	void vfunc448(int failcode);	// slot 448 "CNPC_VWerewolf::TaskFail": scope trace (entity name); for the three schedules 0x160..0x162 warns about the failed task and the hints, then clears move / teleport hints and resets state
	int *sub_1028a150();	// CAI_BaseNPC::sub_1028a150 (the current task record of the current schedule or null), called directly
	void *sub_102cc1f0(int type);	// CAI_BaseNPC::GetScheduleOfType (stub 0x10014f6a), called directly
	void sub_1029adb0(int failcode);	// CAI_BaseNPCTroika::vfunc448 (stub 0x100054bb), called directly
	void sub_103cb920(int a);	// stub 0x1000... member, called directly
	void sub_102998c0(int a);	// CAI_BaseNPCTroika::vfunc130 (stub 0x10002b99), called directly
	void sub_103cac20();	// the NPC init: SetSchedule-like sub_10279a50(0), resets the move / hint state (+0x628c, +0x66a1..+0x6708), stamps the current time at +0x66ec / +0x66f4 and adds the hull's half diagonal (from its mins / maxs, sub_102d6100 / sub_102d6120) and a constant square root to the totals at +0x66cc / +0x66d0
	void sub_10279a50(int a);	// CAI_BaseNPC member (stub 0x1000b974), called directly
	void sub_10366270();	// CNPC_VBaseBoss::vfunc420 (stub 0x100023dd), called directly
	void sub_10334b10();	// CBaseCombatCharacter::sub_10334b10 (stub 0x1000289c), called directly
	void sub_10332aa0(int a, int b, int c);	// stub 0x10013cf5
	void sub_1026a2a0(float f);	// stub 0x100082ba
	void sub_1028fb70();	// stub 0x1000bd16
	void sub_1026dc00(int flags);	// stub 0x10012855
	void sub_103cc320();	// "CNPC_VWerewolf::UpdateConditionEnemyUnreachable": scope trace (entity name); the unreachable flag (sub_103da0a0) picks which of the conditions 0x59 / 0x79 is set (sub_10015839) and which cleared (sub_10269a20), after signalling the object behind the global 0x10924a6c (slot 1); a newly raised 0x59 without a path (sub_103cfc50) sets the byte at +0x66a9; remembers whether 0x59 is set in the byte at +0x66a8
	char sub_103cfc50();	// stub 0x100112ac
	void vfunc104();	// slot 104 "CNPC_VWerewolf::Precache": scope trace (entity name), the base Precache, the werewolf and observatory sound folders, the VSound group / table of the "Werewolf" model name, the four footstep sounds, the "item_w_werewolf_attacks" weapon and the two teleport sounds
	void sub_10298ad0();	// CAI_BaseNPCTroika::vfunc104 (stub 0x100097b4), called directly
	void sub_103d4820(float x, float y, float z, float flDuration);	// "CNPC_VWerewolf::DrawDebugHullAtPosition": scope trace (entity name); draws the hull box of the hull type at +0x1568 at the position (orange, 100 alpha) and an arrow of the hull's half diagonal length along x
	void sub_103cc0d0();	// "CNPC_VWerewolf::UpdateConditionCanTeleport": scope trace (entity name), SetCondition(0x77); with slot 163 true: the "Bip01" attachment position, slot 617 (near when the distance at +0x6264 is under 800) stamps the time at +0x66ec; sets condition 0x77 again after the idle time passes the dev-flag threshold and the hull totals fit
	void sub_10092610(const char *pszName, CNPC_VWerewolfVec3 *pOrigin, void *pAngles);	// CBaseAnimating member (stub 0x1000f263), called directly
	void sub_103ca7c0();	// the destructor body (called by vfunc5 at 0x103ca790, which is the scalar deleting destructor): vptrs (+0 CNPC_VWerewolf::vftable 0x104cf4d4, +0x19b0 secondary 0x104cf4a4), scope trace "CNPC_VWerewolf::~CNPC_VWerewolf" (entity name m_name26c or ""), a ConVar-like static at 0x1093f738 reset (sub_10246160(0), after the byte 0x1093fac4 = 0) inside the scope, then the members in reverse order: the COutputEvents at +0x6788 +0x6770 +0x6758 +0x6740 +0x6728 (sub_100cd2d0 each), the CUtlVector<CHintData_WW> at +0x6714 (size loop: each 0x48 byte element destructed through the stub 0x10010c17 -> 0x103dc5b0 with argument 0, size = 0, CUtlMemory Purge 0x10003c42 = UtlMem::sub_103dc220, then Plat_Free of the memory when the grow size (+0x671c) is not -1), the CUtlVector<int> history at +0x668c and the CUtlVector<timer> at +0x665c (Purge twice each: size = 0, Plat_Free), then a tail jump to the base destructor sub_1028d610 (stub 0x100123af)
	void sub_103cc890();	// "CNPC_VWerewolf::UpdateConditionDeathTriggered": scope trace (entity name), SetCondition(0x7a); with the state +0xfec == 0x11d and the door state +0x6680 == 1 and no condition 0x7a yet: tells the slot 167 entity to sub_10265a90 and hands it to the holder at +0x6728 (sub_100cd660(ent, this, 0)), then signals the object behind the global 0x10924a6c (slot 1) and sets condition 0x7a (sub_10269a20)
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5_slot();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68_slot();
	virtual void vfunc69_slot();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	virtual datamap_t * vfunc82();
	virtual void vfunc83();
	virtual void vfunc84();
	virtual void vfunc85();
	virtual void vfunc86();
	virtual void vfunc87();
	virtual void vfunc88();
	virtual void vfunc89();
	virtual void vfunc90();
	virtual void vfunc91();
	virtual void vfunc92();
	virtual void vfunc93();
	virtual void vfunc94();
	virtual void vfunc95();
	virtual void vfunc96();
	virtual void vfunc97();
	virtual void vfunc98();
	virtual void vfunc99();
	virtual void vfunc100();
	virtual void vfunc101();
	virtual void vfunc102();
	virtual void vfunc103_slot();
	virtual void vfunc104_slot();
	virtual void vfunc105();
	virtual void vfunc106();
	virtual void vfunc107();
	virtual void vfunc108();
	virtual void vfunc109();
	virtual void vfunc110();
	virtual void vfunc111();
	virtual void vfunc112();
	virtual void vfunc113_slot();
	virtual void vfunc114();
	virtual void vfunc115();
	virtual void vfunc116();
	virtual void vfunc117();
	virtual void vfunc118();
	virtual void vfunc119();
	virtual void vfunc120();
	virtual void vfunc121();
	virtual void vfunc122();
	virtual void vfunc123();
	virtual void vfunc124();
	virtual void vfunc125();
	virtual void vfunc126();
	virtual void vfunc127();
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130(int a);
	virtual void vfunc131();
	virtual void vfunc132();
	virtual void vfunc133();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
	virtual void vfunc139();
	virtual void vfunc140();
	virtual void vfunc141_slot();
	virtual void vfunc142_slot();
	virtual void vfunc143();
	virtual void vfunc144();
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual void vfunc153();
	virtual void vfunc154();
	virtual void vfunc155();
	virtual void vfunc156();
	virtual void vfunc157();
	virtual void vfunc158();
	virtual void vfunc159();
	virtual void vfunc160();
	virtual void vfunc161();
	virtual void vfunc162();
	virtual bool vfunc163();
	virtual void vfunc164();
	virtual void vfunc165();
	virtual void vfunc166();
	virtual CBaseEntity *vfunc167();
	virtual void vfunc168();
	virtual void vfunc169();
	virtual void vfunc170();
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173();
	virtual void vfunc174();
	virtual void vfunc175();
	virtual void vfunc176();
	virtual void vfunc177();
	virtual void vfunc178();
	virtual void vfunc179();
	virtual void vfunc180();
	virtual void vfunc181();
	virtual void vfunc182();
	virtual void vfunc183();
	virtual void vfunc184();
	virtual void vfunc185();
	virtual void vfunc186();
	virtual void vfunc187();
	virtual void vfunc188();
	virtual void vfunc189();
	virtual void vfunc190();
	virtual void vfunc191();
	virtual Vector vfunc192();	// slot 192 (+0x300): a Vector by value (hidden result pointer), the origin used for the footstep sounds
	virtual void vfunc193();
	virtual void vfunc194();
	virtual void vfunc195();
	virtual void vfunc196();
	virtual void vfunc197();
	virtual void vfunc198();
	virtual void vfunc199();
	virtual void vfunc200();
	virtual void vfunc201_slot();
	virtual void vfunc202();
	virtual void vfunc203();
	virtual void vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual void vfunc207();
	virtual void vfunc208();
	virtual void vfunc209();
	virtual void vfunc210();
	virtual void vfunc211();
	virtual void vfunc212();
	virtual void vfunc213();
	virtual void vfunc214();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual CNPC_VWerewolfVec3 *vfunc217();
	virtual void vfunc218();
	virtual void vfunc219();
	virtual void vfunc220();
	virtual void vfunc221();
	virtual void vfunc222();
	virtual void vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226();
	virtual void vfunc227();
	virtual void vfunc228();
	virtual void vfunc229();
	virtual void vfunc230();
	virtual void vfunc231();
	virtual void vfunc232();
	virtual void vfunc233();
	virtual void vfunc234();
	virtual void vfunc235();
	virtual void vfunc236();
	virtual void vfunc237();
	virtual void vfunc238();
	virtual void vfunc239();
	virtual void vfunc240();
	virtual void vfunc241();
	virtual void vfunc242();
	virtual void vfunc243();
	virtual void vfunc244();
	virtual void vfunc245();
	virtual void vfunc246();
	virtual void vfunc247();
	virtual void vfunc248();
	virtual void vfunc249();
	virtual void vfunc250();
	virtual void vfunc251();
	virtual void vfunc252();
	virtual void vfunc253();
	virtual void vfunc254();
	virtual void vfunc255();
	virtual void vfunc256();
	virtual void vfunc257();
	virtual void vfunc258();
	virtual void vfunc259_slot();
	virtual void vfunc260();
	virtual void vfunc261();
	virtual void vfunc262();
	virtual void vfunc263();
	virtual void vfunc264();
	virtual void vfunc265();
	virtual void vfunc266();
	virtual void vfunc267();
	virtual void vfunc268();
	virtual void vfunc269();
	virtual void vfunc270();
	virtual void vfunc271();
	virtual void vfunc272();
	virtual void vfunc273();
	virtual void vfunc274();
	virtual void vfunc275();
	virtual void vfunc276();
	virtual void vfunc277();
	virtual void vfunc278();
	virtual void vfunc279();
	virtual void vfunc280();
	virtual void vfunc281();
	virtual void vfunc282();
	virtual void vfunc283();
	virtual void vfunc284();
	virtual void vfunc285();
	virtual void vfunc286();
	virtual void vfunc287();
	virtual void vfunc288();
	virtual void vfunc289();
	virtual void vfunc290();
	virtual void vfunc291();
	virtual void vfunc292();
	virtual void vfunc293();
	virtual void vfunc294();
	virtual void vfunc295();
	virtual void vfunc296();
	virtual void vfunc297();
	virtual void vfunc298();
	virtual void vfunc299();
	virtual void vfunc300();
	virtual void vfunc301();
	virtual void vfunc302();
	virtual void vfunc303();
	virtual void vfunc304();
	virtual void vfunc305();
	virtual void vfunc306();
	virtual void vfunc307();
	virtual void vfunc308();
	virtual void vfunc309();
	virtual void vfunc310();
	virtual void vfunc311();
	virtual void vfunc312();
	virtual void vfunc313();
	virtual void vfunc314();
	virtual void vfunc315();
	virtual void vfunc316(int, int, int);
	virtual void vfunc317();
	virtual bool vfunc318(int, int, int);
	virtual bool vfunc319(int, int, int);
	virtual void vfunc320();
	virtual void vfunc321();
	virtual void vfunc322();
	virtual void vfunc323();
	virtual void vfunc324();
	virtual void vfunc325();
	virtual void vfunc326();
	virtual void vfunc327();
	virtual bool vfunc328();
	virtual void vfunc329();
	virtual void vfunc330();
	virtual void vfunc331();
	virtual void vfunc332();
	virtual void vfunc333();
	virtual void vfunc334();
	virtual void vfunc335();
	virtual void vfunc336();
	virtual void vfunc337();
	virtual void vfunc338();
	virtual void vfunc339();
	virtual void vfunc340();
	virtual void vfunc341();
	virtual void vfunc342();
	virtual void vfunc343();
	virtual void vfunc344();
	virtual void vfunc345();
	virtual void vfunc346();
	virtual void vfunc347();
	virtual void vfunc348();
	virtual void vfunc349();
	virtual void vfunc350();
	virtual void vfunc351();
	virtual void vfunc352();
	virtual void vfunc353();
	virtual void vfunc354();
	virtual void vfunc355();
	virtual void vfunc356();
	virtual void vfunc357();
	virtual void vfunc358();
	virtual void vfunc359();
	virtual void vfunc360();
	virtual void vfunc361();
	virtual void vfunc362();
	virtual void vfunc363();
	virtual void vfunc364();
	virtual void vfunc365();
	virtual void vfunc366();
	virtual void vfunc367();
	virtual void vfunc368();
	virtual void vfunc369();
	virtual void vfunc370();
	virtual void vfunc371();
	virtual void vfunc372();
	virtual void vfunc373();
	virtual void vfunc374();
	virtual void vfunc375();
	virtual void vfunc376();
	virtual void vfunc377();
	virtual void vfunc378();
	virtual void vfunc379();
	virtual void vfunc380();
	virtual void vfunc381();
	virtual void vfunc382();
	virtual void vfunc383();
	virtual void vfunc384();
	virtual void vfunc385();
	virtual void vfunc386();
	virtual void vfunc387();
	virtual void vfunc388();
	virtual void vfunc389();
	virtual void vfunc390();
	virtual void vfunc391();
	virtual void vfunc392();
	virtual void vfunc393();
	virtual void vfunc394();
	virtual void vfunc395();
	virtual void vfunc396();
	virtual void vfunc397();
	virtual void vfunc398();
	virtual void vfunc399();
	virtual void vfunc400();
	virtual void vfunc401();
	virtual void vfunc402();
	virtual void vfunc403();
	virtual void vfunc404();
	virtual void vfunc405();
	virtual void vfunc406();
	virtual void vfunc407();
	virtual void vfunc408_slot();
	virtual void vfunc409();
	virtual void vfunc410();
	virtual void vfunc411();
	virtual void vfunc412();
	virtual void vfunc413();
	virtual void vfunc414();
	virtual void vfunc415();
	virtual void vfunc416();
	virtual void vfunc417();
	virtual void vfunc418();
	virtual void vfunc419();
	virtual void vfunc420();
	virtual void vfunc421_slot();
	virtual void vfunc422();
	virtual void vfunc423();
	virtual void vfunc424();
	virtual void vfunc425();
	virtual void vfunc426();
	virtual void vfunc427();
	virtual void vfunc428();
	virtual void vfunc429();
	virtual void vfunc430();
	virtual void vfunc431_slot();
	virtual void vfunc432();
	virtual void vfunc433();
	virtual void vfunc434();
	virtual void vfunc435_slot();
	virtual void vfunc436();
	virtual void vfunc437();
	virtual void vfunc438();
	virtual void vfunc439();
	virtual void vfunc440_slot();
	virtual void vfunc441();
	virtual void vfunc442();
	virtual void vfunc443();
	virtual void vfunc444();
	virtual void vfunc445();
	virtual void vfunc446();
	virtual void vfunc447();
	virtual void vfunc448_slot();
	virtual void vfunc449();
	virtual void vfunc450();
	virtual int vfunc451();
	virtual bool vfunc452();
	virtual void vfunc453();
	virtual void vfunc454();
	virtual void vfunc455();
	virtual void vfunc456();
	virtual void vfunc457();
	virtual void vfunc458();
	virtual void vfunc459();
	virtual void vfunc460();
	virtual void vfunc461_slot();
	virtual void vfunc462();
	virtual void vfunc463();
	virtual void vfunc464();
	virtual void vfunc465_slot();
	virtual void vfunc466();
	virtual void vfunc467();
	virtual void vfunc468();
	virtual void vfunc469();
	virtual void vfunc470();
	virtual void vfunc471();
	virtual void vfunc472();
	virtual void vfunc473();
	virtual void vfunc474();
	virtual void vfunc475();
	virtual void vfunc476();
	virtual void vfunc477();
	virtual void vfunc478();
	virtual void vfunc479();
	virtual void vfunc480();
	virtual void vfunc481();
	virtual void vfunc482();
	virtual void vfunc483();
	virtual void vfunc484();
	virtual void vfunc485();
	virtual void vfunc486();
	virtual void vfunc487();
	virtual void vfunc488();
	virtual void vfunc489();
	virtual void vfunc490();
	virtual void vfunc491_slot();
	virtual void vfunc492();
	virtual void vfunc493();
	virtual void vfunc494();
	virtual void vfunc495();
	virtual void vfunc496();
	virtual void vfunc497();
	virtual void vfunc498();
	virtual void vfunc499();
	virtual void vfunc500();
	virtual void vfunc501();
	virtual void vfunc502();
	virtual void vfunc503();
	virtual void vfunc504();
	virtual void vfunc505();
	virtual void vfunc506();
	virtual void vfunc507();
	virtual void vfunc508();
	virtual void vfunc509();
	virtual void vfunc510();
	virtual void vfunc511();
	virtual void vfunc512();
	virtual void vfunc513();
	virtual void vfunc514();
	virtual void vfunc515();
	virtual void vfunc516_slot();
	virtual void vfunc517();
	virtual void vfunc518();
	virtual void vfunc519();
	virtual void vfunc520();
	virtual void vfunc521();
	virtual void vfunc522();
	virtual void vfunc523();
	virtual void vfunc524();
	virtual void vfunc525();
	virtual void vfunc526();
	virtual void vfunc527();
	virtual void vfunc528();
	virtual void vfunc529();
	virtual void vfunc530();
	virtual void vfunc531();
	virtual void vfunc532();
	virtual void vfunc533();
	virtual void vfunc534();
	virtual void vfunc535();
	virtual void vfunc536();
	virtual void vfunc537();
	virtual void vfunc538();
	virtual void vfunc539();
	virtual void vfunc540();
	virtual void vfunc541();
	virtual void vfunc542();
	virtual void vfunc543();
	virtual void vfunc544();
	virtual void vfunc545();
	virtual void vfunc546_slot();
	virtual void vfunc547();
	virtual void vfunc548();
	virtual void vfunc549();
	virtual void vfunc550();
	virtual void vfunc551();
	virtual void vfunc552();
	virtual void vfunc553();
	virtual void vfunc554();
	virtual void vfunc555();
	virtual void vfunc556();
	virtual void vfunc557();
	virtual void vfunc558();
	virtual void vfunc559();
	virtual void vfunc560();
	virtual void vfunc561_slot();
	virtual void vfunc562();
	virtual void vfunc563();
	virtual void vfunc564();
	virtual void vfunc565();
	virtual bool vfunc566_slot(void *pHint);
	virtual void vfunc567();
	virtual void vfunc568();
	virtual void vfunc569();
	virtual void vfunc570();
	virtual void vfunc571();
	virtual void vfunc572();
	virtual void vfunc573();
	virtual void vfunc574();
	virtual void vfunc575();
	virtual void vfunc576();
	virtual void vfunc577();
	virtual void vfunc578();
	virtual void vfunc579();
	virtual int vfunc580();
	virtual void vfunc581();
	virtual void vfunc582();
	virtual void vfunc583();
	virtual void vfunc584();
	virtual void vfunc585();
	virtual void vfunc586();
	virtual void vfunc587();
	virtual void vfunc588();
	virtual void vfunc589();
	virtual void vfunc590();
	virtual void vfunc591();
	virtual void vfunc592();
	virtual void vfunc593();
	virtual void vfunc594();
	virtual void vfunc595();
	virtual void vfunc596();
	virtual void vfunc597();
	virtual void vfunc598();
	virtual void vfunc599();
	virtual bool vfunc600(int unused);
	virtual void vfunc601();
	virtual void vfunc602();
	virtual void vfunc603();
	virtual void vfunc604();
	virtual void vfunc605();
	virtual void vfunc606();
	virtual void vfunc607();
	virtual void vfunc608();
	virtual void vfunc609();
	virtual void vfunc610();
	virtual void vfunc611();
	virtual void vfunc612();
	virtual void vfunc613();
	virtual void vfunc614();
	virtual bool vfunc615();
	virtual void vfunc616();
	virtual bool vfunc617_slot(CNPC_VWerewolfVec3 a, int b, int c, CNPC_VWerewolfVec3 d);
	virtual bool vfunc618(int, int, int, int);
	virtual int vfunc619(int);
	char m_pad67a0[0x67a4 - 0x67a0];
};
