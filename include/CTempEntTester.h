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
	void sub_10056e50();	// slot 134 (think): when the object at +0x450 is set calls its slot 3 with this->slot 220(this->slot 221()), schedules the next think at curtime + 1.0f (+0x17c) and returns while curtime is below the end time at +0x454; otherwise removes the entity
};
