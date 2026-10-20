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
	bool sub_102228f0(char *line, CExperienceAward *out);	// "ExperienceTable::ParseLine": scope trace, splits "name|desc|number" in place at the two '|' and fills out with heap copies of name and desc and atoi(number); false when a part is missing or empty
	void sub_10222740(int hFile);	// "ExperienceTable::LoadFile": scope trace, reads lines of the file through slot 20 of the global at 0x1070b238 into a 0x1000 byte buffer; skips lines starting with '>' and lines shorter than 3 characters, parses the others and appends them (inlined CUtlVector::AddToTail); stops at the end of the file or on a parse failure
};
