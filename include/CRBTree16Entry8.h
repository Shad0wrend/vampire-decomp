// CRBTree16Entry8: the 8-byte element of the CUtlRBTree<CRBTree16Entry8, unsigned short> instance whose sentinel is at
// 0x106bdb38 (guard 0x109f0b78); real name not yet known. The second dword owns a heap CUtlVector (freed by the
// element's destructor, which RemoveAll runs for every node).
#pragma once

#include "utlvector.h"

struct CRBTree16Entry8
{
	int m_unk0;
	CUtlVector<int> *m_pVec;

	~CRBTree16Entry8() { delete m_pVec; }
};
