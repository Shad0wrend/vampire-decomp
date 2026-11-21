// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e14e0 size=0x4d
#include "CLocalDLLChain.h"
#include <string.h>
struct S100ed650Entry
{
	S100ed650Entry *m_pNext;	// 0x00
	int m_pad04[3];
	int m_nSize;	// 0x10
	int m_nType;	// 0x14
	int m_pad18[2];
	char m_data[0x14];	// 0x20
};
// TARGET: CLocalDLLChain::vfunc0
void CLocalDLLChain::vfunc0(CLocalDLLChainVisitor *pVisitor)
{
	S100ed650Entry first;
	memset(&first, 0, sizeof(first));
	for (S100ed650Entry *p = first.m_pNext; p; p = p->m_pNext) {
		if (p->m_nType == 1 || p->m_nType == 4)
			pVisitor->vfunc2(p->m_data, p->m_nSize, this);
	}
}
// END FUNCTION
