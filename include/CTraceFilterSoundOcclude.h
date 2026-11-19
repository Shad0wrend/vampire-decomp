// CTraceFilterSoundOcclude: the trace filter that lets the sound occlusion trace pass the entities of a sound
// source. Only the members decompiled code needs are declared.
#pragma once
#include "ITraceFilter.h"

class CTraceFilterSoundOcclude : public CTraceFilter
{
public:
	virtual bool vfunc0(void *pEnt, int contentsMask);	// slot 0 "ShouldHitEntity": true when pEnt is the filter's excluded entity (sub_1000aa0b), or when pEnt is set and its sub_100a93d0 answers true
	void *sub_1000aa0b();	// the excluded entity (stub 0x1000aa0b for 0x1023bd00), called directly
	bool sub_100a93d0();	// stub 0x10005b4b, called on the entity (ecx = pEnt) by vfunc0
};
