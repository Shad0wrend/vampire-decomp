// CNPC_VCameraSecurity: declared by pcdecomp transplant for 0x10369e40 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

class CNPC_VCameraSecurity : public CBaseEntity
{
public:
	CNPC_VCameraSecurity *vfunc5(unsigned int flags);
	void sub_100123af();
	CNPC_VCameraSecurity *sub_10369df0();	// as in CKeepUpright (transplant)
	CBaseEntity *sub_10369e70();	// finds the camera entity named by m_pCameraName (cached as a handle, looked up again once stale), returns it or null
	bool vfunc363(CBaseEntity *pOther);	// slot 363: true when the camera (sub_10369e70) exists, pOther's dword at +0xa8 is set and the camera's sub_100150c3(pOther) accepts it
	bool vfunc201(CBaseEntity *pOther, int a, int b, int c);	// slot 201: as vfunc363 with the camera's sub_100137c3() (no argument) as the test
	bool vfunc468(CBaseEntity *pEnt);	// slot 468: true when pEnt's owning object (+0xa8) is set

	char m_pad03e0[0x6660 - 0x3e0];
	const char *m_pCameraName;	// 0x6660
	unsigned int m_hCamera;	// 0x6664
	char m_bCameraFound;	// 0x6668
public:
    virtual datamap_t * vfunc82();
};
