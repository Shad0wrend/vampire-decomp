// CRBTree12Entry_101c03c0: the element of the string pool's CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short> (sentinel
// 0x1072c7dc, 12-byte nodes): four bytes, a heap string that its destructor frees (the tree's RemoveAll runs it on every
// valid node, then CRT free).
#pragma once

extern "C" void __cdecl free(void *);

struct CRBTree12Entry_101c03c0
{
	char *m_psz;

	~CRBTree12Entry_101c03c0() { free(m_psz); }
};
