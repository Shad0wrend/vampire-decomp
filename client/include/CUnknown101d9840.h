// CUnknown101d9840: container with an element count in its first dword; real name not yet known.
#pragma once

extern char g_105e7958[];	// the fallback element returned for a bad index

class CUnknown101d9840
{
public:
	int m_count;
	char m_pad04[8];
	int *m_pItems;	// 0x0c: the elements as dwords, 103 dwords (0x19c bytes) each

	char sub_10146250(int index);	// index is within 0..m_count-1
	char *sub_10146270(int index);	// the element at index (a plain member: the fallback g_107391c0 when the index is not valid)
};
