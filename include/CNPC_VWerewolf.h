// CNPC_VWerewolf: the werewolf NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

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

class CNPC_VWerewolf
{
public:
	virtual bool vfunc600(int unused);

	char pad04[0x268];
	const char *m_name26c;
	char pad270[0x665c - 0x270];
	CNPC_VWerewolfTimerVec m_Timers;	// 0x665c

	int sub_10366490(int key);
	bool sub_10366400(int key);

	// Slot 421, called directly so far; declared as a plain member.
	void vfunc421();
	bool vfunc201(void *pEnt, int b, int *pOut, int d);	// slot 201 "CNPC_VWerewolf::FVisible": scope trace (entity name); false for no entity; true unless one global flag byte is set or the second one is set and the dword at +0xa8 of pEnt is non-zero, in which case *pOut (when given) is cleared and false returned

	void vfunc113();	// slot 113 "CNPC_VWerewolf::Activate": scope trace (entity name), then CAI_BaseNPCTroika::vfunc113
	void sub_103d1ca0();	// "CNPC_VWerewolf::StartSearchTimer": stores the time stamp counter in a global
	void *sub_103d7620(int key);	// "CNPC_VWerewolf::GetDataForHint": scope trace (entity name), the 0x48-byte record at +0x6714 (count at +0x6720) whose key at +4 equals the argument, or null
	void vfunc465(const char *msg);	// slot 465, scope-traced wrapper
	void vfunc516();	// slot 516 "CNPC_VWerewolf::MaxYawSpeed": scope trace (entity name), then the base implementation
	bool vfunc566(void *pHint);	// "CNPC_VWerewolf::FValidateHintType": scope trace (entity name), true when the hint type at +0x5dc is in 0x3a98..0x3aaa but not 0x3a9f
	void sub_10295a60(const char *msg);
	CNPC_VWerewolf *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10003648();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
};
