// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10211ac0 size=0x1e
#include "CPropSign.h"

void sub_100aa7b0(void *p);

// TARGET: CPropSign::vfunc5
CPropSign *CPropSign::vfunc5(unsigned int flags)
{
	sub_10001a0a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10211c60 size=0x7f
#include "CPropSign.h"
struct Sub { void *pEnt; unsigned int serial; };
struct EntInfo { int pad; Sub s; };
extern EntInfo *g_10566458;
static inline void *HGet(const CPropSignHandle *h)
{
    if (h->m_Index != 0xffffffff) {
        Sub *e = &g_10566458[h->m_Index & 0x1fff].s;
        if (e->serial == (h->m_Index >> 13))
            return e->pEnt;
    }
    return 0;
}
bool CPropSign::vfunc32(void *pEntity)
{
    if (pEntity == HGet(&m_hAttached))
        return true;
    return HGet(&m_hAttached) == 0;
}
// END FUNCTION

// FUNCTION: 0x10211d20 size=0x9
int CPropSign::vfunc35(int a) { return m_field768; }
// END FUNCTION
