// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10029cf0 size=0x41
#include "CAnchorList.h"

void CAnchorList::vfunc5()
{
	m_Size = 0;
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_109f3624(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
	m_pElements = m_pMemory;
}
// END FUNCTION
