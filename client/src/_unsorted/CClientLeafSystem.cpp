// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d1510 size=0x1
#include "CClientLeafSystem.h"
void CClientLeafSystem::vfunc22()
{
}
// END FUNCTION

// FUNCTION: 0x100d1520 size=0x1
#include "CClientLeafSystem.h"
void CClientLeafSystem::vfunc23()
{
}
// END FUNCTION

// FUNCTION: 0x100d1770 size=0xd
#include "CClientLeafSystem.h"
bool CClientLeafSystem::vfunc15(char a0)
{
    *(char *)((char *)this + 0xd8) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x100d1780 size=0xd
#include "CClientLeafSystem.h"
bool CClientLeafSystem::vfunc16(char a0)
{
    *(char *)((char *)this + 0xd9) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x100d1c10 size=0x5d
#include "CClientLeafSystem.h"
#include "IClientRenderable.h"

class IVModelInfo_100d1c10
{
public:
	virtual void v0() = 0;
	virtual void v1() = 0;
	virtual void v2() = 0;
	virtual void v3() = 0;
	virtual void v4() = 0;
	virtual void v5() = 0;
	virtual void v6() = 0;
	virtual void v7() = 0;
	virtual void v8() = 0;
	virtual void v9() = 0;
	virtual bool IsModelTwoPass(const model_t *model) = 0;
};

extern IVModelInfo_100d1c10 *g_104a57f8;

void CClientLeafSystem::vfunc0(IClientRenderable *pRenderable, bool bRenderWithViewModels)
{
	int group = pRenderable->IsTransparent() ? 2 : 1;

	bool bTwoPass = false;
	if (group == 2)
	{
		bTwoPass = g_104a57f8->IsModelTwoPass(pRenderable->GetModel());
	}

	int flags = bRenderWithViewModels ? 2 : 0;
	if (bTwoPass)
		flags |= 1;

	sub_100d1b60(pRenderable, group, flags);
}
// END FUNCTION

// FUNCTION: 0x100d1c70 size=0x1d
struct El1c70 { char pad[0x15]; char f; char pad2[0x34 - 0x16]; };
struct V1c70 { char pad[0x20]; El1c70 *arr; void sub_100d1c70(unsigned int h, char v); };
void V1c70::sub_100d1c70(unsigned int h, char v) { arr[h & 0xffff].f = v; }
// END FUNCTION

// FUNCTION: 0x100d1de0 size=0x23
#include "CClientLeafSystem.h"
struct LeafRec { int a0, a4, a8, ac; unsigned short w10; short w12; int a14, a18, a1c, a20, a24, a28, a2c, a30; };
// TARGET: ?vfunc5@CClientLeafSystem@@UAE_NG@Z
bool CClientLeafSystem::vfunc5(unsigned short h) { return ((LeafRec *)m_pData)[h].w10 != 0xffff; }
// END FUNCTION

// FUNCTION: 0x100d1eb0 size=0x29
#include "CClientLeafSystem.h"
struct CLeafEnt_12 { int m_n0; unsigned short m_s4; unsigned short m_s6; int m_n8; };
void CClientLeafSystem::vfunc6(int idx, unsigned short a, unsigned short b)
{
	CLeafEnt_12 *e = &((CLeafEnt_12 *)m_unkc)[idx];
	e->m_s4 = a;
	e = &((CLeafEnt_12 *)m_unkc)[idx];
	e->m_s6 = b;
}
// END FUNCTION

// FUNCTION: 0x100d1ee0 size=0x2f
#include "CClientLeafSystem.h"
struct Ent_100d1ee0 { int m_u0; unsigned short m_w4; unsigned short m_w6; int m_u8; };
struct View_100d1ee0 { char pad[0xc]; Ent_100d1ee0 *m_pEnts; };
void CClientLeafSystem::vfunc7(int idx, unsigned int *a, unsigned int *b)
{
	Ent_100d1ee0 *p = ((View_100d1ee0 *)this)->m_pEnts;
	*a = p[idx].m_w4;
	*b = ((View_100d1ee0 *)this)->m_pEnts[idx].m_w6;
}
// END FUNCTION

// FUNCTION: 0x100d2770 size=0x68
#include "CClientLeafSystem.h"
struct IVf { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(void *, void *); };
struct LSView { unsigned short sub_100d1e10(unsigned short); };
// TARGET: CClientLeafSystem::vfunc2
void CClientLeafSystem::vfunc2(unsigned short arg, int count, unsigned short *list)
{
    for (int i = 0; i < count; i++)
        sub_100d2560(list[i], arg);
    char *base = (char *)m_pData + (arg & 0xffff) * 0x34;
    *(unsigned short *)(base + 0x16) = ((LSView *)this)->sub_100d1e10(arg);
    char *item = (char *)m_pData + (arg & 0xffff) * 0x34;
    (*(IVf **)item)->v19(item + 0x18, item + 0x24);
}
// END FUNCTION

// FUNCTION: 0x100d2a10 size=0x25
#include "CClientLeafSystem.h"
namespace lifted {
struct C100d2800 { int sub_100d2800(int, int, int); };
struct C100d28a0 { int sub_100d28a0(int); };
}
int CClientLeafSystem::vfunc10(int a0, int a1, int a2)
{
    ((lifted::C100d28a0 *)this)->sub_100d28a0(a0);
    return ((lifted::C100d2800 *)this)->sub_100d2800(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x100d2b00 size=0x2f
#include "CClientLeafSystem.h"
struct Ent_100d2b00 { int m_u0; unsigned short m_w4; unsigned short m_w6; int m_u8; };
struct View_100d2b00 { char pad[0xc]; Ent_100d2b00 *m_pEnts; };
void CClientLeafSystem::vfunc8(int idx, int v, unsigned int *a, unsigned int *b)
{
	Ent_100d2b00 *p = &((View_100d2b00 *)this)->m_pEnts[idx];
	p->m_u8 = v;
	*a = p->m_w4;
	*b = p->m_w6;
}
// END FUNCTION

// FUNCTION: 0x100d2b30 size=0x1e
#include "CClientLeafSystem.h"
struct LeafE_100d2b30 { int a, b, c; };
struct LeafView_100d2b30 { char pad[0xc]; LeafE_100d2b30 *m_p; };
// TARGET: CClientLeafSystem::vfunc9
bool CClientLeafSystem::vfunc9(int i, int v)
{
	return ((LeafView_100d2b30 *)this)->m_p[i].c == v;
}
// END FUNCTION

// FUNCTION: 0x100d2b50 size=0x1f4
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CClientLeafSystem.h"
struct CCycleCount_ {
	unsigned long m_lo, m_hi;
	void Sample() { __asm { mov ecx, this
		rdtsc
		mov [ecx], eax
		mov [ecx+4], edx } }
};
struct Cyc {
	unsigned __int64 m;
	void SubFrom(Cyc &o) { m = o.m - m; }
	void Accum(Cyc &o) { m += o.m; }
};
struct VNode {
	const char *m_pszName;
	int m_u4;
	Cyc m_CurTime;
	int m_nRecursions;
	int m_nCurFrameCalls;
	Cyc m_TotalTime;
	char m_pad[0x28];
	VNode *m_pParent;
	VNode *GetSubNode(const char *, int, const char *);
	void EnterScope();
};
struct VProfG {
	bool m_bVTune; int m_TargetGroup;
	int m_Stack[1024];
	int m_nStack; int m_enabled; bool m_fAtRoot; VNode *m_pCurNode; VNode *m_pRoot;
};
extern "C" __declspec(dllimport) void vtune(bool);
extern VProfG *g_101e3138;
extern VNode *(VNode::*g_101e314c)(const char *, int, const char *);
extern void (VNode::*g_101e3148)();
struct Info { int a0; int m_RenderFrame; int a8; int ac; short a10; short m_RenderLeaf; unsigned char m_Flags; unsigned char m_RenderGroup; short a16; int a18; int a1c; int a20; int a24; int a28; int a2c; int a30; };
struct Node8 { unsigned short elem; unsigned short a2; unsigned short a4; unsigned short next; };
struct LeafView {
	char pad0[0x20]; Info *m_Renderables;
	char pad1[0x34]; Node8 *m_InLeaf;
	char pad2[0x38]; unsigned short *(*pfn94)(int);
};
void CClientLeafSystem::vfunc12(int count, int *pLeafList, int *pLeafFogVolumeList, int frameNumber)
{
	LeafView *v = (LeafView *)this;
	VProfG *g = g_101e3138;
	if (g->m_enabled || !g->m_fAtRoot) {
		if (g->m_pCurNode->m_pszName != "CDetailObjectSystem::BuildDetailObjectRenderLists")
			g->m_pCurNode = (g->m_pCurNode->*g_101e314c)("CDetailObjectSystem::BuildDetailObjectRenderLists", 0, "Unaccounted");
		(g->m_pCurNode->*g_101e3148)();
		g->m_fAtRoot = false;
	}
	for (int i = 0; i < count; ++i) {
		int leaf = pLeafList[i];
		unsigned short idx = *v->pfn94(leaf);
		while (idx != 0xffff) {
			Node8 &n8 = v->m_InLeaf[idx];
			Info &info = v->m_Renderables[n8.elem];
			if (info.m_RenderFrame != frameNumber) {
				if (info.m_RenderGroup == 2)
					info.m_RenderLeaf = (short)leaf;
				info.m_RenderFrame = frameNumber;
				info.m_Flags &= ~0x18;
			}
			if (pLeafFogVolumeList[i] == -1)
				info.m_Flags |= 0x10;
			else
				info.m_Flags |= 8;
			idx = v->m_InLeaf[idx].next;
		}
	}
	g = g_101e3138;
	if (!g->m_fAtRoot || g->m_enabled) {
		VNode *n = g->m_pCurNode;
		if (--pcd_stage(n)->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) {
			CCycleCount_ t;
			t.m_lo = 0; t.m_hi = 0;
			t.Sample();
			n->m_CurTime.SubFrom(*(Cyc *)&t);
			n->m_TotalTime.Accum(n->m_CurTime);
			VProfG *g2 = g_101e3138;
			int cur = --g2->m_nStack;
			int to = g2->m_Stack[cur + 1];
			int from = g2->m_Stack[cur];
			if (from != to && g2->m_bVTune && to == g2->m_TargetGroup)
				vtune(false);
		}
		if (n->m_nRecursions == 0)
			g->m_pCurNode = g->m_pCurNode->m_pParent;
		g->m_fAtRoot = (g->m_pCurNode == g->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x100d2d50 size=0xae
#include "CClientLeafSystem.h"
#include "CUtlVector4.h"
struct LeafItem { int m_a0; int m_a4; int m_a8; int m_ac; int m_a10; unsigned char m_a14; unsigned char m_type; unsigned char m_a16; unsigned char m_a17; int m_a18; int m_a1c; int m_a20; int m_a24; int m_a28; int m_a2c; unsigned short m_a30; unsigned short m_next; };
// TARGET: CClientLeafSystem::vfunc14
void CClientLeafSystem::vfunc14(CUtlVector4 *out)
{
	unsigned short i = *(unsigned short *)((char *)this + 0x2c);
	while (i != 0xffff) {
		LeafItem *it = &((LeafItem *)*(void **)((char *)this + 0x20))[i];
		if (it->m_type == 4)
			out->AddToTailNew(it->m_a0);
		i = ((LeafItem *)*(void **)((char *)this + 0x20))[i].m_next;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3310 size=0x19
#include "CClientLeafSystem.h"
// TARGET: CClientLeafSystem::vfunc21
void *CClientLeafSystem::vfunc21(unsigned short h) { return &m_pData->m_Items[h]; }
// END FUNCTION
