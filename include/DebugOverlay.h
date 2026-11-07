// DebugOverlay: the debug line / text drawing helpers of the trace code, called directly by the "draw a swept
// trace" routines (0x10145300 / 0x10143710).
#pragma once

#include "Vector.h"

class CBaseEntity;

// CBaseEntity::Instance(index): the entity of an engine index (1..max), 0 for -1 / an invalid index.
CBaseEntity *sub_101cd9e0(int index);

// A debug overlay line between the two points; the colour is (r,g,b,a) and the width flWidth (0 = the default).
void sub_10142e90(const Vector *pStart, const Vector *pEnd, int r, int g, int b, unsigned char a, float flWidth);

// The client debug user message of type 0x3b (0x10144db0): pPos plus nine int / float dwords, written through the
// engine interface (UserMessageBegin slot 65, several message writes, MessageEnd).
void sub_10144db0(const Vector *pPos, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);

// A debug overlay text at a position (nValue is an extra integer, unused by the shell callers).
void sub_10143710(const float *pPos, const char *pszText, int unused, int nValue);

// 0x101434b0: the debug text overlay network message (builds a CBroadcastRecipientFilter, UserMessageBegin 0x2e,
// writes the arguments, MessageEnd). The game's callers reach it with the variadic engine slot 35 leaving its
// arguments on the stack; declared with the game's own 8-argument signature.
void sub_101434b0(int a, int b, const char *pszText, int d, int e, int f, int g, int h);

// A debug overlay box (0x10143b70, cdecl, 8 stack arguments): centred at pOrigin, extents pMins / pMaxs, colour r,g,b,
// then an int (always 1) and the duration in seconds (a float: 0, or 5.0f in RadiusDamage / env_physimpact).
void sub_10143b70(const Vector *pOrigin, const Vector *pMins, const Vector *pMaxs, int r, int g, int b, int nFlag, float flDuration);

// 0x101456e0 (cdecl, one Vector pointer, answers a float in st0): used by the trace drawer 0x10145980 on the view
// direction (the 1.0f-based scale it multiplies the box vectors with).
float sub_101456e0(const Vector *pDir);

// 0x10232d80 (cdecl, one pointer): fills a Vector with the followed player's view vector (0x10145980 passes a local).
void sub_10232d80(Vector *pOut);

// 0x10552810: the entity index the debug trace drawers follow (a plain int; -1 / 0 draws nothing).
extern int g_10552810;

// The swept-trace drawer: a line from pStart to pEnd stepped by flStep, with a "%i" label every nLabelStep
// steps (0x10145300; the entity followed is g_10552810, its body direction gives the width).
void sub_10145300(const Vector *pStart, const Vector *pEnd, float flStep, int nLabelStep, int r, int g, int b, unsigned char a, float flWidth);
