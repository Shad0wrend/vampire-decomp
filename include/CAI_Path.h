// CAI_Path: an NPC's route (SDK ai_navtype / ai_waypoint.h). Only what decompiled code needs.
#pragma once

#include "Vector.h"
#include "CAI_Waypoint.h"
#include "CUnknown10319f10.h"

class CAI_Path
{
public:
	bool sub_1030bc60(float flTolerance);	// route check: the goal waypoint (flag 8) must be the last one and within flTolerance of the goal position (+0x4c); a route without any goal waypoint is an error; DevMsg's "!!ERROR!! ..." for each failure and answers false then

	char m_pad0000[0x24];
	CUnknown10319f10 m_Waypoints;	// 0x24: the head of the waypoint chain
	char m_pad0028[0x4c - 0x28];
	Vector m_vecGoal;	// 0x4c
};
