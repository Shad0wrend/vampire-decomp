// CSoundControllerImp: the sound envelope controller (CSoundEnvelopeController -> CAutoGameSystem at +4).
// Only the primary vtable (19 slots) is described; slots 3, 4 and 16 are the ones recovered code calls.
#pragma once

#include "CUtlVector4.h"
#include "CGlobalEntityList.h"

class CUnknown101bc140;
class CBaseEntity;

extern CGlobalEntityList *g_10566458;

struct envelopePoint_t
{
	float amplitudeMin;
	float amplitudeMax;
	float durationMin;
	float durationMax;
};

struct CSoundEntHandle	// the entity index argument of the sound creators: turned in place into an entity handle, then resolved
{
	unsigned int m_nValue;

	void FromIndex()
	{
		if (m_nValue == 0xffffffff)
			m_nValue = 0;
		else if (!g_10566458->m_Slots[m_nValue].m_pEntity)
			m_nValue = 0xffffffff;
		else
			m_nValue = (g_10566458->m_Slots[m_nValue].m_Serial << 13) | m_nValue;
	}

	CBaseEntity *Get() const
	{
		if (m_nValue != 0xffffffff) {
			CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_nValue & 0x1fff];
			if (s->m_Serial == (int)(m_nValue >> 13))
				return (CBaseEntity *)s->m_pEntity;
		}
		return 0;
	}
};

class CSoundControllerImp
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(CUnknown101bc140 *pSound, float flVolume, float flPitch);	// registers a sound: its state at +0x24 is cleared, volume / pitch applied; a sound already playing (+0x3c) goes to slot 4, else it is appended to the sound vector at +0xc and started
	virtual void vfunc3(void *pSound, float executeDeltaTime, int command, float duration, float amplitude);	// "CommandAdd"
	virtual void vfunc4(void *pSound);	// "CommandClear"
	virtual void vfunc5(void *pSound);	// when pSound is not null: its pending request is handed to the sound system (CUnknown101bbd10::sub_101bbd10), slot 4 clears the commands, then sub_101bc590 (stub 0x10002e00)
	virtual CUnknown101bc140 *vfunc6(void *pFilter, CSoundEntHandle hEntity, int nChannel, const char *pszSample, int nSoundLevel);	// "SoundCreate" with a channel and a sound level: a new sound (0x6c bytes from the sound pool, fields cleared, entity handle -1), the entity index turned into an entity handle and resolved, then set up for the filter, the entity, the channel, the sample and the level
	virtual CUnknown101bc140 *vfunc7(void *pFilter, unsigned int nEntIndex, int nChannel, const char *pszSample, float flAttenuation);	// "SoundCreate" with an attenuation: like slot 6 with the sound level 50 + 20 / flAttenuation (0 for an attenuation of 0); the entity index argument is turned into an entity handle in place
	virtual CUnknown101bc140 *vfunc8(void *pFilter, int nEntIndex, const char *pszSample);	// "SoundCreate": a new sound (0x6c bytes from the sound pool) set up for the filter, the entity of that index, channel 0, the sample and sound level 0x4b
	virtual void vfunc9(void *pSound);	// "SoundDestroy": stops the sound (slot 5), tears down its recipient vector (+0x4c), resets its recipient filter vtable (+0x44) and hands it back to the sound pool
	virtual int vfunc10(int, int, int);
	virtual int vfunc11(int, int, int);
	virtual void vfunc12();
	virtual int vfunc13(int);
	virtual int vfunc14(int);
	virtual void vfunc15(void *pSound, int command, int *pPoints);  // slot 15: slot 16 with the pair at pPoints as its last two arguments
	virtual float vfunc16(void *pSound, int command, envelopePoint_t *points, int numPoints);	// "SoundPlayEnvelope": clears the commands, adds one per point with random amplitude and duration, returns the total duration
	virtual void vfunc17(int a);	// slot 17 (0x101bd810): the sound pointer array at +0xc, from the last element down to 0, each element's member 0x10005970 (101bc260) called with a
	virtual void vfunc18();

	void sub_101bc590(void *pSound);	// stub 0x10002e00: the member called by vfunc5 after slot 4

	char m_pad0004[8];	// 0x04 .. 0x0b
	CUtlVector4 m_Sounds;	// 0x0c: the playing sounds
	CUtlVector4 m_Second20;	// 0x20: second vector (memory +0x20, alloc +0x24, grow +0x28, size +0x2c, elements +0x30); 0x101bd980 tears it down via UtlMem::sub_101bde70 at obj+0x20 (this+0x1c of the CAutoGameSystem subobject)
};
