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

// FUNCTION: 0x100b5470 size=0x1e
#include "CLitSmokeEmitter.h"

// VC6 writes CLitSmokeEmitter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CLitSmokeEmitter *pcd_emit_100b5470() { return new CLitSmokeEmitter; }

// TARGET: ??_GCLitSmokeEmitter@@UAEPAXI@Z
// END FUNCTION
