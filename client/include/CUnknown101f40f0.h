// CUnknown101f40f0: 0x34-byte record owned by CUnknown101f5150; real name not yet known.
#pragma once
#include "CUnknown101f35c0.h"

class CUnknown101f5150;

struct CUnknown101f40f0_Parent
{
	char m_pad0000[0xc];
	const char *m_pszName;	// 0x0c
	char m_pad0010[4];
	int m_nCount;	// 0x14
};

class CUnknown101f40f0
{
public:
	char m_pad0000[4];
	const char *m_pszName;	// 0x04
	CUnknown101f40f0_Parent *m_pParent;	// 0x08
	int *m_pInts;	// 0x0c: one dword per parent entry, all set to 1
	CUnknown101f35c0 m_Inner;	// 0x10

	CUnknown101f40f0 *sub_10155380();	// constructor (stub 0x1001097e)
	void sub_101553d0(CUnknown101f5150 *pOwner, const char *pszName);	// stub 0x1000364d
		// allocates the dword array, builds the "<parent name> <name>" text and hands it to the inner record (sub_101f3690, then sub_101f37a0)
};
