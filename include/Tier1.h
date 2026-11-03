// Tier1 / tier0 functions the game imports through function-pointer globals (0x109f3xxx IAT entries).
// The placeholder names are the ones the project knows for those addresses; declare them as data pointers
// (the game does `mov esi,[0x109f384c]; call esi` / `call dword ptr [0x109f3630]`), not as functions.
// A source that names one of these gets this header through the slim prelude.
#pragma once

extern char *(*g_109f384c)(const char *pStr, const char *pSearch);	// 0x109f384c: Q_stristr (case-insensitive substring)
extern int (*g_109f3848)(const char *s1, const char *s2, int n);	// 0x109f3848: Q_strncasecmp
extern void (*g_109f3630)(const char *pMsg, ...);	// 0x109f3630: DevMsg (variadic, cdecl)
