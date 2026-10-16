// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a6840 size=0xb
void CAI_BaseNPC::vfunc483(int unused)
{
	vfunc158();
}
// END FUNCTION

// FUNCTION: 0x1026a8f0 size=0x8
// TARGET: CAI_BaseNPC::vfunc567
int CAI_BaseNPC::vfunc567(int unused)
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1026a910 size=0x9
extern float g_104454c4;
float CAI_BaseNPC::vfunc568(int a) { return g_104454c4; }
// END FUNCTION

// FUNCTION: 0x1027a400 size=0xd
struct NpcFlags204 { char pad[0x204]; unsigned int m; };
unsigned int CAI_BaseNPC::vfunc552()
{
	return (((NpcFlags204 *)this)->m >> 9) & 1;
}
// END FUNCTION

// FUNCTION: 0x1027dc80 size=0x66
struct FObj { char pad[0x28]; float m_f; };
struct IObj { char pad[0x4f8]; int m_state; };
extern double g_104493d0;

// TARGET: sub_1027dc80
bool __stdcall sub_1027dc80(FObj* p, IObj* q, float f, int* out)
{
	if (p->m_f < f)
		return false;
	if (q->m_state != 1 && q->m_state != 3)
		return false;
	if (f < g_104493d0) {
		*out = -1;
		return true;
	}
	p->m_f = f;
	*out = 0;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1027e120 size=0xd
struct NpcFlags204 { char pad[0x204]; unsigned int m; };
unsigned int CAI_BaseNPC::vfunc423()
{
	return (((NpcFlags204 *)this)->m >> 11) & 1;
}
// END FUNCTION
