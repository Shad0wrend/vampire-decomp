// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10130d10 size=0x15
#include "CLogicAuto.h"
struct globalvars_t { int pad[3]; float curtime; };
extern globalvars_t *g_1070b228;
void CLogicAuto::sub_10130d10()
{
	m_flTime = g_1070b228->curtime + 0.2;
}
// END FUNCTION
