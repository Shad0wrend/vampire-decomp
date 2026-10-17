// CTempEntTester: temp entity tester entity. Declared flat (bases not recovered).
#pragma once

class CTempEntTester
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CTempEntTester *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000cb8a();	// destructor body
};
