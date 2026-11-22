// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 14 blocks
#include "vampire.h"

// FUNCTION: 0x102cc870 size=0x6
#include "datamap.h"
#include "CAI_DynamicLink.h"
namespace lifted {
extern char g_10608f58;
}
datamap_t *CAI_DynamicLink::vfunc82()
{
    return (datamap_t *)&lifted::g_10608f58;
}
// END FUNCTION

// FUNCTION: 0x102cc890 size=0x5
int sub_102cc8d0(void);
int g_10925418 = ((int (*)(int))sub_102cc8d0)(0);
// END FUNCTION

// FUNCTION: 0x102cc8d0 size=0x1a
namespace lifted {
extern int g_10608f58;
extern int g_10608f5c;
extern char g_10608f9c;
}
int sub_102cc8d0()
{
    lifted::g_10608f5c = 5;
    lifted::g_10608f58 = (int)&lifted::g_10608f9c;
    return (int)&lifted::g_10608f58;
}
// END FUNCTION

// FUNCTION: 0x102cc900 size=0xbc
#include "CAI_DynamicLink.h"
#include "CAI_Network.h"

extern CAI_NetworkOwner *g_10934088;
extern CAI_DynamicLink *g_1092541c;
__declspec(dllimport) void DevMsg(const char *, ...);

static __forceinline CAI_Network *Net()
{
	return g_10934088->m_pNetwork;
}

void sub_102cc900()
{
	if (Net()->m_nNumNodes == 0) {
		DevMsg("ERROR: Trying initialize links with no WC ID table!\n");
		return;
	}
	for (CAI_DynamicLink *pLink = g_1092541c; pLink; pLink = pLink->m_pNext) {
		int src = Net()->sub_102f6d10(pLink->m_nSrcID);
		if (src == -1) {
			DevMsg("ERROR: Dynamic link WC node %d not found\n", pLink->m_nSrcID);
			src = 0;
		}
		int dest = Net()->sub_102f6d10(pLink->m_nDestID);
		if (dest == -1) {
			DevMsg("ERROR: Dynamic link WC node %d not found\n", pLink->m_nDestID);
			dest = 0;
		}
		pLink->m_nSrcID = src;
		pLink->m_nDestID = dest;
		pLink->sub_102ccce0();
	}
}
// END FUNCTION

// FUNCTION: 0x102cc9f0 size=0x107
#include "CAI_DynamicLink.h"
#include "CAI_Network.h"
__declspec(dllimport) void DevMsg(const char *, ...);
struct SAINode
{
	int m_pad0000;
	int m_iID;	// 0x04
	void sub_102f9470(int otherID);
};
struct SAINodeList
{
	int m_nNodes;
	SAINode **m_pNodes;
	SAINode *GetNode(int id);
};
extern CAI_NetworkOwner *g_10934088;
extern CAI_DynamicLink *g_1092541c;
extern SAINodeList *g_1093407c;
extern int g_106c994c;
inline SAINode *SAINodeList::GetNode(int id)
{
	if (id >= 0 && id < m_nNodes)
		return m_pNodes[id];
	g_106c994c++;
	return 0;
}
inline CAI_Network *GetEditOps() { return g_10934088->m_pNetwork; }
void sub_102cc9f0()
{
	if (!GetEditOps()->m_nNumNodes) {
		DevMsg("ERROR: Trying initialize links with no WC ID table!\n");
		return;
	}
	CAI_DynamicLink *pLink = g_1092541c;
	while (pLink) {
		int nSrcID = GetEditOps()->sub_102f6d10(pLink->m_nSrcID);
		if (nSrcID == -1) {
			DevMsg("ERROR: Dynamic link WC node %d not found\n", pLink->m_nSrcID);
			nSrcID = 0;
		}
		int nDestID = GetEditOps()->sub_102f6d10(pLink->m_nDestID);
		if (nDestID == -1) {
			DevMsg("ERROR: Dynamic link WC node %d not found\n", pLink->m_nDestID);
			nDestID = 0;
		}
		SAINode *pSrcNode = g_1093407c->GetNode(nSrcID);
		SAINode *pDestNode = g_1093407c->GetNode(nDestID);
		pSrcNode->sub_102f9470(pDestNode->m_iID);
		pDestNode->sub_102f9470(pSrcNode->m_iID);
		pLink = pLink->m_pNext;
	}
}
// END FUNCTION

// FUNCTION: 0x102ccb50 size=0x1e
#include "CAI_DynamicLink.h"
class CAI_DynamicLink;

struct CUnkDynLink {
	char m_pad0000[0x450];
	CUnkDynLink *m_pNext;
	void sub_102ccce0();
};

extern CUnkDynLink *g_1092541c;

// TARGET: sub_102ccb50
void sub_102ccb50()
{
	CUnkDynLink *p = g_1092541c;
	while (p != 0)
	{
		p->sub_102ccce0();
		p = p->m_pNext;
	}
}
// END FUNCTION

// FUNCTION: 0x102ccb80 size=0x6e
struct DynLinkX {
	char pad[0x450];
	DynLinkX *m_pNext;	// 0x450
	int m_iStart;	// 0x454
	int m_iEnd;	// 0x458
	bool sub_10011d06();
};
struct StringTableX { char pad[0xc]; int *m_pItems; };
struct WorldX { char pad[0x454]; StringTableX *m_pTable; };

extern DynLinkX *g_1092541c;
extern WorldX *g_10934088;
extern void (__cdecl *g_109f3630)(const char *fmt, ...);
int __cdecl sub_100f4410(int a, int b, int c);
void __cdecl sub_10014614(DynLinkX *p);

