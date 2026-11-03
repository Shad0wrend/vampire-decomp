// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ae300 size=0x1e
#include "CEnvSoundscape.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvSoundscape::vfunc5
CEnvSoundscape *CEnvSoundscape::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101ae330 size=0x6
#include "datamap.h"
#include "CEnvSoundscape.h"
namespace lifted {
extern char g_10596db4;
}
datamap_t *CEnvSoundscape::vfunc82()
{
    return (datamap_t *)&lifted::g_10596db4;
}
// END FUNCTION

// FUNCTION: 0x101ae3c0 size=0x60
#include "CEnvSoundscape.h"
#include "CSoundscapeSystem.h"
#include <string.h>

extern CSoundscapeSystem g_1072bc00;
__declspec(dllimport) void DevMsg(const char *pszFormat, ...);

char CEnvSoundscape::vfunc110(const char *pszKey, const char *pszValue)
{
	if (!_strcmpi(pszKey, "soundscape")) {
		m_nSoundscapeIndex458 = g_1072bc00.sub_10249aa0(pszValue);
		if (m_nSoundscapeIndex458 < 0 || m_nSoundscapeIndex458 > 100)
			DevMsg("Can't find soundscape: %s\n", pszValue);
		return 1;
	}
	return sub_1009e430(pszKey, pszValue);
}
// END FUNCTION

// FUNCTION: 0x101ae900 size=0x26
#include "CEnvSoundscape.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CEnvSoundscape::vfunc103
void CEnvSoundscape::vfunc103()
{
	*(float *)((char *)this + 0x17c) = g_1070b244->vfunc1(0, 0.5f) + gpGlobals->curtime;
}
// END FUNCTION
