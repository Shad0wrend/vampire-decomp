// CNPC_VAsianVampire: Asian vampire NPC. Layout declared flat (vptr and base members are padding)
// until the bases are recovered. Only what decompiled code needs.
#pragma once

struct datamap_t;

#include "Vector.h"

class CBaseEntity;

struct StoredHintPos_t
{
	float x, y, z;

	StoredHintPos_t &operator=(const StoredHintPos_t &v) { x = v.x; y = v.y; z = v.z; return *this; }
};

struct CVAsianVampireTask_t	// the AI task record RunTask receives: the task id first
{
	int iTask;
	float flTaskData;
};

class CNPC_VAsianVampire
{
public:
	char pad0[0x17c];
	float m_flNextThink;	// +0x17c
	char pad180[0xfec - 0x180];
	int m_nIdealActivity;	// +0xfec
	char padff0[0x1b2c - 0xff0];
	int m_n1b2c;	// +0x1b2c: set to 6 by SelectSchedule
	const char *m_pszFile1b30;	// +0x1b30: source file stamp of the last schedule pick
	int m_nLine1b30;	// +0x1b34: its line
	int m_nIdealState;	// +0x1b38
	char pad1b3c[0x1b44 - 0x1b3c];
	const char *m_pszFailFile;	// +0x1b44: the source file recorded by a task failure
	int m_nFailLine;	// +0x1b48: the source line recorded by a task failure
	char pad1b4c[0x5ddc - 0x1b4c];
	void *m_pHint5ddc;	// +0x5ddc: the hint node the NPC is working on
	char pad5de0[0x6078 - 0x5de0];
	char m_b6078;	// +0x6078
	char pad6079[0x628c - 0x6079];
	unsigned int m_hJumpTarget;	// +0x628c, entity handle
	char pad6290[0x64b8 - 0x6290];
	float m_flRestoredTime;	// +0x64b8: reset to a constant by Restore
	char pad64bc[0x66b8 - 0x64bc];
	StoredHintPos_t m_storedHints[2];	// +0x66b8: ring of the last two hint origins
	int m_nNextStoredHint;	// +0x66d0
	char m_bTaskFailedJump;	// +0x66d4: set when a task fails with a code in 12..15
	char pad66d5[3];
	float m_flStationaryTime;	// +0x66d8
	StoredHintPos_t m_stationaryPos;	// +0x66dc: where the NPC stood when the stamp was taken

