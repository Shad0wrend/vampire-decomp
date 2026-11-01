// CFilterMultiple: declared by pcdecomp transplant for 0x10108580 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CBaseEntity;

class CFilterMultiple
{
public:
	CFilterMultiple *vfunc5(unsigned int flags);

	void vfunc113();	// slot 113: resolves the five filter names (+0x488) to the handles of the entities of those names (+0x49c, -1 when none)
	bool sub_10107aa0(CBaseEntity *pEntity);	// slot 241 \"CFilterMultiple::PassesFilterImpl\": filter type 0 = all of the five filter handles must pass, else any one

	char m_pad0000[0x484];
	int m_nFilterType;	// 0x484
	const char *m_pszFilterName[5];	// 0x488: the names of the five filters
	unsigned int m_hFilter[5];	// 0x49c
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
