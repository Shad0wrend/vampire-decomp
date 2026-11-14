#pragma once
// UTIL_Trace.h forms whose debug-draw gate is written as Source wrote it: r_visualizetrace.GetInt() on the
// ConVar at 0x10738960 (its m_pParent is g_10738964). Same code as the plain forms, but another IL: it moves
// R12 reload order / association in some callers (hand-157 2026-11-14: 0x102f6d80, 0x10429080). Each form is
// its UTIL_Trace.h namesake with the suffix _Cv.
#include "UTIL_Trace.h"
#include "ConVar.h"

#define r_visualizetrace_cv (*(ConVar *)&g_10738960)

inline void UTIL_TraceLine_Cv(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.InitInline(vecAbsStart, vecAbsEnd);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (r_visualizetrace_cv.GetInt())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

inline void UTIL_TraceLine_SumYXZ_Cv(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.InitInlineSumYXZ(vecAbsStart, vecAbsEnd);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (r_visualizetrace_cv.GetInt())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

inline void UTIL_TraceLine_Cv(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter,
	CGameTrace *ptr)
{
	Ray_t ray;
	ray.InitInline(vecAbsStart, vecAbsEnd);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (r_visualizetrace_cv.GetInt())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

inline void UTIL_TraceHull_Cv(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr, char a = 0, char b = 0)
{
	Ray_t ray;
	ray.sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, a, b);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (r_visualizetrace_cv.GetInt())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

inline void UTIL_TraceHull_Cv(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, void *pFilter, CGameTrace *ptr, char a = 0, char b = 0)
{
	Ray_t ray;
	ray.sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, a, b);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (r_visualizetrace_cv.GetInt())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

inline void UTIL_TraceLine_RayCall_Cv(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (r_visualizetrace_cv.GetInt())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

inline void UTIL_TraceLine_RayCall_Cv(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter,
	CGameTrace *ptr)
{
	Ray_t ray;
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (r_visualizetrace_cv.GetInt())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}
