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

// The hint object at +0x66b0 (class not known yet).
struct CNPC_VWerewolfHint66b0
{
	void sub_102d1420(float delay);	// stub 0x10013d68: clears the dword at +0x5e0 to -1 and stores delay + curtime at +0x5ec
};

class CNPC_VWerewolf
{
public:
	virtual bool vfunc600(int unused);

	char pad04[0x268];
	const char *m_name26c;
	char pad270[0x5d34 - 0x270];
	CNPC_VWerewolfHelper5d34 *m_pHelper5d34;	// 0x5d34
	char pad5d38[0x665c - 0x5d38];
	CNPC_VWerewolfTimerVec m_Timers;	// 0x665c
	int m_nCacheTick;	// 0x6670: engine tick of the cached vector
	CNPC_VWerewolfVec3 m_vCache;	// 0x6674: cached vector
	char pad6680[0x668c - 0x6680];
	CNPC_VWerewolfIntVec m_History;	// 0x668c
	char pad66a0[0x66a8 - 0x66a0];
	char m_b66a8;	// 0x66a8
	char pad66a9[0x66b0 - 0x66a9];
	CNPC_VWerewolfHint66b0 *m_pHint66b0;	// 0x66b0
	char pad66b4[0x66bc - 0x66b4];
	CNPC_VWerewolfHint66b0 *m_pHint66bc;	// 0x66bc: the move hint
	char pad66c0[0x66c8 - 0x66c0];
	char m_b66c8;	// 0x66c8
	char pad66c9[0x66dc - 0x66c9];
	CNPC_VWerewolfVec3 m_vSnap66dc;	// 0x66dc: set from the global vector at 0x1070d1b0 by SnapToAnimationPosition
	char pad66e8[0x66f8 - 0x66e8];
	float m_flNodeTime;	// 0x66f8: time stamp of the cached node
	void *m_pNode;	// 0x66fc: cached nearest node
	char pad6700[0x6708 - 0x6700];
	int m_n6708;	// 0x6708
	int m_n670c;	// 0x670c

	int sub_10366490(int key);
	bool sub_10366400(int key);

	// Slot 421, called directly so far; declared as a plain member.
	void vfunc421();
	bool vfunc201(void *pEnt, int b, int *pOut, int d);	// slot 201 "CNPC_VWerewolf::FVisible": scope trace (entity name); false for no entity; true unless one global flag byte is set or the second one is set and the dword at +0xa8 of pEnt is non-zero, in which case *pOut (when given) is cleared and false returned

	void vfunc113();	// slot 113 "CNPC_VWerewolf::Activate": scope trace (entity name), then CAI_BaseNPCTroika::vfunc113
	void sub_103d1ca0();	// "CNPC_VWerewolf::StartSearchTimer": stores the time stamp counter in a global
	void *sub_103d7620(int key);	// "CNPC_VWerewolf::GetDataForHint": scope trace (entity name), the 0x48-byte record at +0x6714 (count at +0x6720) whose key at +4 equals the argument, or null
	void sub_103d99a0(inputdata_t *pInput);	// "CNPC_VWerewolf::InputToggleDoorState": scope trace (entity name), stores the integer input clamped to 0..3 at +0x6680 (0 when the input is not an integer)
	void vfunc465(const char *msg);	// slot 465, scope-traced wrapper
	void vfunc516();	// slot 516 "CNPC_VWerewolf::MaxYawSpeed": scope trace (entity name), then the base implementation
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
	void sub_10269a20(int condition);	// CAI_BaseNPC condition setter (stub 0x100041b0), called directly
	void sub_10015839(int condition);	// CAI_BaseNPC::sub_10269b50 "SetCondition" (stub 0x10015839), called directly
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
	void sub_103d6770(CNPC_VWerewolfVec3 *pOut, void *pHint);	// stub 0x100024ff: computes the position of a hint into pOut
	void sub_100b3b00();	// CBaseEntity::sub_100b3b00 (stub 0x1001514a), called directly
	CNPC_VWerewolfVec3 sub_103d6650(void *pHint);	// "CNPC_VWerewolf::GetHintEndpoint": scope trace (entity name), the zero vector for no hint, else the absolute origin (slot 217) of the hint's entity
	CBaseEntity *sub_103d6390(void *pHint);	// the entity of a hint (stub 0x10008094)
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
	void sub_103d9f90();	// "CNPC_VWerewolf::SnapToAnimationPosition": scope trace (entity name), sub_1008eec0("Bip01", 1, 1), sub_10273180(0), then copies the global vector at 0x1070d1b0 to +0x66dc, clears the byte at +0x66a8 and sets the dwords at +0x6708 / +0x670c to -1
	void sub_1008eec0(const char *pszName, int a, int b);	// CBaseAnimating member (stub 0x1000577c), called directly
	void sub_10273180(int a);	// CAI_BaseNPC member (stub 0x10013b97), called directly
};
