// CTEInspectionFX: inspection effect temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEInspectionFX
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEInspectionFX *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_100043d6();	// destructor body
};
