// CTESprite: sprite temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTESprite
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTESprite *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();	// "Precache": precaches the gunsmoke and floater number sprites

	void sub_10013ee4();	// destructor body
};
