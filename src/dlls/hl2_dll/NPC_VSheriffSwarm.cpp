// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
