// IMoveHelper: the movement helper interface (RTTI .?AVIMoveHelper@@, vtable 0x1046afbc): the 2004 SDK's
// game_shared/imovehelper.h without the second StartSound (CMoveHelperServer's own slot 16 in this game) and with
// three slots of Troika's (11..13). Slots 0..13 are _purecall in the game's vtable; slot 14 is the destructor,
// declared last as in the SDK.
#pragma once

class IMoveHelper
{
public:
	virtual const char *vfunc0(unsigned int handle) const = 0;	// GetName(EntityHandle_t)
	virtual void vfunc1() = 0;	// ResetTouchList
	virtual bool vfunc2(const void *pTrace, const float *pVelocity) = 0;	// AddToTouched(trace, impact velocity)
	virtual void vfunc3() = 0;	// ProcessImpacts
	virtual void vfunc4(int idx, const char *pszFormat, ...) = 0;	// Con_NPrintf
	virtual void vfunc5(const float *pOrigin, int channel, const char *pszSample, float flVolume, int soundlevel, int fFlags, int pitch) = 0;	// StartSound
	virtual void vfunc6(int, int, int, int, int, int, int, int, int, int, int, int) = 0;	// PlaybackEventFull (12 arguments)
	virtual bool vfunc7() = 0;	// PlayerFallingDamage
	virtual void vfunc8(int) = 0;	// PlayerSetAnimation
	virtual int vfunc9() = 0;	// GetSurfaceProps
	virtual bool vfunc10(const unsigned int *pHandle) = 0;	// IsWorldEntity
	virtual void vfunc11() = 0;
	virtual void vfunc12() = 0;
	virtual float vfunc13(int param) = 0;
	virtual ~IMoveHelper() {}	// slot 14

	// 0x1013ee10, the game's scalar deleting destructor of this class (slot 14 of 0x1046afbc), matched by hand under
	// this name: the name ??_GIMoveHelper went to its byte-identical twin 0x1013ede0 (IMoveHelperServer's slot 14)
	void *vfunc14(char flags);
};
