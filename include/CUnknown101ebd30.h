// CUnknown101ebd30: one entry of a data file that lists up to three "Botch" names (real class name not yet known).
#pragma once

class CUnknown101ebd30
{
public:
	int m_n00;
	int m_nInternalName;	// 0x04
	int m_n08;
	int m_aBotch[3];	// 0x0c: the ids of the "Botch1" .. "Botch3" names (-1 when unknown)

	bool sub_101ebd30(void *pData);	// loads the entry from its data key: InternalName, a second value, then the three Botch names looked up in the global name table (0x1073a2c4, count 0x1073a2c0); false for no key
};
