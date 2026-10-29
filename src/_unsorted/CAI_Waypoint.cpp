// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10319df0 size=0x55
#include <string.h>
#include "CAI_Waypoint.h"

// TARGET: CAI_Waypoint::CAI_Waypoint
CAI_Waypoint::CAI_Waypoint(const float *pPosition, int a, int b, int c, int d)
{
	memset(this, 0, 0xe * 4);
	m_vecPos[0] = pPosition[0];
	m_vecPos[1] = pPosition[1];
	m_vecPos[2] = pPosition[2];
	m_n0c = a;
	m_n2c = b;
	m_n18 = -1;
	m_fWaypointFlags = c;
	m_iNodeID = d;
	m_n1c = -1;
}
// END FUNCTION
