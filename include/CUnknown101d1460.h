// CUnknown101d1460: 64 byte helper object (class not known yet); only what matched code needs.
#pragma once

class CBaseEntity;

class CUnknown101d1460
{
public:
	void sub_101d1460(int index);	// "CBaseEntity::Instance" scope trace, resolves the entity of the edict index (0 gives the first edict through engine slot 38), then sub_101d1530(entity, 0)
	void sub_101d1530(CBaseEntity *pEnt, int a);	// called through the stub at 0x10013e44
};
