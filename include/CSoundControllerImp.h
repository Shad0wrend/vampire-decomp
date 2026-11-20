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

// The save/restore reader CSoundControllerImp's restore routine gets (vtable view; slot numbers as the code calls them).
class ISoundRestoreView
{
public:
	virtual void v0(); virtual void v1();
	virtual int vfunc2(void *pData, const char *pszDataMap);	// slot 2: reads the fields of the record described by the named data map into pData; non-zero when it succeeded
	virtual void v3(); virtual void v4();
	virtual void vfunc5();	// slot 5 (+0x14): starts a block (called before every record)
	virtual void v6(); virtual void v7();
	virtual void vfunc8();	// slot 8 (+0x20): ends the block
	virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void vfunc15(int *pValue, int nCount, int nMaxBytes);	// slot 15 (+0x3c): reads nCount integers (here the number of pending commands)
};

#ifdef PCD_INITIALIZERS	// the initializer units: Source's class (game_shared/soundenvelope.cpp, 2004 SDK)
#include "CSoundEnvelopeController.h"
#include "GameSystemRoot.h"
#include "utlpriorityqueue.h"

struct SoundCommand_t;
class CSoundPatch;

int sub_101bc500(char **a, char **b);	// SoundCommandLessFunc (matched under this name)

class CSoundControllerImp : public CSoundEnvelopeController, public CAutoGameSystem
{
public:
	// the overrides its vtables hold (typed as in the flat view below). The envelope controller's slots 0, 1, 12,
	// 16 and the game system's slots 4, 7 are defined under other names (the plain vfunc0 / vfunc1 / vfunc16 of
	// the flat view, the views sub_101bd650 / sub_101bd960 / sub_101bd940): declared only, the standalone link
	// takes the game's words
	virtual void SystemReset(); virtual void SystemUpdate(); virtual void vfunc12();
	virtual void vfunc16(void *pSound, int command, void *points, int numPoints);
	virtual void vfunc4(); virtual void vfunc7();	// CAutoGameSystem's
	virtual void vfunc2(CUnknown101bc140 *pSound, float flVolume, float flPitch);
	virtual void vfunc3(void *pSound, float executeDeltaTime, int command, float duration, float amplitude);
	virtual void vfunc4(void *pSound);
	virtual void vfunc5(void *pSound);
	virtual CUnknown101bc140 *vfunc6(void *pFilter, unsigned int nEntIndex, int nChannel, const char *pszSample, int nSoundLevel);
	virtual CUnknown101bc140 *vfunc7(void *pFilter, unsigned int nEntIndex, int nChannel, const char *pszSample, float flAttenuation);
	virtual CUnknown101bc140 *vfunc8(void *pFilter, unsigned int nEntIndex, const char *pszSample);
	virtual void vfunc9(void *pSound);
	virtual int vfunc10(int, int, int);
	virtual int vfunc11(int, int, int);
	virtual int vfunc13(int);
	virtual int vfunc14(int);
	virtual void vfunc15(void *pSound, int command, int *pPoints);
	virtual void vfunc17(int a);

	CSoundControllerImp()
	{
		m_commandList.SetLessFunc((CUtlPriorityQueue<SoundCommand_t *>::LessFunc_t)sub_101bc500);
	}

	CUtlVector<CSoundPatch *> m_soundList;	// 0x0c
	CUtlPriorityQueue<SoundCommand_t *> m_commandList;	// 0x20
	float m_flLastTime;	// 0x38
};
#else
class CSoundControllerImp
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(CUnknown101bc140 *pSound, float flVolume, float flPitch);	// registers a sound: its state at +0x24 is cleared, volume / pitch applied; a sound already playing (+0x3c) goes to slot 4, else it is appended to the sound vector at +0xc and started
	virtual void vfunc3(void *pSound, float executeDeltaTime, int command, float duration, float amplitude);	// "CommandAdd"
	virtual void vfunc4(void *pSound);	// "CommandClear"
	virtual void vfunc5(void *pSound);	// when pSound is not null: its pending request is handed to the sound system (CUnknown101bbd10::sub_101bbd10), slot 4 clears the commands, then sub_101bc590 (stub 0x10002e00)
	virtual CUnknown101bc140 *vfunc6(void *pFilter, unsigned int nEntIndex, int nChannel, const char *pszSample, int nSoundLevel);	// "SoundCreate" with a channel and a sound level: a new sound (0x6c bytes from the sound pool, fields cleared, entity handle -1), the entity index turned into an entity handle and resolved, then set up for the filter, the entity, the channel, the sample and the level
	virtual CUnknown101bc140 *vfunc7(void *pFilter, unsigned int nEntIndex, int nChannel, const char *pszSample, float flAttenuation);	// "SoundCreate" with an attenuation: like slot 6 with the sound level 50 + 20 / flAttenuation (0 for an attenuation of 0); the entity index argument is turned into an entity handle in place
	virtual CUnknown101bc140 *vfunc8(void *pFilter, unsigned int nEntIndex, const char *pszSample);	// "SoundCreate": a new sound (0x6c bytes from the sound pool) set up for the filter, the entity of that index, channel 0, the sample and sound level 0x4b
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

	void sub_101bcd20(CUnknown101bc140 **ppSound, ISoundRestoreView *pRestore);	// restore of one sound (ret 8): a new sound (0x6c bytes from the pool 0x1072c4e0: dwords +0, +4, +8, bytes +0xc, dwords +0x10, +0x14, +0x18, byte +0x1c cleared, +0x30 = -1, the filter at +0x44 constructed (sub_101bcef0), +0x2c = 0), slot 5 / slot 2(sound, "") / slot 8 of the reader; a sound that was read with its emitter-ish field +0x3c set is appended to m_Sounds (inline AddToTail: CMem4d_t::sub_101bdeb0 grow, UtlVec8::sub_101bde20); slot 5, slot 15(&count, 1, 0) for the pending command count, then per command a zeroed 0x18 byte record (pool 0x1072c4b0), slot 5 / slot 2(record, "") / slot 8, record[0] = sound and the heap at +0x20 (CUnknown101bc750::sub_101bc750) insert; finally slot 8 and *ppSound = sound
	void sub_101bc590(void *pSound);	// stub 0x10002e00: the member called by vfunc5 after slot 4

	char m_pad0004[8];	// 0x04 .. 0x0b
	CUtlVector4 m_Sounds;	// 0x0c: the playing sounds
	CUtlVector4 m_Second20;
	void *m_pLess34;
	float m_flLastTime;
	CUtlVector4 m_DummyEnd;	// 0x20: second vector (memory +0x20, alloc +0x24, grow +0x28, size +0x2c, elements +0x30); 0x101bd980 tears it down via UtlMem::sub_101bde70 at obj+0x20 (this+0x1c of the CAutoGameSystem subobject)
};
#endif
