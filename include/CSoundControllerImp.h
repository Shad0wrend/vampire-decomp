// CSoundControllerImp: the sound envelope controller (CSoundEnvelopeController -> CAutoGameSystem at +4).
// Only the primary vtable (19 slots) is described; slots 3, 4 and 16 are the ones recovered code calls.
#pragma once

struct envelopePoint_t
{
	float amplitudeMin;
	float amplitudeMax;
	float durationMin;
	float durationMax;
};

class CSoundControllerImp
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3(void *pSound, float executeDeltaTime, int command, float duration, float amplitude);	// "CommandAdd"
	virtual void vfunc4(void *pSound);	// "CommandClear"
	virtual void vfunc5(void *pSound);
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9(void *pSound);	// "SoundDestroy": stops the sound (slot 5), tears down its recipient vector (+0x4c), resets its recipient filter vtable (+0x44) and hands it back to the sound pool
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual float vfunc16(void *pSound, int command, envelopePoint_t *points, int numPoints);	// "SoundPlayEnvelope": clears the commands, adds one per point with random amplitude and duration, returns the total duration
	virtual void vfunc17();
	virtual void vfunc18();
};
