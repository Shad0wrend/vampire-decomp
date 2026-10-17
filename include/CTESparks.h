// CTESparks: sparks temp entity. Declared flat (bases not recovered).
#pragma once

class CTESparks
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTESparks *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000dc10();	// destructor body
};
