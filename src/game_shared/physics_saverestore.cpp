// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 14 blocks
#include "vampire.h"

// FUNCTION: 0x100443e0 size=0x33b
#include "CRestore.h"
#include "CPhysSaveRestoreBlockHandler.h"
#include "CEHandleGet.h"
#include "Tier1.h"

struct CPhysEntView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual int GetModelIndex();
	char m_pad[0x120 - 4];
	int m_iGlobalname;
};
struct CPhysModelInfo
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual int GetModelIndex(const char *pszName);
	virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
	virtual void *GetVCollide(int modelIndex);
};
struct CPhysVCollide { int m_n0; void **m_pSolids; };
struct CPhysEnvView
{
	virtual void v0();
	virtual void AssociateCollide(void *pObject, void *pCollide);
	virtual void AssociateModel(void *pObject, int modelIndex);
};
struct CPhysTracerRequest
{
	CRestore *m_pRestore;
	void **m_pItems;
	int m_nId;
	CPhysEntView *m_pEntity;
	const char *m_pszName;
	void *m_pObject;
	void *m_pTracer;
	void *m_pGlobal;
};
struct CPhysTracer
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
	virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
	virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41();
	virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
	virtual void v48(); virtual void v49();
	virtual void Request(CPhysTracerRequest *pRequest);
};

extern CPhysTracer *g_10723940;
extern CPhysModelInfo *g_1070b250;
extern void *g_10580180;
extern char g_106b8540[];
extern Vector g_1070d1b0;
extern float g_104454c4;
void *sub_1002dfe0(const Vector *pMins, const Vector *pMaxs);

inline const char *PhysString(const char *const &s)
{
	return s ? s : g_106b8540;
}

void CPhysSaveRestoreBlockHandler::sub_100443e0(CRestore *pRestore, CPhysRestoreRecord *pRec, CPhysObjectDesc *pDesc, int nItems)
{
	if (nItems == 1)
	{
		pRestore->vfunc5();
		int modelIndex = -1;
		bool bCustom = false;
		void *pPhysCollide = 0;
		if (pRec->m_pszName)
		{
			CPhysEntView *pEnt = (CPhysEntView *)EHandle_Get(pRec->m_hEntity);
			if (pEnt->m_iGlobalname)
				modelIndex = pEnt->GetModelIndex();
			else
				modelIndex = g_1070b250->GetModelIndex(PhysString(pRec->m_pszName));
			if (modelIndex != -1)
			{
				CPhysVCollide *pVCollide = (CPhysVCollide *)g_1070b250->GetVCollide(modelIndex);
				if (pVCollide)
				{
					if (pRec->m_nIndex)
						g_109f3628(g_106b8540);
					pPhysCollide = pVCollide->m_pSolids[pRec->m_nIndex];
				}
			}
		}
		else if (pRec->m_vecPos != g_1070d1b0 || pRec->m_vecAng != g_1070d1b0)
		{
			pPhysCollide = sub_1002dfe0(&pRec->m_vecPos, &pRec->m_vecAng);
			bCustom = true;
		}
		else if (pRec->m_flScale != g_104454c4)
		{
			if (!*pDesc->m_pItems && g_10723940)
			{
				CPhysTracerRequest req;
				req.m_pRestore = pRestore;
				req.m_pItems = pDesc->m_pItems;
				req.m_nId = pRec->m_nId;
				req.m_pEntity = (CPhysEntView *)EHandle_Get(pRec->m_hEntity);
				req.m_pszName = PhysString(pRec->m_pszName);
				req.m_pObject = 0;
				req.m_pTracer = g_10723940;
				req.m_pGlobal = g_10580180;
				g_10723940->Request(&req);
			}
			return;
		}
		if (pPhysCollide)
		{
			if (!*pDesc->m_pItems)
			{
				if (g_10723940)
				{
					CPhysTracerRequest req;
					req.m_pRestore = pRestore;
					req.m_pItems = pDesc->m_pItems;
					req.m_nId = pRec->m_nId;
					req.m_pEntity = (CPhysEntView *)EHandle_Get(pRec->m_hEntity);
					req.m_pszName = PhysString(pRec->m_pszName);
					req.m_pObject = pPhysCollide;
					req.m_pTracer = g_10723940;
					req.m_pGlobal = g_10580180;
					g_10723940->Request(&req);
				}
				void *pObject = *pDesc->m_pItems;
				if (pObject)
				{
					if (!bCustom)
						((CPhysEnvView *)((char *)this + 4))->AssociateModel(pObject, modelIndex);
					else
						((CPhysEnvView *)((char *)this + 4))->AssociateCollide(pObject, pPhysCollide);
				}
				else
					g_109f3630("Failed to restore physics object\n");
			}
			else
				g_109f3630("Physics object pointer unexpectedly non-null before restore. Should be creating physics object in CreatePhysics()?\n");
		}
		else
			g_109f3630("Failed to reestablish collision model for object\n");
		pRestore->vfunc8();
	}
	else
		g_109f3630("Don't know how to reconsitite models for physobj array \n");
}
// END FUNCTION

