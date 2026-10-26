// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102c7530 size=0x64
#include "CAI_StandoffBehavior.h"

void CAI_StandoffBehavior::vfunc5()
{
	CAI_StandoffBehaviorOuter *pOuter = m_pOuter;
	if (pOuter->m_pHintNode) {
		if (pOuter->m_pHintNode->sub_102d14c0()) {
			if (m_pOuter->m_pHintNode->sub_102d1450(m_pOuter)) {
				m_pOuter->m_pHintNode->sub_102d1420(0);
			}
		}
	}
	m_pOuter->m_pHintNode = 0;
	m_pOuter->m_unk5de4 = m_savedUnk50;
	m_pOuter->m_unk1fc = 2;
}
// END FUNCTION

// FUNCTION: 0x102c7960 size=0x2f
// TARGET: CAI_StandoffBehavior::vfunc20
#include "CAI_StandoffBehavior.h"

void CAI_StandoffBehavior::vfunc20() {
    CAI_StandoffBehaviorOuter *pOuter = m_pOuter;
    if (pOuter->m_unk5c38 != 0) {
        if (pOuter->m_unk5c38 == pOuter->sub_102cc1f0(0x17)) {
            m_pOuter->sub_10269f30(0x54);
        }
    }
}
// END FUNCTION
