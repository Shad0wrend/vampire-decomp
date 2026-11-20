// CAI_MoveProbe (RTTI .?AVCAI_MoveProbe@@, vtable 0x1049a120, 3 slots): the NPC's movement probe (a CAI_Component).
// Only what decompiled code needs.
#pragma once

#include "CAI_Component.h"
#include "Vector.h"

class CBaseEntity;
struct CGameTrace;

extern "C" void *__cdecl memset(void *, int, unsigned int);

// AIMoveTrace_t: the result of a movement trace, 14 dwords, zeroed by its constructor.
struct AIMoveTrace_t
{
	int fStatus;	// 0x00: 0 = ok, negative = blocked
	union
	{
		struct
		{
			float e0, e1, e2;	// 0x04: the position reached
			float n0, n1, n2;	// 0x10: the obstruction normal
			int nHit;		// 0x1c: the entity that was hit, 0 when none
			float f20;		// 0x20
			float f24;		// 0x24
			float s0, s1, s2;	// 0x28: the position started from
			float fDist;		// 0x34
		} m_fields;
		int m_unk[13];
	};

	AIMoveTrace_t() { memset(this, 0, sizeof(*this)); }
};

class CAI_MoveProbe : public CAI_Component
{
public:
	CAI_MoveProbe(void *pOuter) { m_pOuter = pOuter; }

	bool sub_102e6d70(int navType, const float *vecStart, const float *vecEnd, unsigned int collisionMask, const CBaseEntity *pTarget, float pctToCheckStandPositions, unsigned char flags, AIMoveTrace_t *pTrace, int a9, int a10);	// "CAI_MoveProbe::MoveLimit" (stub 0x10012b43): true when the trace did not fail (fStatus >= 0)
	void sub_102e2dc0(const float *pStart, const float *pEnd, unsigned int fMask, bool bUseCollisionGroup, CGameTrace *pTrace);
	char sub_102e7270(const float *vecPosition, unsigned int collisionMask, int a3, int a4, int a5, int a6);	// the stand position check (stub 0x1000b1e5): true when the hull fits at the position
	char sub_102e4f50(const float *vecStart, const float *vecEnd, int collisionMask, float flMaxDistance, int flags, AIMoveTrace_t *pTrace, int bStop, int unused);	// "CAI_MoveProbe::TestGroundMove" (scope "CAI_MoveProbe_TestGroundMove"): returns al (true = fully clear). Args by stack: start, end, mask, pct float (+0xf4), flags (+0xf8; tests 1, 2, 4, 8), pTrace (null -> a zeroed local), bStop (byte, +0x100: true = end position = vecEnd and return true), a8 (+0x104, passed as the last argument of sub_102e7270(start, mask, 0, 0, 0, a8)). Trace fields: [0]=0, [4..0xc]=start, [0x10..0x18]=origin vector g_1070d1b0, [0x1c]=0, [0x20]=2D length of end-start (sub_102e5d00), [0x24]=0, [0x34]=0. Debug overlays (sub_10142aa0 / sub_10142e90 / sub_10143b70, cdecl) when (*(m_pOuter+0x224) & 0x800000); [this+8] is an int index into the table at 0x1060a750 (sub_102d61b0 / sub_102d61e0: float hull extents)
	void sub_102e6be0(const float *vecStart, const float *vecEnd, const CBaseEntity *pTarget, AIMoveTrace_t *pTrace, int unused);	// "CAI_MoveProbe::FlyMoveLimit"-like (stub 0x10009f5c is its helper, not this): hull trace (profiled as CAI_MoveProbe_TraceHull, filtered by CTraceFilterNav) of the owner's collision bounds from start to end; when it hit something that is not pTarget, fills the trace record (hit entity, zero obstruction vector, status of the helper sub_102e2d70, the unused fraction of the way as a distance, at least 0.001)

	void sub_102a99e0(const Vector &vecStart, const float *vecEnd, const float *vecMins, const float *vecMaxs, unsigned int collisionMask, struct CGameTrace *pTrace, int a6, char bGround);	// the profiled hull trace (CAI_MoveProbe_TraceHull) of the owner's navigation filter (the ground one when bGround) from vecStart to vecEnd; draws the trace when the debug convar asks
	void sub_102e3450(const Vector &vecStart, const float *vecEnd, unsigned int collisionMask, struct CGameTrace *pTrace, char bGround);	// the same profiled hull trace as sub_102a99e0 (ret 0x14, 5 stack arguments) but with the hull taken from the owner's collision object (m_pOuter+0x270: slot 2 = mins vector copied, slot 1 = maxs pointer; mins z lowered by 1.0f) and two inlined copies of the trace body (bGround picks CTraceFilterNavGround102e3290::sub_102e3290 vs CTraceFilterNav::sub_102e30d0; the ground one also constructs a CUnknown1004f860::sub_1004f860 object); the VPROF scope is entered through the imported CVProfile::EnterScope (call [0x109f3660], 4 args: name, 0, "Unaccounted", false) and left with the inline tail
	char sub_102e7ba0(const float *vecStart, unsigned int collisionMask, float *pOut);	// \"CAI_MoveProbe::IterativeFloorPoint\": the ground probe (sub_102e7880) 720 units down with the owner's step height as the way up, profiled (inlined VPROF scope with the cycle counter)
	void sub_102e5d80(const float *vecStart, const float *vecEnd, unsigned int collisionMask, const CBaseEntity *pTarget, int flags, float pctToCheckStandPositions, AIMoveTrace_t *pTrace, int a9, int a10);
	void sub_102e6090(const float *vecStart, const float *vecEnd, unsigned int collisionMask, const CBaseEntity *pTarget, AIMoveTrace_t *pTrace, int a9);
	void sub_102e6290(const float *vecStart, const float *vecEnd, unsigned int collisionMask, const CBaseEntity *pTarget, AIMoveTrace_t *pTrace, int a9);
	float *sub_102e7060(float *pOut, const float *vecStart, const float *vecEnd, float flGravity, float *pTimeRange, float flArg6, float *pExtra);	// 0x102e7060 (stub 0x100020a4, ret 28, this in ecx, called three times by sub_102e6290): the ballistic arc between vecStart and vecEnd under flGravity (the gravity convar 0x109ef2d4 times the owner's gravity scale +0x3ec); pTimeRange is {0.0f at +0, 1024.0f at +4}-style in/out floats, flArg6 the owner's slot 524 float (jump height / speed), pExtra a vector scratch; returns pOut (a launch velocity vector, the caller reads x, y, z through eax)
	char sub_102e7880(const float *vecStart, unsigned int collisionMask, float flUp, float flDown, float *pOut, void *pExtra);	// the ground probe (stub 0x10005d44): true when it found ground below vecStart (the found position in pOut)

	char sub_102e4160(float *pArgs, float *pResult);
	char sub_102e7e40(void *pEnt);	// stub 0x100114aa, thiscall with one stack argument: tail-jumps to the outer entity's slot 166
	int m_unk10;
};
