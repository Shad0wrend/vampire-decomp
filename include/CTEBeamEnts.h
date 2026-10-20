// CTEBeamEnts: beam-between-entities temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBeamEnts
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamEnts *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000dcfb();	// destructor body
	CTEBeamEnts *sub_1005b360(int a);	// constructor body: base constructor (0x1000b1a4), vtable, fields 0x44/0x48; returns this
};
