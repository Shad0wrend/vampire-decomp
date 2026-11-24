// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101386a0 size=0x58
#include "utlrbtree.h"

template<>
const CUtlRBTree<char const *, unsigned short>::Links_t &
CUtlRBTree<char const *, unsigned short>::Links(unsigned short i) const
{
	static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), BLACK };
	return (i != InvalidIndex()) ? *(Links_t *)&m_Elements[i] : *(Links_t *)&s_Sentinel;
}
// END FUNCTION
