// CTESprite: sprite temp entity (derived from the CBaseTempEntity head at +0x0); only the vtable head is modelled.
#pragma once

#include "CBaseTempEntity.h"

class CTESprite : public CBaseTempEntityHead
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTESprite();	// function 0x10067cb0: the vtable, then the base's destructor body
#endif
	CTESprite(const char *name);	// constructor: the base head with the name, then the zeroed fields (sub_10067c30)
	virtual CTESprite *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": a gunsmoke sprite at the origin (raised by 24, then 50 units along the flat direction of the angles and 25 against the right vector), created for everybody
	virtual void vfunc4(int a, int b);	// "Create" (stub 0x1000b52d), filter pointer and delay bits
	virtual void vfunc5();	// "Precache": precaches the gunsmoke and floater number sprites

	void sub_10013ee4();	// destructor body

	char m_pad0004[8];
	int m_c[3];	// 0x0c: the origin
	int m_nModelIndex;	// 0x18
	float m_fScale;	// 0x1c
	int m_nBrightness;	// 0x20

	Vector &Origin() { return *(Vector *)m_c; }
public:
    virtual ServerClass * vfunc0();
public:
    virtual int vfunc1();
};
