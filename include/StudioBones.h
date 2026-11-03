// StudioBones: the studio bone-cache / hitbox workers of the animation code. They share a 0x2c byte cache entry
// keyed by (studiohdr, sequence, time, angles, origin, mask): sub_100c46c0 looks an entry up, sub_100c47d0 builds
// one (from a matrix3x4_t bone array) and sub_100c4a20 is its thunk. sub_100c4600 turns a cache entry's bone list
// into a bone-index -> matrix3x4_t* map; sub_1013c0e0 is TransformAABB (bone-space box to world-space mins/maxs).
#pragma once

#include "StudioHdr.h"
#include "matrix3x4_t.h"

struct StudioCacheEntry;
struct Ray_t;
struct CGameTrace;

StudioCacheEntry *sub_100c46c0(int studiohdr, int sequence, float time, const float *angles, const float *origin, unsigned int mask);
StudioCacheEntry *sub_100c4a20(int studiohdr, int sequence, float time, const float *angles, const float *origin, unsigned int mask, void *pBones);
void sub_100c47d0(int studiohdr, int sequence, int time, const float *angles, const float *origin, unsigned int mask, void *pBones);

void sub_100c4600(int *pBoneMap, void *pBoneData, StudioHdr *pStudioHdr, StudioHitboxSet *pSet);

void sub_1013c0e0(const matrix3x4_t &boneToWorld, const Vector &vecMins, const Vector &vecMaxs, Vector &vecOutMins, Vector &vecOutMaxs);

// trace / vector helpers of the oriented-box ray tests (0x10241100 family, bone_setup.cpp):
CGameTrace *sub_1023f3d0(const Vector *pStart, const Vector *pDelta, CGameTrace *pTrace);	// trace init: start = *pStart, end = start + *pDelta, fraction 1, allsolid / startsolid / contents 0; returns pTrace
void sub_1011e010(Vector *pA, Vector *pB, Vector *pOut);	// CrossProduct: pOut = *pA x *pB


// matrix / box helpers called by the hitbox trace code (bone_setup.cpp):
void sub_10137fe0(const float *pIn, const float *pMatrix, float *pOut);	// VectorTransform: pOut = pMatrix * pIn + translation
void sub_10138130(const float *pIn, const float *pMatrix, float *pOut);	// VectorIRotate: (pIn - translation) projected on the matrix's columns
bool sub_10240cb0(const float *pStart, const float *pDelta, const float *pMins, const float *pMaxs, float flTolerance, CGameTrace *pTrace);	// IntersectRayWithBox worker: fills pTrace and answers whether the ray hits the box
