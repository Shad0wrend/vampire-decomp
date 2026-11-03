// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ebce0 size=0x17
#include "CKeyHolder.h"

// TARGET: CKeyHolder::CKeyHolder
CKeyHolder::CKeyHolder(int key)
{
	m_nKey = key;
	for (int i = 0; i < 3; i++)
		m_nKeys[i] = -1;
}
// END FUNCTION
