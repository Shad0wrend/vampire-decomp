// CUnknown1070b248: the engine sound system object (pointer at 0x1070b248); only slots 0, 2, 3, 4, 5, 7 and 11 are known.
// Slot 0 precaches a sound (name, flag), slot 2 emits one from an entity to a recipient filter (Source's
// EmitSound: filter, entity index, channel, sample, volume, sound level, flags, pitch, origin, direction,
// update positions, sound time), slot 3 emits one with a different argument list, slot 4 is
// EmitSentenceByIndex (filter, entity index, channel, sentence index, volume, sound level, flags, pitch, origin,
// direction, update positions, sound time), slot 5 takes one integer, slot 7 stops a sound
// (filter or 0, channel, sample). Slot 11 takes a filter, an entity index and nine integers.
#pragma once

class CRecipientFilter;

class CUnknown1070b248
{
public:
	virtual int vfunc0(const char *pszSample, int bPreload);
	virtual void vfunc1();
	virtual void vfunc2(const CRecipientFilter *pFilter, int entindex, int channel, const char *pszSample, float flVolume, int iSoundlevel, int iFlags, int iPitch, const float *pOrigin, const float *pDirection, int bUpdatePositions, int soundtime);
	virtual void vfunc3(const CRecipientFilter *pFilter, int entindex, int channel, const char *pszSample, float flVolume, float flAttenuation, int flags, int pitch, int a, int b, int c, int d);
	virtual void vfunc4(const CRecipientFilter *pFilter, int entindex, int channel, int sentenceIndex, float flVolume, int iSoundlevel, int iFlags, int iPitch, const float *pOrigin, const float *pDirection, int bUpdatePositions, int soundtime);
	virtual void vfunc5(int value);
	virtual void vfunc6();
	virtual void vfunc7(const CRecipientFilter *pFilter, int channel, const char *pszSample);
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11(const CRecipientFilter *pFilter, int entindex, int a, int b, int c, int d, int e, int f, int g, int h, int i);
};
