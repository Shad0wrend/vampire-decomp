// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101333f0 size=0x6
#include "datamap.h"
#include "CMathCounter.h"
namespace lifted {
extern char g_105766dc;
}
datamap_t *CMathCounter::vfunc82()
{
    return (datamap_t *)&lifted::g_105766dc;
}
// END FUNCTION

// FUNCTION: 0x101335c0 size=0x5e
#include "CMathCounter.h"
#include <stdlib.h>

extern "C" int __cdecl _strcmpi(const char *, const char *);

bool CMathCounter::vfunc110(const char *pszKey, const char *pszValue)
{
	if (!_strcmpi(pszKey, "startvalue")) {
		float f = (float)atoi(pszValue);
		m_OutValue.sub_100d0390(1, &f);
		return true;
	}
	return sub_1009e430(pszKey, pszValue);
}
// END FUNCTION

// FUNCTION: 0x10133640 size=0xcc
#include "CMathCounter.h"

#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

struct CMathOutValueView : variant_t
{
	float Get() const { return flValue; }
	void Init(float value) { sub_100d0390(1, &value); }
};

// TARGET: CMathCounter::vfunc103
void CMathCounter::vfunc103()
{
	if (m_flMin > m_flMax)
	{
		float flTemp = m_flMax;
		m_flMax = m_flMin;
		m_flMin = flTemp;
	}
	if ((m_flMin != 0) || (m_flMax != 0))
	{
		CMathOutValueView &out = (CMathOutValueView &)m_OutValue;
		float flStartValue = clamp(out.Get(), m_flMin, m_flMax);
		out.Init(flStartValue);
	}
}
// END FUNCTION

// FUNCTION: 0x10135f60 size=0x41
#include "CMathCounter.h"
#include "COutputEvent.h"

void sub_100aa7b0(void *p);

CBaseEntity *CMathCounter::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x48c))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x474))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x45c))->sub_100cd2d0();
	((CLogicalEntity *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION
