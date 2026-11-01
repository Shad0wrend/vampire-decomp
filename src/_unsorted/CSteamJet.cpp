// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10057bf0 size=0x6
#include "CSteamJet.h"
namespace lifted {
extern char g_106be568;
}
int CSteamJet::vfunc80()
{
    return (int)&lifted::g_106be568;
}
// END FUNCTION

// FUNCTION: 0x10057c10 size=0x3
#include "CSteamJet.h"
int CSteamJet::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10058050 size=0x6
#include "CSteamJet.h"
namespace lifted {
extern char g_1053ff38;
}
datamap_t *CSteamJet::vfunc82()
{
    return (datamap_t *)&lifted::g_1053ff38;
}
// END FUNCTION

// FUNCTION: 0x100580e0 size=0x41
#include "CSteamJet.h"
#include <string.h>

extern char g_106b8540[];

void CSteamJet::vfunc103()
{
	const char *pszName = m_pszClassname11c;
	if (!pszName)
		pszName = g_106b8540;
	if (strcmpi(pszName, "env_steamjet") == 0)
		m_bIsSteamJet46c = true;
	if (m_bFlag46d)
		m_nFlag468 = 1;
}
// END FUNCTION

// FUNCTION: 0x10058150 size=0x5e
#include "CSteamJet.h"
void CSteamJet::vfunc173(void *pActivator, void *pCaller, int useType, float value)
{
	if (useType == 0)
		m_nFlag468 = 0;
	else if (useType == 1)
		m_nFlag468 = 1;
	else if (useType == 2)
		m_nFlag468 = (int)value != 0;
	else if (useType == 3)
		m_nFlag468 = m_nFlag468 == 0;
}
// END FUNCTION

// FUNCTION: 0x10058240 size=0x1e
#include "CSteamJet.h"

void sub_100aa7b0(void *p);

// TARGET: CSteamJet::vfunc5
CSteamJet *CSteamJet::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
