// CCineAISchedule (RTTI .?AVCCineAISchedule@@): the AI scripted-sequence schedule entity (CCineAI -> CCineNPC),
// flattened. Only what recovered code needs, as plain members.
#pragma once

class CCineAISchedule
{
public:
	void vfunc103();	// slot 103 override: CCineNPC::vfunc103 (stub 0x1000c711, called directly), then when the dwords at +0x6090 and +0x6094 are both zero, DevMsg(2, "aiscripted_schedule - no schedule or state has been set!")
	void sub_1000c711();	// CCineNPC::vfunc103 called directly (stub 0x1000c711)
	void vfunc583();	// slot 583 "CCineAISchedule::...": when the NPC entity of the handle at +0x5ce4 has its AI object (+0x94) it warns (a block of DevMsg lines naming this sequence and the NPC) if that object's byte at +0x1b4c is clear, runs sub_1026d130 on it unless the byte at +0x5f90 is set, then calls slot 586 with it

	char m_pad0000[0x6090];
	int m_n6090;	// 0x6090
	int m_n6094;	// 0x6094
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
	bool vfunc585();
};
