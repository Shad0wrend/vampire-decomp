// IServerEntity: server-side entity interface (RTTI .?AVIServerEntity@@, vtable 0x10450a10, 11 slots).
// Slots 0-4 are IServerUnknown's, slots 6-10 pure (__purecall in the game's vtable).
#pragma once
#include "CBaseNetworkable.h"

class CBaseEntity;

class IServerEntity : public IServerUnknown
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);	// slot 5: the scalar deleting destructor (vftable store, operator delete when bit 0, returns this)
	virtual void vfunc6(bool check) = 0;	// slot 6: SetCheckUntouch
	virtual void vfunc7() = 0;
	virtual int vfunc8() = 0;	// slot 8: GetModelIndex
	virtual const char **vfunc9(int *pOut) = 0;	// slot 9: GetModelName (string_t returned through pOut)
	virtual void vfunc10(int index) = 0;	// slot 10: SetModelIndex
};
