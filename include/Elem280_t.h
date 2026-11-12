// Elem280_t: the plane solver's move suggestion (Source's AI_MoveSuggestion_t, 0x118 bytes with Troika's debug name),
// the element of CUtlVector<Elem280_t> at CAI_PlaneSolver +0x50 (its out-of-line Grow, ShiftElementsRight,
// CopyConstruct and copy constructor are named after this type).
#pragma once

#include "CBaseHandle.h"

extern int (*g_109f388c)(char *, int, const char *, ...);	// Q_snprintf
float sub_103090d0(float flAngle);	// UTIL_AngleMod-like (0..360)

struct AI_Arc280_t	// AI_Arc_t: center, span (degrees)
{
	AI_Arc280_t() : center(0), span(0) {}
	void Set(float newCenter, float newSpan) { center = sub_103090d0(newCenter); span = sub_103090d0(newSpan); }
	float center;
	float span;
};

struct Elem280_t	// AI_MoveSuggestion_t: type, weight, arc (center, span), obstacle handle, +0x14, debug name
{
	Elem280_t(int newType, float newWeight, float newDir, float newSpan, IHandleEntity *pEntity = 0)
	{
		type = newType;
		weight = newWeight;
		hObstacleEntity = pEntity;
		m_14 = 0;
		arc.Set(newDir, newSpan);
		name[0] = 0;
		g_109f388c(name, 0x100, "AU_NOKNOW");
	}
	int type;
	float weight;
	AI_Arc280_t arc;
	CBaseHandle hObstacleEntity;
	int m_14;
	char name[0x100];
};
