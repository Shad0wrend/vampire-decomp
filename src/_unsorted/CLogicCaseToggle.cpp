// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10134590 size=0x6
#include "datamap.h"
#include "CLogicCaseToggle.h"
namespace lifted {
extern char g_10576f80;
}
datamap_t *CLogicCaseToggle::vfunc82()
{
    return (datamap_t *)&lifted::g_10576f80;
}
// END FUNCTION

// FUNCTION: 0x10134620 size=0x8a
#include "CLogicCaseToggle.h"
extern void (__cdecl *g_109f3630)(const char *, ...);

void CLogicCaseToggle::vfunc103()
{
	if (m_current < 0) {
		g_109f3630("Invalid initial value (%d) for %s.  Must be from 1 to %d.  Clamping to 1.\n", m_current, sub_100ab4f0(), 16);
		m_current = 0;
	} else if (m_current >= 16) {
		g_109f3630("Invalid initial value (%d) for %s.  Must be from 1 to %d.  Clamping to 16.\n", m_current, sub_100ab4f0(), 16);
		m_current = 15;
	} else {
		m_current--;
	}
	sub_101346e0(-1);
}
// END FUNCTION
