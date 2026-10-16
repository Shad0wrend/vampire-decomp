// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a7210 size=0xc
struct CineFlags { char pad[0x204]; unsigned char m; };
bool CCineNPC::vfunc585()
{
	bool r = (((CineFlags *)this)->m >> 6) & 1;
	return r;
}
// END FUNCTION
