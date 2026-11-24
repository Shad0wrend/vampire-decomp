// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bc700 size=0x1e
#include "vgui2__TreeView.h"

// VC6 writes vgui2::TreeView's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TreeView *pcd_emit_101bc700(const vgui2::TreeView &other) { return new vgui2::TreeView(other); }

// TARGET: ??_GTreeView@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bd3d0 size=0x7
#include "vgui2__TreeView.h"
int vgui2::TreeView::vfunc108()
{
    return *(int *)((char *)this + 0x90);
}
// END FUNCTION

// FUNCTION: 0x101bd420 size=0xf
#include "vgui2__TreeView.h"
int vgui2::TreeView::vfunc110()
{
    if ((*(int *)((char *)this + 0x9c)) == 0) {
        return *(int *)((char *)this + 0x9c);
    }
    return *(int *)((char *)(*(int *)((char *)this + 0x9c)) + 0x58);
}
// END FUNCTION

// FUNCTION: 0x101bd430 size=0x19b
#include "vgui2__TreeView.h"
#include "utlvector.h"

struct TreeNode_101bd430
{
	virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4();
	virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9();
	virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14();
	virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19();
	virtual ~TreeNode_101bd430();

	char m_pad04[0x58];
	int m_ItemIndex;                       // 0x5c
	TreeNode_101bd430 *m_pParent;          // 0x60
	char m_pad64[0x10];
	CUtlVector<TreeNode_101bd430 *> m_Children; // 0x74

	int GetChildrenCount() { return m_Children.Count(); }
};

template <class T, class I = unsigned short>
class CUtlLinkedList_101bd430
{
public:
	struct ListElem_t
	{
		T m_Element;
		I m_Previous;
		I m_Next;
	};

	CUtlMemory<ListElem_t> m_Memory;
	I m_Head;
	I m_Tail;
	I m_FirstFree;
	I m_ElementCount;
	I m_TotalElements;
	ListElem_t *m_pElements;

	static inline I InvalidIndex() { return (I)~0; }

	ListElem_t &InternalElement(I i) { return m_Memory[i]; }
	ListElem_t const &InternalElement(I i) const { return m_Memory[i]; }

	inline T &Element(I i) { return m_Memory[i].m_Element; }
	inline T &operator[](I i) { return m_Memory[i].m_Element; }

	inline I Previous(I i) const { return InternalElement(i).m_Previous; }

	inline bool IsValidIndex(I i) const
	{
		return (i < m_TotalElements) && (i >= 0) &&
			((m_Memory[i].m_Previous != i) || (m_Memory[i].m_Next == i));
	}

	inline bool IsInList(I i) const
	{
		return (i < m_TotalElements) && (i >= 0) && (Previous(i) != i);
	}

	void Unlink(I elem)
	{
		if (IsInList(elem))
		{
			ListElem_t *pBase = m_Memory.Base();
			ListElem_t *pOldElem = &pBase[elem];

			if (pOldElem->m_Previous != InvalidIndex())
			{
				pBase[pOldElem->m_Previous].m_Next = pOldElem->m_Next;
			}
			else
			{
				m_Head = pOldElem->m_Next;
			}

			if (pOldElem->m_Next != InvalidIndex())
			{
				pBase[pOldElem->m_Next].m_Previous = pOldElem->m_Previous;
			}
			else
			{
				m_Tail = pOldElem->m_Previous;
			}

			pOldElem->m_Previous = pOldElem->m_Next = elem;
			--m_ElementCount;
		}
	}

	void Free(I elem)
	{
		Unlink(elem);
		ListElem_t &internalElem = InternalElement(elem);
		Destruct(&internalElem.m_Element);
		internalElem.m_Next = m_FirstFree;
		m_FirstFree = elem;
	}

	void Remove(I elem)
	{
		Free(elem);
	}
};

struct TreeViewLayout_101bd430
{
	char m_pad[0x78];
	CUtlLinkedList_101bd430<TreeNode_101bd430 *, int> m_NodeList;
};

#define m_NodeList (((TreeViewLayout_101bd430 *)this)->m_NodeList)

// TARGET: vgui2::TreeView::vfunc111
void vgui2::TreeView::vfunc111(int itemIndex, bool bPromoteChildren)
{
	if (!m_NodeList.IsValidIndex(itemIndex))
		return;

	TreeNode_101bd430 *pNode = m_NodeList[itemIndex];
	TreeNode_101bd430 *pParent = pNode->m_pParent;

	if (bPromoteChildren && pParent)
	{
		int i;
		for (i = 0; i < pNode->GetChildrenCount(); i++)
		{
			TreeNode_101bd430 *pChild = pNode->m_Children[i];
			pChild->m_pParent = pParent;
		}
	}
	else
	{
		int i;
		for (i = 0; i < pNode->GetChildrenCount(); i++)
		{
			TreeNode_101bd430 *pDeleteChild = pNode->m_Children[i];
			vfunc111(pDeleteChild->m_ItemIndex, false);
		}
	}

	if (pParent)
	{
		pParent->m_Children.FindAndRemove(pNode);
	}

	m_NodeList.Remove(itemIndex);
	delete pNode;
}
// END FUNCTION

// FUNCTION: 0x101bd810 size=0x12
#include "vgui2__TreeView.h"
int vgui2::TreeView::vfunc117()
{
    if ((*(int *)((char *)this + 0x9c)) != 0) {
        return *(int *)((char *)(*(int *)((char *)this + 0x9c)) + 0x5c);
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x101bd870 size=0x7
#include "vgui2__TreeView.h"
int vgui2::TreeView::vfunc119()
{
    return *(int *)((char *)this + 0x94);
}
// END FUNCTION

// FUNCTION: 0x101bd950 size=0x27
#define V10(n) virtual void a##n##0(); virtual void a##n##1(); virtual void a##n##2(); virtual void a##n##3(); virtual void a##n##4(); virtual void a##n##5(); virtual void a##n##6(); virtual void a##n##7(); virtual void a##n##8(); virtual void a##n##9();
struct VBar { V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
 virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6();
 virtual int s107(int); virtual int s108(); };
struct VTree { char pad[0x5c]; VBar *m_pBar; int sub_101bd950(int a); };
// TARGET: ?sub_101bd950@VTree@@QAEHH@Z
int VTree::sub_101bd950(int a) { a = m_pBar->s108() - a * 3; return m_pBar->s107(a); }
// END FUNCTION

// FUNCTION: 0x101bd980 size=0x2d
#include "vgui2__TreeView.h"
namespace lifted {
struct C101aa090 { int sub_101aa090(int, int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
void vgui2::TreeView::vfunc11(int a0, int a1)
{
    ((lifted::C101aa090 *)this)->sub_101aa090(a0, a1);
    ((lifted::V *)this)->f57(0, 0);
    ((lifted::V *)this)->f6();
}
// END FUNCTION

// FUNCTION: 0x101be0e0 size=0x17
#include "vgui2__TreeView.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
int vgui2::TreeView::vfunc122()
{
    ((lifted::V *)this)->f57(0, 0);
    return ((lifted::V *)this)->f6();
}
// END FUNCTION

// FUNCTION: 0x101be150 size=0x6
#include "vgui2__TreeView.h"
namespace lifted {
extern char g_102d95c0;
}
int vgui2::TreeView::vfunc102()
{
    return (int)&lifted::g_102d95c0;
}
// END FUNCTION
