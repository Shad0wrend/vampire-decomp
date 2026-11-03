// CUnknown10936b68: the global object at 0x10936b68 (the AI schedule manager: a linked list of schedules, the first at +4).
// It takes a condition id (a translated one, or 1 after a "missing schedule" error).
#pragma once

class CUnknown10359c50;

struct CAI_ScheduleNode	// one schedule of the manager's list; only the id and the link are known
{
	char m_pad0000[0x1c];
	int m_id;	// 0x1c
	const void *m_pTasks;	// 0x20: the task records (8 bytes each; CRC'd by the save code 0x1027bc60 / 0x1027bf50)
	int m_nTasks;	// 0x24: number of task records
	char m_pad0028[0x40 - 0x28];
	const char *m_pszName;	// 0x40: schedule name (strcmpi'd by sub_1030f350, copied by 0x1027bc60)
	CAI_ScheduleNode *m_pNext;	// 0x44
};

class CUnknown10936b68
{
public:
	int m_n0000;	// 0x00
	CAI_ScheduleNode *m_pFirst;	// 0x04: the first schedule

	CAI_ScheduleNode *sub_1030f350(const char *pszName);	// 0x1030f350 (stub 0x10003b7f): the schedule whose name (+0x40) equals pszName (_strcmpi), 0 when none; called by 0x1027bf50 (ecx = 0x10936b68)
	int sub_1030f300(int value);	// 0x1030f300 (stub 0x10009bb5): the schedule (a CAI_ScheduleNode *, declared int because the matched caller 0x102c6eb0 passes it on as an int) with this id; DevMsg "Couldn't find schedule %d (%s)" (the name from the global at 0x109203cc, CUnknown1024a230::sub_102ea020) and 0 when there is none
	bool sub_1030d850(const char *pszScheduleName, void *pKeyValues, CUnknown10359c50 *pRegistries);	// 0x1030d850 (stub 0x10006398): loads an NPC class's schedules from its key/value tree; the ids are translated through the four registries that start at the schedule registry (schedule +0x00, task +0x18, ...); calls engine vfunc98, sub_10316fd0 / sub_102cadb0 / sub_1025d760 / sub_1030c5b0 / sub_1030c600 / sub_1030c800 / sub_1030ca70 / sub_1030cb00 / sub_1030d390 / sub_1030d3d0 / sub_1030d400 / sub_1030d480 / sub_1030d4f0 / sub_1030d650 / sub_1030d710 / sub_1030d7e0 / CRangeNode_102ea280::sub_102ea280, and returns false after a DevMsg/Error on a malformed or unknown entry
};

// The record slot 580 of CAI_BaseNPC returns: the first dword is the schedule id (-1 = missing).
struct CAI_NPCScheduleRef
{
	int m_id;

	int sub_102ea2d0(int value);	// translates a condition id (stub 0x10012300)
};
