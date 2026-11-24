// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10030790 size=0x4a
#include "CLitSmokeEmitter.h"
struct S4 { char c; char p[3]; };
struct CUnknown101180b0 { char sub_101180b0(int); };
struct CUnknown1004a950 { void sub_1004a950(const char *, int); };
struct ViewA { int sub_101165c0(S4); };
struct ViewB { void sub_1004a860(int); };
struct ViewC { void sub_10118080(int *); };
extern char g_104e0768[];

// TARGET: CLitSmokeEmitter::sub_10030790
void CLitSmokeEmitter::sub_10030790(int a, int b, int c, int d)
{
	S4 s;
	s.c = ((CUnknown101180b0 *)this)->sub_101180b0(a);
	int r = ((ViewA *)((char *)this + 8))->sub_101165c0(s);
	if (r)
		((ViewB *)((char *)this + 0x78))->sub_1004a860(r);
	((CUnknown1004a950 *)((char *)this + 0x78))->sub_1004a950(g_104e0768, 2);
	((ViewC *)this)->sub_10118080(&b);
}
// END FUNCTION

// FUNCTION: 0x100307e0 size=0x49
#include "CLitSmokeEmitter.h"
struct LitView { char pad[0xb0]; int m_b0, m_b4, m_b8, m_bc, m_c0, m_c4, m_c8; };
void CLitSmokeEmitter::vfunc14(int a, int b, int c, int d, int e, int f, int g)
{
	LitView *v = (LitView *)this;
	v->m_c8 = g;
	v->m_bc = d;
	v->m_c0 = e;
	v->m_c4 = f;
	v->m_b0 = a;
	v->m_b4 = b;
	v->m_b8 = c;
}
// END FUNCTION

// FUNCTION: 0x10030830 size=0x53
// TARGET: SmokeView::sub_10030830
struct SmokeView
{
	void sub_10030830(int index, int a, int b, int c, int d, int e, int f, int g);
};

void SmokeView::sub_10030830(int index, int a, int b, int c, int d, int e, int f, int g)
{
	char *p = (char *)this + index * 28;
	*(int *)(p + 0x78) = a;
	*(int *)(p + 0x7c) = b;
	*(int *)(p + 0x80) = c;
	*(int *)(p + 0x84) = d;
	*(int *)(p + 0x88) = e;
	*(int *)(p + 0x8c) = f;
	*(int *)(p + 0x90) = g;
}
// END FUNCTION

// FUNCTION: 0x100b5470 size=0x1e
#include "CLitSmokeEmitter.h"

// VC6 writes CLitSmokeEmitter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CLitSmokeEmitter *pcd_emit_100b5470(const CLitSmokeEmitter &other) { return new CLitSmokeEmitter(other); }

// TARGET: ??_GCLitSmokeEmitter@@UAEPAXI@Z
// END FUNCTION
