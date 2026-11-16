// CSoundEnvelopeController: the abstract base of CSoundControllerImp (primary vtable, 18 slots, all pure).
// Slot 16 is declared void here: the sound controller's slot 15 calls it and discards the result.
#pragma once
#include "PcdVirtual.h"	// PCD_PURE: the sound controller global's class is not abstract in the initializer units

class CSoundEnvelopeController
{
public:
	virtual void vfunc0() PCD_PURE;
	virtual void vfunc1() PCD_PURE;
	virtual void vfunc2() PCD_PURE;
	virtual void vfunc3() PCD_PURE;
	virtual void vfunc4() PCD_PURE;
	virtual void vfunc5() PCD_PURE;
	virtual void vfunc6() PCD_PURE;
	virtual void vfunc7() PCD_PURE;
	virtual void vfunc8() PCD_PURE;
	virtual void vfunc9() PCD_PURE;
	virtual void vfunc10() PCD_PURE;
	virtual void vfunc11() PCD_PURE;
	virtual void vfunc12() PCD_PURE;
	virtual void vfunc13() PCD_PURE;
	virtual void vfunc14() PCD_PURE;
	virtual void vfunc15() PCD_PURE;
	virtual void vfunc16(void *pSound, int command, void *points, int numPoints) PCD_PURE;
	virtual void vfunc17() PCD_PURE;
};
