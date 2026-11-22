// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x10146670 size=0x4d
__declspec(dllimport) void Warning(const char *fmt, ...);
struct CNetStateUnit {
	char m_pad0[2];
	char m_bChanged;
	char m_pad3;
	short m_nInterval;
	short m_nCount;
	void sub_10146670(float flInterval);
};
// TARGET: CNetStateUnit::sub_10146670
void CNetStateUnit::sub_10146670(float flInterval)
{
	if (flInterval > 5.0) {
		Warning("Value passed to NetworkStateSetUpdateInterval (%.2f) too large.\n", flInterval);
		flInterval = 5.0f;
	}
	m_nInterval = (short)(flInterval * 13107.0);
	m_nCount = 0;
	m_bChanged = 1;
}
// END FUNCTION
