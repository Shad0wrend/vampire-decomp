// Map entity loading (MapEntity_ParseAllEntities, 0x10136650, called by CServerGameDLL::vfunc3 through stub 0x100106db).
// The function has a 0x10104-byte frame: char token[256] + SEntityRecord recs[0x2000] (8 bytes each) + one CBaseEntity *.
#pragma once

#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

struct SEntityRecord	// one entity waiting for its parent fix-up, sorted by the qsort callback 0x10136860
{
	CBaseEntity *m_pEnt;
	CBaseEntity *m_pParent;	// stored as 0 by the parse loop
};

// Matched callees (cdecl, defined in their own sources):
const char *sub_10136ce0(const char *pMapData, char *pToken, const char *pSep);	// 0x10136ce0 next token (MapEntity_ParseToken), 0 at the end; pSep = *(char **)0x10579478
CBaseEntity *sub_10136b40(CBaseEntity **ppEnt, const char *pEntData);	// 0x10136b40 creates the entity for the block at pEntData (stored in *ppEnt); returns the data cursor for sub_10136c50
void sub_10136c50(CBaseEntity *pCursor);	// 0x10136c50 frees that cursor
void sub_101368a0(int nRecords, SEntityRecord *pRecords);	// 0x101368a0 fills in the parent column of the records
int sub_101d1280(CBaseEntity *pEnt);	// 0x101d1280 spawns the entity; < 0 means it removed itself (then sub_100f6ce0 on g_106eb5d8)
int sub_10136860(const void *a, const void *b);	// 0x10136860 qsort callback over SEntityRecord

// CBaseEntity members used (CBaseEntity.h): m_pParentName124 (+0x124), m_pEdict2e0 (+0x2e0), vfunc216 (SetAbsOrigin(const Vector &)),
// vfunc218 (angles setter), vfunc220 / vfunc221 (origin / angles getters), sub_100a0670 (SetParent(pParent, iAttachment), stub 0x10005650),
// g_106eb5d8.sub_100f7770 (FindEntityByName, stub 0x1000b4b5), g_106eb5d8.sub_100f6ce0.
