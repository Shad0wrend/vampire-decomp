// CSoundEnvelopeController: the abstract base of CSoundControllerImp (primary vtable, 18 slots, all pure).
// Slot 16 is declared void here: the sound controller's slot 15 calls it and discards the result.
#pragma once

class CSoundEnvelopeController
{
public:
	virtual void vfunc0() = 0;
	virtual void vfunc1() = 0;
	virtual void vfunc2() = 0;
	virtual void vfunc3() = 0;
	virtual void vfunc4() = 0;
	virtual void vfunc5() = 0;
	virtual void vfunc6() = 0;
	virtual void vfunc7() = 0;
	virtual void vfunc8() = 0;
	virtual void vfunc9() = 0;
	virtual void vfunc10() = 0;
	virtual void vfunc11() = 0;
	virtual void vfunc12() = 0;
	virtual void vfunc13() = 0;
	virtual void vfunc14() = 0;
	virtual void vfunc15() = 0;
	virtual void vfunc16(void *pSound, int command, void *points, int numPoints) = 0;
	virtual void vfunc17() = 0;
};
