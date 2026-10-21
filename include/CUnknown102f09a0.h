// CUnknown102f09a0: the route object of the NPC pathfinder (it owns the route holder at +0x30 whose current waypoint
// is walked with CHolderInner24::sub_1030ba90); real name not yet known. Only what matched code needs.
#pragma once

#include "CHolderInner24.h"

class CAI_Waypoint;

class CUnknown102f09a0
{
public:
	void sub_102f09a0(CAI_Waypoint *pWaypoint, const float *pPosition);	// makes pPosition the next stop after pWaypoint: when it is the waypoint's own position the route is only advanced to pWaypoint, else a new waypoint (the position, flags copied from pWaypoint's +0x2c) is chained between pWaypoint and its successor and handed to the route holder

	char m_pad0000[0x30];
	CHolderInner24 *m_pRoute;	// 0x30
};