	bool sub_10362670();	// "CNPC_VAsianVampire::StationaryFor...": curtime - m_flStationaryTime >= constant
	int vfunc605(int unused);	// slot 605 "CNPC_VAsianVampire::SelectScheduleRangedCombat" (plain member): schedule pick by the conditions, stamping the source file / line at +0x1b30 / +0x1b34
	int sub_102b8620();	// CAI_BaseNPCTroika member (stub 0x10002bf3), called directly
	int vfunc438();	// slot 438 "CNPC_VAsianVampire::SelectSchedule"
	int sub_10015ad2();	// CNPC_VHuman::vfunc438, called directly
	bool sub_1000fe3e();	// stub of 0x10362730
	void vfunc619(int arg);
	void sub_1000c27a(int arg);
	void vfunc103();	// "CNPC_VAsianVampire::Spawn": scope trace around the base spawn
	void vfunc431();	// "CNPC_VAsianVampire::NPCThink": scope trace around the base think, then schedules the next think
	int vfunc461();	// "CNPC_VAsianVampire::SelectIdealState": scope trace, sets the ideal state to 6, then the base implementation
	void sub_10361990(CBaseEntity *pHint);	// "CNPC_VAsianVampire::AddHintToStoredJumpPositions": scope trace, stores the hint's origin (slot 217) in the two-entry ring
	int sub_10362430();	// "CNPC_VAsianVampire::GetJumpSchedule": scope trace, 0x15b when the jump target (handle at +0x628c) resolves and lies more than a constant below this NPC (z of slot 217), else 0x15a
	bool sub_10004b8d(const float *pos);	// stub of 0x103618a0 "CNPC_VAsianVampire::IsPosNearStored...": true when pos is within a constant of a stored hint
	bool sub_103629d0(const float *pos, float radius);	// "CNPC_VAsianVampire::PositionClea...": false when pos is near a stored hint or within radius (2D) of the jump target or of this NPC
	void sub_10012855(int flags);	// sets the solid flags, called with 0x201000
	void sub_10014876();	// CNPC_VVampire::vfunc103, called directly
	void sub_100052d6();	// CNPC_VVampireBoss::vfunc431, called directly
	int sub_10011225();	// CNPC_VHuman::vfunc461, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void sub_10384670();	// CNPC_VHuman::vfunc104 (Precache), called directly
	void sub_10360bc0();	// slot 104 "CNPC_VAsianVampire::Precache": scope trace around the base Precache and a precache of "item_w_avamp_blade"
	void vfunc127(void *pRestore);	// slot 127 "CNPC_VAsianVampire::Restore": scope trace, the base Restore, then m_flRestoredTime is reset to a constant
	void sub_1000b28f(void *pRestore);	// CNPC_VVampireBoss::vfunc127, called directly
	void vfunc448(int code);	// "CNPC_VAsianVampire::TaskFail": scope trace, remembers a failure code in 12..15, then the base implementation
	void sub_100054bb(int code);	// CAI_BaseNPCTroika::vfunc448, called directly
	int vfunc440(int schedule);	// slot 440 "CNPC_VAsianVampire::TranslateSchedule": scope trace, schedules 0xe5 / 0xe6 become GetJumpSchedule(), everything else goes to CNPC_VHuman::vfunc440
	int sub_10005e20(int schedule);	// CNPC_VHuman::vfunc440, called directly
	void vfunc420();	// slot 420 "CNPC_VAsianVampire::NPCInit": scope trace, the CNPC_VVampireBoss init, stores the current origin (slot 217) in both stored hint positions and in the stationary position (+0x66dc), clears the ring index (+0x66d0), +0x5ddc and the flag byte +0x66d4, stamps the tick at +0x66d8, sets the byte +0x66e8 and the float at +0x64b8
	void sub_10013e85();	// CNPC_VVampireBoss::vfunc420, called directly
	void vfunc432(int arg);	// slot 432 "CNPC_VAsianVampire::RunAI": scope trace, sub_10005673(), then CNPC_VHuman::vfunc432(arg)
	void sub_10005673();	// the Asian vampire's per-tick update (stub of 0x10362540), called with this
	void sub_10362540();	// "CNPC_VAsianVampire::UpdateMovedTimeStamp": scope trace; when the NPC (slot 217) is more than a constant away from the stationary position (+0x66dc) stamps the current time at +0x66d8 and takes the current origin as the new stationary position
	void sub_1000698d(int arg);	// CNPC_VHuman::vfunc432, called directly
	void vfunc444(const CVAsianVampireTask_t *pTask);	// slot 444 "CNPC_VAsianVampire::RunTask": scope trace; task 0x13a: the base RunTask, then, unless the ideal activity (+0xfec) is already 0x2d, starts it (sub_10014524) when the z of the slot 198 vector is not above a constant; task 0x150: sub_10005d17(+0x5ddc), clears the failed-jump byte (+0x66d4) and sub_1000ac68(0); tasks 0x151 / 0x152 do nothing; the rest goes to the base RunTask
	void sub_10004edf(const CVAsianVampireTask_t *pTask);	// CNPC_VVampireBoss::vfunc444, called directly
	void sub_10005d17(void *pHint);	// stub of 0x10361a70, run when task 0x150 ends
	void sub_1000ac68(int a);	// stub of 0x10273e80 (CAI_BaseNPC::sub_10273e80), called directly
	void sub_10014524(int activity);	// starts the activity (stub of CAI_BaseNPCTroika::sub_10289ee0)
	void vfunc442(const CVAsianVampireTask_t *pTask);	// slot 442 "CNPC_VAsianVampire::StartTask": scope trace; task 0x150 does nothing, tasks 0x151 / 0x152 pick a hint (sub_103615c0 / sub_10361730) into +0x5ddc and fail the task (TaskFail(1), recording the source file and line 0x110 / 0x118) when there is none, then sub_1000ac68(0); the rest goes to the base StartTask
	void sub_103c5ac0(const CVAsianVampireTask_t *pTask);	// CNPC_VVampireBoss::vfunc442 (stub 0x1000de7c), called directly
	void *sub_103615c0();	// stub 0x1000c61c: the hint for task 0x151
	void *sub_10361730();	// stub 0x10006a1e: the hint for task 0x152
public:
	datamap_t * vfunc82();
	int vfunc451();
	bool vfunc452();
	bool vfunc566(int);
	int vfunc580();
	CNPC_VAsianVampire *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
