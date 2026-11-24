#pragma once
#include "ITraceFilter.h"
// CLocalPlayerTraceFilter: ITraceFilter that skips the local player and what it carries
class CLocalPlayerTraceFilter : public ITraceFilter
{
public:
	virtual bool vfunc0(void *, int);
	virtual int vfunc1();
};
