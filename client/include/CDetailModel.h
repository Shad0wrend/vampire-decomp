// CDetailModel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its overrides of IHandleEntity::vfunc0 and IHandleEntity::vfunc1; nothing else yet
#pragma once
#include "CBaseStaticModel.h"

class CDetailModel : public CBaseStaticModel
{
public:
	virtual int vfunc0(int a0);	// overrides IHandleEntity::vfunc0, pure there; CDetailModel has a vtable of its own in the game
	virtual unsigned int *vfunc1();	// overrides IHandleEntity::vfunc1, pure there; CDetailModel has a vtable of its own in the game
};
