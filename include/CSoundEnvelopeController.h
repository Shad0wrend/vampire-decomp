// CSoundEnvelopeController: the abstract base of CSoundControllerImp (primary vtable, 18 slots, all pure).
// Slot 16 is declared void here: the sound controller's slot 15 calls it and discards the result.
#pragma once
#include "PcdVirtual.h"	// PCD_PURE: the sound controller global's class is not abstract in the initializer units

class CUnknown101bc140;

class CSoundEnvelopeController
{
public:
	virtual void vfunc0() PCD_PURE;
	virtual void vfunc1() PCD_PURE;
	virtual void vfunc2(CUnknown101bc140 *pSound, float flVolume, float flPitch) PCD_PURE;
	virtual void vfunc3(void *pSound, float executeDeltaTime, int command, float duration, float amplitude) PCD_PURE;
	virtual void vfunc4(void *pSound) PCD_PURE;
	virtual void vfunc5(void *pSound) PCD_PURE;
	virtual CUnknown101bc140 *vfunc6(void *pFilter, unsigned int nEntIndex, int nChannel, const char *pszSample, int nSoundLevel) PCD_PURE;
	virtual CUnknown101bc140 *vfunc7(void *pFilter, unsigned int nEntIndex, int nChannel, const char *pszSample, float flAttenuation) PCD_PURE;
	virtual CUnknown101bc140 *vfunc8(void *pFilter, unsigned int nEntIndex, const char *pszSample) PCD_PURE;
	virtual void vfunc9(void *pSound) PCD_PURE;
	virtual int vfunc10(int, int, int) PCD_PURE;
	virtual int vfunc11(int, int, int) PCD_PURE;
	virtual void vfunc12() PCD_PURE;
	virtual int vfunc13(int) PCD_PURE;
	virtual int vfunc14(int) PCD_PURE;
	virtual void vfunc15(void *pSound, int command, int *pPoints) PCD_PURE;
	virtual void vfunc16(void *pSound, int command, void *points, int numPoints) PCD_PURE;
	virtual void vfunc17(int a) PCD_PURE;
};
