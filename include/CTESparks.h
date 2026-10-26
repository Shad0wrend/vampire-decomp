// CTESparks: sparks temp entity. Declared flat (bases not recovered).
#pragma once

#include "Vector.h"

class CUnknown1019d130;
class CRecipientFilter;

class CTESparks
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTESparks *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const float *pOrigin, const float *pAngles);	// "CTESparks::Create": the origin lifted by 24 units and moved 100 units along the (flattened) forward direction of pAngles, then slot 4 to every player
	virtual void vfunc4(CRecipientFilter *pFilter, float flDelay);	// slot 4: sends the temp entity to the recipients

	void sub_1000dc10();	// destructor body
	void sub_100677e0(CUnknown1019d130 *filter, float delay);	// slot 4 (called directly, stub 0x10011f22): sends the temp entity to the recipients
	CTESparks *sub_10067620(int a);	// the constructor body (stub 0x10002ddd of CBaseTempEntityHead; the vtable of CTESparks is stored after it)

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
	int m_nMagnitude;	// 0x18
	int m_nTrailLength;	// 0x1c
	Vector m_vecDir;	// 0x20
};
