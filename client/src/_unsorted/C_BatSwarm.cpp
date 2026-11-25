// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1002a410 size=0x6
// TARGET: sub_1002a410
const char *sub_1002a410()
{
	return "C_BatSwarm";
}
// END FUNCTION

// FUNCTION: 0x1002a6a0 size=0xb9
#include "C_BatSwarm.h"
// TARGET: ??_GC_BatSwarm@@UAEPAXI@Z
C_BatSwarm *pcd_emit_1002a6a0() { return new C_BatSwarm; }
// END FUNCTION

// FUNCTION: 0x1002b390 size=0x48
#include "C_BatSwarm.h"
struct BatView { char pad[0xdbc]; int a[3]; int b[3]; };
void C_BatSwarm::vfunc38(int pa, int pb)
{
	BatView *v = (BatView *)this;
	int *oa = (int *)pa;
	int *ob = (int *)pb;
	sub_1002aa30();
	oa[0] = v->a[0];
	oa[1] = v->a[1];
	oa[2] = v->a[2];
	ob[0] = v->b[0];
	ob[1] = v->b[1];
	ob[2] = v->b[2];
}
// END FUNCTION
