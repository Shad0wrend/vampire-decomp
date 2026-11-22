// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102275f0 size=0x68
#include "CPlayerEventsManager.h"

// VC6 writes CPlayerEventsManager's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPlayerEventsManager *pcd_emit_102275f0() { return new CPlayerEventsManager; }

// TARGET: ??_GCPlayerEventsManager@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10227680 size=0x41
#include "CPlayerEventsManager.h"

void CPlayerEventsManager::vfunc2()
{
	m_vec.m_Size = 0;
	if (m_vec.m_Memory.m_nGrowSize != -1) {
		if (m_vec.m_Memory.m_pMemory) {
			g_109f3624(m_vec.m_Memory.m_pMemory);
			m_vec.m_Memory.m_pMemory = 0;
		}
		m_vec.m_Memory.m_nAllocationCount = 0;
	}
	m_vec.m_pElements = m_vec.m_Memory.m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x102276f0 size=0x1
void sub_102276f0() {
}
// END FUNCTION

// FUNCTION: 0x10227710 size=0x5
#include "CPlayerEventsManager.h"
void __cdecl sub_100828d0();
// TARGET: CPlayerEventsManager::vfunc4
// the game's 0x10227710: a tail call (jmp) of sub_100828d0
void CPlayerEventsManager::vfunc4()
{
	sub_100828d0();
}
// END FUNCTION

// FUNCTION: 0x10227730 size=0x41
#include "CPlayerEventsManager.h"

void CPlayerEventsManager::vfunc5()
{
	m_vec.m_Size = 0;
	if (m_vec.m_Memory.m_nGrowSize != -1) {
		if (m_vec.m_Memory.m_pMemory) {
			g_109f3624(m_vec.m_Memory.m_pMemory);
			m_vec.m_Memory.m_pMemory = 0;
		}
		m_vec.m_Memory.m_nAllocationCount = 0;
	}
	m_vec.m_pElements = m_vec.m_Memory.m_pMemory;
}
// END FUNCTION
