// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f4730 size=0x23
#include "CGibShooter.h"
struct globalvars_t { int pad[3]; int curtime; };
extern globalvars_t *g_1070b228;
void CGibShooter::sub_100f4730(int a, int b, int c, int d)
{
	sub_100ac4e0(&CGibShooter::sub_1000913d, 0, 0);
	m_nNextThink = g_1070b228->curtime;
}
// END FUNCTION
