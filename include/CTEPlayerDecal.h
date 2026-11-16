// CTEPlayerDecal: player decal temp entity. Declared flat (bases not recovered).
#pragma once
#include "ServerClass.h"

class CRecipientFilter;
class Vector;
class QAngle;

class CTEPlayerDecal
{
public:
	CTEPlayerDecal(const char *name);	// function 0x10066320
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEPlayerDecal();	// function 0x10066390: the vtable, then the base's destructor body
#endif

	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEPlayerDecal *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &vecOrigin, const QAngle &vecAngles);	// slot 3 (0x0c)
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// slot 4 (+0x10): the temp entity's Send; vfunc3 calls it virtually at 0x10066593
	void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant): the direct-call form of slot 4

	void sub_1000a1dc();	// destructor body
	CTEPlayerDecal *sub_10066320(const char *name);	// constructor body (CBaseTempEntityHead base at stub 0x10015334), then the vtable and the zeroed fields from +0xc
};
