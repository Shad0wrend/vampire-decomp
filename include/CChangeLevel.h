// CChangeLevel: level transition trigger (CBaseTrigger -> CBaseToggle -> CBaseEntity).
// Only what matched code needs.
#pragma once

#include "CBaseEntity.h"

class CChangeLevel : public CBaseEntity
{
public:
	virtual bool vfunc110(const char *szKeyName, const char *szValue);	// "CChangeLevel::KeyValue": "map" and "landmark" are copied (32 chars) to +0x598 / +0x5b8, anything else goes to CBaseToggle::KeyValue

	char m_pad03e0[0x598 - 0x3e0];
	char m_szMapName[32];	// 0x0598
	char m_szLandmarkName[32];	// 0x05b8
};
