// CUnknown103dae50: object holding a list of entity handles (memory pointer at +0x598, count at +0x5a4); real name not
// yet known (CTriggerWWZone-like).
#pragma once

class CUnknown103dae50
{
public:
	char m_pad0[0x598];
	unsigned int *m_pHandles;	// +0x598
	int m_handlesAllocationCount;	// +0x59c
	int m_handlesGrowSize;	// +0x5a0
	int m_nHandles;	// +0x5a4

	void sub_103dae50();	// calls slot 78 of every entity the stored handles resolve to
};
