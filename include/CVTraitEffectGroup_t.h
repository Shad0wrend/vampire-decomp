// CVTraitEffectGroup_t: declared by pcdecomp transplant for 0x101f7350 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

#include "CVTraitEffect_t.h"

class CVTraitEffectGroup_t
{
public:
	char m_pad0000[0x10];
	int m_nEffects;	// 0x10: the number of "TraitEffect" sub keys
	CVTraitEffect_t *m_pEffects;	// 0x14: m_nEffects effects of 0x44 bytes

	CVTraitEffectGroup_t *vfunc0(unsigned int flags);
	void sub_1000a38f();
	void sub_101f73f0(CVStatKV *pKV);	// counts the "TraitEffect" sub keys of pKV, allocates that many effects and loads each from its key
};
