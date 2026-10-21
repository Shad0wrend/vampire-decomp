// CCineAISchedule (RTTI .?AVCCineAISchedule@@): the AI scripted-sequence schedule entity (CCineAI -> CCineNPC),
// flattened. Only what recovered code needs, as plain members.
#pragma once

class CCineAISchedule
{
public:
	void vfunc583();	// slot 583 "CCineAISchedule::...": when the NPC entity of the handle at +0x5ce4 has its AI object (+0x94) it warns (a block of DevMsg lines naming this sequence and the NPC) if that object's byte at +0x1b4c is clear, runs sub_1026d130 on it unless the byte at +0x5f90 is set, then calls slot 586 with it
};
