// CPointAngleSensor (RTTI .?AVCPointAngleSensor@@): point_anglesensor entity. Only what decompiled code needs.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"
#include "inputdata_t.h"

class CPointAngleSensor : public CBaseEntity
{
public:
	virtual int vfunc126(int a);	// brackets the base implementation with enter/leave calls on the member at +0x464
	virtual int vfunc127(int a);	// base implementation, then a call on the member at +0x464 with mode 3
	virtual bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "KeyValue": "tolerance" is the cosine of the angle in degrees (+0x460), else CBaseEntity::vfunc110
	virtual void vfunc113();	// slot 113 "CPointAngleSensor::Activate": CBaseEntity::vfunc113, then resolves the target entity (name at +0x20c, handle at +0x454) and the look-at entity (name at +0x450, handle at +0x458) by name when their handles do not resolve
	virtual void vfunc103();	// slot 103: re-arms the next think with the current time
	virtual void vfunc134();	// slot 134 "CPointAngleSensor::Think": with both entities live, tests whether the target faces the look-at entity; once it has done so for the duration (+0x45c, counted from the stamp at +0x464) fires OnFacingLookat once (flag +0x468); stops facing: clears the flag and the stamp; always re-arms the next think (+0x17c) with the current time
	CPointAngleSensor *vfunc5(unsigned int flags);	// as in CBaseCineCam (transplant)
	void sub_1018d210(inputdata_t *pInput);	// "CPointAngleSensor::InputTest": fires OnFacingLookat or OnNotFacingLookat with the input's activator, by whether the target (handle at +0x454) faces the look-at entity (handle at +0x458) within the dot tolerance at +0x460
	bool sub_1018cf20(CBaseEntity *pTarget, CBaseEntity *pLookAt, float flDotTolerance);	// whether pTarget faces pLookAt (stub 0x100062da)

	char m_pad0450[0x454 - sizeof(CBaseEntity)];
	unsigned int m_hTargetEntity;	// 0x454
	unsigned int m_hLookAtEntity;	// 0x458
	float m_flDuration;	// 0x45c: how long the target has to face the look-at entity
	float m_flDotTolerance;	// 0x460
	float m_flFacingTime;	// 0x464: stamp of the moment the target started facing it (0 = not facing)
	char m_bFired;	// 0x468
	char m_pad0469[3];
	COutputEvent m_OnFacingLookat;	// 0x46c
	COutputEvent m_OnNotFacingLookat;	// 0x484
public:
    virtual datamap_t * vfunc82();
};
