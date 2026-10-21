// CMultiSource: multi_manager-like logical entity. Only what matched code needs.
#pragma once
#include "CBaseEntity.h"

class CMultiSource : public CBaseEntity
{
public:
	virtual bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CMultiSource::KeyValue": accepts "style", "height", "killtarget", "value1", "value2" and "value3" without storing them (true), anything else goes to CBaseEntity::vfunc110
	void sub_101331e0();	// "CMultiSource::Register": clears the handle array at +0x450 (32 entries, the count is at +0x568), sets the think function, collects the entities that target this one and then the "multi_manager" entities that have it as a target (up to 32), and clears bit 0 of the flags at +0x204
	virtual void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// slot 173 "CMultiSource::Use": flips the triggered flag (+0x4d0) of the caller's entry in the member list (+0x450, count +0x568); a caller that is not a member is reported with Warning; when slot 147 says the source is triggered fires the OnTrigger output (+0x550)
};
