// CTEWorldDecal: world decal temp entity. Declared flat (bases not recovered).
#pragma once
#include "ServerClass.h"
#include "Vector.h"
#include "QAngle.h"

class CTEWorldDecal
{
public:
	CTEWorldDecal(const char *name);	// function 0x1006af40
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEWorldDecal();	// function 0x1006afb0: the vtable, then the base's destructor body
#endif

	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEWorldDecal *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// slot 3 (0x0c)
	virtual void vfunc4v(void *pFilter, int a);	// slot 4 (+0x10): the temp entity's Send; vfunc3 calls it virtually

	void sub_1000e9df();	// destructor body
	CTEWorldDecal *sub_1006af40(int a);	// constructor body: base constructor (0x10015334), vtable, fields; returns this
	void sub_1000a097(int a, int b);	// CTEWorldDecal::vfunc4 (called directly): sends the decal with the position and normal in the globals set by the caller
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)

	char m_pad0004[0x0c - 0x04];	// 0x04 .. 0x0b (bases not recovered)
	Vector m_vecPos;	// 0x0c: the decal position (vfunc3 adds 24.0f to z)
	int m_n18;	// 0x18: cleared by vfunc3
	int m_n1c;	// 0x1c: cleared by vfunc3
};
