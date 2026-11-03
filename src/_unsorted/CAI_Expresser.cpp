// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10312e80 size=0x4d
#include "vampire_all.h"
#include "CAI_Expresser.h"

// TARGET: CAI_Expresser::vfunc0
CAI_Expresser *CAI_Expresser::vfunc0(unsigned char flags)
{
	m_Sub.sub_10311500();
	if (m_Tree.m_mem.m_mem.m_growSize != -1)
	{
		if (m_Tree.m_mem.m_mem.m_pMemory)
		{
			Plat_Free(m_Tree.m_mem.m_mem.m_pMemory);
			m_Tree.m_mem.m_mem.m_pMemory = 0;
		}
		m_Tree.m_mem.m_mem.m_allocationCount = 0;
	}
	((CAI_Component *)this)->CAI_Component::~CAI_Component();
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION
