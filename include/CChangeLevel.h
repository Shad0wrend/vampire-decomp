// CChangeLevel: level transition trigger (CBaseTrigger -> CBaseToggle -> CBaseEntity).
// Only what matched code needs.
#pragma once

#include "CBaseEntity.h"

struct inputdata_t;

class CChangeLevel : public CBaseEntity
{
public:
	virtual bool vfunc110(const char *szKeyName, const char *szValue);	// "CChangeLevel::KeyValue": "map" and "landmark" are copied (32 chars) to +0x598 / +0x5b8, anything else goes to CBaseToggle::KeyValue
	virtual void vfunc103();	// "CChangeLevel::Spawn": errors out for an empty map or landmark name, sets the use function (with a targetname) and the touch function (unless the spawn flag 2 is set), then cleans the map name

	const char *sub_1000b5cd();	// stub 0x1000b5cd: CBaseEntity::GetDebugName
	void sub_101c7890(CBaseEntity *pPlayer);	// stub 0x1000faba: the level change itself, for the player that triggered it
	void sub_101c7d90(CBaseEntity *pPlayer);	// changes the level for a player with an object at +0xa8, unless its slot 94 answers 9 (DevMsg \"In level transition: %s %s\")
	void sub_101c77d0(inputdata_t *pInput);	// "CChangeLevel::InputChangeLevel": changes the level for the player behind the activator (the activator's object at +0xa8, or that of the entity its handle at +0x8c names); warns "recieved ChangeNow input from non-player activator" when there is none
	void sub_101c5080();	// CBaseTrigger::Spawn (stub 0x1000dfd0), called directly
	void sub_1000da12(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// the use function (UseChangeLevel), only its address is known
	void sub_1000b7cb(CBaseEntity *pOther);	// the touch function (TouchChangeLevel), only its address is known

	char m_pad03e0[0x598 - 0x3e0];
	char m_szMapName[32];	// 0x0598
	char m_szLandmarkName[32];	// 0x05b8
public:
    virtual datamap_t * vfunc82();
	char m_pad05d8[0x5fc - 0x5d8];
};
