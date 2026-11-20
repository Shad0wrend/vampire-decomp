// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1012a7f0 size=0x42
#include "utlrbtree.h"
#include "CRestore.h"
#include "utlvector.h"

struct CRestoreSlot1 { virtual void a(); virtual void vfunc1(int v); };

// TARGET: CRestore::vfunc8
void CRestore::vfunc8()
{
	const CUtlVector<int> *pVec = (const CUtlVector<int> *)&m_vec;
	int v = pVec->Element(pVec->Count() - 1);
	((CUtlVector<int> *)&m_vec)->Remove(pVec->Count() - 1);
	((CRestoreSlot1 *)this)->vfunc1(v);
}
// END FUNCTION

// FUNCTION: 0x1012aaa0 size=0x1c
#include "CRestore.h"

// TARGET: CRestore::vfunc13
short CRestore::vfunc13()
{
	int v = 0;
	sub_1012ab60(&v, 2);
	return v;
}
// END FUNCTION

// FUNCTION: 0x1012aae0 size=0x18
#include "CRestore.h"
char CRestore::vfunc16()
{
	char c = 0;
	sub_1012ab60(&c, 1);
	return c;
}
// END FUNCTION

// FUNCTION: 0x1012ad70 size=0x7b
#include "CRestore.h"
#include "CUnknown101a1f70.h"

struct PooledString1042
{
	PooledString1042() {}
	PooledString1042(const PooledString1042 &o) : m_v(o.m_v) {}
	PooledString1042 &operator=(const PooledString1042 &o) { m_v = o.m_v; return *this; }
	int m_v;
};
PooledString1042 sub_100ee890(const char *psz);

struct CRestoreUnit : CRestore
{
	void sub_1012abd0(int nBytes);
};

// TARGET: CRestore::vfunc20
int CRestore::vfunc20(int *pValues, int count, int nBytesAvailable)
{
	const char *pString = (const char *)((CUnknown101a1f70 *)this)->sub_1012ab50();
	const char *pLimit = pString + nBytesAvailable;
	int nRead = 0;
	PooledString1042 *pDest = (PooledString1042 *)pValues;
	while (nRead < count && pString < pLimit)
	{
		if (*pString == 0)
			pDest[nRead].m_v = 0;
		else
			pDest[nRead] = sub_100ee890(pString);
		while (*pString)
			pString++;
		pString++;
		nRead++;
	}
	((CRestoreUnit *)this)->sub_1012abd0(nBytesAvailable);
	return nRead;
}
// END FUNCTION

// FUNCTION: 0x1012afb0 size=0xaa
#include "CRestore.h"
extern "C" void *__cdecl memset(void *, int, unsigned int);

struct HandleSrc {
	virtual void pad0();
	virtual unsigned int *GetRefEHandle();
};

int CRestore::vfunc30(unsigned int *pValues, int count, int nBytesAvailable)
{
	int buf[256];
	int n = vfunc15(buf, count, nBytesAvailable);
	for (int i = 0; i < n; i++) {
		HandleSrc *e = (HandleSrc *)sub_1012ae60(buf[i]);
		if (e)
			pValues[i] = *e->GetRefEHandle();
		else
			pValues[i] = 0xffffffff;
	}
	if (n < count)
		memset(&pValues[n], 0, (count - n) * sizeof(unsigned int));
	return n;
}
// END FUNCTION
