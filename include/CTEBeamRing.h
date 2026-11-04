// CTEBeamRing: beam ring temp entity. Declared flat (bases not recovered).
#pragma once

#include "CTEBaseBeam.h"
#include "ServerClass.h"

class CTEBeamRing : public CTEBaseBeam
{
public:
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEBaseBeam *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(int a, int b);	// resets the fields to their defaults (both arguments unused) and sends the effect to every player
	virtual void vfunc4(int a, int b);	// "CTEBeamRing::Create"-like: sends the effect described by the fields below

	CTEBeamRing(const char *name);	// 0x1005c5f0: the CTEBaseBeam constructor, then the vtable, then +0x44 / +0x48 cleared
	void sub_10002667();	// destructor body

	int m_nStartEnt;	// 0x44
	int m_nEndEnt;	// 0x48
};
