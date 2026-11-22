// IEntityListener (RTTI .?AVIEntityListener@@): the SDK's entity listener (entitylist.h), two slots. The one
// definition: CGlobalEntityList.h includes it for every unit, CNotifyList.h and the listeners' initializer forms too.
#pragma once

class CBaseEntity;

class IEntityListener
{
public:
	virtual void OnEntityCreated(CBaseEntity *pEntity);
	virtual void OnEntityDeleted(CBaseEntity *pEntity);
};