// FUNCTION: 0x100447f0 size=0x200
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
#include "utlvector.h"
#include "CPhysSaveRestoreBlockHandler.h"
#include "IPhysicsEnvironment.h"

struct SBlockSetView { void sub_100f6e40(void *p); };
extern SBlockSetView g_106eb5d8;
extern IPhysicsEnvironment *g_10723940;

struct CPhysQueuedVec : CRBTree16Entry8Vec
{
	~CPhysQueuedVec() { Purge(); }
};

typedef CUtlRBTree<CRBTree16Entry8, unsigned short> CPhysTree24;

struct CPhysTree24View : CPhysTree24
{
	void RemoveAll2004()
	{
		unsigned short prev = InvalidIndex();
		for (int i = (int)m_TotalElements; --i >= 0; )
		{
			unsigned short idx = (unsigned short)i;
			if (IsValidIndex(idx))
				;
			SetRightChild(idx, prev);
			SetLeftChild(idx, idx);
			prev = idx;
		}
		m_FirstFree = m_TotalElements ? (unsigned short)0 : InvalidIndex();
		m_Root = InvalidIndex();
		m_NumElements = 0;
	}
};

template <class T> __forceinline T pcd_stage(T x) { return x; }

struct CPhysTree24N : CPhysTree24
{
	unsigned short Next(unsigned short i) const
	{
		if (RightChild(i) != InvalidIndex()) {
			i = RightChild(i);
			while (LeftChild(i) != InvalidIndex())
				i = LeftChild(i);
			return i;
		}

		unsigned short parent = Parent(i);
		while (IsRightChild(i)) {
			i = parent;
			if (i == InvalidIndex())
				break;
			Links_t const &(CPhysTree24::*pfn)(unsigned short) const = &CPhysTree24::Links;
			parent = (this->*pfn)(i).m_Parent;
		}
		return parent;
	}
};

struct CPhysQueuedMap
{
	CPhysTree24View m_Tree;
	unsigned short FirstInorder() const { return m_Tree.FirstInorder(); }
	unsigned short NextInorder(unsigned short i) const { return m_Tree.NextInorder(i); }
	static unsigned short InvalidIndex() { return CPhysTree24::InvalidIndex(); }
};

// TARGET: CPhysSaveRestoreBlockHandler::vfunc8
void CPhysSaveRestoreBlockHandler::vfunc8()
{
	if (g_10723940)
		g_10723940->vfunc51();

	CPhysQueuedMap &m = *(CPhysQueuedMap *)&m_Tree24;
	CPhysTree24N *t = (CPhysTree24N *)&m_Tree24;
	for (unsigned short i = t->FirstInorder(); i != t->InvalidIndex(); i = pcd_stage(t->Next(i)))
		delete (CPhysQueuedVec *)m_Tree24[i].m_pVec;
	m.m_Tree.RemoveAll2004();
	g_106eb5d8.sub_100f6e40(this ? (char *)this + 8 : 0);
}
// END FUNCTION

