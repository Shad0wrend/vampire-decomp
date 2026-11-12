// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102daac0 size=0x202
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "utlrbtree.h"
#include "CAI_InterestingPlace.h"
#include "CAI_BaseNPCTroika.h"
#include "CNPCSlots614.h"
#include "CUnknown100290c0.h"
#include "CEHandleGet.h"
#include "utlvector.h"
#include "CUtlVector4.h"

// TARGET: CAI_InterestingPlace::sub_102daac0
#include "ehandle.h"

inline CAI_BaseNPCTroika *W0(const CBaseHandle &h) { return (CAI_BaseNPCTroika *)h.Get(); }
#define NPCW W0


// TARGET: CAI_InterestingPlace::sub_102daac0
void CAI_InterestingPlace::sub_102daac0(int a)
{
	CUtlVector<CBaseHandle> handles;
	for (int i = 0; i < m_n588; i++) {
		if (m_pSlots[i].m_first) {
			CBaseHandle h;
			h = (IHandleEntity *)m_pSlots[i].m_first;
			((CUtlVector4 *)&handles)->sub_102dcd30(handles.Count(), (const int *)&h);
		}
	}
	for (int j = 0; j < handles.Count(); j++) {
		if ((char)a || (NPCW(handles[j])->m_flags14b8 & 0x20000000) != 0x20000000) {
			NPCW(handles[j])->m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\AI_InterestingPlace.cpp";
			NPCW(handles[j])->m_nLine1b48 = 0x309;
			NPCW(handles[j])->vfunc448(0x23);
		} else {
			NPCW(handles[j])->m_flags14bc |= 0x80000008;
		}
		((CNPCSlots614 *)NPCW(handles[j]))->slot614();
		(void)NPCW(handles[j]);
	}
}
// END FUNCTION
