// CChangeLevel: level transition trigger (CBaseTrigger -> CBaseToggle -> CBaseEntity).
// Only what matched code needs.
#pragma once

#include "CBaseEntity.h"

struct inputdata_t;

class CChangeLevel : public CBaseEntity
{
public:
	virtual bool vfunc110(const char *szKeyName, const char *szValue);	// "CChangeLevel::KeyValue": "map" and "landmark" are copied (32 chars) to +0x598 / +0x5b8, anything else goes to CBaseToggle::KeyValue

	const char *sub_1000b5cd();	// stub 0x1000b5cd: CBaseEntity::GetDebugName
	void sub_101c7890(CBaseEntity *pPlayer);	// stub 0x1000faba: the level change itself, for the player that triggered it
	void sub_101c77d0(inputdata_t *pInput);	// "CChangeLevel::InputChangeLevel": changes the level for the player behind the activator (the activator's object at +0xa8, or that of the entity its handle at +0x8c names); warns "recieved ChangeNow input from non-player activator" when there is none

	char m_pad03e0[0x598 - 0x3e0];
	char m_szMapName[32];	// 0x0598
	char m_szLandmarkName[32];	// 0x05b8
};
