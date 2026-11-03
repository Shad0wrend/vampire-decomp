// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101f69f0 size=0x27
#include "CVTraitEffect_t.h"

void __fastcall sub_10205380(void *self);
void __fastcall sub_10204270(void *self);

// TARGET: CVTraitEffect_t::CVTraitEffect_t
CVTraitEffect_t::CVTraitEffect_t()
{
	sub_10205380(this);
	CVStatCost_t *pCost = &m_cost;
	pCost->m_first.sub_101fb7a0();
	pCost->m_second.sub_101fb7a0();
	sub_10204270(this);
}
// END FUNCTION
