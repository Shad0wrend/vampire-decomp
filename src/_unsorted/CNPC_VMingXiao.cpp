// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10391390 size=0x1d
#include "CNPC_VMingXiao.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bacc;
extern B g_10936c74;
int CNPC_VMingXiao::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bacc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10394090 size=0x6c
#include "CNPC_VMingXiao.h"
struct CUnknown102e0a60 { void sub_102e0a60(int); };
void CNPC_VMingXiao::vfunc448(int a)
{
    switch (*(int *)((char *)this + 0x673c)) {
    case 3:
    case 4:
        (*(CUnknown102e0a60 **)((char *)this + 0x5d44))->sub_102e0a60(0x43340000);
        break;
    case 0:
    case 1:
    case 2:
        goto other;
    default:
    other:
        ((CUnknown10398d90 *)this)->sub_10398d90(0);
        *(int *)((char *)this + 0x6718) = -1;
        break;
    }
    sub_1029adb0(a);
}
// END FUNCTION

// FUNCTION: 0x103951d0 size=0x7c
#include "CBaseEntity.h"
#include "CNPC_VMingXiao.h"

const char *CNPC_VMingXiao::vfunc408(int index)
{
	switch (index) {
	case 0x77:
		return "xfr";
	case 0x78:
		return "xfl";
	case 0x79:
		return "xmr";
	case 0x7a:
		return "xml";
	case 0x7b:
		return "xbr";
	case 0x7c:
		return "xbl";
	case 0x7d:
		return "xsp";
	case 0x7e:
		return "xmh";
	default:
		return sub_10011590(index);
	}
}
// END FUNCTION

// FUNCTION: 0x10396fd0 size=0x18
#include "CNPC_VMingXiao.h"

char CNPC_VMingXiao::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
}
// END FUNCTION

// FUNCTION: 0x10397000 size=0x98
#include "CNPC_VMingXiao.h"

#define V4(x) virtual void x##a(); virtual void x##b(); virtual void x##c(); virtual void x##d();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)
#define V64(x) V16(x##a) V16(x##b) V16(x##c) V16(x##d)

struct EntSlot {
	void *ent;
	unsigned int serial;
	int pad;
};
extern char *g_10566458;

struct EntV {
	V64(a) V64(b) V16(c) V16(d) V4(e)
	virtual char v164();
};

static inline void *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntSlot *s = &((EntSlot *)(g_10566458 + 4))[h & 0x1fff];
		if (s->serial == (h >> 13))
			return s->ent;
	}
	return 0;
}

char CNPC_VMingXiao::vfunc166(void *pOther)
{
	unsigned int *p = (unsigned int *)((char *)this + 0x66a8);
	for (int i = 0; i < 6; i++, p++) {
		if (ResolveHandle(p[-7]) == pOther)
			return 0;
		if (ResolveHandle(p[0]) == pOther)
			return 0;
	}
	if (pOther && !((EntV *)pOther)->v164())
		return 0;
	return 1;
}
// END FUNCTION
