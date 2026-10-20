// CNPC_VWerewolf: the werewolf NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct inputdata_t;
struct CUnknown101c2a50;
class CBaseEntity;

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

struct CNPC_VWerewolfVec3
{
	float x, y, z;
};

// The object at +0x5d34 (class not known yet).
struct CNPC_VWerewolfHelper5d34
{
	int sub_10004e58(const CNPC_VWerewolfVec3 *pA, const CNPC_VWerewolfVec3 *pB);
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
	char pad6680[0x66b0 - 0x6680];
	CNPC_VWerewolfHint66b0 *m_pHint66b0;	// 0x66b0
	char pad66b4[0x66c8 - 0x66b4];
	char m_b66c8;	// 0x66c8

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
	bool vfunc566(void *pHint);	// "CNPC_VWerewolf::FValidateHintType": scope trace (entity name), true when the hint type at +0x5dc is in 0x3a98..0x3aaa but not 0x3a9f
	int sub_103d3220(void *pHint);	// "CNPC_VWerewolf::GetHintTeleportPriority": scope trace (entity name), maps the hint type at +0x5dc of pHint to a priority (0x3a98 -> 1, 0x3a99 -> 2, 0x3a9a/0x3a9b -> 3, 0x3a9f -> 4, else 0)
	char vfunc69(void *pOther);	// slot 69 "CNPC_VWerewolf::NavIgnoreCollision": scope trace (entity name); true when bit 1/2/4 of the byte at +0x4c of pOther is set or bit 3 of its GetFlags2, else CAI_BaseNPCTroika::sub_1029b180(pOther)
	char sub_1029b180(void *pOther);	// CAI_BaseNPCTroika::sub_1029b180 (stub 0x100014b0), called directly
	void sub_10295a60(const char *msg);
	CNPC_VWerewolf *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10003648();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int sub_103d0db0(CNPC_VWerewolfVec3 a, CNPC_VWerewolfVec3 b);	// scope trace (entity name) "CNPC_VWerewolf::HasPath", forwards both vectors to the helper object at +0x5d34 and returns its result
	void sub_103d4760();	// "CNPC_VWerewolf::ClearTeleportHint": scope trace (entity name), when the hint object at +0x66b0 is set calls its sub_102d1420(0), then clears the pointer
	unsigned int sub_1033c9c0();	// CBaseCombatCharacter::sub_1033c9c0 "GetMiscFlags" (stub 0x1000b672), called directly
	void sub_1033c770(unsigned int flags);	// CBaseCombatCharacter "RemoveMiscFlag" (stub 0x10011531), called directly
	void sub_103cca80();	// slot 305 "CNPC_VWerewolf::RemoveBaseFightingItems": scope trace (entity name), when bit 4 of the misc flags is set removes the "item_w_werewolf_attacks" weapon (sub_1021fee0(this, name)) and clears that bit
	void vfunc141(CUnknown101c2a50 *pInfo, int b, int c);	// slot 141 "CNPC_VWerewolf::TraceAttack": scope trace (entity name), clears the dword at +0x44 of pInfo, then the base implementation
	void sub_10015b13(CUnknown101c2a50 *pInfo, int b, int c);	// CAI_BaseNPC::vfunc141 (stub 0x10015b13), called directly
	void sub_103d45c0(CNPC_VWerewolfHint66b0 *pHint);	// "CNPC_VWerewolf::SetTeleportHint": scope trace (entity name), clears the current hint (sub_103d4760) when set, resets the byte at +0x66c8, stores pHint at +0x66b0
	void *sub_10335950(const char *pszClassname);	// CBaseCombatCharacter "Weapon_OwnsThisType"-like lookup by classname (stub 0x10015195), called directly
	void sub_1033c6b0(unsigned int flags);	// CBaseCombatCharacter "AddMiscFlag" (stub 0x100153a7), called directly
	void sub_103cc9b0();	// slot 304 "CNPC_VWerewolf::GiveBaseFightingItems": scope trace (entity name), when the character does not own "item_w_werewolf_attacks" gives it (sub_1021fe50(this, name, 0)) and sets misc flag bit 4
	CNPC_VWerewolfVec3 sub_103d9c90();	// returns the cached vector (+0x6674), recomputed through sub_102c3b50 from the target entity (slot 167) when the engine tick (global 0x1070b22c, slot 120) changed
	void sub_102c3b50(CBaseEntity *pTarget, CNPC_VWerewolfVec3 v, CNPC_VWerewolfVec3 *pCache, int *pLocal);	// called through the stub at 0x100041d3
};
