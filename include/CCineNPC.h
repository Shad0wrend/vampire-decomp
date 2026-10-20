// CCineNPC: scripted-sequence NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CBaseEntity;

// Element of the three 0x18-byte containers at +0x5f9c, +0x5fb4 and +0x5fcc[8].
struct CCineNPCSlot
{
	int m_data[6];
	void sub_10015708();	// destructor
};

class CCineNPC
{
public:
	virtual bool vfunc585();

	CCineNPC *vfunc5(unsigned int flags);	// deleting destructor
	void sub_1000c9cd();	// base-class destructor body
	char sub_101a8930();	// stub 0x1000c6da: true when the byte at +0x5f90 is set and the entity of the handle at +0x5ce4 resolves and answers slot 158 with true
	void sub_101a8c30();	// "CancelScript"-like (stub 0x1000f187): DevMsg "Cancelling script: %s" (the name at +0x5f48), then cancels the scripted sequence entities of this entity's name
	void sub_101a77a0(void *pNpc);	// warns (DevWarning) that a scripted sequence (this) was asked to play on a ScriptHidden NPC (pNpc), after setting the byte at +0x5d78 of pNpc
	char sub_101a8ac0();	// stub 0x1000e6a6: asked of the scripted sequence entity by CAI_BaseNPC::sub_10278090; true lets the NPC take part
	void *sub_101a7600();	// finds the NPC to play the script: walks the entities named like this one (name at +0x5f54, search start at +0x5f98) and returns the first NPC (object at +0x94) that accepts (slot 482 == 1), else the last one that accepts as a fallback (== 2), else null; Msg "Found %s, but can't play!" for the others unless flag bit 11 of +0x204 is set

	char m_pad0004[0x204 - 4];
	unsigned int m_flags204;	// 0x204
	char m_pad0208[0x5f54 - 0x208];
	const char *m_pszTarget5f54;	// 0x5f54: the name of the NPC the script plays on
	char m_pad5f58[0x5f68 - 0x5f58];
	int m_n5f68;	// 0x5f68
	char m_pad5f6c[0x5f98 - 0x5f6c];
	CBaseEntity *m_pSearchStart5f98;	// 0x5f98: where the name search resumes
	CCineNPCSlot m_slotA;	// 0x5f9c
	CCineNPCSlot m_slotB;	// 0x5fb4
	CCineNPCSlot m_slots[8];	// 0x5fcc
};
