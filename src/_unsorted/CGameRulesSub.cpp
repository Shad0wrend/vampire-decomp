// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10427940 size=0x19
#include "CGameRules.h"
// TARGET: CGameRulesSub::CGameRulesSub
CGameRulesSub::CGameRulesSub()
{
	int *p = (int *)this;
	p[0] = 1;
	for (int i = 0; i < 0x120; i++) {
		p[i + 1] = 0;
	}
}
// END FUNCTION
