// CAI_DefMovementSink (RTTI .?AVCAI_DefMovementSink@@): default movement sink, 8 vtable slots (vtable 0x1049a0cc).
// The slots are named sinkN so that derived classes' vfuncN do not override them.
#pragma once

class CAI_DefMovementSink
{
public:
	CAI_DefMovementSink() {}
	virtual void sink0(); virtual void sink1(); virtual void sink2(); virtual void sink3();
	virtual void sink4(); virtual void sink5(int *pResult);	/* slot 5 (+0x14): the movement result handler: CAI_Navigator::vfunc15 hands it the failed result (< 0) by address */ virtual void sink6(); virtual void sink7();
};
