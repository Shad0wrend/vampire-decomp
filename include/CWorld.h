// class CWorld: the world entity (derived from CBaseEntity); only the overridden slots needed so far are declared.
#pragma once

#include "CBaseEntity.h"

class CWorld : public CBaseEntity
{
public:
	virtual void vfunc130(int a);
	CWorld *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_1000fe98();	// as in CPhysForce (transplant)
	CWorld *sub_1023b840();	// as in CKeepUpright (transplant)
	virtual bool vfunc110(const char *key, const char *value);	// "CWorld::KeyValue": skyname / sounds / WaveHeight / newunit / world_mins / world_maxs, else CBaseEntity::KeyValue

	char m_padWorld[0x45c - 0x3e0];
	float m_flWaveHeight;	// 0x045c
	float m_vecWorldMins[3];	// 0x0460
	float m_vecWorldMaxs[3];	// 0x046c
};
