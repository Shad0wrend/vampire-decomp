// IRestore: abstract base of CRestore (RTTI .?AVIRestore@@, vtable 0x104626bc, 35 slots, all pure but the last).
// Only the first slots are modelled.
#pragma once

class CBaseEntity;

class IRestore
{
public:
	virtual void vfunc0() = 0;
	virtual void vfunc1() = 0;
	virtual int vfunc2(CBaseEntity *pEnt, int map) = 0;
};
