// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10372dd0 size=0xee
#include "CNPC_VCop.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102dfaa0.h"
#include "CEHandleGet.h"

extern char g_106b8540[];
const char *sub_101d3730(const char *pszFormat, const char *pszFile, int nLine);

struct CopView {
	char m_pad0000[0x1a94];
	unsigned int m_h1a94;
	char m_pad1a98[0x6668 - 0x1a98];
	int m_n6668;
};

void CNPC_VCop::vfunc598(CBaseEntity *pTarget)
{
	CAI_BaseNPCTroika *pNPC = (CAI_BaseNPCTroika *)this;
	CopView *pView = (CopView *)this;
	if (pTarget == (CBaseEntity *)EHandle_Get(m_h628c)) {
		pNPC->sub_10332ca0(pTarget, 4, 0);
		pView->m_n6668 = 0;
		if ((CBaseEntity *)pNPC->vfunc167() == pTarget)
			pNPC->sub_10279a50(0);
		if ((CBaseEntity *)EHandle_Get(pView->m_h1a94) == pTarget)
			pNPC->sub_10279b70(0);
		((CUnknown102dfaa0 *)pNPC->vfunc541())->sub_102dfaa0(pTarget, (int)sub_101d3730("%s(%d) :", "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp", 0x73b));
		sub_10273790("Player D_NU 10", 0);
	} else {
		pNPC->CAI_BaseNPCTroika::vfunc598(pTarget);
	}
}
// END FUNCTION
