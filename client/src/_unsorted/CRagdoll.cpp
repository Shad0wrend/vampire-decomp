// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10125200 size=0xe
struct SE { int a; int b[5]; };
struct CView { SE e[1]; int sub_10125200(int); };
// TARGET: ?sub_10125200@CView@@QAEHH@Z
int CView::sub_10125200(int i) { return e[i + 1].a; }
// END FUNCTION

// FUNCTION: 0x10125420 size=0x1d
#include "CRagdoll.h"
void sub_101271e0(int *p);

// TARGET: ??1CRagdoll@@UAE@XZ
CRagdoll::~CRagdoll()
{
	sub_101271e0((int *)((char *)this + 4));
}
// END FUNCTION
