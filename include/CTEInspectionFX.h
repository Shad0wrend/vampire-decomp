// CTEInspectionFX: inspection effect temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "CTEParticleSystem.h"

class CRecipientFilter;

class CTEInspectionFX : public CTEParticleSystemHead
{
public:
	CTEInspectionFX(const char *name);	// 0x10065460: the particle head (base constructor, origin zeroed), then the vtable
	virtual ServerClass *vfunc0();	// GetServerClass
	virtual int vfunc1();
	virtual CTEInspectionFX *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const float *pOrigin, const float *pAngles);	// "CTEInspectionFX::Create": the origin lifted by 24 units and moved 100 units along the (flattened) forward direction of pAngles, then slot 4 to every player
	virtual void vfunc4(CRecipientFilter *pFilter, float flDelay);	// "Create(filter, delay)": sends the effect
	void sub_1000de27(CRecipientFilter *pFilter, float flDelay);	// the body of vfunc4 (stub 0x1000de27), called directly

	void sub_100043d6();	// destructor body

};
