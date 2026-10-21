// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c74c0 size=0xaf
#include "CChangeLevel.h"
#include <string.h>

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" __declspec(dllimport) void __cdecl Error(const char *fmt, ...);
extern char *(__cdecl *g_109f3890)(char *dest, const char *src, int count);	// Q_strncpy
extern char g_106b8540[];
void __cdecl sub_101cf7c0(char *szIn, char *szOut, int nOut);

// TARGET: CChangeLevel::vfunc103
void CChangeLevel::vfunc103()
{
	if (!_strcmpi(m_szMapName, g_106b8540))
		Error("a trigger_changelevel doesn't have a map");
	if (!_strcmpi(m_szLandmarkName, g_106b8540))
		Error("trigger_changelevel to %s doesn't have a landmark", m_szMapName);
	if (m_name26c)
		m_pfnUse = (void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float))&CChangeLevel::sub_1000da12;
	sub_101c5080();
	if (!(m_flags204 & 2))
		m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CChangeLevel::sub_1000b7cb;
	char szMap[260];
	sub_101cf7c0(m_szMapName, szMap, 260);
	g_109f3890(m_szMapName, szMap, 32);
}
// END FUNCTION
