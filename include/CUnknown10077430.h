// CUnknown10077430: the scene/choreography event as seen by the flex animation writer; real name not yet known.
#pragma once

#include "utlvector.h"

class CUnknown10077430
{
public:
	int sub_10077430();	// the number of flex animation tracks (stub 0x1000e872)
	void *sub_10077450(int index);	// the flex animation track `index` (stub 0x10012dd7)
	void sub_10077650();	// removes every flex animation track: while the count is above 0, sub_100775d0(0) (stub 0x10003535)
	void sub_100775d0(int index);	// removes the flex animation track `index` (stub 0x10003535)
	void sub_10077a50(int index);	// purges the vector `index` (0 or 1) of m_aVectors (stub 0x10001e7e)

	char m_pad000[0x2e4];
	CUtlVector<int> m_aVectors[2];	// 0x2e4
};
