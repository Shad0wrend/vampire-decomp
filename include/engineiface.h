#pragma once
// enginesound / enginerandom: the engine's sound system (g_1070b248) and random stream (g_1070b244). Slot N is at
// +N*4 of the vtable: `mov ecx,[0x1070b244]; ... call [eax+8]` is `enginerandom->vfunc2(lo, hi)`. Types are the ones
// the matched sources call through (2026-10-28 survey of 108 + 82 sources and CUnknown1070b244.h / CUnknown1070b248.h).
// Untyped slots are `void vfuncN()` placeholders: give one its type here (edit_context) when your function calls it.
// The types live in a namespace so sources that still declare their own `extern X *g_1070b248;` keep compiling (the
// judge resolves both to one address).
class CRecipientFilter;

namespace EngineGlobals {
class IEngineSound
{
public:
	virtual int vfunc0(const char *pszSample, int bPreload);	// PrecacheSound
	virtual void vfunc1();
	virtual void vfunc2(const CRecipientFilter *pFilter, int entindex, int channel, const char *pszSample,
	                    float flVolume, int iSoundlevel, int iFlags, int iPitch, const float *pOrigin,
	                    const float *pDirection, int bUpdatePositions, int soundtime);	// EmitSound (sound level)
	virtual void vfunc3(const CRecipientFilter *pFilter, int entindex, int channel, const char *pszSample,
	                    float flVolume, float flAttenuation, int iFlags, int iPitch, int a, int b, int c, int d);	// EmitSound (attenuation)
	virtual void vfunc4(const CRecipientFilter *pFilter, int entindex, int channel, int sentenceIndex, float flVolume,
	                    int iSoundlevel, int iFlags, int iPitch, const float *pOrigin, const float *pDirection,
	                    int bUpdatePositions, int soundtime);	// EmitSentenceByIndex
	virtual void vfunc5(int value);
	virtual void vfunc6(int a, int b);
	virtual void vfunc7(int entindex, int channel, const char *pszSample);	// StopSound
	virtual void vfunc8(); virtual void vfunc9(); virtual void vfunc10();
	virtual void vfunc11(const CRecipientFilter *pFilter, int entindex, int a, float b, int c, int d, int e,
	                     const float *f, int g, int h, int i);
};
extern IEngineSound *g_1070b248;

class IUniformRandomStream
{
public:
	virtual void vfunc0(int iSeed);	// SetSeed
	virtual float vfunc1(float flMinVal, float flMaxVal);	// RandomFloat
	virtual int vfunc2(int iMinVal, int iMaxVal);	// RandomInt
};
extern IUniformRandomStream *g_1070b244;
}

#define enginesound EngineGlobals::g_1070b248
#define enginerandom EngineGlobals::g_1070b244
