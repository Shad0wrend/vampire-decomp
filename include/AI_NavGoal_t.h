// AI_NavGoal_t (Source ai_navigator.h): the goal record a task builds on the stack and hands to the navigator's
// SetGoal (0x40 bytes here; Troika's layout, names from the SDK). Only what decompiled code needs.
#pragma once

#include "Vector.h"

class CBaseEntity;

enum Activity { ACT_INVALID = -1 };
enum GoalType_t { GOALTYPE_INVALID, GOALTYPE_TARGETENT, GOALTYPE_ENEMY, GOALTYPE_PATHCORNER, GOALTYPE_LOCATION };

struct AI_NavGoal_t
{
	AI_NavGoal_t(const Vector &dest, Activity activity, float tolerance, unsigned flags, CBaseEntity *pTarget);	// 0x102a9d20

	GoalType_t type;	// 0x00
	Vector dest;	// 0x04
	int destNode;	// 0x10: -1 = NO_NODE
	Activity activity;	// 0x14
	Activity arrivalActivity;	// 0x18
	int arrivalSequence;	// 0x1c
	float tolerance;	// 0x20
	unsigned flags;	// 0x24
	CBaseEntity *pTarget;	// 0x28
	Vector arrivalDirection;	// 0x2c: vec3_invalid (0x10934060)
	int m_n38;	// 0x38
	int m_n3c;	// 0x3c
};