// FUNCTION: 0x10044a70 size=0x3
void __stdcall sub_10044a70(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10044a90 size=0x140
#include "CUnknown10044a90.h"

extern int g_109f0b7c;
extern "C" __declspec(dllimport) void Plat_Free(void *);
void *operator new(unsigned int);
void operator delete(void *);

struct CProbe44a90
{
	unsigned int m_key;
	int m_value;
};

void CUnknown10044a90::sub_10044a90(unsigned int key)
{
	CUtlRBTree16 *t = &m_Tree;
	CProbe44a90 probe;
	probe.m_key = key;
	int owner = ((int *)t)[6];
	if (owner)
		g_109f0b7c = owner;
	unsigned short i = t->m_Root;
	while (i != 0xffff) {
		if (t->m_LessFunc(&probe, t->m_pElements[i].m_Data)) {
			i = t->sub_10047930(i).m_Left;
		} else if (t->m_LessFunc(t->m_pElements[i].m_Data, &probe)) {
			i = t->sub_10047930(i).m_Right;
		} else {
			break;
		}
	}
	if (i == 0xffff)
		return;
	CUtlVector4 *pVec = *(CUtlVector4 **)(m_Tree.m_pElements[i].m_Data + 4);
	if (pVec) {
		pVec->m_size = 0;
		if (pVec->m_growSize != -1) {
			if (pVec->m_pMemory) {
				Plat_Free(pVec->m_pMemory);
				pVec->m_pMemory = 0;
			}
			pVec->m_allocationCount = 0;
		}
		pVec->m_pElements = pVec->m_pMemory;
		if (pVec->m_growSize != -1) {
			if (pVec->m_pMemory) {
				Plat_Free(pVec->m_pMemory);
				pVec->m_pMemory = 0;
			}
			pVec->m_allocationCount = 0;
		}
		operator delete(pVec);
	}
	t->sub_10046d10(i);
	t->m_pElements[i].m_Links.m_Left = i;
	t->m_pElements[i].m_Links.m_Right = t->m_FirstFree;
	t->m_NumElements--;
	t->m_FirstFree = i;
}
// END FUNCTION

// FUNCTION: 0x10044c20 size=0x13f
#include "CUnknown10044c20.h"
extern int g_109f0b74;
struct ElemData {
    Vector a; Vector b;
};
struct ElemX {
    unsigned int key; ElemData data;
};
struct Raw28 { int d[7]; };

struct CTree36Ctx : public CUtlRBTree36
{
    int m_nCtx;
    void Publish() { if (m_nCtx) g_109f0b74 = m_nCtx; }
    unsigned short FindCtx(const ElemX &e) { Publish(); return sub_10046930(&e); }
    void InsertCtx(const ElemX &e)
    {
        Publish();
        bool isLeft = false;
        unsigned short parent = 0xffff;
        unsigned short cur = m_Root;
        while (cur != 0xffff) {
            parent = cur;
            if (m_LessFunc(&e, m_pElements[cur].m_Data)) {
                isLeft = true;
                cur = ((CUtlRBTreeNode36 *)this)->sub_10049d20(cur).m_Left;
            } else {
                isLeft = false;
                cur = ((CUtlRBTreeNode36 *)this)->sub_10049d20(cur).m_Right;
            }
        }
        unsigned short n = sub_10049780();
        sub_100498c0(n, parent, isLeft);
        m_NumElements++;
        Raw28 *dst = (Raw28 *)m_pElements[n].m_Data;
        if (dst)
            *dst = *(Raw28 *)&e;
    }
};

void CUnknown10044c20::sub_10044c20(const Vector *pA, const Vector *pB, unsigned int key)
{
    if (!key)
        return;
    CTree36Ctx *t = (CTree36Ctx *)&m_Tree;
    ElemX e;
    e.key = key;
    if (t->FindCtx(e) != 0xffff)
        return;
    ElemData d;
    d.a = *pA;
    d.b = *pB;
    e.key = key;
    e.data = d;
    t->InsertCtx(e);
}
// END FUNCTION

// FUNCTION: 0x10044db0 size=0x14b
#include "CUtlRBTree12.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CUtlMap16Pair { unsigned int m_key; unsigned int m_elem; };
#include "CUtlMap16.h"

extern void *g_109f0b6c;

struct CUtlRBTree16Unit : CUtlRBTree16Ctx
{
	const Links_t &sub_10048960(unsigned short i) const;	// Links(i), out of line (stub 0x1000b2d5)
	void sub_100484e0(unsigned short newNode, unsigned short parent, bool leftchild);	// LinkToParent (stub 0x100076e4)
};

struct CMem16_t
{
	void sub_1004add0(int grow);	// stub 0x1000966f
};

struct CMapPair
{
	unsigned int m_key;
	unsigned int m_elem;
};

void CUtlMap16::sub_10044db0(unsigned int key, unsigned int elem)
{
	CUtlRBTree16Unit *tree = (CUtlRBTree16Unit *)&m_Tree;
	const CUtlRBTree16Of<CUtlMap16Pair> *links = (const CUtlRBTree16Of<CUtlMap16Pair> *)tree;
	CMapPair insert;
	insert.m_key = key;
	insert.m_elem = elem;
	if (tree->m_pLessContext)
		g_109f0b6c = tree->m_pLessContext;
	unsigned short parent = 0xffff;
	bool leftchild = false;
	unsigned short current = tree->m_Root;
	while (current != 0xffff) {
		parent = current;
		if (tree->m_LessFunc(&insert, tree->m_pElements[current].m_Data)) {
			leftchild = true;
			current = tree->sub_10048960(current).m_Left;
		} else {
			leftchild = false;
			current = links->Links(current).m_Right;
		}
	}
	unsigned short newNode = tree->m_FirstFree;
	if (newNode == 0xffff) {
		if (tree->m_unk8 == tree->m_TotalElements)
			((CMem16_t *)&tree->m_pElements)->sub_1004add0(1);
		newNode = tree->m_TotalElements++;
	} else {
		tree->m_FirstFree = tree->sub_10048960(newNode).m_Right;
	}
	tree->sub_100484e0(newNode, parent, leftchild);
	tree->m_NumElements++;
	CMapPair *pElement = (CMapPair *)tree->m_pElements[newNode].m_Data;
	if (pElement) {
		pElement->m_key = insert.m_key;
		pElement->m_elem = insert.m_elem;
	}
}
// END FUNCTION

// FUNCTION: 0x10044f60 size=0x14b
#include "CUtlRBTree12.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CRBTree16Entry8B { char m_Data[8]; };
#include "CUtlMap16.h"

extern void *g_109f0b64;

struct CUtlRBTree16Unit : CUtlRBTree16Ctx
{
	const Links_t &sub_100492b0(unsigned short i) const;
	void sub_10048e30(unsigned short newNode, unsigned short parent, bool leftchild);
};

struct CMem16b_t
{
	void sub_1004b990(int grow);
};

struct CMapPair
{
	unsigned int m_key;
	unsigned int m_elem;
};

void CUtlMap16::sub_10044f60(unsigned int key, unsigned int elem)
{
	CUtlRBTree16Unit *tree = (CUtlRBTree16Unit *)((char *)this + 0x5c);
	const CUtlRBTree16Of<CRBTree16Entry8B> *links = (const CUtlRBTree16Of<CRBTree16Entry8B> *)tree;
	CMapPair insert;
	insert.m_key = key;
	insert.m_elem = elem;
	if (tree->m_pLessContext)
		g_109f0b64 = tree->m_pLessContext;
	unsigned short parent = 0xffff;
	bool leftchild = false;
	unsigned short current = tree->m_Root;
	while (current != 0xffff) {
		parent = current;
		if (tree->m_LessFunc(&insert, tree->m_pElements[current].m_Data)) {
			leftchild = true;
			current = tree->sub_100492b0(current).m_Left;
		} else {
			leftchild = false;
			current = links->Links(current).m_Right;
		}
	}
	unsigned short newNode = tree->m_FirstFree;
	if (newNode == 0xffff) {
		if (tree->m_unk8 == tree->m_TotalElements)
			((CMem16b_t *)&tree->m_pElements)->sub_1004b990(1);
		newNode = tree->m_TotalElements++;
	} else {
		tree->m_FirstFree = tree->sub_100492b0(newNode).m_Right;
	}
	tree->sub_10048e30(newNode, parent, leftchild);
	tree->m_NumElements++;
	CMapPair *pElement = (CMapPair *)tree->m_pElements[newNode].m_Data;
	if (pElement) {
		pElement->m_key = insert.m_key;
		pElement->m_elem = insert.m_elem;
	}
}
// END FUNCTION

// FUNCTION: 0x10045110 size=0x1c9
#include "utlvector.h"
struct Node8 { int key; int val; };
struct Links_t { unsigned short left, right, parent, tag; };
struct RBNode { Links_t links; Node8 data; };
typedef bool (*LessFunc_t)(const Node8 &, const Node8 &);
extern RBNode *g_109f0b6c;
extern RBNode *g_109f0b64;
extern unsigned char g_109f0b68;
extern Links_t g_106bdb50;

struct Tree1
{
	LessFunc_t m_LessFunc;
	RBNode *m_pMemory;
	int m_nAlloc;
	int m_nGrow;
	unsigned short m_Root, m_NumElements, m_FirstFree, m_pad;
	RBNode *m_pElements;

	Links_t &sub_10048960(unsigned short i);
	void sub_100489e0(unsigned short i);

	unsigned short Find(const Node8 &n)
	{
		if (m_pElements)
			g_109f0b6c = m_pElements;
		unsigned short i = m_Root;
		while (i != 0xffff)
		{
			if (m_LessFunc(n, m_pMemory[i].data))
				i = sub_10048960(i).left;
			else if (m_LessFunc(m_pMemory[i].data, n))
				i = sub_10048960(i).right;
			else
				return i;
		}
		return 0xffff;
	}
	bool Remove(int key)
	{
		Node8 n;
		n.key = key;
		unsigned short i = Find(n);
		if (i == 0xffff)
			return false;
		sub_100489e0(i);
		m_pMemory[i].links.left = i;
		m_pMemory[i].links.right = m_FirstFree;
		m_FirstFree = i;
		m_NumElements--;
		return true;
	}
};

struct Tree2
{
	LessFunc_t m_LessFunc;
	RBNode *m_pMemory;
	int m_nAlloc;
	int m_nGrow;
	unsigned short m_Root, m_NumElements, m_FirstFree, m_pad;
	RBNode *m_pElements;

	Links_t &sub_100492b0(unsigned short i);
	void sub_10049330(unsigned short i);

	const Links_t &Links(unsigned short i)
	{
		if (!(g_109f0b68 & 1))
		{
			g_109f0b68 |= 1;
			g_106bdb50.tag = 1;
			g_106bdb50.left = 0xffff;
			g_106bdb50.right = 0xffff;
			g_106bdb50.parent = 0xffff;
		}
		return (i != 0xffff) ? m_pMemory[i].links : g_106bdb50;
	}

	unsigned short Find(const Node8 &n)
	{
		if (m_pElements)
			g_109f0b64 = m_pElements;
		unsigned short i = m_Root;
		while (i != 0xffff)
		{
			if (m_LessFunc(n, m_pMemory[i].data))
				i = sub_100492b0(i).left;
			else if (m_LessFunc(m_pMemory[i].data, n))
				i = Links(i).right;
			else
				return i;
		}
		return 0xffff;
	}
	bool Remove(int key)
	{
		Node8 n;
		n.key = key;
		unsigned short i = Find(n);
		if (i == 0xffff)
			return false;
		sub_10049330(i);
		m_pMemory[i].links.left = i;
		m_pMemory[i].links.right = m_FirstFree;
		m_FirstFree = i;
		m_NumElements--;
		return true;
	}
};

class CUnknown10045110
{
public:
	char pad0[0x40];
	Tree1 m_Tree1;
	Tree2 m_Tree2;

	void sub_10045110(int key);
};

void CUnknown10045110::sub_10045110(int key)
{
	if (m_Tree1.Remove(key))
		return;
	m_Tree2.Remove(key);
}
// END FUNCTION

// FUNCTION: 0x10045360 size=0x112
#include "utlrbtree.h"
#include "utlvector.h"
struct RBLinks { unsigned short m_Left, m_Right, m_Parent, m_Tag; };
struct RBNode16 { RBLinks m_Links; char m_Data[8]; };
struct RBNode36 { RBLinks m_Links; char m_Data[28]; };

struct RBTreeA {
	void *m_Less;
	RBNode16 *m_pElements;
	int m_u8, m_uC;
	unsigned short m_Root, m_NumElements, m_FirstFree, m_TotalElements;
	int m_u18;
	const RBLinks *sub_10048960(unsigned short i) const;
	void RemoveAll()
	{
		int prev = 0xffff;
		for (int i = m_TotalElements - 1; i >= 0; i--) {
			sub_10048960(i);
			m_pElements[(unsigned short)i].m_Links.m_Right = prev;
			m_pElements[(unsigned short)i].m_Links.m_Left = i;
			prev = i;
		}
		m_Root = 0xffff;
		m_NumElements = 0;
		m_FirstFree = m_TotalElements ? 0 : 0xffff;
	}
};
struct RBTreeB {
	void *m_Less;
	RBNode16 *m_pElements;
	int m_u8, m_uC;
	unsigned short m_Root, m_NumElements, m_FirstFree, m_TotalElements;
	int m_u18;
	const RBLinks *sub_100057d6(unsigned short i) const;
	void RemoveAll()
	{
		int prev = 0xffff;
		for (int i = m_TotalElements - 1; i >= 0; i--) {
			sub_100057d6(i);
			m_pElements[(unsigned short)i].m_Links.m_Right = prev;
			m_pElements[(unsigned short)i].m_Links.m_Left = i;
			prev = i;
		}
		m_Root = 0xffff;
		m_NumElements = 0;
		m_FirstFree = m_TotalElements ? 0 : 0xffff;
	}
};
struct RBTreeC {
	void *m_Less;
	RBNode36 *m_pElements;
	int m_u8, m_uC;
	unsigned short m_Root, m_NumElements, m_FirstFree, m_TotalElements;
	int m_u18;
	const RBLinks *sub_10049d20(unsigned short i) const;
	void RemoveAll()
	{
		int prev = 0xffff;
		for (int i = m_TotalElements - 1; i >= 0; i--) {
			sub_10049d20(i);
			m_pElements[(unsigned short)i].m_Links.m_Right = prev;
			m_pElements[(unsigned short)i].m_Links.m_Left = i;
			prev = i;
		}
		m_Root = 0xffff;
		m_NumElements = 0;
		m_FirstFree = m_TotalElements ? 0 : 0xffff;
	}
};

struct CUnknown10045360 {
	char pad[0x40];
	RBTreeA m_TreeA;	// 0x40
	RBTreeB m_TreeB;	// 0x5c
	RBTreeC m_TreeC;	// 0x78

	void sub_10045360();
};

void CUnknown10045360::sub_10045360()
{
	m_TreeA.RemoveAll();
	m_TreeB.RemoveAll();
	m_TreeC.RemoveAll();
}
// END FUNCTION

// FUNCTION: 0x100454d0 size=0xaa
struct EntWithEdict { char pad[0x2e0]; int m_edict; };
struct EntSlot { EntWithEdict *pEnt; unsigned int serial; };
struct EntListEntry { int pad; EntSlot s; };
extern EntListEntry *g_10566458;
struct EngineSlots {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual int IndexOfEdict(int edict);
};
extern EngineSlots *g_1070b22c;
struct SortItem { int key; unsigned int handle; };

inline EntWithEdict *HGet(unsigned int h)
{
    if (h != 0xffffffff) {
        EntSlot *p = &g_10566458[h & 0x1fff].s;
        if (p->serial == (h >> 13))
            return p->pEnt;
    }
    return 0;
}

bool sub_100454d0(const SortItem *a, const SortItem *b)
{
    if (a->key == b->key) {
        EntWithEdict *pA = HGet(a->handle);
        int edictA = pA->m_edict;
        EntWithEdict *pB = HGet(b->handle);
        EngineSlots *eng = g_1070b22c;
        int edictB = pB->m_edict;
        int r1 = eng->IndexOfEdict(edictB);
        int r2 = g_1070b22c->IndexOfEdict(edictA);
        return r2 > r1;
    }
    return a->key > b->key;
}
// END FUNCTION

// FUNCTION: 0x10045700 size=0x6
namespace lifted {
extern char g_106bda60;
}
int sub_10045700()
{
    return (int)&lifted::g_106bda60;
}
// END FUNCTION

// FUNCTION: 0x10045720 size=0x5
#include "CPhysObjSaveRestoreOps.h"
CPhysObjSaveRestoreOps g_106bda00[11];
// END FUNCTION

// FUNCTION: 0x10045770 size=0x5
// TARGET: sub_10045770
bool __stdcall sub_10045770(int a, int b)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x10045790 size=0x25e
#include "vampire_all.h"
#include "CPhysObjSaveRestoreOps.h"
#include "CBaseEntity.h"
#include "CUtlRBTreeFind16.h"
#include "CUtlRBTree36.h"
#include "Vector.h"
#include "string_t.h"

#define V5(a) virtual void v##a##0(); virtual void v##a##1(); virtual void v##a##2(); virtual void v##a##3(); virtual void v##a##4();
#define V10(a) V5(a) virtual void v##a##5(); virtual void v##a##6(); virtual void v##a##7(); virtual void v##a##8(); virtual void v##a##9();

__declspec(dllimport) void DevMsg(const char *, ...);

struct PhysObjSaveView
{
	V10(0) V10(1) V10(2) V10(3)
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
	virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
	virtual void *GetCollide();	// 49
	virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
	virtual void v55(); virtual void v56();
	virtual float GetSphereRadius();	// 57
};

struct ModelInfoSaveView
{
	virtual void v0();
	virtual const char *GetModelName(const void *model);
	virtual const void *GetModel(int index);
};

struct PhysCollideSaveView
{
	V10(0) V10(1) V10(2)
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36();
	virtual int CollideIndex(void *pCollide);	// 37
};

struct EntSaveView
{
	V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9) V10(10) V10(11)
	virtual void v120(); virtual void v121(); virtual void v122(); virtual void v123(); virtual void v124();
	virtual void v125(); virtual void v126(); virtual void v127();
	virtual bool ShouldSavePhysics();	// 128
};

