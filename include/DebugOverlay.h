// DebugOverlay: the debug line / text drawing helpers of the trace code, called directly by the "draw a swept
// trace" routines (0x10145300 / 0x10143710).
#pragma once

#include "Vector.h"

class CBaseEntity;

// CBaseEntity::Instance(index): the entity of an engine index (1..max), 0 for -1 / an invalid index.
CBaseEntity *sub_101cd9e0(int index);

// A debug overlay line between the two points; the colour is (r,g,b,a) and the width flWidth (0 = the default).
void sub_10142e90(const Vector *pStart, const Vector *pEnd, int r, int g, int b, unsigned char a, float flWidth);

// A debug overlay text at a position (nValue is an extra integer, unused by the shell callers).
void sub_10143710(const float *pPos, const char *pszText, int unused, int nValue);

// 0x10552810: the entity index the debug trace drawers follow (a plain int; -1 / 0 draws nothing).
extern int g_10552810;
