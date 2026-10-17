// CTESpriteSpray: sprite spray temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTESpriteSpray
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTESpriteSpray *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000bc7b();	// destructor body
};
