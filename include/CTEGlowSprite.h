// CTEGlowSprite: glow sprite temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEGlowSprite
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEGlowSprite *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10004fb1();	// destructor body
};
