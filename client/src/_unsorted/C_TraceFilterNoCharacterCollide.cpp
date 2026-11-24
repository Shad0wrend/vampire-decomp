// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10029e40 size=0x1c
struct Ent9e40 { char pad[0x3f0]; void *m3f0; };
struct V9e40 { bool sub_10029e40(Ent9e40 *e, int mask); };
bool V9e40::sub_10029e40(Ent9e40 *e, int mask) { if (e && e->m3f0) return false; return true; }
// END FUNCTION

// FUNCTION: 0x10029e60 size=0x3
// TARGET: sub_10029e60
int sub_10029e60()
{
	return 0;
}
// END FUNCTION
