// CTESparks: sparks temp entity. Declared flat (bases not recovered).
#pragma once

#include "CTEParticleSystem.h"

class CUnknown1019d130;
class CRecipientFilter;

class CTESparks : public CTEParticleSystemHead
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTESparks();	// function 0x10067690: the vtable, then the base's destructor body
#endif
	CTESparks(const char *name);	// 0x10067620: the particle head (base constructor, origin zeroed), then the vtable
	virtual ServerClass *vfunc0();	// GetServerClass
	virtual int vfunc1();
	virtual CTESparks *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const float *pOrigin, const float *pAngles);	// "CTESparks::Create": the origin lifted by 24 units and moved 100 units along the (flattened) forward direction of pAngles, then slot 4 to every player
	virtual void vfunc4(CRecipientFilter *pFilter, float flDelay);	// slot 4: sends the temp entity to the recipients

	void sub_1000dc10();	// destructor body
	void sub_100677e0(CUnknown1019d130 *filter, float delay);	// slot 4 (called directly, stub 0x10011f22): sends the temp entity to the recipients

	int m_nMagnitude;	// 0x18
	int m_nTrailLength;	// 0x1c
	Vector m_vecDir;	// 0x20
};
