// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f8cd0 size=0x3
// TARGET: sub_100f8cd0
void __stdcall sub_100f8cd0(int) {}
// END FUNCTION

// FUNCTION: 0x100f8cf0 size=0x61
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CEntityTouchManager.h"
#include "CEntityListSystem.h"
#include <string.h>

template <class T>
inline void FastRemoveMove(CUtlVector<T> &v, int elem)
{
	if (v.m_Size > 0) {
		memmove(&v.Element(elem), &v.Element(v.m_Size - 1), sizeof(T));
		--v.m_Size;
	}
}

// TARGET: CEntityTouchManager::vfunc1
void CEntityTouchManager::vfunc1(CEntityListSystem_Ent *pEnt)
{
	if (pEnt->m_bFlags & 1) {
		int i = m_List.Find(pEnt);
		if (m_List.IsValidIndex(i))
			FastRemoveMove(m_List, i);
	}
}
// END FUNCTION
