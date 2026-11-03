// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c7290 size=0x6
#include "datamap.h"
#include "CChangeLevel.h"
namespace lifted {
extern char g_1059dc88;
}
datamap_t * CChangeLevel::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059dc88);
}
// END FUNCTION

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

// FUNCTION: 0x101cbff0 size=0x57
#include "CCineNPC.h"

void sub_100aa7b0(void *);
void __fastcall sub_1009df20(void *self);

struct Helper
{
	void *sub_101cbff0(unsigned int flags);
};

// TARGET: Helper::sub_101cbff0
void *Helper::sub_101cbff0(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x5e4))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x580))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x568))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4bc))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x4a4))->sub_10015708();
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
