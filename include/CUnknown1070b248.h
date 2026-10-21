// CUnknown1070b248: the engine sound system object (pointer at 0x1070b248); only slots 0 and 3 are known.
// Slot 0 precaches a sound (name, flag), slot 3 emits one from an entity to a recipient filter.
#pragma once

class CRecipientFilter;

class CUnknown1070b248
{
public:
	virtual int vfunc0(const char *pszSample, int bPreload);
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3(const CRecipientFilter *pFilter, int entindex, int channel, const char *pszSample, float flVolume, float flAttenuation, int flags, int pitch, int a, int b, int c, int d);
};
