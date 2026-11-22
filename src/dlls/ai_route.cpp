// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 6 blocks
#include "vampire.h"

// FUNCTION: 0x1030ba90 size=0x71
#include "CHolderInner24.h"
#include "CUnknown10936c84.h"
extern CUnknown10936c84 g_10936c84;
extern __declspec(dllimport) void DevMsg(const char *fmt, ...);
void CHolderInner24::sub_1030ba90()
{
	if (!sub_1030bd50()) {
		CHolderInner24_Node *p = m_pNode;
		CHolderInner24_Node *pNext = p->m_pNext;
		if (pNext) {
			if (p->m_flags28 & 4)
				m_i44 = p->m_i10;
			if (m_pNode) {
				if (p->m_pNext)
					p->m_pNext->m_pPrev = p->m_pPrev;
				if (p->m_pPrev)
					p->m_pPrev->m_pNext = p->m_pNext;
				g_10936c84.sub_1013dce0((CChainNodeStub *)p);
			}
			sub_1030b4d0(pNext, 0);
		} else {
			DevMsg("!!ERROR!! Force end of route with no goal!\n");
			m_pNode->m_flags28 |= 8;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1030bb30 size=0x94
#include "CAI_Navigator.h"
extern CAI_NavVec3 g_1070d1b0;

void CAI_NavRoute::sub_1030bb30()
{
	m_pWaypoint.sub_10319ee0();
	m_i5c = 0;
	m_v4c.x = g_1070d1b0.x;
	m_v4c.y = g_1070d1b0.y;
	m_v4c.z = g_1070d1b0.z;
	m_b48 = 0;
	m_b58 = 0;
	m_i60 = 0;
	m_v34.x = g_1070d1b0.x;
	m_v34.y = g_1070d1b0.y;
	m_v34.z = g_1070d1b0.z;
	m_i28 = 0;
	m_i20 = 0;
	m_i2c = 1;
	m_i30 = -1;
	m_v14.x = g_1070d1b0.x;
	m_v14.y = g_1070d1b0.y;
	m_v14.z = g_1070d1b0.z;
	m_b11 = 0;
	m_b00 = 0;
	m_b01 = 0;
	m_i04 = 0;
	m_i08 = 0;
	m_i0c = 0;
	m_b10 = 0;
}
// END FUNCTION

// FUNCTION: 0x1030bc00 size=0xf
// TARGET: sub_1030bc00
int __fastcall sub_1030bc00(char *pThis)
{
	char *p = *(char **)(pThis + 0x24);
	if (p == 0)
	{
		return -1;
	}
	return *(int *)(p + 0x2c);
}
// END FUNCTION

// FUNCTION: 0x1030bc20 size=0xc
#include "CUnknown1030bc20.h"
int CUnknown1030bc20::sub_1030bc20()
{
	if (m_unk24 == 0)
		return 0;
	return m_unk24->m_unk28;
}
// END FUNCTION

// FUNCTION: 0x1030bc40 size=0x4
struct CUnknown1030bc40 { int sub_1030bc40(); };
int CUnknown1030bc40::sub_1030bc40()
{
    return *(int *)((char *)this + 0x60);
}
// END FUNCTION

// FUNCTION: 0x1030bc60 size=0xb9
#include "CAI_Path.h"

__declspec(dllimport) void DevMsg(const char *pszFormat, ...);

inline float LengthZXY(const Vector &v)
{
	float zx = v.z * v.z + v.x * v.x;
	return FastSqrt(zx + v.y * v.y);
}

bool CAI_Path::sub_1030bc60(float flTolerance)
{
	m_Waypoints.sub_10319f10();
	bool bOk = true;
	CAI_Waypoint *pWaypoint = (CAI_Waypoint *)m_Waypoints.m_unk0;
	while (pWaypoint)
	{
		unsigned int fFlags = pWaypoint->m_fWaypointFlags;
		CAI_Waypoint *pNext = pWaypoint->m_pNext;
		if ((fFlags & 8) == 8)
		{
			if (pNext)
			{
				bOk = false;
				DevMsg("!!ERROR!! Goal is not last waypoint!\n");
			}
			if (LengthZXY(*(Vector *)pWaypoint - m_vecGoal) > flTolerance)
			{
				bOk = false;
				DevMsg("!!ERROR!! Last waypoint isn't in goal position!\n");
			}
		}
		else if (!(fFlags & 2) && !pNext)
		{
			bOk = false;
			DevMsg("!!ERROR!! GetCurWaypoint has no goal!\n");
		}
		pWaypoint = pNext;
	}
	return bOk;
}
// END FUNCTION
