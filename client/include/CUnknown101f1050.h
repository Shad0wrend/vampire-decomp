// CUnknown101f1050: object with a reallocated-by-one int array (count at +0x14, data at +0x18);
// real name not yet known.
#pragma once

class CUnknown101f1050
{
public:
	char pad0[0x14];
	int m_nCount;
	int *m_pData;

	int *sub_10152f80();
	int *sub_101574f0();
};