void sub_102ccb80()
{
	DynLinkX *p = g_1092541c;
	if (p) {
		void (__cdecl *pfnMsg)(const char *, ...) = g_109f3630;
		do {
			if (!p->sub_10011d06()) {
				int *items = g_10934088->m_pTable->m_pItems;
				int a = items[p->m_iStart];
				int b = items[p->m_iEnd];
				if (sub_100f4410(a, b, 0) == 2)
					pfnMsg("Worldcraft failed in PurgeDynamicLinks...\n");
				sub_10014614(p);
			}
			p = p->m_pNext;
		} while (p);
	}
}
// END FUNCTION

// FUNCTION: 0x102ccc10 size=0x42
#include "CAI_DynamicLink.h"
#include "CAI_NodeGraph.h"
#include "CAI_Navigator.h"
extern CAI_NodeGraph *g_1093407c;
extern int g_106c994c;
bool CAI_DynamicLink::sub_102ccc10()
{
	CAI_NavProvider *pNode;
	if (m_nSrcID >= 0 && m_nSrcID < g_1093407c->m_nNodes)
		pNode = (CAI_NavProvider *)g_1093407c->m_ppNodes[m_nSrcID];
	else
	{
		g_106c994c++;
		pNode = 0;
	}
	return pNode->sub_102f9400(m_nDestID) != 0;
}
// END FUNCTION

// FUNCTION: 0x102ccc80 size=0x1c
#include "CAI_DynamicLink.h"

// TARGET: CAI_DynamicLink::sub_102ccc80
void CAI_DynamicLink::sub_102ccc80(int a)
{
	if (m_nLinkState == 0) {
		m_nLinkState = 1;
		sub_102ccce0();
	}
}
// END FUNCTION

// FUNCTION: 0x102cccb0 size=0x1b
// TARGET: sub_102cccb0
struct CUnk102cccb0 {
    char pad[0x45c];
    int m_n45c;
    void sub_102ccce0();
    void sub_102cccb0(int a);
};
void CUnk102cccb0::sub_102cccb0(int a)
{
    if (m_n45c == 1) {
        m_n45c = 0;
        sub_102ccce0();
    }
}
// END FUNCTION

// FUNCTION: 0x102ccce0 size=0xe2
#include "CAI_DynamicLink.h"
struct SLink { int pad0; int src; int dest; char pad[0x58]; unsigned int flags; };
struct SNode { char pad[0x78]; int numLinks; SLink **links; };
struct SNet { int numNodes; SNode **nodes; };
extern SNet *g_1093407c;
extern int g_106c994c;
extern void (*g_109f3630)(const char *, ...);

void CAI_DynamicLink::sub_102ccce0()
{
    if (m_nSrcID == -1 || m_nDestID == -1) {
        g_109f3630("ERROR: Dynamic link pointing to invalid node ID!!\n");
        return;
    }
    SNode *pNode;
    if (m_nSrcID >= 0 && m_nSrcID < g_1093407c->numNodes) {
        pNode = g_1093407c->nodes[m_nSrcID];
    } else {
        g_106c994c++;
        pNode = 0;
    }
    for (int i = 0; i < pNode->numLinks; i++) {
        SLink *pLink = pNode->links[i];
        if ((pLink->src == m_nSrcID && pLink->dest == m_nDestID) || (pLink->src == m_nDestID && pLink->dest == m_nSrcID)) {
            if (m_nLinkState == 0)
                pLink->flags |= 0x1000;
            else
                pLink->flags &= ~0x1000;
            return;
        }
    }
    g_109f3630("Error: info_node_link unable to form between nodes %d and %d\n", m_nSrcID, m_nDestID);
}
// END FUNCTION

// FUNCTION: 0x102cce10 size=0x3e
#include "vampire.h"

struct CUnknownNode102cce10
{
    char m_pad0000[0x450];
    CUnknownNode102cce10 *m_pNext;	// 0x450
    int m_a454;	// 0x454
    int m_b458;	// 0x458
};

extern CUnknownNode102cce10 *g_1092541c;

// TARGET: sub_102cce10
CUnknownNode102cce10 *sub_102cce10(int a, int b)
{
    CUnknownNode102cce10 *pNode = g_1092541c;
    while (pNode)
    {
        if (a == pNode->m_a454 && b == pNode->m_b458)
        {
            return pNode;
        }
        if (a == pNode->m_b458 && b == pNode->m_a454)
        {
            return pNode;
        }
        pNode = pNode->m_pNext;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102cce60 size=0x3e
#include "vampire.h"
#include "CAI_DynamicLink.h"

struct CUnknownBase102cce60
{
    void sub_100090fc(int bAddAsDefault);
};

extern int vt_1049b4f4[];
extern CAI_DynamicLink *g_1092541c;

// TARGET: CAI_DynamicLink::sub_102cce60
CAI_DynamicLink *CAI_DynamicLink::sub_102cce60()
{
    ((CUnknownBase102cce60 *)this)->sub_100090fc(0);
    *(int **)this = vt_1049b4f4;
    m_nSrcID = -1;
    m_nDestID = -1;
    m_nLinkState = 0;
    m_pNext = g_1092541c;
    g_1092541c = this;
    return this;
}
// END FUNCTION

// FUNCTION: 0x102cceb0 size=0x1e
#include "CAI_DynamicLink.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_DynamicLink::vfunc5
CAI_DynamicLink *CAI_DynamicLink::vfunc5(unsigned int flags)
{
	sub_10009101();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
