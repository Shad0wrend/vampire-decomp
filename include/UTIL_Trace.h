// UTIL_Trace: the SDK's inline trace helpers (game_shared/util_shared.h) as this game inlines them. Use these instead
// of spelling out Ray_t / CTraceFilterSimple / TraceRay by hand: the inline expansion gives VC6's stack layout.
//  - enginetrace->TraceRay = g_1070b254->vfunc4 (CUnknown1070b254 slot 4)
//  - r_visualizetraces.GetBool() = !g_10738964->vfunc1() && g_10738964->m_n2c where the game inlines GetBool, or
//    g_10738960.sub_1005f190() (mov ecx, 0x10738960; call) where it calls it: the *_DebugCall / *_Calls forms
//  - Ray_t::Init(start, end) inline, or call Ray_t::sub_1004f7a0 (out of line): the *_RayCall / *_Calls forms
//  Pick the form from the game's asm: `call 0x1004f7a0` (or its stub) before TraceRay -> RayCall; a reference to
//  0x10738960 -> DebugCall; both -> Calls; neither -> plain UTIL_TraceLine.
//  - DebugDrawLine(start, end, r, g, b, noDepthTest, duration) = sub_10146570
#pragma once

#include "AITrace.h"
#include "CGameTrace.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "CUnknown10738964.h"
#include "Ray_t.h"
#include "Vector.h"

// UTIL_TraceLine(start, end, mask, ignore, collisionGroup, &trace): a ray with a CTraceFilterSimple(ignore, group).
inline void UTIL_TraceLine(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.InitInline(vecAbsStart, vecAbsEnd);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// UTIL_TraceLine_SumYXZ: UTIL_TraceLine whose inline Ray_t init sums the swept test's squares x, z, y (0x102d1af0).
inline void UTIL_TraceLine_SumYXZ(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.InitInlineSumYXZ(vecAbsStart, vecAbsEnd);
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
	ray.InitInline(vecAbsStart, vecAbsEnd);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// UTIL_TraceHull(start, end, mins, maxs, mask, ignore, collisionGroup, &trace): a swept box with a
// CTraceFilterSimple(ignore, group). This game's Ray_t::Init(start, end, mins, maxs) stays a call (sub_1006dec0);
// a, b = its last two byte arguments (pushed 0, 0 by most callers, 1, 0 by some).
inline void UTIL_TraceHull(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr, char a = 0, char b = 0)
{
	Ray_t ray;
	ray.sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, a, b);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

// UTIL_TraceHull(start, end, mins, maxs, mask, pFilter, &trace): a swept box with the caller's own filter object.
inline void UTIL_TraceHull(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, void *pFilter, CGameTrace *ptr, char a = 0, char b = 0)
{
	Ray_t ray;
	ray.sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, a, b);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

// ---- UTIL_TraceLine_RayCall: as UTIL_TraceLine, but Ray_t::Init is a call to 0x1004f7a0.
// UTIL_TraceLine_RayCall(start, end, mask, ignore, collisionGroup, &trace): a ray with a CTraceFilterSimple(ignore, group).
inline void UTIL_TraceLine_RayCall(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// UTIL_TraceLine_RayCall(start, end, mask, pFilter, &trace): a ray with the caller's own filter object.
inline void UTIL_TraceLine_RayCall(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter,
	CGameTrace *ptr)
{
	Ray_t ray;
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// ---- UTIL_TraceLine_DebugCall: as UTIL_TraceLine, but the debug test is a call, g_10738960.sub_1005f190().
// UTIL_TraceLine_DebugCall(start, end, mask, ignore, collisionGroup, &trace): a ray with a CTraceFilterSimple(ignore, group).
inline void UTIL_TraceLine_DebugCall(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.InitInline(vecAbsStart, vecAbsEnd);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// UTIL_TraceLine_DebugCall(start, end, mask, pFilter, &trace): a ray with the caller's own filter object.
inline void UTIL_TraceLine_DebugCall(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter,
	CGameTrace *ptr)
{
	Ray_t ray;
	ray.InitInline(vecAbsStart, vecAbsEnd);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// ---- UTIL_TraceLine_Calls: as UTIL_TraceLine, but both: Ray_t::Init call 0x1004f7a0 and debug test call 0x1005f190.
// UTIL_TraceLine_Calls(start, end, mask, ignore, collisionGroup, &trace): a ray with a CTraceFilterSimple(ignore, group).
inline void UTIL_TraceLine_Calls(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// UTIL_TraceLine_Calls(start, end, mask, pFilter, &trace): a ray with the caller's own filter object.
inline void UTIL_TraceLine_Calls(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter,
	CGameTrace *ptr)
{
	Ray_t ray;
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

// ---- UTIL_TraceHull_DebugCall: as UTIL_TraceHull, but the debug test is a call, g_10738960.sub_1005f190().
// UTIL_TraceHull_DebugCall(start, end, mins, maxs, mask, ignore, collisionGroup, &trace): a swept box with a
// CTraceFilterSimple(ignore, group). This game's Ray_t::Init(start, end, mins, maxs) stays a call (sub_1006dec0);
// a, b = its last two byte arguments (pushed 0, 0 by most callers, 1, 0 by some).
inline void UTIL_TraceHull_DebugCall(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr, char a = 0, char b = 0)
{
	Ray_t ray;
	ray.sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, a, b);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

// UTIL_TraceHull_DebugCall(start, end, mins, maxs, mask, pFilter, &trace): a swept box with the caller's own filter object.
inline void UTIL_TraceHull_DebugCall(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, void *pFilter, CGameTrace *ptr, char a = 0, char b = 0)
{
	Ray_t ray;
	ray.sub_1006dec0(vecAbsStart, &vecAbsEnd.x, &hullMin.x, &hullMax.x, a, b);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}
