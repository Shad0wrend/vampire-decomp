// View of CAI_BaseNPC for CAI_BaseNPC::vfunc76 (0x102775e0, the NPC's debug text overlay: "Seq: ", "Cycle: %.2f",
// "Actv: %s (%s)\n", "State: %s, ", "Move: %s, ", "Schd: %s, ", "Task: %s (#%d), " and the task list).
// CAI_BaseNPC declares no data members, so the fields are given here as a derived view.
// Slot 76 itself is not declared in CAI_BaseNPC.h (a CAI_NPC_V placeholder); the Troika override 0x1029c010 calls the
// base implementation (stub 0x10006e0b). Slots 406 / 407 (state / move type names) are typed in CAI_BaseNPC.h.
// NOT done (slot 449 conflict): the task name lookup is slot 449 (+0x704) called with TWO stack arguments
// (task id, the 0x105cc828 / 0x106b8540 string or the current task index); CAI_BaseNPC.h declares
// `vfunc449(int a)` with one, and matched callers use it that way. Call it through a local
// `int (__thiscall *)(CAI_BaseNPC *, int, int)` cast of the vtable entry, or a derived view with a second overload.
// Helpers: sub_10119750 (cdecl text line, `void sub_10119750(const char *fmt, ...)`), the imports Q_snprintf
// (0x109f388c), Q_strncat (0x109f3884, (dest, src, maxlen, -1)), Q_strncpy (0x109f3890).
#pragma once

#include "CAI_BaseNPC.h"

struct CAI_DebugTask		// 8-byte element of a schedule's task array
{
	int m_nTask;		// +0 task id (slot 449's first argument)
	int m_nParam;		// +4
};

struct CAI_DebugSchedule	// the object at CAI_BaseNPC +0x5c38
{
	char m_pad0000[0x20];
	CAI_DebugTask *m_pTasks;	// 0x20
	int m_nTasks;			// 0x24
	char m_pad0028[0x40 - 0x28];
	const char *m_pszName;		// 0x40 ("Unknown" 0x1053c828 when null)
};

class CAI_BaseNPCUnit76 : public CAI_BaseNPC
{
public:
	char m_pad0004[0x6f0 - 4];
	int m_nSequence6f0;		// 0x6f0: handed to CBaseAnimating::sub_1008d990 (the sequence descriptor: name offsets at +0 / +4)
	char m_pad06f4[4];
	float m_flCycle6f8;		// 0x6f8: "Cycle: %.2f" (printed as a double)
	char m_pad06fc[0xfec - 0x6fc];
	int m_nActivityfec;		// 0xfec: current activity (-1 / 0 / n), "Actv: RESET" / "INVALID"
	int m_nIdealActivityff0;	// 0xff0
	char m_pad0ff4[0x5c38 - 0xff4];
	CAI_DebugSchedule *m_pSchedule5c38;	// 0x5c38
	char m_pad5c3c[4];
	int m_nTask5c40;		// 0x5c40: the current task index
	char m_pad5c44[0x5cc0 - 0x5c44];
	int m_nState5cc0;		// 0x5cc0: slot 406(state) -> "State: %s, "
};
