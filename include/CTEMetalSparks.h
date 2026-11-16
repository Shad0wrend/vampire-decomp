// CTEMetalSparks: metal sparks temp entity (derived from the CBaseTempEntity head at +0x0).
#pragma once

#include "CBaseTempEntity.h"

class CRecipientFilter;

class CTEMetalSparks : public CBaseTempEntityHead
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEMetalSparks();	// function 0x10059e80: the vtable, then the base's destructor body
#endif
	CTEMetalSparks(const char *name);	// 0x10059e10

	virtual CTEMetalSparks *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": the origin (raised, then 100 units along the flat direction of the angles) and the direction, created for everybody
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// "Create" (the stub 0x10004fa7 calls sub_10059fe0)

	void sub_1000e340();	// destructor body
	void sub_10059fe0(int a, int b);	// "CTEMetalSparks::Create" (called through the stub at 0x10004fa7)

	char m_pad0004[8];
	int m_pos[3];	// 0x000c
	int m_dir[3];	// 0x0018
public:
    virtual ServerClass * vfunc0();
public:
    virtual int vfunc1();
};