struct HandleSaveView
{
	virtual void v0();
	virtual const CBaseHandle &GetRefEHandle() const;
};

struct SphereRadius_t
{
	float radius;
};

struct PhysObjectHeader_t
{
	PhysObjectHeader_t()
	{
		memset(this, 0, sizeof(*this));
	}

	int type;
	EHANDLE hEntity;
	string_t fieldName;
	int nObjects;
	string_t modelName;
	BBox_t bbox;
	SphereRadius_t sphere;
	int iCollide;
};

struct QueuedItem_t
{
	PhysObjectHeader_t header;
	void **ppPhysObj;
};

struct PQ { void sub_10046050(QueuedItem_t *item); };

struct TypeDescView
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	short fieldSize;
};

struct PhysMapNode
{
	PhysObjSaveView *key;
	int elem;
};

extern PhysCollideSaveView *g_1072393c;
extern CUtlRBTreeFind16 g_106bdaa4;
extern void *g_106bdabc;
extern void *g_109f0b6c;
extern CUtlRBTreeFind16 g_106bdac0;
extern void *g_106bdad8;
extern void *g_109f0b64;
extern CUtlRBTree36 g_106bdadc;
extern PQ g_106bda6c;
namespace SaveModelInfo { extern ModelInfoSaveView *g_1070b250; }

