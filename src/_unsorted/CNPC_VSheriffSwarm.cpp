// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b1c20 size=0x6
#include "CNPC_VSheriffSwarm.h"
namespace lifted {
extern char g_1093c638;
}
int CNPC_VSheriffSwarm::vfunc580()
{
    return (int)&lifted::g_1093c638;
}
// END FUNCTION

// FUNCTION: 0x103b1c40 size=0x6
#include "CNPC_VSheriffSwarm.h"
namespace lifted {
extern int g_10651948;
}
int CNPC_VSheriffSwarm::vfunc451()
{
    return lifted::g_10651948;
}
// END FUNCTION

// FUNCTION: 0x103b1c60 size=0x1e
#include "CNPC_VSheriffSwarm.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VSheriffSwarm::vfunc5
CNPC_VSheriffSwarm *CNPC_VSheriffSwarm::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103b1d60 size=0x6
extern unsigned char g_10651940;
// TARGET: sub_103b1d60
unsigned char sub_103b1d60()
{
    return g_10651940;
}
// END FUNCTION

// FUNCTION: 0x103b1dc0 size=0x1d
#include "CNPC_VSheriffSwarm.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c680;
extern B g_10936c74;
int CNPC_VSheriffSwarm::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c680.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103b2280 size=0x6
#include "CNPC_VSheriffSwarm.h"
namespace lifted {
extern char g_1065194c;
}
datamap_t * CNPC_VSheriffSwarm::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1065194c);
}
// END FUNCTION

// FUNCTION: 0x103b2310 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VSheriffSwarm::vfunc104
// the game's 0x103b2310: a tail call (jmp) of CNPC_VHuman::vfunc104
void CNPC_VSheriffSwarm::vfunc104()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103b2330 size=0x15
#include "CNPC_VSheriffSwarm.h"

struct CUnk1026dc00
{
	char pad[0x5cec];
	unsigned int m_5cec;
	unsigned int sub_1026dc00(unsigned int flags);
};

struct CVampireCallView
{
	void sub_103c4ef0();
};

void CNPC_VSheriffSwarm::vfunc103()
{
	((CUnk1026dc00 *)this)->sub_1026dc00(0x200000);
	((CVampireCallView *)this)->sub_103c4ef0();
}
// END FUNCTION

// FUNCTION: 0x103b2360 size=0x14
#include "CAI_BaseNPC.h"
#include "CNPC_VSheriffSwarm.h"

