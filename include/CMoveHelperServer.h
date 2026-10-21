// CMoveHelperServer: the server side implementation of IMoveHelper.
// Only the vtable slots and members that decompiled code needs are given their
// real names; the placeholders keep the slot indices of the game's primary
// vtable (0x1046af0c) and the member offsets.
#pragma once

class CMoveHelperServer
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual bool vfunc2(const void *pTrace, const float *pVelocity);	// "CMoveHelperServer::AddToTouched": false for a trace without entity, the host (+0x4) or an entity already touched; else appends the trace and the impact velocity to the touch list at +0x8
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual CMoveHelperServer *vfunc14(unsigned int flags);
	virtual void vfunc15();
	virtual void vfunc16();

	char m_pad04[0x10];
	int m_nTouchCount;
	void sub_1000185c();	// as in CDataObjectAccessSystem (transplant)
};
