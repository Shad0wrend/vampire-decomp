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

// FUNCTION: 0x1012e300 size=0xe8
#include "CSoundEmitterSystemBase.h"
#include "CUnknown1024b370.h"
#include "utlmemory.h"

struct SoundParamsDtor_1012e300
{
	char m_pad[0xcc];
	~SoundParamsDtor_1012e300() { sub_1012f530(); }
	void sub_1012f530();
};

struct RBLinks_1012e300
{
	int m_Left;
	int m_Right;
	int m_Parent;
	int m_Tag;
};

struct SoundNode_1012e300 : public RBLinks_1012e300
{
	char m_pad10[0x0c];
	SoundParamsDtor_1012e300 m_Params;
};

struct FileNode_1012e300 : public RBLinks_1012e300
{
	int m_i00;
	int m_i04;
};

template <class NodeT>
struct RBTree_1012e300
{
	void *m_LessFunc;
	NodeT *m_Elements;
	int m_nAllocationCount;
	int m_nGrowSize;
	int m_Root;
	int m_NumElements;
	int m_FirstFree;
	int m_TotalElements;

	static int InvalidIndex() { return -1; }
};

struct SoundTree_1012e300 : public RBTree_1012e300<SoundNode_1012e300>
{
	RBLinks_1012e300 &sub_10131a70(int i);
	int LeftChild(int i) { return sub_10131a70(i).m_Left; }
	bool IsFree(int i) { return LeftChild(i) == i; }
	void RemoveAll()
	{
		int prev = InvalidIndex();
		for (int i = m_TotalElements; --i >= 0; )
		{
			if (!IsFree(i))
			{
				m_Elements[i].m_Params.~SoundParamsDtor_1012e300();
			}
			m_Elements[i].m_Right = prev;
			m_Elements[i].m_Left = i;
			prev = i;
		}
		m_Root = InvalidIndex();
		m_NumElements = 0;
		m_FirstFree = (m_TotalElements != 0) ? 0 : InvalidIndex();
	}
};

struct FileTree_1012e300 : public RBTree_1012e300<FileNode_1012e300>
{
	RBLinks_1012e300 &sub_10131f30(int i);
	int LeftChild(int i) { return sub_10131f30(i).m_Left; }
	bool IsFree(int i) { return LeftChild(i) == i; }
	void RemoveAll()
	{
		int prev = InvalidIndex();
		for (int i = m_TotalElements; --i >= 0; )
		{
			if (!IsFree(i))
			{
			}
			m_Elements[i].m_Right = prev;
			m_Elements[i].m_Left = i;
			prev = i;
		}
		m_Root = InvalidIndex();
		m_NumElements = 0;
		m_FirstFree = (m_TotalElements != 0) ? 0 : InvalidIndex();
	}
};

struct CSoundEmitterUnit_1012e300
{
	void *m_vtbl;
	FileTree_1012e300 m_FileTree;
	CUnknown1024b2d0 m_list24;
	SoundTree_1012e300 m_SoundTree;
	CUnknown1024b2d0 m_list70;
	int m_i9c;
	int m_ia0;
	int m_ia4;
	int m_ia8;
	int m_iac;
	CUnknown1024b370 m_Waves;

	void sub_1012e300();
};

// TARGET: CSoundEmitterUnit_1012e300::sub_1012e300
void CSoundEmitterUnit_1012e300::sub_1012e300()
{
	m_ia8 = 0;
	m_SoundTree.RemoveAll();
	m_Waves.sub_1013d730();
	m_FileTree.RemoveAll();
}
// END FUNCTION
