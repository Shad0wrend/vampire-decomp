// CBaseProp: declared by pcdecomp transplant for 0x1018e240 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once

class CBaseProp
{
public:
	CBaseProp *vfunc5(unsigned int flags);
	void sub_10004c3c();
	void vfunc104();	// as in CCameraAnimated (transplant)
	void vfunc103();	// slot 103 "CBaseProp::Spawn": with a model name (slot 9) precaches and sets the model, stops the movement, resets the animation state (sequence = the idle sequence, at least 0) and makes the prop occlude sound for solid types 1, 2 and 6; without a model name warns "prop at ... missing modelname" and removes the prop
public:
	bool vfunc158();
	char m_pad0000[0x730 - 0x0];
};
