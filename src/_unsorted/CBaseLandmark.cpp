// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b71c0 size=0x6
#include "CBaseLandmark.h"
namespace lifted {
extern char g_10559828;
}
datamap_t *CBaseLandmark::vfunc82()
{
    return (datamap_t *)&lifted::g_10559828;
}
// END FUNCTION

// FUNCTION: 0x100b7670 size=0x78
#include "CBaseLandmark.h"
void sub_100aa7b0(void *p);

CPointEntity *CBaseLandmark::vfunc5(unsigned int flags)
{
	m_Output4f8.sub_100cd2d0();
	m_Output4e0.sub_100cd2d0();
	m_Output4c8.sub_100cd2d0();
	m_Output4b0.sub_100cd2d0();
	m_Output498.sub_100cd2d0();
	m_Output480.sub_100cd2d0();
	m_Output468.sub_100cd2d0();
	m_Output450.sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
