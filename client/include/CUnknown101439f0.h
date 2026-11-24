#pragma once

// 0x101439f0: 4-int object, initialised from one int (arg at +0, +4/+8/+0xc zeroed).
class CUnknown101439f0
{
public:
	CUnknown101439f0(int);
	~CUnknown101439f0() {}
	int m_0;
	int m_4;
	int m_8;
	int m_c;
};
