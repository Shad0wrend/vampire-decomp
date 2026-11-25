// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1013dcb0 size=0x58
#include "utlrbtree.h"

struct CRBTree12Entry_10194f30 { int m_unk0; };

template<>
const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short>::Links_t &
CUtlRBTree<CRBTree12Entry_10194f30, unsigned short>::Links(unsigned short i) const
{
	static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), BLACK };
	return (i != InvalidIndex()) ? *(Links_t *)&m_Elements[i] : *(Links_t *)&s_Sentinel;
}
// END FUNCTION
