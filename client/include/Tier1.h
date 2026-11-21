// Tier1 / tier0 functions the game imports through function-pointer globals (0x109f3xxx IAT entries).
// The placeholder names are the ones the project knows for those addresses; declare them as data pointers
// (the game does `mov esi,[0x109f384c]; call esi` / `call dword ptr [0x109f3630]`), not as functions.
// A source that names one of these gets this header through the slim prelude.
#pragma once

extern char *(*g_101e31ac)(const char *pStr, const char *pSearch);	// 0x109f384c: Q_stristr (case-insensitive substring)
extern int (*g_101e31dc)(const char *s1, const char *s2, int n);	// 0x109f3848: Q_strncasecmp
extern void (*g_101e311c)(const char *pMsg, ...);	// 0x109f3630: DevMsg (variadic, cdecl)
extern void (*g_101e3140)(const char *pMsg, ...);	// 0x109f364c: DevWarning (variadic, cdecl)
extern void (*g_101e3108)(const char *pMsg, ...);	// 0x109f3628: Msg (variadic, cdecl; the game calls `call dword ptr [Msg]`)
extern int (*g_101e3190)(char *pDest, int nSize, const char *pFmt, ...);	// 0x109f388c: Q_snprintf
	// 0x109f3884: Q_strncat (the game passes (dest, src, 0x200, -1))
extern char *(*g_101e3188)(char *pDest, const char *pSrc, int nSize);	// 0x109f3890: Q_strncpy (the game calls call dword ptr [_imp_?Q_strncpy])
extern int (*g_101e31a4)(int nMin, int nMax);	// 0x109f3868: RandomInt (the game calls `push max / push min / call dword ptr [0x109f3868]`)
extern void (*g_101e31e0)(char *pDest, int nSize);	// 0x109f3860: Q_strnlwr (lowercases pDest in place, called as (dest, length))
extern void (*g_101e318c)(char *pStr, char *pOut, int nMaxLen);	// 0x109f3888: Q_trimspace (the game calls `push 0x40 / push out / push str / call dword ptr [_imp_?Q_trimspace]`)
