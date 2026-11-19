// CFireSphere (RTTI .?AVCFireSphere@@): a partition enumerator collecting the env_fire entities within a sphere.
// Only the fields the matched code reads. The list at +0x14 (data pointer, capacity, count) is a CUnknown10108e00
// seen through its own member function (the list members follow the vftable and the sphere).
#pragma once

#include "Vector.h"

class CBaseEntity;

class IPartitionEnumerator	// RTTI .?AVIPartitionEnumerator@@, the interface CFireSphere implements (Source's public/ispatialpartition.h, 1 slot)
{
public:
	virtual int vfunc0(CBaseEntity *pHandleEntity) = 0;	// slot 0
};

class CFireSphere : public IPartitionEnumerator
{
public:
	CFireSphere(int *pList, int nCapacity, char bCheckVisible, const Vector *pCenter, float flRadius);	// 0x10108d90
	virtual int vfunc0(CBaseEntity *pHandleEntity);	// "EnumElement": the entity behind the handle when it is an env_fire (and, with the visibility flag at +0x20 set, passes sub_1010a8d0) within the sphere (centre +0x04, squared radius +0x10) goes into the list (sub_10108e00); 1 when it was added, else 0

	Vector m_vecCenter;	// 0x04
	float m_flRadiusSqr;	// 0x10
	int *m_pList;	// 0x14
	int m_nListCapacity;	// 0x18
	int m_nListCount;	// 0x1c
	char m_bCheckVisible;	// 0x20
};
