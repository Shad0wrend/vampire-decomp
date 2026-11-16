// CTEArmorRicochet: armor ricochet temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "CTEMetalSparks.h"

class CTEArmorRicochet : public CTEMetalSparks
{
public:
#ifdef PCD_INITIALIZERS	// the initializer units: the SDK constructor (te_armorricochet.cpp), inline in the global's initializer
	CTEArmorRicochet(const char *name) : CTEMetalSparks(name) {}
#endif
	virtual ServerClass *vfunc0();
	virtual int vfunc1();
	virtual CTEMetalSparks *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000e340();	// destructor body
};
