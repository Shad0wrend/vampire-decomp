// AITrace: the trace helpers the NPC code calls directly.
//  - sub_1003e250 = CBaseEntity::GetTouchTrace (scope trace): copies the game's default touch trace (0x54 bytes,
//    a CGameTrace) into *pTrace and returns it.
//  - sub_10146570 = a cdecl wrapper: raises the z of both vectors by 0.1f, then calls sub_10142e90(start, end, a, b, c, d, e).
#pragma once

#include "CGameTrace.h"
#include "Vector.h"

CGameTrace *sub_1003e250(CGameTrace *pTrace);

void sub_10146570(const Vector *pStart, const Vector *pEnd, int a, int b, int c, int d, float e);

// 0x105d1030: five {x, z} float pairs used by the NPC hitbox trace loops (0, 30), (-50, 60), (50, 60), (-50, 10), (50, 10).
extern float g_105d1030[10];
