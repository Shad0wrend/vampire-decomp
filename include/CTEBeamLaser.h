// CTEBeamLaser: beam laser temp entity. Declared flat (bases not recovered).
#pragma once

#include "ServerClass.h"
#include "CTEBaseBeam.h"

class CTEBeamLaser : public CTEBaseBeam
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEBeamLaser();	// function 0x1005b9b0: the vtable, then the base's destructor body
#endif
	CTEBeamLaser(const char *name);	// 0x1005b940: base CTEBaseBeam constructor call, vtable, +0x44/+0x48 cleared
	virtual ServerClass *vfunc0();	// GetServerClass
	virtual int vfunc1();
	virtual CTEBaseBeam *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(int a, int b);	// "CTEBeamLaser::Test": fills the fields with test values and fires it to a broadcast recipient filter (the two stack arguments are unused)
	virtual void vfunc4(int pFilter, int delay);	// "CTEBeamLaser::Create": fires the temp entity with the fields below to the recipient filter

	void sub_100051c8();	// destructor body

	int m_n44;
	int m_n48;
};
