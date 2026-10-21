// CSoundControllerImp: the sound envelope controller (CSoundEnvelopeController -> CAutoGameSystem at +4).
// Only the primary vtable (19 slots) is described; slots 3, 4 and 16 are the ones recovered code calls.
#pragma once

#include "CUtlVector4.h"

class CUnknown101bc140;

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
	virtual void vfunc2(CUnknown101bc140 *pSound, float flVolume, float flPitch);	// registers a sound: its state at +0x24 is cleared, volume / pitch applied; a sound already playing (+0x3c) goes to slot 4, else it is appended to the sound vector at +0xc and started
	virtual void vfunc3(void *pSound, float executeDeltaTime, int command, float duration, float amplitude);	// "CommandAdd"
	virtual void vfunc4(void *pSound);	// "CommandClear"
	virtual void vfunc5(void *pSound);
	virtual CUnknown101bc140 *vfunc6(void *pFilter, int nEntIndex, int nChannel, const char *pszSample, int nSoundLevel);	// "SoundCreate" with a channel and a sound level: a new sound (0x6c bytes from the sound pool, fields cleared, entity handle -1), the entity index turned into an entity handle and resolved, then set up for the filter, the entity, the channel, the sample and the level
	virtual void vfunc7();
	virtual CUnknown101bc140 *vfunc8(void *pFilter, int nEntIndex, const char *pszSample);	// "SoundCreate": a new sound (0x6c bytes from the sound pool) set up for the filter, the entity of that index, channel 0, the sample and sound level 0x4b
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

	char m_pad0004[8];	// 0x04 .. 0x0b
	CUtlVector4 m_Sounds;	// 0x0c: the playing sounds
};
