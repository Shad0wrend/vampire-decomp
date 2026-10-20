// CTEBeamRingPoint: beam ring temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBeamRingPoint
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamRingPoint *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10008404();	// destructor body
	void sub_10009b6a(int a, int b);	// slot 4 (stub 0x10009b6a): sends the temp entity, called directly on the global instance after its fields are filled
	CTEBeamRingPoint *sub_1005cbc0(int a);	// constructor body: base constructor (0x1000b1a4), vtable, fields 0x44..0x54; returns this
};
