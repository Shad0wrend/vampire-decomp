// C_TEBeamPoints: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_TEBaseBeam.h"

class C_TEBeamPoints : public C_TEBaseBeam
{
public:
	virtual ~C_TEBeamPoints();
public:
	virtual int vfunc9();
};
