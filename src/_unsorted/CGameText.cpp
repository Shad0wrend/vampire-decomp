// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020e1e0 size=0xd
#include "CGameText.h"
namespace lifted {
int __stdcall sub_10004557(int);
}
int CGameText::vfunc173(int a0, int a1, int a2, int a3)
{
    return lifted::sub_10004557(a0);
}
// END FUNCTION

// FUNCTION: 0x1020e200 size=0x6
#include "datamap.h"
#include "CGameText.h"
namespace lifted {
extern char g_105aab6c;
}
datamap_t *CGameText::vfunc82()
{
    return (datamap_t *)&lifted::g_105aab6c;
}
// END FUNCTION

// FUNCTION: 0x1020e290 size=0xcb
#include "CGameText.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
void sub_101d0570(int *pOut, int count, const char *pszString);

bool CGameText::vfunc110(const char *szKeyName, const char *szValue)
{
	if (_strcmpi(szKeyName, "color") == 0) {
		int color[4];
		sub_101d0570(color, 4, szValue);
		m_textParms.r1 = color[0];
		m_textParms.g1 = color[1];
		m_textParms.b1 = color[2];
		m_textParms.a1 = color[3];
	} else if (_strcmpi(szKeyName, "color2") == 0) {
		int color[4];
		sub_101d0570(color, 4, szValue);
		m_textParms.r2 = color[0];
		m_textParms.g2 = color[1];
		m_textParms.b2 = color[2];
		m_textParms.a2 = color[3];
	} else
		return sub_1009e430(szKeyName, szValue);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10216e00 size=0x1e
#include "CGameText.h"

void sub_100aa7b0(void *p);

// TARGET: CGameText::vfunc5
CBaseEntity *CGameText::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
