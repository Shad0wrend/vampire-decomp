// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10260d70 size=0x1e
#include "CAI_ExpressiveNPC.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_ExpressiveNPC::vfunc5
CAI_ExpressiveNPC *CAI_ExpressiveNPC::vfunc5(unsigned int flags)
{
	sub_1000aa51();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10260da0 size=0x7
#include "CAI_ExpressiveNPC.h"
int CAI_ExpressiveNPC::vfunc512()
{
    return *(int *)((char *)this + 0x5f48);
}
// END FUNCTION

// FUNCTION: 0x10260dc0 size=0xb
#include "CAI_ExpressiveNPC.h"
namespace lifted {
struct C100116d0 { int sub_100116d0(); };
}
int CAI_ExpressiveNPC::vfunc584()
{
    return ((lifted::C100116d0 *)(*(int *)((char *)this + 0x5f48)))->sub_100116d0();
}
// END FUNCTION

// FUNCTION: 0x10312d40 size=0x90
#include "CAI_ExpressiveNPC.h"
#include "CAI_Expresser.h"

CAI_Expresser *CAI_ExpressiveNPC::vfunc583()
{
	return new CAI_Expresser;
}
// END FUNCTION

// FUNCTION: 0x10312ef0 size=0x2b
#include "CAI_ExpressiveNPC.h"
#include "CAI_Expresser.h"
typedef CAI_Expresser *(__fastcall *GetExpresserFn)(void *);
int CAI_ExpressiveNPC::vfunc484(const char *pszName, float flDelay, float flVolume, int nSoundLevel, int b)
{
	return ((CAI_Expresser *)((GetExpresserFn)(*(void ***)this)[512])(this))->sub_10311f50(pszName, flDelay, flVolume, nSoundLevel, b);
}
// END FUNCTION
