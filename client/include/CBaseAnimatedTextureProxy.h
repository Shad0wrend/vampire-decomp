// CBaseAnimatedTextureProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 3 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "IMaterialProxy.h"

class CBaseAnimatedTextureProxy : public IMaterialProxy
{
public:
	virtual ~CBaseAnimatedTextureProxy();
public:
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5(int);
};
