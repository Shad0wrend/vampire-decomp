// CFilterFeat: declared by pcdecomp transplant for 0x10108710 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CFilterFeat
{
public:
	CFilterFeat *vfunc5(unsigned int flags);
	bool vfunc241(char *pEntity);	// slot 241 "PassesFilter": false without an entity or its character object (+0x9c); else true when the character's cost for the feat named at +0x484 is at least the value at +0x488

	char m_pad0000[0x484];
	const char *m_pszFeat;	// 0x484
	int m_nMinCost;	// 0x488
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
