// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 17 blocks
#include "vampire.h"

// FUNCTION: 0x1030c560 size=0x35
// TARGET: CUnknown1030c560::sub_1030c560
extern void (*g_109f366c)(const char *pszFormat, ...);

extern unsigned int g_1092053c;
void sub_1030c4e0();
char sub_102cb690();

struct CUnknown1030c560
{
	int m_n00;
	int m_n04;

	bool sub_1030c560();
};

bool CUnknown1030c560::sub_1030c560()
{
	if (m_n04 == 0) {
		sub_1030c4e0();
		if (!sub_102cb690()) {
			g_1092053c = g_1092053c | 1;
			g_109f366c("ERROR:  Mistake in default schedule definitions, AI Disabled.\n");
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x1030c5b0 size=0x36
void *sub_104312d5(unsigned int size);

struct Helper1030f680
{
	void *sub_1030f680(int a, int b, void *pOld);
};

struct CUnknown1030c5b0
{
	char m_pad0000[4];
	void *m_pHelper04;

	void sub_1030c5b0(int a, int b);
};

// TARGET: CUnknown1030c5b0::sub_1030c5b0
void CUnknown1030c5b0::sub_1030c5b0(int a, int b)
{
	Helper1030f680 *pNew = (Helper1030f680 *)sub_104312d5(0x48);
	m_pHelper04 = pNew ? pNew->sub_1030f680(a, b, m_pHelper04) : 0;
}
// END FUNCTION

// FUNCTION: 0x1030c600 size=0x190
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" __declspec(dllimport) void __cdecl Error(const char *, ...);

// TARGET: sub_1030c600
int __stdcall sub_1030c600(const char *name)
{
	if (_strcmpi(name, "NONE") == 0)
		return 0;
	if (_strcmpi(name, "IDLE") == 0)
		return 1;
	if (_strcmpi(name, "COMBAT") == 0)
		return 2;
	if (_strcmpi(name, "PRONE") == 0)
		return 6;
	if (_strcmpi(name, "ALERT") == 0)
		return 3;
	if (_strcmpi(name, "SCRIPT") == 0)
		return 4;
	if (_strcmpi(name, "PLAYDEAD") == 0)
		return 5;
	if (_strcmpi(name, "DEAD") == 0)
		return 7;
	if (_strcmpi(name, "FLEEING") == 0)
		return 8;
	if (_strcmpi(name, "RETREATING") == 0)
		return 9;
	if (_strcmpi(name, "COWERING") == 0)
		return 10;
	if (_strcmpi(name, "HUNTING") == 0)
		return 11;
	if (_strcmpi(name, "OBLIVIOUS") == 0)
		return 13;
	if (_strcmpi(name, "CRIMINAL_SUSPICION") == 0)
		return 14;
	Error("Schedule has invalid state ID '%s'\n", name);
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1030c800 size=0x1e6
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" __declspec(dllimport) void Error(const char *fmt, ...);

unsigned int __stdcall sub_1030c800(const char *pszName)
{
	if (!_strcmpi(pszName, "PROVOKED")) return 0x1;
	if (!_strcmpi(pszName, "INCOVER")) return 0x2;
	if (!_strcmpi(pszName, "SUSPICIOUS")) return 0x4;
	if (!_strcmpi(pszName, "PATH_FAILED")) return 0x20;
	if (!_strcmpi(pszName, "FLINCHED")) return 0x40;
	if (!_strcmpi(pszName, "TOURGUIDE")) return 0x100;
	if (!_strcmpi(pszName, "LOCKED_HINT")) return 0x400;
	if (!_strcmpi(pszName, "TURNING")) return 0x2000;
	if (!_strcmpi(pszName, "TURNHACK")) return 0x4000;
	if (!_strcmpi(pszName, "HAD_ENEMY")) return 0x8000;
	if (!_strcmpi(pszName, "HAD_PLAYER")) return 0x10000;
	if (!_strcmpi(pszName, "HAD_LOS")) return 0x20000;
	if (!_strcmpi(pszName, "INVESTIGATING")) return 0x8000000;
	if (!_strcmpi(pszName, "CUSTOM4")) return 0x10000000;
	if (!_strcmpi(pszName, "CUSTOM3")) return 0x20000000;
	if (!_strcmpi(pszName, "CUSTOM2")) return 0x40000000;
	if (!_strcmpi(pszName, "CUSTOM1")) return 0x80000000;
	Error("Schedule has invalid Memory ID '%s'\n", pszName);
	return 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x1030ca70 size=0x67
extern "C" int _strcmpi(const char *, const char *);
extern void (*g_109f366c)(const char *, ...);
struct S1030ca70 { int sub_1030ca70(const char *s); };
// TARGET: S1030ca70::sub_1030ca70
int S1030ca70::sub_1030ca70(const char *s)
{
    if (!_strcmpi(s, "TRAVEL"))
        return 0;
    if (!_strcmpi(s, "LOS"))
        return 1;
    if (!_strcmpi(s, "COVER"))
        return 2;
    g_109f366c("Schedule has invalid path ID '%s'\n", s);
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1030cb00 size=0x9d
extern "C" int _strcmpi(const char *, const char *);
extern void (*g_109f366c)(const char *fmt, ...);

int __stdcall sub_1030cb00(const char *name)
{
	if (!_strcmpi(name, "ENEMY"))
		return 0;
	if (!_strcmpi(name, "ENEMY_LKP"))
		return 2;
	if (!_strcmpi(name, "TARGET"))
		return 1;
	if (!_strcmpi(name, "TARGET_LKP"))
		return 3;
	if (!_strcmpi(name, "SAVED_POSITION"))
		return 4;
	g_109f366c("Schedule has invalid goal ID '%s'\n", name);
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1030cbd0 size=0x627
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern void (__cdecl *g_109f366c)(const char *, ...);

// TARGET: sub_1030cbd0
int sub_1030cbd0(const char *p)
{
	if (!_strcmpi(p, "D_IS_BUSY")) return 1;
	if (!_strcmpi(p, "DO_STARTLED")) return 2;
	if (!_strcmpi(p, "AT_CROSSWALK")) return 4;
	if (!_strcmpi(p, "PRESERVE_PATH")) return 8;
	if (!_strcmpi(p, "FINDING_BODY")) return 0x10;
	if (!_strcmpi(p, "CARRYING_BODY")) return 0x20;
	if (!_strcmpi(p, "NAV_IGNORE_NPC")) return 0x40;
	if (!_strcmpi(p, "IN_FLEE_SCHED")) return 0x80;
	if (!_strcmpi(p, "INITIAL_FLEE")) return 0x100;
	if (!_strcmpi(p, "COWER_PATH")) return 0x200;
	if (!_strcmpi(p, "COWERING")) return 0x400;
	if (!_strcmpi(p, "DODGING")) return 0x800;
	if (!_strcmpi(p, "MADE_HUNT_PATH")) return 0x1000;
	if (!_strcmpi(p, "AT_COVER_HINT")) return 0x2000;
	if (!_strcmpi(p, "ANIM_MOVEMENT")) return 0x4000;
	if (!_strcmpi(p, "DONE_EXTRAPOLATING")) return 0x8000;
	if (!_strcmpi(p, "FORCE_RELAXED_ANIMS")) return 0x10000;
	if (!_strcmpi(p, "SLEEPING")) return 0x20000;
	if (!_strcmpi(p, "BOTCHED_ATTACK")) return 0x40000;
	if (!_strcmpi(p, "NO_DIALOG")) return 0x80000;
	if (!_strcmpi(p, "SKIPPED_SOUND")) return 0x100000;
	if (!_strcmpi(p, "LOOKED_AT_UNKNOWN")) return 0x200000;
	if (!_strcmpi(p, "IGNORE_UNKNOWN")) return 0x400000;
	if (!_strcmpi(p, "ATTACK_UNKNOWN")) return 0x800000;
	if (!_strcmpi(p, "MADE_INITIAL_RESPONSE")) return 0x1000000;
	if (!_strcmpi(p, "FINISHED_IGNORE_UNKNOWN")) return 0x2000000;
	if (!_strcmpi(p, "DONT_INVESTIGATE")) return 0x4000000;
	if (!_strcmpi(p, "PLAYING_FACE_ANIM")) return 0x8000000;
	if (!_strcmpi(p, "FORCED_OCCLUDE")) return 0x10000000;
	if (!_strcmpi(p, "INTERESTING_INTO")) return 0x20000000;
	if (!_strcmpi(p, "ONE_HIT_KILL")) return 0x40000000;
	if (!_strcmpi(p, "SLEEP_BOUNDING_BOX")) return 0x80000001;
	if (!_strcmpi(p, "FINISH_SPECIAL_NAV")) return 0x80000002;
	if (!_strcmpi(p, "SCHEDULE_CHANGED")) return 0x80000004;
	if (!_strcmpi(p, "INTERESTING_LOST")) return 0x80000008;
	if (!_strcmpi(p, "TASKS_FACE_ENEMY")) return 0x80000010;
	if (!_strcmpi(p, "TASKS_FACE_TARGET")) return 0x80000020;
	if (!_strcmpi(p, "IGNORE_SQUAD_SEE_ENEMY")) return 0x80000040;
	if (!_strcmpi(p, "NO_UNKNOWN_ATTACK")) return 0x80000080;
	if (!_strcmpi(p, "COVER_VS_MELEE_MODE")) return 0x80000100;
	if (!_strcmpi(p, "IGNORE_DOOR_FAILURE")) return 0x80000200;
	if (!_strcmpi(p, "MOVE_FACE_ENEMY")) return 0x80000400;
	if (!_strcmpi(p, "DISALLOW_TGT_DISCIPLINE")) return 0x80000800;
	if (!_strcmpi(p, "MADE_OBLIVIOUS")) return 0x80001000;
	if (!_strcmpi(p, "SQUAD_NEW_ENEMY")) return 0x80002000;
	if (!_strcmpi(p, "DONT_FALL_TO_GROUND")) return 0x80004000;
	if (!_strcmpi(p, "DISABLE_BURST_FIRE")) return 0x80008000;
	if (!_strcmpi(p, "D_CALM")) return 0x80010000;
	if (!_strcmpi(p, "D_INSANE")) return 0x80020000;
	if (!_strcmpi(p, "D_POSSESSED")) return 0x80040000;
	if (!_strcmpi(p, "D_MILDLY_CRAZY")) return 0x80080000;
	if (!_strcmpi(p, "D_FOLLOW")) return 0x80100000;
	if (!_strcmpi(p, "D_NIGHTMARE")) return 0x80200000;
	if (!_strcmpi(p, "D_AUTO_FEEDABLE")) return 0x80400000;
	if (!_strcmpi(p, "D_DISCONNECT_SQUAD")) return 0x80800000;
	if (!_strcmpi(p, "D_WPN_HIDDEN")) return 0x81000000;
	if (!_strcmpi(p, "CHOOSE_NEW_SCHEDULE")) return 0x82000000;
	if (!_strcmpi(p, "NO_UNKNOWN_VISION")) return 0x84000000;
	if (!_strcmpi(p, "NOT_FEEDABLE")) return 0x88000000;
	if (!_strcmpi(p, "NO_DIALOG_PERSISTENT")) return 0x90000000;
	if (!_strcmpi(p, "DISAPPEAR")) return 0xa0000000;
	if (!_strcmpi(p, "ACTIVITY_COPY_PROP_CLEAN")) return 0xc0000000;
	g_109f366c("Schedule has invalid NPC flag '%s'\n", p);
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1030d390 size=0x2d
#include <string.h>

extern const char *g_10619ec8[];

// TARGET: sub_1030d390
int sub_1030d390(const char *pszName)
{
	int i = 0;
	do {
		if (_strcmpi(g_10619ec8[i], pszName) == 0) {
			return i;
		}
		i++;
	} while (i < 0x16);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1030d3d0 size=0x1e
struct CUnk10936b74 {
	unsigned short *sub_1024b5e0(int *pArg, int value);
};

extern CUnk10936b74 g_10936b74;

// TARGET: sub_1030d3d0
unsigned int __stdcall sub_1030d3d0(int a)
{
	unsigned short *p = g_10936b74.sub_1024b5e0(&a, a);
	return *p;
}
// END FUNCTION

// FUNCTION: 0x1030d400 size=0x5f
struct sub_Name { const char *m_name; const char *Get() const { return m_name ? m_name : ""; } };
struct sub_Rec { int m_id; sub_Name m_n; };
extern int g_1073dc3c;
extern sub_Rec **g_1073dc40;
extern "C" int _strcmpi(const char *, const char *);

int __stdcall sub_1030d400(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++)
	{
		if (!_strcmpi(g_1073dc40[i]->m_n.Get(), name))
		{
			int id = g_1073dc40[i]->m_id;
			if (id != -1)
				return id;
			return -1;
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1030d480 size=0x4c
#include <string.h>

extern void (__cdecl *g_109f366c)(const char *pszFormat, ...);

int __stdcall sub_1030d480(const char *pszName)
{
	if (!strcmpi(pszName, "DEFAULT"))
		return 0;
	if (!strcmpi(pszName, "SHOOT_AT_HINT"))
		return 1;
	g_109f366c("Schedule has invalid shoot target override (STO:) ID '%s'\n", pszName);
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1030d4f0 size=0x10e
extern "C" int _strcmpi(const char *, const char *);
extern void (*g_109f366c)(const char *, ...);

int __stdcall sub_1030d4f0(const char *pszName)
{
    if (_strcmpi(pszName, "ACCUM") == 0)
        return -1000000;
    if (_strcmpi(pszName, "TZIMISCE_CLAW") == 0)
        return -1000001;
    if (_strcmpi(pszName, "DIALOG") == 0)
        return -1000002;
    if (_strcmpi(pszName, "COMBATMOVE") == 0)
        return -1000003;
    if (_strcmpi(pszName, "MINGXIAO_IDEAL_RANGE") == 0)
        return -1000004;
    if (_strcmpi(pszName, "FOLLOWER_DISTANCE_BACKAWAY") == 0)
        return -1000005;
    if (_strcmpi(pszName, "FOLLOWER_DISTANCE_WALKTO") == 0)
        return -1000006;
    if (_strcmpi(pszName, "FOLLOWER_DISTANCE_RUNTO") == 0)
        return -1000007;
    if (_strcmpi(pszName, "FOLLOWER_DISTANCE_OVERLAP") == 0)
        return -1000008;
    g_109f366c("Schedule has invalid DIST: ID '%s'\n", pszName);
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1030d650 size=0x82
int sub_1043e780(const char *, const char *);
extern void (*g_109f366c)(const char *fmt, ...);

int __stdcall sub_1030d650(const char *phase)
{
    if (sub_1043e780(phase, "TENTACLE") == 0)
        return 0;
    if (sub_1043e780(phase, "TENTACLE_TO_GRUB") == 0)
        return 1;
    if (sub_1043e780(phase, "GRUB") == 0)
        return 2;
    if (sub_1043e780(phase, "GRUB_TO_PROXY") == 0)
        return 3;
    g_109f366c("Schedule has invalid MXTPHASE: ID '%s'\n", phase);
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1030d710 size=0x9d
extern "C" int _strcmpi(const char *, const char *);
extern void (*g_109f366c)(const char *fmt, ...);

int __stdcall sub_1030d710(const char *name)
{
	if (!_strcmpi(name, "NONE"))
		return 0;
	if (!_strcmpi(name, "PATHING"))
		return 1;
	if (!_strcmpi(name, "GRABBING"))
		return 2;
	if (!_strcmpi(name, "CARRYING"))
		return 3;
	if (!_strcmpi(name, "THROWING"))
		return 4;
	g_109f366c("Schedule has invalid Thrown Object Mode: ID '%s'\n", name);
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1030d7e0 size=0x47
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern void (__cdecl *g_109f366c)(const char *, ...);
int __stdcall sub_1030d7e0(const char *pszName)
{
	if (_strcmpi(pszName, "NONE") != 0) {
		if (_strcmpi(pszName, "DELAY_INTERRUPTS") == 0)
			return 1;
		g_109f366c("Schedule has invalid schedule flag: '%s'\n", pszName);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1030d850 size=0x1498
#include "CUnknown10359c50.h"
#include "CUnknown10936b68.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern "C" double __cdecl atof(const char *);
void *operator new(unsigned int);
__declspec(dllimport) void Q_strncpy(char *pDest, const char *pSrc, int maxLen);
__declspec(dllimport) void DevMsg(const char *, ...);
__declspec(dllimport) void Warning(const char *, ...);
extern void (__cdecl *g_109f366c)(const char *, ...);

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8();	virtual void p##9();
struct SEngineSch {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2();
	virtual int PrecacheModel(const char *s, bool preload);	// 13
	virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	SL10(c2) SL10(c3) SL10(c4) SL10(c5) SL10(c6) SL10(c7) SL10(c8)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
	virtual void d5(); virtual void d6(); virtual void d7();
	virtual char *ParseFile(char *data, char *token);	// 98
};
extern SEngineSch *g_1070b22c;

struct Task_t
{
	int iTask;
	float flTaskData;
};

struct SchedBitsV
{
	int m_ints[6];
	void SetBit(int bit) { m_ints[bit >> 5] |= (1 << (bit & 31)); }
};

struct CAI_ScheduleV
{
	SchedBitsV m_NotInterruptMask;	// 0x00
	int m_iFlags;	// 0x18
	int m_iScheduleID;	// 0x1c
	Task_t *m_pTaskList;	// 0x20
	int m_iNumTasks;	// 0x24
	SchedBitsV m_InterruptMask;	// 0x28
	const char *m_pName;	// 0x40
	const char *GetName() { return m_pName; }
};

struct IdSpaceV
{
	int sub_102ea280(int id);
	char pad[0x18];
};

struct ClassIdSpaceV
{
	IdSpaceV m_ScheduleIds;
	IdSpaceV m_TaskIds;
	int ScheduleGlobalToLocal(int id) { return m_ScheduleIds.sub_102ea280(id); }
	int TaskGlobalToLocal(int id) { return m_TaskIds.sub_102ea280(id); }
};

extern char g_106b8540[];
struct string_tV
{
	const char *pszValue;
	string_tV() {}
	const char *ToCStr() const { return pszValue ? pszValue : g_106b8540; }
};
string_tV sub_1042bff0(const char *v);

int sub_102cadb0(const char *);	// CAI_BaseNPC::GetScheduleID
int sub_10316fd0(const char *);	// CAI_BaseNPC::GetTaskID
int sub_1025d760(const char *);	// CAI_BaseNPC::GetActivityID
int sub_102d3f50(const char *);	// CAI_Hint::GetFlags
int sub_1030cbd0(const char *);	// NPCFlag
int sub_1030d390(const char *);	// MiscFlag
int sub_102c8cc0(const char *);	// CAI_BaseNPC::GetConditionID
int sub_102c8c80();

struct SchedMgrV
{
	CAI_ScheduleV *sub_1030c5b0(const char *name, int id);	// CreateSchedule
	int sub_1030c600(const char *);	// GetStateID
	int sub_1030c800(const char *);	// GetMemoryID
	int sub_1030ca70(const char *);	// GetPathID
	int sub_1030cb00(const char *);	// GetGoalID
	int sub_1030d3d0(const char *);	// Model
	int sub_1030d400(const char *);	// SOUND
	int sub_1030f5f0(const char *);	// EXPRESSION
	int sub_1030d480(const char *);	// STO
	int sub_1030d4f0(const char *);	// DIST
	int sub_1030d650(const char *);	// MXTPHASE
	int sub_1030d710(const char *);	// TOMODE
	int sub_1030d7e0(const char *);	// schedule flag
};

inline int AI_RemapFromGlobal(int id) { return (id != -1) ? id - 1000000000 : -1; }

#define engine g_1070b22c

// TARGET: CUnknown10936b68::sub_1030d850
bool CUnknown10936b68::sub_1030d850(const char *prefix, void *pStartFile, CUnknown10359c50 *pRegistries)
{
	char token[1024];
	char save_token[1024];
	ClassIdSpaceV *pIdSpace = (ClassIdSpaceV *)pRegistries;
	SchedMgrV *pMgr = (SchedMgrV *)this;
	int nConditions = 0;
	char *pfile = engine->ParseFile((char *)pStartFile, token);

	while (!_strcmpi("Schedule", token))
	{
		pfile = engine->ParseFile(pfile, token);

		if (sub_1030f350(token))
		{
			DevMsg("ERROR: file contains a schedule (%s) that has already been defined!\n", token);
			g_109f366c("       Aborting schedule load.\n");
			return false;
		}

		int scheduleID = sub_102cadb0(token);
		if (scheduleID == -1)
		{
			g_109f366c("ERROR: LoadSchd (%s): Unknown schedule type (%s)\n", prefix, token);
			return false;
		}

		CAI_ScheduleV *new_schedule = pMgr->sub_1030c5b0(token, scheduleID);

		pfile = engine->ParseFile(pfile, token);
		if (_strcmpi(token, "Tasks"))
		{
			g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting 'Tasks' keyword.\n", prefix, new_schedule->GetName());
			return false;
		}

		Task_t tempTask[64];
		int taskNum = 0;

		pfile = engine->ParseFile(pfile, token);
		while ((token[0] != 0) && (_strcmpi("Interrupts", token)))
		{
			if (taskNum >= 64)
			{
				g_109f366c("ERROR: LoadSchd (%s): (%s) Too many tasks (max = %d)!\n", prefix, new_schedule->GetName(), 64);
				return false;
			}

			int taskID = sub_10316fd0(token);
			tempTask[taskNum].iTask = (pIdSpace) ? pIdSpace->TaskGlobalToLocal(taskID) : AI_RemapFromGlobal(taskID);

			if (tempTask[taskNum].iTask == -1)
			{
				g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown task %s!\n", prefix, new_schedule->GetName(), token);
				return false;
			}

			pfile = engine->ParseFile(pfile, token);

			if (!_strcmpi("Activity", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'ACTIVITY.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = sub_1025d760(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown activity %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("Task", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'ACTIVITY.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				int taskID = sub_10316fd0(token);
				tempTask[taskNum].flTaskData = (pIdSpace) ? pIdSpace->TaskGlobalToLocal(taskID) : AI_RemapFromGlobal(taskID);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown task %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("Schedule", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'ACTIVITY.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				int schedID = sub_102cadb0(token);
				tempTask[taskNum].flTaskData = (pIdSpace) ? pIdSpace->ScheduleGlobalToLocal(schedID) : AI_RemapFromGlobal(schedID);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd %d (%s): (%s) Unknown shedule %s!\n", 629, prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("State", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'STATE.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = pMgr->sub_1030c600(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd %d (%s): (%s) Unknown shedule %s!\n", 650, prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("Memory", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'STATE.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = pMgr->sub_1030c800(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd %d (%s): (%s) Unknown shedule %s!\n", 672, prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("Path", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'PATH.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = pMgr->sub_1030ca70(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown path type %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("Goal", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'GOAL.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = pMgr->sub_1030cb00(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown goal type  %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("HintFlags", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'HINTFLAG'\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = sub_102d3f50(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown hint flag type  %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("Interrupts", token) || !_strnicmp("TASK_", token, 5))
			{
				Warning("ERROR: LoadSchd (%s): (%s) Bad syntax at task #%d (wasn't expecting %s)\n", prefix, new_schedule->GetName(), taskNum, token);
				return false;
			}
			else if (!_strcmpi("NPCFlag", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'NPCFlag'.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				int nFlag = sub_1030cbd0(token);
				tempTask[taskNum].flTaskData = *(float *)&nFlag;
				if (*(float *)&nFlag == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown NPCFlag type  %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("MiscFlag", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'MiscFlag'.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				int nFlag = sub_1030d390(token);
				tempTask[taskNum].flTaskData = *(float *)&nFlag;
				if (*(float *)&nFlag == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown MiscFlag type  %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("Model", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'Model'.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				int nModel = pMgr->sub_1030d3d0(token);
				tempTask[taskNum].flTaskData = *(float *)&nModel;
				if (*(float *)&nModel == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown Model value %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
				string_tV s = sub_1042bff0(token);
				engine->PrecacheModel(s.ToCStr(), false);
			}
			else if (!_strcmpi("SOUND", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'SOUND'.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = pMgr->sub_1030d400(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown SOUND type  %s!  See your local programmer and have him add it to CAI_SchedulesManager::GetSoundID()\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("EXPRESSION", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'SOUND'.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = pMgr->sub_1030f5f0(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown EXPRESSION type  %s!  See your local programmer and have him add it to CAI_SchedulesManager::GetSoundID()\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("STO", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'STO'.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = pMgr->sub_1030d480(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown ShootTargetOffset( STO ) type  %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("DIST", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'DIST'.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = pMgr->sub_1030d4f0(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown DIST type  %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("MXTPHASE", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'MXTPHASE'.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = pMgr->sub_1030d650(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown MXTPHASE type  %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("TOMODE", token))
			{
				pfile = engine->ParseFile(pfile, token);
				if (_strcmpi(token, ":"))
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Malformed AI Schedule.  Expecting ':' after type 'TOMODE'.\n", prefix, new_schedule->GetName());
					return false;
				}
				pfile = engine->ParseFile(pfile, token);
				tempTask[taskNum].flTaskData = pMgr->sub_1030d710(token);
				if (tempTask[taskNum].flTaskData == -1)
				{
					g_109f366c("ERROR: LoadSchd (%s): (%s) Unknown TOMODE type  %s!\n", prefix, new_schedule->GetName(), token);
					return false;
				}
			}
			else if (!_strcmpi("TRUE", token) || !_strcmpi("ON", token))
			{
				tempTask[taskNum].flTaskData = 1.0f;
			}
			else if (!_strcmpi("FALSE", token) || !_strcmpi("OFF", token))
			{
				tempTask[taskNum].flTaskData = 0.0f;
			}
			else
			{
				tempTask[taskNum].flTaskData = atof(token);
			}
			taskNum++;

			Q_strncpy(save_token, token, sizeof(save_token));
			pfile = engine->ParseFile(pfile, token);

			if (!_strcmpi(token, ":"))
			{
				g_109f366c("ERROR: LoadSchd (%s): Schedule (%s),\n        Task (%s), has a malformed AI Task Argument = (%s)\n",
						prefix, new_schedule->GetName(), taskID, save_token);
				return false;
			}
		}

		new_schedule->m_iNumTasks = taskNum;
		new_schedule->m_pTaskList = new Task_t[taskNum];
		for (int i = 0; i < taskNum; i++)
		{
			new_schedule->m_pTaskList[i].iTask = tempTask[i].iTask;
			new_schedule->m_pTaskList[i].flTaskData = tempTask[i].flTaskData;
		}

		pfile = engine->ParseFile(pfile, token);
		while ((token[0] != 0) && _strcmpi("Schedule", token) && _strcmpi("Flags", token))
		{
			bool bNot = false;
			char *pszCond = token;
			if (token[0] == '!')
			{
				bNot = true;
				pszCond = token + 1;
			}
			int condID = sub_102c8cc0(pszCond);
			nConditions++;
			if (condID == -1)
			{
				sub_102c8c80();
				DevMsg("ERROR: LoadSchd (%s): Schedule (%s), Unknown condition %s!\n", prefix, new_schedule->GetName(), token);
			}
			else
			{
				int interrupt = AI_RemapFromGlobal(condID);
				if (bNot)
					new_schedule->m_NotInterruptMask.SetBit(interrupt);
				else
					new_schedule->m_InterruptMask.SetBit(interrupt);
			}
			pfile = engine->ParseFile(pfile, token);
		}

		new_schedule->m_iFlags = 0;
		if (!_strcmpi("Flags", token))
		{
			pfile = engine->ParseFile(pfile, token);
			while ((token[0] != 0) && _strcmpi("Schedule", token))
			{
				int flag = pMgr->sub_1030d7e0(token);
				if (!flag)
					DevMsg("ERROR: LoadSchd (%s): Schedule (%s), Unknown schedule flag %s!\n", prefix, new_schedule->GetName(), token);
				else
					new_schedule->m_iFlags |= flag;
				pfile = engine->ParseFile(pfile, token);
			}
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x1030f220 size=0xa7
#include "CUnknown1030f480.h"
extern int (__cdecl *g_109f388c)(char *buf, int count, const char *fmt, ...);
extern void (__cdecl *g_109f3630)(const char *fmt, ...);

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8();	virtual void p##9();
struct SEngine99 {
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8();
	virtual void *vfunc99(const char *pszFile, int mode, int flags);
};
extern SEngine99 *g_1070b22c;

bool CUnknown1030f480::sub_1030f220(const char *pszName, int arg)
{
    char szFile[128];
    g_109f388c(szFile, 128, "vdata/schedules/%s.sch", pszName);
    void *pFile = g_1070b22c->vfunc99(szFile, 2, 0);
    if (!pFile) {
        g_109f3630("Unable to open AI Schedule data file for: %s\n", szFile);
        return false;
    }
    if (!sub_1030d850(pszName, pFile, arg)) {
        g_109f3630("       Schedule file: %s\n", szFile);
        return false;
    }
    return true;
}
// END FUNCTION
