// C_TEExplosion: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_TEParticleSystem.h"

class C_TEExplosion : public C_TEParticleSystem
{
public:
	virtual ~C_TEExplosion();
public:
	virtual int vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual bool vfunc16(int, int, int);
};
