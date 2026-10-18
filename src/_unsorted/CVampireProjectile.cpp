// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d9e90 size=0x7e
#include "CVampireProjectile.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105387c4[];
extern char g_105387dc[];
extern char g_106b8540[];
typedef void (CVampireProjectile::*ThinkFn)();
void CVampireProjectile::vfunc134()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_105387c4;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    ThinkFn fn = *(ThinkFn *)((char *)this + 0x118);
    if (fn)
        (this->*fn)();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x101ee3a0 size=0x1e
#include "CVampireProjectile.h"

void sub_100aa7b0(void *p);

// TARGET: CVampireProjectile::vfunc5
CVampireProjectile *CVampireProjectile::vfunc5(unsigned int flags)
{
	sub_100085d5();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101ee750 size=0xb
struct S168 { char pad[0x168]; int v; };
bool CVampireProjectile::vfunc265()
{
	bool r = ((S168 *)this)->v == 5;
	return r;
}
// END FUNCTION
