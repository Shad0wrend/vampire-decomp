// CUnknown1070b248: the engine sound system object (pointer at 0x1070b248); only slots 0, 2, 3 and 7 are known.
// Slot 0 precaches a sound (name, flag), slot 2 emits one from an entity to a recipient filter (Source's
// EmitSound: filter, entity index, channel, sample, volume, sound level, flags, pitch, origin, direction,
// update positions, sound time), slot 3 emits one with a different argument list, slot 7 stops a sound
// (filter or 0, channel, sample).
#pragma once

class CRecipientFilter;

class CUnknown1070b248
{
public:
	virtual int vfunc0(const char *pszSample, int bPreload);
	virtual void vfunc1();
	virtual void vfunc2(const CRecipientFilter *pFilter, int entindex, int channel, const char *pszSample, float flVolume, int iSoundlevel, int iFlags, int iPitch, const float *pOrigin, const float *pDirection, int bUpdatePositions, int soundtime);
	virtual void vfunc3(const CRecipientFilter *pFilter, int entindex, int channel, const char *pszSample, float flVolume, float flAttenuation, int flags, int pitch, int a, int b, int c, int d);
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7(const CRecipientFilter *pFilter, int channel, const char *pszSample);
};
