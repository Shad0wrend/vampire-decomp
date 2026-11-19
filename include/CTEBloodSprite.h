// CTEBloodSprite: blood sprite temp entity (derived from the CBaseTempEntity head at +0x0); only the vtable head is modelled.
#pragma once

#include "CBaseTempEntity.h"

class CRecipientFilter;

class CTEBloodSprite : public CBaseTempEntity
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEBloodSprite();	// function 0x1005d970: the vtable, then the base's destructor body
#endif
	CTEBloodSprite(const char *name);	// 0x1005d8f0

	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": a blood sprite at the origin (raised by 24, then 50 units along the flat direction of the angles), created for everybody
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// "Create" (filter pointer, delay bits), as in CTEMetalSparks (transplant)

	void sub_1000d4b8();	// destructor body

	char m_pad0008[0xc - 0x8];
	int m_c[3];	// 0x000c: the origin
	char m_pad0018[12];
	int m_24[7];	// 0x0024

	Vector &Origin() { return *(Vector *)m_c; }
public:
    virtual ServerClass * vfunc0();
public:
    virtual int vfunc1();
};
