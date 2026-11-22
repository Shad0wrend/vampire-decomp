// C_TEBloodStream: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_TEParticleSystem.h"

class C_TEBloodStream : public C_TEParticleSystem
{
public:
	virtual ~C_TEBloodStream();
public:
	virtual int vfunc9();
};
