// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c84e0 size=0xf
struct P_100c84e0 { void sub_100c77f0(int a, int b, int c); };
struct V_100c84e0 { int m_unk0; P_100c84e0 *m_p4; };
// TARGET: sub_100c84e0
void __fastcall sub_100c84e0(V_100c84e0 *self, int edx, int a, int b, int c)
{
	if (self->m_p4)
		self->m_p4->sub_100c77f0(a, b, c);
}
// END FUNCTION
