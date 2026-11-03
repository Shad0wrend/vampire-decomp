// StudioBones: the studio bone-cache / hitbox workers of the animation code. They share a 0x2c byte cache entry
// keyed by (studiohdr, sequence, time, angles, origin, mask): sub_100c46c0 looks an entry up, sub_100c47d0 builds
// one (from a matrix3x4_t bone array) and sub_100c4a20 is its thunk. sub_100c4600 turns a cache entry's bone list
// into a bone-index -> matrix3x4_t* map; sub_1013c0e0 is TransformAABB (bone-space box to world-space mins/maxs).
#pragma once

#include "StudioHdr.h"
#include "matrix3x4_t.h"

struct StudioCacheEntry;

StudioCacheEntry *sub_100c46c0(int studiohdr, int sequence, float time, const float *angles, const float *origin, unsigned int mask);
StudioCacheEntry *sub_100c4a20(int studiohdr, int sequence, float time, const float *angles, const float *origin, unsigned int mask, void *pBones);
void sub_100c47d0(int studiohdr, int sequence, int time, const float *angles, const float *origin, unsigned int mask, void *pBones);

void sub_100c4600(int *pBoneMap, void *pBoneData, StudioHdr *pStudioHdr, StudioHitboxSet *pSet);

void sub_1013c0e0(const matrix3x4_t &boneToWorld, const Vector &vecMins, const Vector &vecMaxs, Vector &vecOutMins, Vector &vecOutMaxs);
