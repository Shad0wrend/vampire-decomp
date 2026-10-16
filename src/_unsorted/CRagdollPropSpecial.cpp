// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10157870 size=0xd
struct RagdollField1040 { char pad[0x1040]; int m; };
void CRagdollPropSpecial::vfunc191(int value)
{
	((RagdollField1040 *)this)->m = value;
}
// END FUNCTION
