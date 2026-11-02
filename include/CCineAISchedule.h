// CCineAISchedule (RTTI .?AVCCineAISchedule@@): the AI scripted-sequence schedule entity (CCineAI -> CCineNPC),
// flattened. Only what recovered code needs, as plain members.
#pragma once

struct datamap_t;
class CAI_BaseNPC;

class CCineAISchedule
{
public:
	void vfunc103();	// slot 103 override: CCineNPC::vfunc103 (stub 0x1000c711, called directly), then when the dwords at +0x6090 and +0x6094 are both zero, DevMsg(2, "aiscripted_schedule - no schedule or state has been set!")
	void sub_1000c711();	// CCineNPC::vfunc103 called directly (stub 0x1000c711)
	void vfunc583();	// slot 583 "CCineAISchedule::...": when the NPC entity of the handle at +0x5ce4 has its AI object (+0x94) it warns (a block of DevMsg lines naming this sequence and the NPC) if that object's byte at +0x1b4c is clear, runs sub_1026d130 on it unless the byte at +0x5f90 is set, then calls slot 586 with it
	void vfunc586(CAI_BaseNPC *pNPC);	// slot 586 (ret 4): finds the goal entity named at +0x608c (g_106eb5d8->sub_100f7f20(0, name or g_106b8540 when null, this, 0)); none: DevMsg(1, "Can't find goal entity %s\nCan't execute script %s", name, GetDebugName()); else the state at +0x6094 (1/2/3) goes to pNPC->sub_1026e340 (1/3/2), then the action at +0x6090 (1/2: sub_102800c0 move to the goal, 3: goto goal with slot 544, 4/5: sub_102801e0 follow path; DevMsg on failure unless flag 0x800 of +0x204)
	const char *sub_1000b5cd();	// CBaseEntity::GetDebugName (stub 0x1000b5cd -> 0x100ab4f0), this in ecx, returns const char *

	char m_pad0000[0x204];
	unsigned int m_flags204;	// 0x204: entity flags (bit 11 = 0x800 tested after a failed move)
	char m_pad0208[0x608c - 0x208];
	const char *m_pszGoalName608c;	// 0x608c: name of the goal entity, null when not set (the empty global string at 0x106b8540 stands in)
	int m_n6090;	// 0x6090: action (1/2 move to goal, 3 goto, 4/5 follow path)
	int m_n6094;	// 0x6094: state to put the NPC in (1/2/3)
public:
	datamap_t * vfunc82();
	bool vfunc585();
};
