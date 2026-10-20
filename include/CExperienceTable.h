// CExperienceTable: table of 12-byte award records (CUtlVector layout: memory pointer at +0, size at +0xc).
#pragma once

struct CExperienceAward
{
	int m_a;	// the award's name (a heap string pointer)
	int m_b;
	int m_c;
};

class CExperienceTable
{
public:
	CExperienceAward *m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	int m_Size;	// 0x0c
	CExperienceAward *m_pElements;	// 0x10
	char m_flag14;	// 0x14

	CExperienceAward *sub_10222670(int index);	// "ExperienceTable::GetAward": scope trace, record `index` or a warning and the static dummy record
	void sub_102223f0();	// "ExperienceTable::PurgeExperience": scope trace, frees the two strings of every record and purges the memory
	void sub_10222210();	// "ExperienceTable::~ExperienceTable": scope trace, PurgeExperience, then the inlined CUtlVector destructor (RemoveAll + Purge, then the CUtlMemory Purge)
	int sub_10222500(const char *pszName);	// "ExperienceTable::FindIndex": scope trace, index of the record whose name equals pszName (case-insensitive, compared over the longer length), else a warning and -1
};
