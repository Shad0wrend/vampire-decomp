// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10366c70 size=0x6
#include "CNPC_VBatSwarm.h"
namespace lifted {
extern char g_1093a688;
}
int CNPC_VBatSwarm::vfunc580()
{
    return (int)&lifted::g_1093a688;
}
// END FUNCTION

// FUNCTION: 0x10366c90 size=0x6
#include "CNPC_VBatSwarm.h"
namespace lifted {
extern int g_1062ef08;
}
int CNPC_VBatSwarm::vfunc451()
{
    return lifted::g_1062ef08;
}
// END FUNCTION

// FUNCTION: 0x10366cb0 size=0x1e
#include "CNPC_VBatSwarm.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VBatSwarm::vfunc5
CNPC_VBatSwarm *CNPC_VBatSwarm::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10366db0 size=0x6
// TARGET: sub_10366db0
extern unsigned char g_1062ef00;
unsigned char __cdecl sub_10366db0(void) { return g_1062ef00; }
// END FUNCTION

// FUNCTION: 0x10366e10 size=0x1d
#include "CNPC_VBatSwarm.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a6d0;
extern B g_10936c74;
int CNPC_VBatSwarm::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a6d0.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103672d0 size=0x6
#include "CNPC_VBatSwarm.h"
namespace lifted {
extern char g_1062ef0c;
}
datamap_t * CNPC_VBatSwarm::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1062ef0c);
}
// END FUNCTION

// FUNCTION: 0x10367360 size=0x5
#include "CNPC_VBatSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VBatSwarm::vfunc104
// the game's 0x10367360: a tail call (jmp) of CNPC_VHuman::vfunc104
void CNPC_VBatSwarm::vfunc104()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x10367380 size=0x15
#include "CNPC_VBatSwarm.h"

struct CUnk1026dc00 {
    char pad[0x5cec];
    unsigned int m_5cec;
    unsigned int sub_1026dc00(unsigned int flags);
};

void CNPC_VBatSwarm::vfunc103()
{
    ((CUnk1026dc00 *)this)->sub_1026dc00(0x200000);
    sub_103c4ef0();
}
// END FUNCTION

// FUNCTION: 0x103673b0 size=0x14
#include "CAI_BaseNPC.h"
#include "CNPC_VBatSwarm.h"

// TARGET: CNPC_VBatSwarm::vfunc420
void CNPC_VBatSwarm::vfunc420()
{
	((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc420();
	*(int *)((char *)this + 0x5de4) = 0x477fff00;
}
// END FUNCTION

// FUNCTION: 0x103673e0 size=0x6
#include "CNPC_VBatSwarm.h"
int CNPC_VBatSwarm::vfunc473()
{
    return 0x17;
}
// END FUNCTION

// FUNCTION: 0x10367400 size=0x6
#include "CNPC_VBatSwarm.h"
int CNPC_VBatSwarm::vfunc138()
{
    return 0x20;
}
// END FUNCTION

// FUNCTION: 0x10367460 size=0xf
#include "CNPC_VBatSwarm.h"
namespace lifted {
int sub_10015ad2();
}
int CNPC_VBatSwarm::vfunc438()
{
    *(int *)((char *)this + 0x1b2c) = 7;
    return lifted::sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x10367480 size=0x5
#include "CNPC_VBatSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VBatSwarm::vfunc440
// the game's 0x10367480: a tail call (jmp) of CNPC_VHuman::vfunc440
int CNPC_VBatSwarm::vfunc440(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc440(a0);
}
// END FUNCTION

// FUNCTION: 0x103674a0 size=0xf
#include "CNPC_VBatSwarm.h"
namespace lifted {
int sub_10011225();
}
int CNPC_VBatSwarm::vfunc461()
{
    *(int *)((char *)this + 0x1b38) = 7;
    return lifted::sub_10011225();
}
// END FUNCTION

// FUNCTION: 0x103674c0 size=0xd
struct CNPC_VHumanFwd;
struct CNPC_VBatSwarmFwd {
    void sub_103674c0(int a);
};
struct CNPC_VHumanFwd {
    void sub_10385a10(int a);
};

// TARGET: sub_103674c0
void CNPC_VBatSwarmFwd::sub_103674c0(int a)
{
    a = *(volatile int *)&a;
    ((CNPC_VHumanFwd *)this)->sub_10385a10(a);
}
// END FUNCTION

// FUNCTION: 0x103674e0 size=0x5
#include "CNPC_VBatSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VBatSwarm::vfunc434
// the game's 0x103674e0: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VBatSwarm::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x10367580 size=0xd
void __fastcall sub_1000ca4f(void *pThis, int dummy, int a, float b);

// TARGET: sub_10367580
void __fastcall sub_10367580(void *pThis, int dummy, int a, float b)
{
	sub_1000ca4f(pThis, dummy, a, b);
}
// END FUNCTION

// FUNCTION: 0x103675e0 size=0x15
#include "CNPC_VBatSwarm.h"

struct CAI_BaseNPC_Fwd
{
	int sub_1026d890(float a, float b);
};

// TARGET: CNPC_VBatSwarm::vfunc553
int CNPC_VBatSwarm::vfunc553(float a, float b)
{
	return ((CAI_BaseNPC_Fwd *)this)->sub_1026d890(a, b);
}
// END FUNCTION

// FUNCTION: 0x10367610 size=0x15
#include "CNPC_VBatSwarm.h"

struct CAI_BaseNPC_Fwd
{
	int sub_1026d920(float a, float b);
};

// TARGET: CNPC_VBatSwarm::vfunc554
int CNPC_VBatSwarm::vfunc554(float a, float b)
{
	return ((CAI_BaseNPC_Fwd *)this)->sub_1026d920(a, b);
}
// END FUNCTION

// FUNCTION: 0x10367740 size=0x2c
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VBatSwarm.h"

// TARGET: CNPC_VBatSwarm::vfunc609
int CNPC_VBatSwarm::vfunc609(char bForce)
{
	if (m_n5cc0 == 4 || m_n5cc0 == 0xc)
		return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc609(bForce);
	m_p6444 = 0;
	return 0;
}
// END FUNCTION
