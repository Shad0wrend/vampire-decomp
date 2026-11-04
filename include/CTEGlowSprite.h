// CTEGlowSprite: glow sprite temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "CBaseTempEntity.h"

#include "Vector.h"
#include "QAngle.h"

class CRecipientFilter;

class CTEGlowSprite : public CBaseTempEntity
{
public:
	CTEGlowSprite *sub_100639b0(int a);	// constructor (0x100639b0): the temp entity base constructor (sub_10015334), then the vtable and the zeroed fields
	virtual ServerClass *vfunc0();
	virtual int vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": a glow sprite (scale 0.8, brightness 200, 2 seconds) raised 24 units above the origin, then 50 units along the flat direction of the angles and 25 units against the right vector, created for everybody
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// "Create"

	void sub_10004fb1();	// destructor body

	char m_pad0008[0xc - 0x8];
	Vector m_vecOrigin;	// 0x0c
	int m_nModelIndex;	// 0x18
	float m_fScale;	// 0x1c
	float m_fLife;	// 0x20
	int m_nBrightness;	// 0x24
};