// TARGET: CNPC_VSheriffSwarm::vfunc420
void CNPC_VSheriffSwarm::vfunc420()
{
	((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc420();
	*(int *)((char *)this + 0x5de4) = 0x477fff00;
}
// END FUNCTION

// FUNCTION: 0x103b2390 size=0x6
#include "CNPC_VSheriffSwarm.h"
int CNPC_VSheriffSwarm::vfunc473()
{
    return 0x17;
}
// END FUNCTION

// FUNCTION: 0x103b23b0 size=0x6
#include "CNPC_VSheriffSwarm.h"
int CNPC_VSheriffSwarm::vfunc138()
{
    return 0x1f;
}
// END FUNCTION

// FUNCTION: 0x103b2410 size=0xf
#include "CNPC_VSheriffSwarm.h"
namespace lifted {
int sub_10015ad2();
}
int CNPC_VSheriffSwarm::vfunc438()
{
    *(int *)((char *)this + 0x1b2c) = 0x22;
    return lifted::sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x103b2430 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VSheriffSwarm::vfunc440
// the game's 0x103b2430: a tail call (jmp) of CNPC_VHuman::vfunc440
int CNPC_VSheriffSwarm::vfunc440(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc440(a0);
}
// END FUNCTION

// FUNCTION: 0x103b2450 size=0xf
#include "CNPC_VSheriffSwarm.h"
namespace lifted {
int sub_10011225();
}
int CNPC_VSheriffSwarm::vfunc461()
{
    *(int *)((char *)this + 0x1b38) = 0x22;
    return lifted::sub_10011225();
}
// END FUNCTION

// FUNCTION: 0x103b2470 size=0xd
struct CNPC_VHumanFwd;
struct CNPC_VSheriffSwarmFwd {
    void sub_103b2470(int a);
};
struct CNPC_VHumanFwd {
    void sub_10385a10(int a);
};

// TARGET: sub_103b2470
void CNPC_VSheriffSwarmFwd::sub_103b2470(int a)
{
    a = *(volatile int *)&a;
    ((CNPC_VHumanFwd *)this)->sub_10385a10(a);
}
// END FUNCTION

// FUNCTION: 0x103b2490 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VSheriffSwarm::vfunc434
// the game's 0x103b2490: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VSheriffSwarm::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x103b24d0 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VSheriffSwarm::vfunc366
// the game's 0x103b24d0: a tail call (jmp) of CNPC_VHuman::vfunc366
bool CNPC_VSheriffSwarm::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x103b24f0 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CNPC_VVampire.h"

// TARGET: CNPC_VSheriffSwarm::vfunc144
// the game's 0x103b24f0: a tail call (jmp) of CNPC_VVampire::vfunc144
void CNPC_VSheriffSwarm::vfunc144(int a0)
{
	((CNPC_VVampire *)this)->CNPC_VVampire::vfunc144(a0);
}
// END FUNCTION

// FUNCTION: 0x103b2510 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CBaseCombatCharacter.h"

// TARGET: CNPC_VSheriffSwarm::vfunc309
// the game's 0x103b2510: a tail call (jmp) of CBaseCombatCharacter::vfunc309
void * CNPC_VSheriffSwarm::vfunc309()
{
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc309();
}
// END FUNCTION

// FUNCTION: 0x103b2550 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VSheriffSwarm::vfunc606
// the game's 0x103b2550: a tail call (jmp) of CAI_BaseNPCTroika::vfunc606
int CNPC_VSheriffSwarm::vfunc606(int a0)
{
	return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc606(a0);
}
// END FUNCTION

// FUNCTION: 0x103b2570 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VSheriffSwarm::vfunc605
// the game's 0x103b2570: a tail call (jmp) of CNPC_VHuman::vfunc605
int CNPC_VSheriffSwarm::vfunc605(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc605(a0);
}
// END FUNCTION

// FUNCTION: 0x103b2590 size=0x15
#include "CNPC_VSheriffSwarm.h"

struct CAI_BaseNPC_Fwd
{
	int sub_1026d890(float a, float b);
};

// TARGET: CNPC_VSheriffSwarm::vfunc553
int CNPC_VSheriffSwarm::vfunc553(float a, float b)
{
	return ((CAI_BaseNPC_Fwd *)this)->sub_1026d890(a, b);
}
// END FUNCTION

// FUNCTION: 0x103b25c0 size=0x15
#include "CNPC_VSheriffSwarm.h"

struct CAI_BaseNPC_Fwd
{
	int sub_1026d920(float a, float b);
};

// TARGET: CNPC_VSheriffSwarm::vfunc554
int CNPC_VSheriffSwarm::vfunc554(float a, float b)
{
	return ((CAI_BaseNPC_Fwd *)this)->sub_1026d920(a, b);
}
// END FUNCTION

// FUNCTION: 0x103b25f0 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VSheriffSwarm::vfunc442
// the game's 0x103b25f0: a tail call (jmp) of CNPC_VHuman::vfunc442
void CNPC_VSheriffSwarm::vfunc442(int const *a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc442(a0);
}
// END FUNCTION

// FUNCTION: 0x103b2610 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VSheriffSwarm::vfunc444
// the game's 0x103b2610: a tail call (jmp) of CNPC_VHuman::vfunc444
void CNPC_VSheriffSwarm::vfunc444(void *a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc444(a0);
}
// END FUNCTION

// FUNCTION: 0x103b26b0 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VSheriffSwarm::vfunc566
// the game's 0x103b26b0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc566
bool CNPC_VSheriffSwarm::vfunc566(CBaseEntity *a0)
{
	return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc566(a0);
}
// END FUNCTION

// FUNCTION: 0x103b26d0 size=0x5
#include "CNPC_VSheriffSwarm.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VSheriffSwarm::vfunc433
// the game's 0x103b26d0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc433
void CNPC_VSheriffSwarm::vfunc433()
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc433();
}
// END FUNCTION

// FUNCTION: 0x103b26f0 size=0x2c
#include "CAI_BaseNPCTroika.h"
#include "CNPC_VSheriffSwarm.h"

// TARGET: CNPC_VSheriffSwarm::vfunc609
int CNPC_VSheriffSwarm::vfunc609(char bForce)
{
	if (m_n5cc0 == 4 || m_n5cc0 == 0xc)
		return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc609(bForce);
	m_p6444 = 0;
	return 0;
}
// END FUNCTION
