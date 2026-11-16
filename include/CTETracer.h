// CTETracer: tracer temp entity. Declared flat (bases not recovered).
#pragma once

#include "Vector.h"

class CTETracer
{
public:
	CTETracer(const char *name);	// function 0x1006a400
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTETracer();	// function 0x1006a470: the vtable, then the base's destructor body
#endif

	virtual int vfunc0();
	virtual int vfunc1();
	virtual CTETracer *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector *pOrigin, const Vector *pAngles);	// slot 3 "Test": same body as CTEShowLine::vfunc3 (a line from the raised origin along the flattened forward direction with a cross bar), then slot 4 for every player
	virtual void vfunc4(void *pFilter, int delay);	// "Create"

	char m_pad0004[8];
	Vector m_vecStart;	// 0x0c
	Vector m_vecEnd;	// 0x18
	int m_n24;	// 0x24

	void sub_1000f236();	// destructor body
	CTETracer *sub_1006a400(const char *name);	// constructor body (CBaseTempEntityHead base at stub 0x10015334), then the vtable and the zeroed m_vecStart / m_vecEnd
};
