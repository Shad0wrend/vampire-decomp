// CTEInspectionFX: inspection effect temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "Vector.h"

class CRecipientFilter;

class CTEInspectionFX
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEInspectionFX *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const float *pOrigin, const float *pAngles);	// "CTEInspectionFX::Create": the origin lifted by 24 units and moved 100 units along the (flattened) forward direction of pAngles, then slot 4 to every player
	virtual void vfunc4(CRecipientFilter *pFilter, float flDelay);	// "Create(filter, delay)": sends the effect
	void sub_1000de27(CRecipientFilter *pFilter, float flDelay);	// the body of vfunc4 (stub 0x1000de27), called directly
	CTEInspectionFX *sub_10065460(int a);	// constructor (0x10065460): the base temp entity head constructed with a, then the three words at 0x0c..0x14 cleared and the vtable set; returns this

	void sub_100043d6();	// destructor body

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
};
