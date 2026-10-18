// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f5c30 size=0x1e
#include "CEffectsServer.h"

// TARGET: CEffectsServer::vfunc0
CEffectsServer *CEffectsServer::vfunc0(unsigned int flags)
{
	sub_1000168b();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100f6710 size=0x9
struct CGlobalVars1070b228 { int pad[3]; float curtime; };
extern CGlobalVars1070b228 *g_1070b228;
float CEffectsServer::vfunc9() { return g_1070b228->curtime; }
// END FUNCTION
