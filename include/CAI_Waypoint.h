// CAI_Waypoint: one waypoint of an NPC route (0x38 bytes, taken from the global pool at 0x10936c84), chained through
// the pointers at +0x30 / +0x34. Only what decompiled code needs.
#pragma once

#include "CUnknown10936c84.h"
#include "Vector.h"

extern CUnknown10936c84 g_10936c84;

class CAI_Waypoint
{
public:
	CAI_Waypoint(const float *pPosition, int a, int b, int c, int d);	// 0x10319df0 (stub 0x100021da)
#ifdef PCD_INITIALIZERS	// the initializer units: the global 0x10936afc unlinks itself when destroyed (the SDK's inline destructor)
	~CAI_Waypoint()
	{
		if (m_pNext)
			m_pNext->m_pPrev = m_pPrev;
		if (m_pPrev)
			m_pPrev->m_pNext = m_pNext;
	}
#endif

	static void *operator new(unsigned int nSize) { return g_10936c84.sub_1013dc60(nSize); }

	void SetNext(CAI_Waypoint *pNext)
	{
		if (m_pNext)
			m_pNext->m_pPrev = 0;
		m_pNext = pNext;
		if (m_pNext) {
			if (m_pNext->m_pPrev)
				m_pNext->m_pPrev->m_pNext = 0;
			m_pNext->m_pPrev = this;
		}
	}

	float m_vecPos[3];	// 0x00
	int m_n0c;	// 0x0c
	int m_iNodeID;	// 0x10: the network node the waypoint stands on
	int m_n14;	// 0x14
	int m_n18;	// 0x18
	int m_n1c;	// 0x1c
	EHANDLE m_hEnt20;	// 0x20
	EHANDLE m_hEnt24;	// 0x24
	unsigned int m_fWaypointFlags;	// 0x28
	int m_n2c;	// 0x2c
	CAI_Waypoint *m_pNext;	// 0x30
	CAI_Waypoint *m_pPrev;	// 0x34
};

void sub_1031a050(CAI_Waypoint *pWaypoint);	// 0x1031a050: returns a whole chain (m_pNext +0x30 / m_pPrev +0x34) to the pool g_10936c84
