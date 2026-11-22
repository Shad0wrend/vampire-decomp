// C_BaseNetworkable: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its overrides of IHandleEntity::vfunc0 and IHandleEntity::vfunc1, its destructor, the client entity interfaces' slots it fills (client entity layer, 2026-11-22), the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 10 of its vtable; its overrides are declared, the other virtual functions before it are not yet
#pragma once
#include "IClientUnknown.h"
#include "IClientNetworkable.h"
#include "IClientThinkable.h"

class C_BaseNetworkable : public IClientUnknown, public IClientNetworkable, public IClientThinkable
{
public:
	virtual ICollideable *GetClientCollideable();	// IClientUnknown slot 2
	virtual IClientNetworkable *GetClientNetworkable();	// IClientUnknown slot 3
	virtual IClientRenderable *GetClientRenderable();	// IClientUnknown slot 4
	virtual IClientEntity *GetIClientEntity();	// IClientUnknown slot 5
	virtual C_BaseEntity *GetBaseEntity();	// IClientUnknown slot 6
	virtual IClientThinkable *GetClientThinkable();	// IClientUnknown slot 7
	virtual IClientUnknown *GetIClientUnknown();	// IClientNetworkable slot 0
	virtual void Release();	// IClientNetworkable slot 1, IClientThinkable slot 3
	virtual ClientClass *GetClientClass();	// IClientNetworkable slot 2
	virtual void NotifyShouldTransmit(int state);	// IClientNetworkable slot 3
	virtual void OnPreDataChanged(int updateType);	// IClientNetworkable slot 4
	virtual void OnDataChanged(int updateType);	// IClientNetworkable slot 5
	virtual void PreDataUpdate(int updateType);	// IClientNetworkable slot 6
	virtual void PostDataUpdate(int updateType);	// IClientNetworkable slot 7
	virtual bool IsDormant();	// IClientNetworkable slot 8
	virtual int entindex();	// IClientNetworkable slot 9
	virtual void ReceiveMessage(int classID, bf_read &msg);	// IClientNetworkable slot 10
	virtual void *GetDataTableBasePtr();	// IClientNetworkable slot 11
	virtual void ClientThink();	// IClientThinkable slot 0
	virtual void *GetThinkHandle();	// IClientThinkable slot 1
	virtual void SetThinkHandle(void *hThink);	// IClientThinkable slot 2
	virtual int vfunc0(int a0);	// overrides IHandleEntity::vfunc0, pure there; C_BaseNetworkable has a vtable of its own in the game
	virtual unsigned int *vfunc1();	// overrides IHandleEntity::vfunc1, pure there; C_BaseNetworkable has a vtable of its own in the game
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots C_BaseNetworkable adds to its base's vtable: 8-10, vfuncK at slot K
	virtual int vfunc8();
	virtual int vfunc9();
	virtual ~C_BaseNetworkable();
};
