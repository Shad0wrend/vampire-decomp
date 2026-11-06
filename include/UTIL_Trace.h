// UTIL_Trace: the SDK's inline trace helpers (game_shared/util_shared.h) as this game inlines them. Use these instead
// of spelling out Ray_t / CTraceFilterSimple / TraceRay by hand: the inline expansion gives VC6's stack layout.
//  - enginetrace->TraceRay = g_1070b254->vfunc4 (CUnknown1070b254 slot 4)
//  - r_visualizetraces.GetBool() = !g_10738964->vfunc1() && g_10738964->m_n2c
//  - DebugDrawLine(start, end, r, g, b, noDepthTest, duration) = sub_10146570
#pragma once

#include "AITrace.h"
#include "CGameTrace.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "Ray_t.h"
#include "Vector.h"

// UTIL_TraceLine(start, end, mask, ignore, collisionGroup, &trace): a ray with a CTraceFilterSimple(ignore, group).
inline void UTIL_TraceLine(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.Init(vecAbsStart, vecAbsEnd);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// UTIL_TraceLine(start, end, mask, pFilter, &trace): a ray with the caller's own filter object.
inline void UTIL_TraceLine(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter,
	CGameTrace *ptr)
{
	Ray_t ray;
	ray.Init(vecAbsStart, vecAbsEnd);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// UTIL_TraceHull(start, end, mins, maxs, mask, ignore, collisionGroup, &trace): a swept box with a
// CTraceFilterSimple(ignore, group). This game's Ray_t::Init(start, end, mins, maxs) stays a call (sub_1006dec0).
inline void UTIL_TraceHull(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, 0, 0);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

// UTIL_TraceHull(start, end, mins, maxs, mask, pFilter, &trace): a swept box with the caller's own filter object.
inline void UTIL_TraceHull(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, void *pFilter, CGameTrace *ptr)
{
	Ray_t ray;
	ray.sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, 0, 0);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}
