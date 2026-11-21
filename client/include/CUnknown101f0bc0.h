// CUnknown101f0bc0: a reaction category: a count at +0xc and an array of that many 16 byte CUnknown101f0960 records at +0x10;
// real name not yet known.
#pragma once

class CUnknown101f0bc0
{
public:
	char m_pad00[0xc];
	int m_nReactions;	// 0x0c
	class CUnknown101f0960 *m_pReactions;	// 0x10

	void sub_10152c00(void *pKeyValues);	// counts the "Reaction" sub keys of the key values, allocates the array and loads each record from its key
};
