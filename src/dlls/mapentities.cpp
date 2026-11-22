// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x10136b40 size=0xc1
#include "CBaseEntity.h"
#include "CMapEntityLoad.h"
#include "CEntityMapData.h"
#include <string.h>

extern "C" __declspec(dllimport) void Error(const char *pszFormat, ...);
__declspec(dllimport) void Warning(const char *pszFormat, ...);
CBaseEntity *sub_10002e32(const char *pszClassname);

// TARGET: sub_10136b40
void sub_10136b40(CBaseEntity **ppEntity, char *pEntData)
{
	char className[256];
	CEntityMapData entData;
	entData.m_pBuffer = pEntData;
	entData.m_pCurrentKey = pEntData;
	if (!entData.sub_10136e50("classname", className))
		Error("classname missing from entity!\n");
	if (strlen(className) == 0)
		Error("zero-length classname for entity!\n");
	*ppEntity = sub_10002e32(className);
	if (*ppEntity) {
		(*ppEntity)->vfunc107((CEntityMapData *)&entData);
		(*ppEntity)->vfunc111();
		entData.sub_10136ea0();
	} else {
		Warning("Can't init %s\n", className);
		entData.sub_10136ea0();
	}
}
// END FUNCTION
