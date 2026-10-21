// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10359e90 size=0x1d
#include "CGeneric_NPC.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a234;
extern B g_10936c74;
int CGeneric_NPC::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a234.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1035a810 size=0x2a
#include "CGeneric_NPC.h"
extern const float g_1044f00c;
extern const float g_1049949c;
extern const float g_1047a3ac;

float CGeneric_NPC::vfunc516()
{
    int state = *(int *)((char *)this + 0xfec);
    if (state != 0x13) {
        if (state > 0x3a && state <= 0x3c)
            return g_1044f00c;
        return g_1049949c;
    }
    return g_1047a3ac;
}
// END FUNCTION

// FUNCTION: 0x1035a980 size=0x68
#include "CGeneric_NPC.h"
#include "Vector.h"

typedef Vector *(__fastcall *OriginFn)(void *pThis, void **vt);
extern float g_10449258;
void __cdecl sub_100043cc(void *pEnt, Vector *pPos, int flag);

void CGeneric_NPC::vfunc144(int a)
{
	sub_1000a62d(a);
	void **vt = *(void ***)this;
	Vector *p = ((OriginFn)vt[220])(this, vt);
	Vector tmp;
	tmp.z = p->z;
	tmp.z += g_10449258;
	tmp.x = p->x;
	tmp.y = p->y;
	Vector pos = tmp;
	sub_100043cc(this, &pos, 0);
	sub_10003472(0);
}
// END FUNCTION
