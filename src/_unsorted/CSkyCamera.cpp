// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018a550 size=0x6
#include "CSkyCamera.h"
#include "datamap.h"
namespace lifted {
extern char g_10589ad0;
}
datamap_t *CSkyCamera::vfunc82()
{
    return (datamap_t *)&lifted::g_10589ad0;
}
// END FUNCTION

// FUNCTION: 0x1018a5e0 size=0x8
#include "CSkyCamera.h"
// TARGET: CSkyCamera::vfunc103
void CSkyCamera::vfunc103()
{
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1018a600 size=0x4a
#include "CSkyCamera.h"
extern CSkyCamera *g_1072a498;

void CSkyCamera::vfunc104()
{
	m_vecOrigin454 = *vfunc220();
	m_nArea460 = engine->vfunc111(&m_vecOrigin454.x);
	m_pNext484 = g_1072a498;
	g_1072a498 = this;
}
// END FUNCTION

// FUNCTION: 0x1018bef0 size=0x1e
#include "CSkyCamera.h"

void sub_100aa7b0(void *p);

// TARGET: CSkyCamera::vfunc5
CSkyCamera *CSkyCamera::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