string_t sub_1042bff0(const char *psz);

inline string_t GetModelName(PhysObjSaveView *pObject)
{
	PhysMapNode dummyNode;
	dummyNode.key = pObject;
	if (g_106bdabc)
		g_109f0b6c = g_106bdabc;
	int i = g_106bdaa4.sub_10046570(&dummyNode);
	if (i == CUtlRBTreeFind16::InvalidIndex())
		return string_t(0);
	return sub_1042bff0(SaveModelInfo::g_1070b250->GetModelName(SaveModelInfo::g_1070b250->GetModel(*(int *)(g_106bdaa4.m_pElements[(unsigned short)i].m_Data + 4))));
}

inline BBox_t *GetBBox(PhysObjSaveView *pObject)
{
	PhysMapNode dummyNode;
	dummyNode.key = pObject;
	if (g_106bdad8)
		g_109f0b64 = g_106bdad8;
	int i = g_106bdac0.sub_10046750(&dummyNode);
	if (i == CUtlRBTreeFind16::InvalidIndex())
		return 0;
	int j = g_106bdadc.sub_10045de0((int *)(g_106bdac0.m_pElements[(unsigned short)i].m_Data + 4));
	if (j == CUtlRBTree36::InvalidIndex())
		return 0;
	return (BBox_t *)(g_106bdadc.m_pElements[(unsigned short)j].m_Data + 4);
}

