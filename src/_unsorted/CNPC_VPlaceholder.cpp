// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a3a90 size=0x6
#include "CNPC_VPlaceholder.h"
namespace lifted {
extern char g_1064b9a8;
}
datamap_t * CNPC_VPlaceholder::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1064b9a8);
}
// END FUNCTION

// FUNCTION: 0x103a3bf0 size=0x6
extern unsigned char g_1064b9c0;
// TARGET: sub_103a3bf0
unsigned char sub_103a3bf0()
{
    return g_1064b9c0;
}
// END FUNCTION

// FUNCTION: 0x103a3c50 size=0x1d
#include "CNPC_VPlaceholder.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c08c;
extern B g_10936c74;
int CNPC_VPlaceholder::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c08c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103a4100 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc378(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a4120 size=0x3
#include "CNPC_VPlaceholder.h"
int CNPC_VPlaceholder::vfunc138()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a4140 size=0x3
#include "CNPC_VPlaceholder.h"
void CNPC_VPlaceholder::vfunc316(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x103a4160 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc317(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a4180 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc318(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a41a0 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc319(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a41c0 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc320(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a41e0 size=0x3
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc590()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a4200 size=0x3
#include "CNPC_VPlaceholder.h"
void CNPC_VPlaceholder::vfunc330(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x103a4220 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc587(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a4240 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a4260 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc363(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a4280 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc362(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a42a0 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc365(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a42c0 size=0x5
#include "CNPC_VPlaceholder.h"
bool CNPC_VPlaceholder::vfunc364(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a42e0 size=0x6
#include "CNPC_VPlaceholder.h"
namespace lifted {
extern char g_1093c040;
}
int CNPC_VPlaceholder::vfunc580()
{
    return (int)&lifted::g_1093c040;
}
// END FUNCTION

// FUNCTION: 0x103a4300 size=0x6
#include "CNPC_VPlaceholder.h"
namespace lifted {
extern int g_1064b9c8;
}
int CNPC_VPlaceholder::vfunc451()
{
    return lifted::g_1064b9c8;
}
// END FUNCTION

// FUNCTION: 0x103a4320 size=0x1e
#include "CNPC_VPlaceholder.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VPlaceholder::vfunc5
CBaseEntity *CNPC_VPlaceholder::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103a4350 size=0x28
#include "CNPC_VPlaceholder.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VPlaceholder::vfunc420
void CNPC_VPlaceholder::vfunc420()
{
    *(int *)((char *)this + 0x62ec) = 0;
    ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc420();
    *(char *)((char *)this + 0x1480) = 1;
    sub_100ac4e0(0, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x103a4390 size=0x5
#include "CNPC_VPlaceholder.h"
struct CSTV { void sub_102a1910(struct Task_t const *); };
// TARGET: CNPC_VPlaceholder::vfunc442
// the game's 0x103a4390: a tail call (jmp) of CSTV::sub_102a1910
void CNPC_VPlaceholder::vfunc442(struct Task_t const *a0)
{
	((CSTV *)this)->CSTV::sub_102a1910(a0);
}
// END FUNCTION

// FUNCTION: 0x103a43b0 size=0x5
#include "CNPC_VPlaceholder.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VPlaceholder::vfunc444
// the game's 0x103a43b0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc444
void CNPC_VPlaceholder::vfunc444(void *a0)
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc444(a0);
}
// END FUNCTION

// FUNCTION: 0x103a43d0 size=0x5
#include "CNPC_VPlaceholder.h"
#include "CBaseEntity.h"

// TARGET: CNPC_VPlaceholder::vfunc91
// the game's 0x103a43d0: a tail call (jmp) of CBaseEntity::vfunc91
char CNPC_VPlaceholder::vfunc91(void *a0, int a1)
{
	return CBaseEntity::vfunc91(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x103a43f0 size=0x10
#include "CNPC_VPlaceholder.h"
int CNPC_VPlaceholder::vfunc437()
{
    *(int *)((char *)this + 0x1b2c) = 0x1e;
    return 0x157;
}
// END FUNCTION

// FUNCTION: 0x103a4410 size=0x10
#include "CNPC_VPlaceholder.h"
int CNPC_VPlaceholder::vfunc438()
{
    *(int *)((char *)this + 0x1b2c) = 0x1e;
    return 0x157;
}
// END FUNCTION
