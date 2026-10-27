// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012eb70 size=0x28
#include "CHudEntity.h"

extern char g_106b8540[];

// TARGET: CHudEntity::vfunc104
void CHudEntity::vfunc104()
{
    char *p = m_p454;
    if (!p)
        p = g_106b8540;
    m_n458 = engine->vfunc13(p, 0);
}
// END FUNCTION

// FUNCTION: 0x1012ede0 size=0x1e
#include "CHudEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CHudEntity::vfunc5
CHudEntity *CHudEntity::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
