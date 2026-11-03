// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037bd60 size=0xd7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CNPC_VGhoulCroucher.h"
#include "CNPC_VHumanCombatant.h"

bool __fastcall sub_1037bb20(char *pThis);

int CNPC_VGhoulCroucher::vfunc438()
{
	ScopeTrace trace("CNPC_VGhoulCroucher::SelectSchedule", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (!sub_1037bb20((char *)this)) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VGhoulCroucher.cpp";
		m_nLine1b34 = 0x23f;
		return 0x158;
	}
	if (!m_b6667) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VGhoulCroucher.cpp";
		m_nLine1b34 = 0x243;
		return 0x159;
	}
	return ((CNPC_VHumanCombatant *)this)->sub_103872d0();
}
// END FUNCTION
