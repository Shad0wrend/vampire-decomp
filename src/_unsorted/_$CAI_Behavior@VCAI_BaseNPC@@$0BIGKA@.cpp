// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
