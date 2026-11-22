// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

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
