// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103cb7f0 size=0xb
struct W {
	char pad[0x6078];
	bool m;
};
bool CNPC_VWerewolf::vfunc600(int unused)
{
	return ((W *)this)->m = true;
}
// END FUNCTION
