// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102c6e30 size=0x9
#include "CAI_Behavior.h"
// TARGET: CAI_Behavior<CAI_BaseNPC,100000>::vfunc14
int CAI_Behavior<CAI_BaseNPC,100000>::vfunc14(int a, int b, int c) { m_flag10 = 0; return 0; }
// END FUNCTION

// FUNCTION: 0x102c6e90 size=0x8
#include "CAI_Behavior.h"

// TARGET: sub_102c6e90
void __fastcall sub_102c6e90(CAI_Behavior<CAI_BaseNPC, 100000> *behavior)
{
	behavior->m_pOuter->vfunc1();
}
// END FUNCTION

// FUNCTION: 0x102c6f70 size=0x8
struct OuterStub;
struct OuterStubVtbl { void (__fastcall *f[16])(OuterStub *); };
struct OuterStub { OuterStubVtbl *vt; };
struct BehaviorStub { char pad[0x14]; OuterStub *outer; };

void __fastcall sub_102c6f70(BehaviorStub *b)
{
	b->outer->vt->f[2](b->outer);
}
// END FUNCTION
