// CTEGunshotDecal: gunshot decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEGunshotDecal
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEGunshotDecal *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3();
	virtual void vfunc4(int a, int b);	// slot 4 (jump stub 0x100022de): called directly on the global object

	void sub_1001520d();	// destructor body
};
