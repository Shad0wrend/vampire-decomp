// C_BaseEntity: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its overrides of IHandleEntity::vfunc0 and IHandleEntity::vfunc1, its destructor, its operator delete; nothing else yet
// the destructor is slot 8 of its vtable; its overrides are declared, the other virtual functions before it are not yet
#pragma once
#include "IClientEntity.h"

class C_BaseEntity : public IClientEntity
{
public:
	virtual int vfunc0(int a0);	// overrides IHandleEntity::vfunc0, pure there; C_BaseEntity has a vtable of its own in the game
	virtual unsigned int *vfunc1();	// overrides IHandleEntity::vfunc1, pure there; C_BaseEntity has a vtable of its own in the game
	virtual ~C_BaseEntity();
	static void operator delete(void *pMem);
};
