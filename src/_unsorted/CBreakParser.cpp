// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101920e0 size=0x3c
#include "CBreakParser.h"

struct breakparams_t {
	float v[3];
	char flag;
	char pad0d[0x110 - 0xd];
	float f110;
	float f114;
	float f118;
};
extern float g_1070d1b0[3];

void CBreakParser::vfunc1(void *pData)
{
	breakparams_t *p = (breakparams_t *)pData;
	p->flag = 0;
	p->v[0] = g_1070d1b0[0];
	p->v[1] = g_1070d1b0[1];
	p->v[2] = g_1070d1b0[2];
	p->f114 = 1.0f;
	p->f110 = 0;
	p->f118 = 0;
}
// END FUNCTION
