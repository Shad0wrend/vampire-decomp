// CNPC_VWerewolf: the werewolf NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

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
	virtual bool vfunc600(int unused);

	char pad04[0x268];
	const char *m_name26c;
	char pad270[0x5c38 - 0x270];
	CNPC_VWerewolfSchedule *m_pSchedule5c38;	// 0x5c38
	char pad5c3c[0x5d34 - 0x5c3c];
	CNPC_VWerewolfHelper5d34 *m_pHelper5d34;	// 0x5d34
	char pad5d38[0x6264 - 0x5d38];
	float m_f6264;	// 0x6264
	char pad6268[0x665c - 0x6268];
	CNPC_VWerewolfTimerVec m_Timers;	// 0x665c
	int m_nCacheTick;	// 0x6670: engine tick of the cached vector
	CNPC_VWerewolfVec3 m_vCache;	// 0x6674: cached vector
	int m_nDoorState;	// 0x6680
	unsigned int m_hRotDoor1;	// 0x6684: entity handle of the func_movelinear "rotdoor1"
	unsigned int m_hRotDoor2;	// 0x6688: entity handle of the func_movelinear "rotdoor2"
	CNPC_VWerewolfIntVec m_History;	// 0x668c
	char pad66a0;
	char m_b66a1;	// 0x66a1
	char pad66a2[2];
	int m_n66a4;	// 0x66a4

	char m_b66a8;	// 0x66a8
	char m_b66a9;	// 0x66a9
	char pad66aa[0x66b0 - 0x66aa];
	CNPC_VWerewolfHint66b0 *m_pHint66b0;	// 0x66b0
	char pad66b4[0x66bc - 0x66b4];
	CNPC_VWerewolfHint66b0 *m_pHint66bc;	// 0x66bc: the move hint
	char pad66c0[4];
	CNPC_VWerewolfHint66b0 *m_pHint66c4;	// 0x66c4: the break hint
	char m_b66c8;	// 0x66c8
	char pad66c9[0x66cc - 0x66c9];
	float m_f66cc;	// 0x66cc
	float m_f66d0;	// 0x66d0
	char pad66d4[0x66dc - 0x66d4];
	CNPC_VWerewolfVec3 m_vSnap66dc;	// 0x66dc: set from the global vector at 0x1070d1b0 by SnapToAnimationPoint
	unsigned int m_nFlags66e8;	// 0x66e8: attack state bits (4 and 0x100 make GatherAttackConditions compare heights)
	float m_flTeleport66ec;	// 0x66ec
	char pad66f0[0x66f8 - 0x66f0];
	float m_flNodeTime;	// 0x66f8: time stamp of the cached node
	void *m_pNode;	// 0x66fc: cached nearest node
	char pad6700[0x6708 - 0x6700];
	int m_n6708;	// 0x6708
	int m_n670c;	// 0x670c

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
	void sub_103cb4b0();	// walks the global hint list (0x10925450, next at +0x5d8) and, by the mode of the global object at 0x1093f95c (0 while its slot 1 is true, else the dword at +0x2c; modes 1..6 pick one of sub_103d2070 / sub_103d2810 / sub_103d3360 / sub_103d8060 / sub_103d7dc0 / sub_103d8300), runs sub_103d5590 on every hint the test accepts
	bool sub_103d8300(CAI_Hint *pHint);	// "CNPC_VWerewolf::IsValidTeleportHint": scope trace (entity name), false for no hint, when the attack state bit 4 of +0x66e8 is set, for a locked hint (CAI_Hint::sub_102d14c0), when slot 566 refuses the hint, for the hint types 0x3aa3..0x3aa8, for a hint of kind 1 at +0x470 while bit 6 of +0x66e8 is set, or when the hint's end entity (sub_103d6390) is unselectable (CBaseEntity::sub_100b5190); else true
	void sub_103cc450();	// "CNPC_VWerewolf::UpdateConditionShouldBreakHint": scope trace (entity name), SetCondition(0x7b); the break hint handle at +0x66c4 is dropped unless bit 1 of the attack state (+0x66e8) is set; with a valid break hint (sub_103d8550) and HasPath from this entity's origin (slot 217) to the hint's ground point it signals the object behind the global 0x10924a6c (slot 1) and sets condition 0x7b again (sub_10269a20)
	void vfunc448(int failcode);	// slot 448 "CNPC_VWerewolf::TaskFail": scope trace (entity name); for the three schedules 0x160..0x162 warns about the failed task and the hints, then clears move / teleport hints and resets state
	int *sub_1028a150();	// CAI_BaseNPC::sub_1028a150 (the current task record of the current schedule or null), called directly
	void *sub_102cc1f0(int type);	// CAI_BaseNPC::GetScheduleOfType (stub 0x10014f6a), called directly
	void sub_1029adb0(int failcode);	// CAI_BaseNPCTroika::vfunc448 (stub 0x100054bb), called directly
	void sub_103cb920(int a);	// stub 0x1000... member, called directly
	void sub_103cac20();	// the NPC init: SetSchedule-like sub_10279a50(0), resets the move / hint state (+0x628c, +0x66a1..+0x6708), stamps the current time at +0x66ec / +0x66f4 and adds the hull's half diagonal (from its mins / maxs, sub_102d6100 / sub_102d6120) and a constant square root to the totals at +0x66cc / +0x66d0
	void sub_10279a50(int a);	// CAI_BaseNPC member (stub 0x1000b974), called directly
	void sub_103cc320();	// "CNPC_VWerewolf::UpdateConditionEnemyUnreachable": scope trace (entity name); the unreachable flag (sub_103da0a0) picks which of the conditions 0x59 / 0x79 is set (sub_10015839) and which cleared (sub_10269a20), after signalling the object behind the global 0x10924a6c (slot 1); a newly raised 0x59 without a path (sub_103cfc50) sets the byte at +0x66a9; remembers whether 0x59 is set in the byte at +0x66a8
	char sub_103cfc50();	// stub 0x100112ac
	void vfunc104();	// slot 104 "CNPC_VWerewolf::Precache": scope trace (entity name), the base Precache, the werewolf and observatory sound folders, the VSound group / table of the "Werewolf" model name, the four footstep sounds, the "item_w_werewolf_attacks" weapon and the two teleport sounds
	void sub_10298ad0();	// CAI_BaseNPCTroika::vfunc104 (stub 0x100097b4), called directly
	void sub_103d4820(float x, float y, float z, float flDuration);	// "CNPC_VWerewolf::DrawDebugHullAtPosition": scope trace (entity name); draws the hull box of the hull type at +0x1568 at the position (orange, 100 alpha) and an arrow of the hull's half diagonal length along x
	void sub_103cc0d0();	// "CNPC_VWerewolf::UpdateConditionCanTeleport": scope trace (entity name), SetCondition(0x77); with slot 163 true: the "Bip01" attachment position, slot 617 (near when the distance at +0x6264 is under 800) stamps the time at +0x66ec; sets condition 0x77 again after the idle time passes the dev-flag threshold and the hull totals fit
	void sub_10092610(const char *pszName, CNPC_VWerewolfVec3 *pOrigin, void *pAngles);	// CBaseAnimating member (stub 0x1000f263), called directly
	void sub_103cc890();	// "CNPC_VWerewolf::UpdateConditionDeathTriggered": scope trace (entity name), SetCondition(0x7a); with the state +0xfec == 0x11d and the door state +0x6680 == 1 and no condition 0x7a yet: tells the slot 167 entity to sub_10265a90 and hands it to the holder at +0x6728 (sub_100cd660(ent, this, 0)), then signals the object behind the global 0x10924a6c (slot 1) and sets condition 0x7a (sub_10269a20)
public:
	virtual void vfunc316(int, int, int);
	virtual bool vfunc328();
	virtual bool vfunc615();
public:
	virtual bool vfunc318(int, int, int);
	virtual bool vfunc319(int, int, int);
	virtual bool vfunc618(int, int, int, int);
public:
	virtual int vfunc619(int);
};
