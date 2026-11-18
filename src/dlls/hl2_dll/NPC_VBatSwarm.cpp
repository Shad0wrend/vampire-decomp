// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10367660 size=0x5
#include "CNPC_VBatSwarm.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VBatSwarm::vfunc444
// the game's 0x10367660: a tail call (jmp) of CNPC_VHuman::vfunc444
void CNPC_VBatSwarm::vfunc444(void *a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc444(a0);
}
// END FUNCTION

// FUNCTION: 0x10367680 size=0x5c
#include "CNPC_VBatSwarm.h"

int sub_1000633e(void *pNPC, int a, int b, float f, int c, int d);

bool CNPC_VBatSwarm::sub_10367680(int a, int b)
{
	m_pHint5ddc = (void *)sub_1000633e(this, a, b, 5000.0f, 0, 0);
	if (m_pHint5ddc)
	{
		sub_1000ac68(0);
		return true;
	}
	m_pszFailFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBatSwarm.cpp";
	m_nFailLine = 0x1b9;
	vfunc448(4);
	return false;
}
// END FUNCTION
