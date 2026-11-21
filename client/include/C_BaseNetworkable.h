// C_BaseNetworkable: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its overrides of IHandleEntity::vfunc0 and IHandleEntity::vfunc1, its destructor; nothing else yet
// the destructor is slot 10 of its vtable; its overrides are declared, the other virtual functions before it are not yet
#pragma once
#include "IClientUnknown.h"
#include "IClientNetworkable.h"
#include "IClientThinkable.h"

class C_BaseNetworkable : public IClientUnknown, public IClientNetworkable, public IClientThinkable
{
public:
	virtual int vfunc0(int a0);	// overrides IHandleEntity::vfunc0, pure there; C_BaseNetworkable has a vtable of its own in the game
	virtual unsigned int *vfunc1();	// overrides IHandleEntity::vfunc1, pure there; C_BaseNetworkable has a vtable of its own in the game
	virtual ~C_BaseNetworkable();
};
