// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ac610 size=0xee
#include "CNPC_VScurrying.h"
#include "CNPC_VAnimal.h"

struct CGlobalVarsStub
{
	char pad[0xc];
	float m_flCurTime;
};
extern CGlobalVarsStub *g_1070b228;

struct CScurryObj
{
	Vector *sub_101b99d0();	// stub 0x100019ab
};

// TARGET: CNPC_VScurrying::vfunc438
int CNPC_VScurrying::vfunc438()
{
	m_n1b2c = 0x20;
	if (g_1070b228->m_flCurTime < m_flTime668c) {
		m_nLine1b34 = 0xbe;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
		return 0x162;
	}
	if (sub_10269aa0(0x78)) {
		m_nLine1b34 = 0xc3;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
		return 0x162;
	}
	if (sub_10269aa0(0x70)) {
		m_vec6680 = *((CScurryObj *)m_Obj618c)->sub_101b99d0();
		m_flTime668c = m_flDelay669c + g_1070b228->m_flCurTime;
		m_nLine1b34 = 0xca;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
		return 0x162;
	}
	int iSched = ((CNPC_VAnimal *)this)->vfunc438();
	if (iSched == 0x6b) {
		m_nLine1b34 = 0xd1;
		iSched = 0x161;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
	}
	return iSched;
}
// END FUNCTION
