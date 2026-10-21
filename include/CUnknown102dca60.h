// CUnknown102dca60: an entity that keeps a vector of target entity handles and picks a random enabled one to activate
// (real name not yet known).
#pragma once

#include "COutputEvent.h"

class CUnknown102dca60_Target	// a target entity: its enabled state is at +0x564 (1 = enabled), its mode at +0x590
{
public:
	char m_pad0000[0x564];
	int m_nState;	// 0x564
	char m_pad0568[0x590 - 0x568];
	int m_nMode;	// 0x590: 0, 1 or 2 (set by the unit-local setter sub_102db3b0)
};

class CUnknown102dca60
{
public:
	char m_pad0000[0x484];
	COutputEvent m_OnPick;	// 0x484
	char m_pad049c[0x500 - 0x49c];
	int m_nPickRange;	// 0x500: the random pick is made in 0..this
	int m_iCurrent;	// 0x504: index of the current target
	float m_flNextTime;	// 0x508
	float m_flMinDelay;	// 0x50c
	float m_flMaxDelay;	// 0x510
	char m_pad0514[0x518 - 0x514];
	unsigned int *m_pTargets;	// 0x518: the handle vector (memory)
	int m_nAlloc;	// 0x51c
	int m_nGrow;	// 0x520
	int m_nTargets;	// 0x524: its size

	void sub_102dca60();	// switches every target off (2), then picks a random enabled target other than the current one (retrying until one is found), switches it on (1), makes it current, fires the pick output and schedules the next pick
};
