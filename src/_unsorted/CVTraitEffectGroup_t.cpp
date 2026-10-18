// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101f7350 size=0x1e
#include "CVTraitEffectGroup_t.h"

// TARGET: CVTraitEffectGroup_t::vfunc0
CVTraitEffectGroup_t *CVTraitEffectGroup_t::vfunc0(unsigned int flags)
{
	sub_1000a38f();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
