// CUnknown1070b248: the engine sound system object (pointer at 0x1070b248); only slots 0, 2 and 3 are known.
// Slot 0 precaches a sound (name, flag), slot 2 emits one from an entity to a recipient filter (Source's
// EmitSound: filter, entity index, channel, sample, volume, sound level, flags, pitch, origin, direction,
// update positions, sound time), slot 3 emits one with a different argument list.
#pragma once

class CRecipientFilter;

class CUnknown1070b248
{
public:
	virtual int vfunc0(const char *pszSample, int bPreload);
	virtual void vfunc1();
	virtual void vfunc2(const CRecipientFilter *pFilter, int entindex, int channel, const char *pszSample, float flVolume, int iSoundlevel, int iFlags, int iPitch, const float *pOrigin, const float *pDirection, int bUpdatePositions, int soundtime);
	virtual void vfunc3(const CRecipientFilter *pFilter, int entindex, int channel, const char *pszSample, float flVolume, float flAttenuation, int flags, int pitch, int a, int b, int c, int d);
};
