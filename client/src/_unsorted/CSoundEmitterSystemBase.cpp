// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1012d870 size=0xa9
#include "Vector.h"
#include "CSoundEmitterSystemBase.h"
#include "CUnknown1024b370.h"
#include "UtlMem.h"
#include "utlmemory.h"

extern char vt_10236680[];

struct CSESTable1b0200 : CUnknown1024b2d0
{
	~CSESTable1b0200() { ((CUnknown1024b370 *)this)->sub_1013d330(); }
};

struct CSESTree1b0200
{
	void *m_LessFunc;
	CUtlMemory<int> m_Elements;
	int m_Root;
	int m_NumElements;
	int m_FirstFree;
	int m_TotalElements;
};

struct CSESDict1b0200
{
	CSESTree1b0200 m_tree;
	CSESTable1b0200 m_table;
};

struct CSESVec1b0200
{
	CUtlMemory<int> m_Memory;
	int m_Size;
	int *m_pElements;
	~CSESVec1b0200()
	{
		m_Size = 0;
		((UtlMem *)&m_Memory)->sub_1012d830();
		m_pElements = m_Memory.Base();
	}
};

CSoundEmitterSystemBase *CSoundEmitterSystemBase::sub_1012d870(unsigned char flags)
{
	m_vtbl = vt_10236680;
	((CSESTable1b0200 *)&m_listb0)->~CSESTable1b0200();
	((CSESVec1b0200 *)&m_i9c)->~CSESVec1b0200();
	((CSESDict1b0200 *)&m_pfn50)->~CSESDict1b0200();
	((CSESDict1b0200 *)&m_pfn04)->~CSESDict1b0200();
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION
