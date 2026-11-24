#pragma once
// ITraceFilter: interface from RTTI; slots 0 and 1 (no destructor)
class ITraceFilter
{
public:
	virtual int vfunc0(void *, int) = 0;
	virtual int vfunc1() = 0;
};
