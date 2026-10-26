// CKeyringUnit: the keyring object (only what matched code needs; the RTTI name is not known yet).
#pragma once

class CKeyringUnit
{
public:
	void sub_104081e0();	// calls sub_10408060 with every index from 0 up to the count at +0x920
	void sub_10408060(int nIndex);	// stub 0x10002f6d, called directly
	char m_pad0000[0x920];
	int m_n920;	// +0x920: the count of entries
};
