// CVTraitEffectGroup_t: declared by pcdecomp transplant for 0x101f7350 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

#include "CVTraitEffect_t.h"

class CVModInfo_t;

class CVTraitEffectGroup_t
{
public:
	char m_pad0000[8];
	const char *m_pszName;	// 0x08
	int m_nId;	// 0x0c: -1 for an empty group
	int m_nEffects;	// 0x10: the number of "TraitEffect" sub keys
	CVTraitEffect_t *m_pEffects;	// 0x14: m_nEffects effects of 0x44 bytes

	CVTraitEffectGroup_t *vfunc0(unsigned int flags);
	void sub_1000a38f();
	void sub_101f73f0(CVStatKV *pKV);	// counts the "TraitEffect" sub keys of pKV, allocates that many effects and loads each from its key
	void sub_101f7690(int a, CVModInfo_t *pInfo, int c);	// hands (a, pInfo, c) to every effect (stub 0x10015609)
	void sub_101f77f0(void *pOut);	// writes the group to an output object (sub_10203df0 / stub 0x100045ed): "[<id text>]\t\t\t{<name>}\t", then the lines of its effects (or "( <ERROR> )") and a newline
};
