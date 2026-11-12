// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101f1f50 size=0x87
#include "VKeyValues.h"

// TARGET: VKeyValues::VKeyValues
VKeyValues::VKeyValues(const char *pszName) : m_n04(1)
{
	sub_101f2090(pszName);
}
// END FUNCTION

// FUNCTION: 0x101f20d0 size=0x3f
#include "VKeyValues.h"

// TARGET: ??1VKeyValues@@UAE@XZ
VKeyValues::~VKeyValues()
{
	sub_101f2c60();
}
// END FUNCTION
