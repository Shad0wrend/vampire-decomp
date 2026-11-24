// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c2210 size=0x44
#include "CLocalPlayerTraceFilter.h"
struct HV { void *sub_1007bab0(); };
struct EntV { char pad[0x3ec]; HV *m3ec; char pad2[0x3f8 - 0x3f0]; int m3f8; };
extern void *g_104a0d50;
// TARGET: ?vfunc0@CLocalPlayerTraceFilter@@UAE_NPAXH@Z
bool CLocalPlayerTraceFilter::vfunc0(void *p, int mask)
{
	EntV *e = (EntV *)p;
	if (e) {
		int f = e->m3f8;
		void *me = g_104a0d50;
		if (f && e == me)
			return false;
		if (e->m3ec && e->m3ec->sub_1007bab0() == me)
			return false;
	}
	return true;
}
// END FUNCTION
