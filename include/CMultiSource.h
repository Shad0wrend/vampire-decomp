// CMultiSource: multi_manager-like logical entity. Only what matched code needs.
#pragma once
#include "CBaseEntity.h"

class CMultiSource : public CBaseEntity
{
public:
	virtual bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CMultiSource::KeyValue": accepts "style", "height", "killtarget", "value1", "value2" and "value3" without storing them (true), anything else goes to CBaseEntity::vfunc110
};
