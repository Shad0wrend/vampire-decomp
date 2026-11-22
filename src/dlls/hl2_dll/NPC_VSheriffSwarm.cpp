// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x103b2530 size=0xd
struct CAI_BaseNPCFwd;
struct CNPC_VSheriffSwarmFwd {
    void sub_103b2530(int a, int b);
};
struct CAI_BaseNPCFwd {
    void sub_1026dd10(int a, int b);
};

// TARGET: sub_103b2530
void CNPC_VSheriffSwarmFwd::sub_103b2530(int a, int b)
{
    b = *(volatile int *)&b;
    ((CAI_BaseNPCFwd *)this)->sub_1026dd10(a, b);
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

// FUNCTION: 0x103b2630 size=0x5c
#include "CNPC_VSheriffSwarm.h"

int sub_1000633e(void *pNPC, int a, int b, float f, int c, int d);

bool CNPC_VSheriffSwarm::sub_103b2630(int a, int b)
{
	m_pHint5ddc = (void *)sub_1000633e(this, a, b, 5000.0f, 0, 0);
	if (m_pHint5ddc)
	{
		sub_1000ac68(0);
		return true;
	}
	m_pszFailFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VSheriffSwarm.cpp";
	m_nFailLine = 0x1b9;
	vfunc448(4);
	return false;
}
// END FUNCTION
