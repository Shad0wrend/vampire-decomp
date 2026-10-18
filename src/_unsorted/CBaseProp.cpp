// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018e0d0 size=0x26
#include "CBaseProp.h"
#include "CBaseEntity.h"
#include "IVEngineServerFull.h"

extern IVEngineServerFull *g_1070b22c;
extern char g_106b8540[];

void CBaseProp::vfunc104()
{
	int unused;
	const char *name = *((CBaseEntity *)this)->vfunc9(&unused);
	if (!name)
		name = g_106b8540;
	g_1070b22c->PrecacheModel(name, 0);
}
// END FUNCTION

// FUNCTION: 0x1018e240 size=0x1e
#include "CBaseProp.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseProp::vfunc5
CBaseProp *CBaseProp::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
