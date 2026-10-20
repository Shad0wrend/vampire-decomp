// CNPC_VSabbatLeader: Sabbat leader NPC. Only the members that decompiled code needs are declared.
#pragma once

struct CNPC_VSabbatLeaderHint
{
	char pad0[0x5dc];
	int m_hintType;
};

class CNPC_VSabbatLeader
{
public:
	char pad0[0x66c0];
	int m_nFailureType;

	void sub_103a7760(int arg);
	void sub_1000b8a2(int arg);
	int sub_103aa480(int arg);
	int sub_10001b45(int arg);
	void sub_103a9d00();	// FlipFailureType
	int sub_103a7390(int schedule);	// "TranslateSchedule" (slot 440 override): schedules 0xe5/0xe6 map to 0x15f, else the CNPC_VHuman version
	char sub_103a9340(CNPC_VSabbatLeaderHint *pHint);	// "FValidateHintType": hint type in [0x3e80, 0x3e85]
	void vfunc619(int arg);	// slot 619, not modelled as virtual yet
	void sub_1000c27a(int arg);
	int sub_103a6ef0();	// "Classify" (slot 138): scope trace only, returns 0x10
	void vfunc259(void *pEvent);	// "HandleAnimEvent" (slot 259 override): scope trace, events 0x802/0x803 go to slot 620, the rest to CNPC_VHuman::vfunc259
	void sub_100076bc(void *pEvent);	// CNPC_VHuman::vfunc259, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void sub_103ab4a0(void *pVictim);	// "OnVictimHitByMe" (slot 24 override): scope trace, when the entity of the handle at +0x628c is pVictim decrements the counter at +0x66e0 (clamped at 0)
	int vfunc366(int a, int b, int c);	// "HandleInteraction" (slot 366 override): scope trace, then returns CNPC_VHuman::vfunc366(a, b, c)
	int sub_10001b27(int a, int b, int c);	// CNPC_VHuman::vfunc366, called directly
};
