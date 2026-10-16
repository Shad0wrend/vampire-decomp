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

// FUNCTION: 0x1027e120 size=0xd
struct NpcFlags204 { char pad[0x204]; unsigned int m; };
unsigned int CAI_BaseNPC::vfunc423()
{
	return (((NpcFlags204 *)this)->m >> 11) & 1;
}
// END FUNCTION
