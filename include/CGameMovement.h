// CGameMovement (RTTI .?AVCGameMovement@@): player movement. Declared flat; only the vtable head is modelled.
#pragma once

class CGameMovement
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual float *vfunc2(char flag, int unused);	// returns the sub-object at +0x2c when flag is set, else the one at +0x14
};
