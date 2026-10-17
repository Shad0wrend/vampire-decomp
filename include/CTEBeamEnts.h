// CTEBeamEnts: beam-between-entities temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBeamEnts
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamEnts *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000dcfb();	// destructor body
};
