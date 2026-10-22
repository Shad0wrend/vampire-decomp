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

	void sub_100043d6();	// destructor body

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
};
