// CTEUserTracer: user tracer temp entity. Declared flat (bases not recovered).
#pragma once
#include "ServerClass.h"

class CTEUserTracer
{
public:
	CTEUserTracer(const char *name);	// function 0x1006aa10
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEUserTracer();	// function 0x1006aa90: the vtable, then the base's destructor body
#endif

	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEUserTracer *vfunc2(unsigned int flags);	// scalar deleting destructor

	CTEUserTracer *sub_1006aa10(const char *name);	// the constructor body (CBaseTempEntityHead with the name, the vptr, the cleared fields); returns this
	void sub_1000b2b7();	// destructor body
	void sub_1006aad0(int a, int b);	// slot 4 (the Create/Send step), called directly with the filter and delay

	char m_pad04[0x8];
	float m_vOrigin[3];	// 0x0c
	float m_vEnd[3];	// 0x18
	int m_nField24;	// 0x24
	char m_bField28;	// 0x28
	char m_pad29[3];
	int m_nField2c;	// 0x2c
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
public:
	virtual void vfunc3(int, int);
};
