// CUnknown101c29e0: view of the damage record (CVDmg_t) used by the TraceAttack helpers;
// only the copy the matched callers use is known.
#pragma once

class CUnknown101c29e0
{
public:
	void sub_101c29e0(const int *pSrc);	// 0x101c29e0 (?sub_101c29e0@CUnknown101c29e0@@QAEXPBH@Z): copies pSrc[3..5] to +0x1c..+0x24

	char m_pad0000[0x1c];
	int m_field1c;	// 0x1c
	int m_field20;	// 0x20
	int m_field24;	// 0x24
};
