// CTEBeamPoints: beam-between-points temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBeamPoints
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamPoints *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000a9fc();	// destructor body
};
