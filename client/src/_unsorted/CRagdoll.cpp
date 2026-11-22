// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10125420 size=0x1d
#include "CRagdoll.h"
void sub_101271e0(int *p);

// TARGET: ??1CRagdoll@@UAE@XZ
CRagdoll::~CRagdoll()
{
	sub_101271e0((int *)((char *)this + 4));
}
// END FUNCTION
