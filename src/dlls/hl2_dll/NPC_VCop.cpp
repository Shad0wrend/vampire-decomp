// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10371ee0 size=0x1e2
#include "CNPC_VCop.h"
#include "CEHandleGet.h"

extern int g_1093acac;
extern int g_1093acb0;

static inline CNPC_VCopPlayer *CopTarget(const unsigned int &rh)
{
	return (CNPC_VCopPlayer *)EHandle_Get(rh);
}

int CNPC_VCop::vfunc438()
{
	m_n1b2c = 0xc;
	switch (m_n5cc0) {
	case 1:
		if (m_b65f4) {
			char bNone = 0;
			if (!m_p6590)
				bNone = 1;
			if (!(CopTarget(m_h628c) && !CopTarget(m_h628c)->sub_1017f8d0() && !CopTarget(m_h628c)->sub_1017f770()) && !bNone)
				break;
			if (!m_b6672) {
				if (g_1093acac - g_1093acb0 <= 3) {
					m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
					m_nLine1b34 = 0x412;
					return 0x170;
				}
			}
			if (!m_b6672) {
				m_b6672 = 1;
				g_1093acb0++;
			}
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
			m_nLine1b34 = 0x40e;
			return 0x16e;
		}
		break;
	case 0xc:
		if (sub_10269d30(0x1e) && CopTarget(m_h628c)) {
			CopTarget(m_h628c)->sub_1017e6f0(0);
			return 0x6d;
		}
		sub_1026e340(1);
		break;
	}
	return CNPC_VHumanCombatant::vfunc438();
}
// END FUNCTION

// FUNCTION: 0x103723f0 size=0x236
#include "CNPC_VCop.h"
#include "CEHandleGet.h"

// TARGET: CNPC_VCop::sub_103723f0
int CNPC_VCop::sub_103723f0()
{
	EHANDLE &hPlayer = (EHANDLE &)m_h628c;
	bool bPlayer = false;
	if (sub_10269aa0(0x25) && sub_10269aa0(0xa)) {
		if (sub_10269aa0(0x6d)) {
			CBaseEntity *pPlayer = hPlayer.Get();
			if (m_h6160.Get() == pPlayer)
				bPlayer = true;
		}
		if (sub_10269aa0(0x70)) {
			CBaseEntity *pPlayer = hPlayer.Get();
			if (m_h618c.Get() == pPlayer)
				bPlayer = true;
		}
	}
	if (sub_10269aa0(0x4c) || sub_10269aa0(0x4d) || sub_10269aa0(0x4e)) {
		m_b5b80 = 0;
		CBaseEntity *pPlayer = hPlayer.Get();
		if (m_h5b7c.Get() == pPlayer)
			goto LPursue;
	}
	if (bPlayer) {
LPursue:
		((CNPC_VCopSlots *)this)->slot597((CNPC_VCopPlayer *)hPlayer.Get(), 10);
		((CNPC_VCopSlots *)this)->slot596(hPlayer.Get());
		m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
		m_nLine1b40 = 0x527;
		return m_n5cc4 = 2;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103726c0 size=0x302
#include "CNPC_VCop.h"
#include "CEHandleGet.h"

// TARGET: CNPC_VCop::vfunc461
int CNPC_VCop::vfunc461()
{
	m_n1b38 = 0xc;
	switch (m_n5cc0) {
	case 0xc:
		if (sub_10269d30(0x21)) {
			((CNPC_VCopSlots *)this)->slot597((CNPC_VCopPlayer *)EHandle_Get(m_h628c), 10);
			((CNPC_VCopSlots *)this)->slot596(EHandle_Get(m_h628c));
			m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
			m_nLine1b40 = 0x5e1;
			return m_n5cc4 = 8;
		}
		if (sub_10269d30(0x1f)) {
			((CNPC_VCopSlots *)this)->slot597((CNPC_VCopPlayer *)EHandle_Get(m_h628c), 10);
			((CNPC_VCopSlots *)this)->slot596(EHandle_Get(m_h628c));
			m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
			m_nLine1b40 = 0x5f1;
			return m_n5cc4 = 8;
		}
		if (sub_10269d30(0x22)) {
			((CNPC_VCopSlots *)this)->slot597((CNPC_VCopPlayer *)EHandle_Get(m_h628c), 10);
			((CNPC_VCopSlots *)this)->slot596(EHandle_Get(m_h628c));
			m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
			m_nLine1b40 = 0x601;
			return m_n5cc4 = 2;
		}
		if (sub_10269d30(0x20)) {
			((CNPC_VCopSlots *)this)->slot597((CNPC_VCopPlayer *)EHandle_Get(m_h628c), 10);
			((CNPC_VCopSlots *)this)->slot596(EHandle_Get(m_h628c));
			m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
			m_nLine1b40 = 0x611;
			return m_n5cc4 = 2;
		}
		m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCop.cpp";
		m_nLine1b40 = 0x616;
		return m_n5cc4 = 1;
	case 1:
	case 3: {
		int nIdeal = sub_103723f0();
		if (nIdeal)
			return m_n5cc4 = nIdeal;
		break;
	}
	}
	return CNPC_VHumanCombatant::vfunc461();
}
// END FUNCTION

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
