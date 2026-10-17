// CTEArmorRicochet: armor ricochet temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEArmorRicochet
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEArmorRicochet *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000e340();	// destructor body
};
