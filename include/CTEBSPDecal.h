// CTEBSPDecal: BSP decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "ServerClass.h"
#include "Vector.h"
#include "QAngle.h"

class CTEBSPDecal
{
public:
	CTEBSPDecal(const char *name);	// function 0x1005ee50
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEBSPDecal();	// function 0x1005eec0: the vtable, then the base's destructor body
#endif

	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEBSPDecal *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &vecOrigin, const QAngle &vecAngles);	// slot 3 (0x0c)
	virtual void vfunc4v(void *pFilter, int a);	// slot 4 (+0x10): the temp entity's Send; vfunc3 calls it virtually at 0x1005f0bc

	void sub_100035df();	// destructor body
	CTEBSPDecal *sub_1005ee50(int a);	// 0x1005ee50: the base temp entity's constructor (0x10015334), then the vtable and five zeroed fields at +0xc .. +0x1c
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant): the direct-call form of slot 4

	char m_pad0004[0x0c - 0x04];	// 0x04 .. 0x0b (bases not recovered)
	Vector m_vecPos;	// 0x0c: the decal position (vfunc3 adds 24.0f to z)
	int m_n18;	// 0x18: cleared by vfunc3
	int m_n1c;	// 0x1c: cleared by vfunc3
};
