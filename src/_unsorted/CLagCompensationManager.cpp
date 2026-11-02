// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10187c90 size=0x41
#include "CLagCompensationManager.h"
#include "CAnchorList.h"

void CLagCompensationManager::sub_10187c90()
{
	m_18 = 0;
	if (m_growSize != -1) {
		if (m_pRecords) {
			g_109f3624(m_pRecords);
			m_pRecords = 0;
		}
		m_allocationCount = 0;
	}
	m_pElements = m_pRecords;
}
// END FUNCTION

// FUNCTION: 0x10187d00 size=0x8
#include "CLagCompensationManager.h"

void CLagCompensationManager::vfunc5()
{
	m_18 = 0;
}
// END FUNCTION
