// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034aa40 size=0x4b
#include "CBaseEntity.h"
#include "CGenericNPC.h"
#include "engineiface.h"
#include "engineserver.h"
extern const char *g_106244c0[3];
extern char g_106b8540[];
// TARGET: CGenericNPC::vfunc104
void CGenericNPC::vfunc104()
{
	CBaseEntity *p = (CBaseEntity *)this;
	for (unsigned int i = 0; i < 3; i++)
		enginesound->vfunc0(g_106244c0[i], 0);
	int dummy;
	const char *name = *p->vfunc9(&dummy);
	engine->vfunc13(name ? name : g_106b8540, 0);
}
// END FUNCTION

// FUNCTION: 0x1034aab0 size=0x1e
#include "CGenericNPC.h"

void sub_100aa7b0(void *p);

// TARGET: CGenericNPC::vfunc5
CGenericNPC *CGenericNPC::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
