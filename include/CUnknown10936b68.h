// CUnknown10936b68: the global object at 0x10936b68; only the one-argument call (stub 0x10009bb5) is known.
// It takes a condition id (a translated one, or 1 after a "missing schedule" error).
#pragma once

class CUnknown10936b68
{
public:
	void sub_1030f300(int value);
};

// The record slot 580 of CAI_BaseNPC returns: the first dword is the schedule id (-1 = missing).
struct CAI_NPCScheduleRef
{
	int m_id;

	int sub_102ea2d0(int value);	// translates a condition id (stub 0x10012300)
};