inline void QueueSave(CBaseEntity *pOwner, TypeDescView *pTypeDesc, void **ppPhysObj, int type)
{
	bool fOnlyNotingExistence = !((EntSaveView *)pOwner)->ShouldSavePhysics();

	QueuedItem_t item;

	item.ppPhysObj = ppPhysObj;
	item.header.hEntity = ((HandleSaveView *)pOwner)->GetRefEHandle();
	item.header.type = type;
	item.header.nObjects = (!fOnlyNotingExistence) ? pTypeDesc->fieldSize : 0;
	item.header.fieldName = sub_1042bff0(pTypeDesc->fieldName);
	item.header.modelName = string_t(0);
	memset(&item.header.bbox, 0, sizeof(item.header.bbox));
	item.header.sphere.radius = 0;

	if (!fOnlyNotingExistence && type == 1)
	{
		PhysObjSaveView *pPhysObj = (PhysObjSaveView *)(*ppPhysObj);
		if (pPhysObj)
		{
			item.header.modelName = GetModelName(pPhysObj);
			item.header.iCollide = g_1072393c->CollideIndex(pPhysObj->GetCollide());
			if (item.header.modelName.pszValue == 0)
			{
				BBox_t *pBBox = GetBBox(pPhysObj);
				if (pBBox != 0)
				{
					item.header.bbox.mins = pBBox->mins;
					item.header.bbox.maxs.sub_1003e4b0(pBBox->maxs);
				}
				else
				{
					if (pPhysObj && pPhysObj->GetSphereRadius() != 0)
					{
						item.header.sphere.radius = pPhysObj->GetSphereRadius();
					}
					else
					{
						DevMsg("Don't know how to save model for physics object (class \"%s\")\n", pOwner->sub_1009f200());
					}
				}
			}
		}
	}

	g_106bda6c.sub_10046050(&item);
}

void CPhysObjSaveRestoreOps::vfunc0(SaveRestoreFieldInfo_t *pArg, ISave *unused)
{
#define pArg ((CPhysObjSaveRestoreOps_Arg *)pArg)
	if (!m_pObject04)
		return;
	QueueSave(pArg->m_pEntity, (TypeDescView *)pArg->m_pCount, (void **)pArg->m_pEntries, (int)m_pObject04);
#undef pArg
}
// END FUNCTION
