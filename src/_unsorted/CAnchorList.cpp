// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10029cf0 size=0x41
#include "CAnchorList.h"

void CAnchorList::vfunc5()
{
	m_list.m_Size = 0;
	if (m_list.m_growSize != -1) {
		if (m_list.m_pMemory) {
			g_109f3624(m_list.m_pMemory);
			m_list.m_pMemory = 0;
		}
		m_list.m_allocationCount = 0;
	}
	m_list.m_pElements = m_list.m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10029e10 size=0x68
#include "CAnchorList.h"

// VC6 writes CAnchorList's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CAnchorList *pcd_emit_10029e10() { return new CAnchorList; }

// TARGET: ??_GCAnchorList@@UAEPAXI@Z
// END FUNCTION
