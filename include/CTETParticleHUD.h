// CTETParticleHUD: particle HUD temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTETParticleHUD
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTETParticleHUD *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_10006a5a();	// destructor body
};
