// CVTraitEffectGroup_t: declared by pcdecomp transplant for 0x101f7350 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

#include "CVTraitEffect_t.h"

class CVModInfo_t;
struct CTraitStatBlock;

class CVTraitEffectGroup_t
{
public:
	CVTraitEffectGroup_t(int nUnk);	// constructor (0x101f7310): stores nUnk at +4, vptr, +0xc = -1, +0x10 / +0x14 = 0
	virtual CVTraitEffectGroup_t *vfunc0(unsigned int flags);	// slot 0: scalar deleting destructor
	int m_n0004;	// 0x04
	const char *m_pszName;	// 0x08
	int m_nId;	// 0x0c: -1 for an empty group
	int m_nEffects;	// 0x10: the number of "TraitEffect" sub keys
	CVTraitEffect_t *m_pEffects;	// 0x14: m_nEffects effects of 0x44 bytes

		// the i-th effect, or a shared default effect (guarded static) when out of range
		// counts the "TraitEffect" sub keys of pKV, allocates that many effects and loads each from its key
		// hands (a, pInfo, c) to every effect (stub 0x10015609)
	void sub_10157130(CVModInfo_t *pInfo, void *pResult);	// hands (pInfo, pResult) to every effect (stub 0x10001159)
	void sub_101570b0(CTraitStatBlock *pBlock);	// stores the group's id at +0x40 of the stat block, then applies every effect to it (CUnknown101f6c50::sub_101f6c50)
		// writes the group to an output object (sub_10203df0 / stub 0x100045ed): "[<id text>]\t\t\t{<name>}\t", then the lines of its effects (or "( <ERROR> )") and a newline
};
