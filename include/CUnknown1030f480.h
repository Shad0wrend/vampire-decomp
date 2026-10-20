// CUnknown1030f480: holder of a linked list of schedules (head at +4); real name not yet known.
#pragma once

struct ScheduleNode_t
{
	char pad0[0x1c];
	int m_id;	// 0x1c
	char pad20[4];
	int m_field24;	// 0x24
	char pad28[0x40 - 0x28];
	int m_field40;	// 0x40
	ScheduleNode_t *m_pNext;	// 0x44
};

class CUnknown1030f480
{
public:
	char pad0[4];
	ScheduleNode_t *m_pHead;	// 0x04

	void sub_1030f480();	// "Dumping schedule list": prints every schedule through DevMsg when the developer convar is set
	bool sub_1030f220(const char *pszName, int arg);	// loads the schedule file "vdata/schedules/<name>.sch" through the engine (slot 99) and parses it with sub_1030d850; DevMsg warnings on failure
	bool sub_1030d850(const char *pszName, void *pFile, int arg);	// parses an opened schedule file (stub 0x10006398)
};
