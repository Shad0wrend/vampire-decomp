// Physics_TraceHull (0x10035030): the game's 7-argument cdecl hull-trace wrapper (scope trace name
// "Physics_TraceHull"). pEntity is the pass entity: its collision group is at +0x368 and its vtable slot 189
// (+0x2f4) tells whether it is simulated by vphysics; in that case the call is forwarded to that object's slot 76
// with (start, end, mins, maxs, mask, entity, collisionGroup, entity, pTrace), otherwise the game rules object at
// 0x1070ba0c does CGameRules::vfunc76 with the same list. CGameRules.h already declares vfunc76.
#pragma once

#include "Vector.h"

class CBaseEntity;
struct CGameTrace;

void sub_10035030(CBaseEntity *pEntity, const Vector *pStart, const Vector *pEnd, const Vector *pMins,
                  const Vector *pMaxs, unsigned int fMask, CGameTrace *pTrace);
