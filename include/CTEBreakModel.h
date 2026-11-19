// CTEBreakModel: break model temp entity (derived from the CBaseTempEntity head at +0x0); only the vtable head is modelled.
#pragma once

#include "CBaseTempEntity.h"

class CTEBreakModel : public CBaseTempEntity
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEBreakModel();	// function 0x1005e700: the vtable, then the base's destructor body
#endif
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": a break model at the origin with random velocity, created for everybody
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// slot 4 "Create" (the virtual call; the plain vfunc4 below is the direct call of its body)

	CTEBreakModel(const char *name);	// 0x1005e660
	void sub_1000f53d();	// destructor body
	void vfunc5();	// as in CFireSmoke (transplant)
	void vfunc4(void *pFilter, int delay);	// slot 4 "Create": sends the effect to the recipients of the filter (called directly by the TE_BreakModel wrapper)

	char m_pad0008[0xc - 0x8];
	float m_vecOrigin[3];	// 0x0c
	float m_angRotation[3];	// 0x18
	float m_vecSize[3];	// 0x24
	int m_nField30;	// 0x30
	int m_nField34;	// 0x34
	int m_nField38;	// 0x38
	int m_nField3c;	// 0x3c
	int m_nField40;	// 0x40

	Vector &Origin() { return *(Vector *)m_vecOrigin; }
public:
    virtual ServerClass * vfunc0();
public:
    virtual int vfunc1();
};
