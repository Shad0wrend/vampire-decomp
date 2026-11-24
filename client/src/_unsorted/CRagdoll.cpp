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

// FUNCTION: 0x101254b0 size=0x1b
#include "CRagdoll.h"
struct Ent54b0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
 virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(void *, int); };
struct Rag54b0 { int pad0; int pad4; int pad8; int padc; int pad10; int pad14; Ent54b0 *m18; char pad2[0x36c - 0x1c]; char m36c; void *sub_101254b0(); };
void *Rag54b0::sub_101254b0() { m18->v37(&m36c, 0); return &m36c; }
// END FUNCTION
