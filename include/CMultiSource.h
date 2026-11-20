// CMultiSource: multi_manager-like logical entity. Only what matched code needs.
#pragma once
#include "CBaseEntity.h"

class CMultiSource : public CBaseEntity
{
public:
	virtual bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CMultiSource::KeyValue": accepts "style", "height", "killtarget", "value1", "value2" and "value3" without storing them (true), anything else goes to CBaseEntity::vfunc110
	void sub_101331e0();	// "CMultiSource::Register": clears the handle array at +0x450 (32 entries, the count is at +0x568), sets the think function, collects the entities that target this one and then the "multi_manager" entities that have it as a target (up to 32), and clears bit 0 of the flags at +0x204
	virtual void vfunc103();	// slot 103: sets bit 0 of the flags at +0x204, sets the next think to curtime plus the double at 0x104493d0 (stored as a float at +0x17c) and sets the think function 0x100120bc
	virtual void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value);	// slot 173 "CMultiSource::Use": flips the triggered flag (+0x4d0) of the caller's entry in the member list (+0x450, count +0x568); a caller that is not a member is reported with Warning; when slot 147 says the source is triggered fires the OnTrigger output (+0x550)
	void sub_100ac4e0(int func, int thinkTime, const char *szContext);	// CBaseEntity::ThinkSet (stub 0x10007fe5)
	bool vfunc147(CBaseEntity *pActivator);	// slot 147 "CMultiSource::IsTriggered": false while disabled (flag bit 0 of +0x204), true when every member entry of the list is set and the global state (when named) is on

	char m_pad03e0[0x450 - 0x3e0];
	EHANDLE m_rgEntities[32];	// 0x0450
	int m_aMemberTriggered[32];	// 0x4d0: per member of the list (count at +0x568) the triggered flag
	char m_pad0550[0x568 - 0x550];
	int m_nMembers;	// 0x568
	const char *m_pszGlobalState;	// 0x56c
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc117();
    virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
