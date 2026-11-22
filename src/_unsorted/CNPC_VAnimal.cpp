// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035eb10 size=0x6
#include "CNPC_VAnimal.h"
namespace lifted {
extern char g_1062b528;
}
datamap_t * CNPC_VAnimal::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1062b528);
}
// END FUNCTION

// FUNCTION: 0x1035ebf0 size=0x5
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VAnimal::vfunc587
bool CNPC_VAnimal::vfunc587(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1035ec10 size=0x6
extern void *g_1093a4a8;

void *sub_1035ec10(void)
{
    return &g_1093a4a8;
}
// END FUNCTION

// FUNCTION: 0x1035ec30 size=0x6
extern char *g_1062b650;

char *sub_1035ec30(void)
{
    return g_1062b650;
}
// END FUNCTION

// FUNCTION: 0x1035ec50 size=0x1e
#include "CNPC_VAnimal.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VAnimal::vfunc5
CBaseEntity *CNPC_VAnimal::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1035ed50 size=0x6
extern char g_1062b648;

char sub_1035ed50(void)
{
    return g_1062b648;
}
// END FUNCTION

// FUNCTION: 0x1035edb0 size=0x1d
#include "CNPC_VAnimal.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a4f4;
extern B g_10936c74;
int CNPC_VAnimal::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a4f4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1035f4f0 size=0x5
#include "CNPC_VAnimal.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VAnimal::vfunc104
// the game's 0x1035f4f0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc104
void CNPC_VAnimal::vfunc104()
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1035f510 size=0x15
#include "CNPC_VAnimal.h"

struct CUnk1026dc00 {
    char pad[0x5cec];
    unsigned int m_5cec;
    unsigned int sub_1026dc00(unsigned int flags);
};

void CNPC_VAnimal::vfunc103()
{
    ((CUnk1026dc00 *)this)->sub_1026dc00(0x4000000);
    sub_10298d30();
}
// END FUNCTION

// FUNCTION: 0x1035f540 size=0x6
int sub_1035f540(void)
{
    return 0x1f;
}
// END FUNCTION

// FUNCTION: 0x1035f560 size=0x6
int sub_1035f560(void)
{
    return 10;
}
// END FUNCTION

// FUNCTION: 0x1035f580 size=0x5
#include "CNPC_VAnimal.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VAnimal::vfunc463
// the game's 0x1035f580: a tail call (jmp) of CAI_BaseNPCTroika::vfunc463
void CNPC_VAnimal::vfunc463(int a0, int a1)
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc463(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x1035f5a0 size=0x5
#include "animevent_t.h"
#include "CNPC_VAnimal.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VAnimal::vfunc259
// the game's 0x1035f5a0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc259 (HandleAnimEvent); the animal view keeps the
// event as int * (CNPC_VDog::vfunc259 passes it on that way)
void CNPC_VAnimal::vfunc259(int *pEvent)
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc259((animevent_t *)pEvent);
}
// END FUNCTION

// FUNCTION: 0x1035f5c0 size=0x64
#include "CEntityVSlots.h"
struct CUnknown1027d990 { int sub_1027d990(); };
struct CAnimalUnit : CUnknown1027d990 {
    void sub_1035f5c0(CEntityVSlots *pEnt, Vector *pVec, int a, int b);
};
inline void VSub(const Vector &a, const Vector &b, Vector &r)
{
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
}
// TARGET: CAnimalUnit::sub_1035f5c0
void CAnimalUnit::sub_1035f5c0(CEntityVSlots *pEnt, Vector *pVec, int a, int b)
{
    if (sub_1027d990() == 2) {
        Vector *pOrigin = pEnt->slot217();
        Vector tmp;
        Vector *pOther = pEnt->slot193(&tmp);
        Vector d;
        VSub(*pOther, *pOrigin, d);
        pVec->x += d.x;
        pVec->y += d.y;
        pVec->z += d.z;
    }
}
// END FUNCTION

// FUNCTION: 0x10360120 size=0x5
#include "CNPC_VAnimal.h"
#include "CAI_BaseNPCTroika.h"
// TARGET: CNPC_VAnimal::vfunc375
// the game's 0x10360120: a tail call (jmp) of CAI_BaseNPCTroika::sub_10295590
int CNPC_VAnimal::vfunc375(int a0)
{
	return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::sub_10295590(a0);
}
// END FUNCTION

// FUNCTION: 0x10360140 size=0x5
#include "CNPC_VAnimal.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VAnimal::vfunc376
// the game's 0x10360140: a tail call (jmp) of CAI_BaseNPCTroika::vfunc376
int CNPC_VAnimal::vfunc376(int a0)
{
	return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc376(a0);
}
// END FUNCTION

// FUNCTION: 0x10360160 size=0xd
#include "CNPC_VAnimal.h"

struct CAI_BaseNPCTroikaProxy
{
	void sub_1000704f(float a);
};

// TARGET: CNPC_VAnimal::vfunc432
void CNPC_VAnimal::vfunc432(int a)
{
	*(volatile int *)&a = a;
	((CAI_BaseNPCTroikaProxy *)this)->sub_1000704f(*(float *)&a);
}
// END FUNCTION

// FUNCTION: 0x10360180 size=0x1
// TARGET: sub_10360180
void sub_10360180()
{
}
// END FUNCTION

// FUNCTION: 0x103601a0 size=0x30
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VAnimal.h"
struct SInner { char pad[0xa8]; int m_n; };
struct CVAnimalArg { char pad[0x2c]; SInner *m_p; };
int sub_101cda50();
struct CAnimalView { char pad[0x6660]; char m_b; };
struct CTroikaCall : CAI_BaseNPCTroika { void sub_10012611(CVAnimalArg *a); };
void CNPC_VAnimal::vfunc390(CVAnimalArg *pArg)
{
    int n = pArg->m_p->m_n;
    if (n == sub_101cda50())
        ((CAnimalView *)this)->m_b = 1;
    ((CTroikaCall *)this)->sub_10012611(pArg);
}
// END FUNCTION

// FUNCTION: 0x103601e0 size=0x5
#include "CNPC_VAnimal.h"

// TARGET: CNPC_VAnimal::vfunc366
bool CNPC_VAnimal::vfunc366(int a, int b, int c)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x10360200 size=0x5
#include "CNPC_VAnimal.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VAnimal::vfunc144
// the game's 0x10360200: a tail call (jmp) of CAI_BaseNPCTroika::vfunc144
void CNPC_VAnimal::vfunc144(void *a0)
{
#define a0 ((int)a0)
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc144(a0);
#undef a0
}
// END FUNCTION
