// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b1dd0 size=0x84
#include "CUtlVectorChar.h"
// TARGET: ?InsertMultipleBefore@?$CUtlVector@DV?$CUtlMemory@D@@@@QAEHHHPBD@Z
int CUtlVector<char,CUtlMemory<char> >::InsertMultipleBefore(int elem, int num, const char *pToInsert)
{
	if (num == 0)
		return elem;
	if (m_Size + num > NumAllocated())
		sub_101b1ee0(m_Size + num - NumAllocated());
	m_Size += num;
	m_pElements = m_pMemory;
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&m_pMemory[elem + num], &m_pMemory[elem], numToMove);
	if (pToInsert)
	{
		for (int i = 0; i < num; i++)
			m_pMemory[elem + i] = pToInsert[i];
	}
	return elem;
}
// END FUNCTION
