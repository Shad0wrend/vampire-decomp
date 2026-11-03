// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10231870 size=0x6
#include "CVGuiScreen.h"
namespace lifted {
extern char g_10751480;
}
int CVGuiScreen::vfunc80()
{
    return (int)&lifted::g_10751480;
}
// END FUNCTION

// FUNCTION: 0x10231890 size=0x3
#include "CVGuiScreen.h"
int CVGuiScreen::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10231c10 size=0x6
#include "datamap.h"
#include "CVGuiScreen.h"
namespace lifted {
extern char g_105b5c40;
}
datamap_t * CVGuiScreen::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105b5c40);
}
// END FUNCTION

// FUNCTION: 0x10231ca0 size=0x51
#include "CVGuiScreen.h"
#include <string.h>
bool CVGuiScreen::vfunc110(const char *key, const char *value)
{
    char *p = strchr(key, '#');
    if (p)
        *p = 0;
    if (!strcmpi(key, "panelname")) {
        sub_10231f40(value);
        return true;
    }
    return CBaseEntity::vfunc110(key, value);
}
// END FUNCTION

// FUNCTION: 0x10231d20 size=0x9f
#include "CVGuiScreen.h"
#include "CUnknown101466e0.h"

struct VecL {
	float x, y, z;
	VecL(float a, float b) { x = a; y = b; }
	VecL(float a, float b, float c) { x = a; y = b; z = c; }
};

void CVGuiScreen::vfunc103()
{
	m_flags268 |= 0x80;
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
	VecL maxs(*(float *)((char *)this + 0x450), *(float *)((char *)this + 0x454));
	*(int *)((char *)this + 0x45c) = 0;
	*(int *)((char *)this + 0x460) = 0xff;
	VecL mins(0.0f, 0.0f, -0.1f);
	maxs.z = 0.1f;
	*(int *)((char *)this + 0x464) = 1;
	sub_100adf10(&mins.x, &maxs.x);
	m_nTakeDamage = 0;
	sub_100b3580(0x8000);
}
// END FUNCTION

// FUNCTION: 0x102320c0 size=0x1e
#include "CVGuiScreen.h"

void sub_100aa7b0(void *p);

// TARGET: CVGuiScreen::vfunc5
CVGuiScreen *CVGuiScreen::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
