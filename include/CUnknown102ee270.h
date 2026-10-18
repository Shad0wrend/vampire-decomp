// CUnknown102ee270: polymorphic object (slot 7 is called after sub_102f28a0); real name not yet known.
#pragma once

class CUnknown102ee270
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3();
	virtual void vfunc4(); virtual void vfunc5(); virtual void vfunc6();
	virtual void vfunc7();

	void sub_102f28a0();
	char sub_102ee270();	// runs sub_102f28a0, then slot 7, and returns true
};
