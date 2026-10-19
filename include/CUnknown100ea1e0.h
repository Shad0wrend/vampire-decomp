// CUnknown100ea1e0: class with two 0x100-byte strings at +0x1c and +0x11c and a mode word at +0x21c; real name not yet known.
#pragma once

class CUnknown100ea1e0
{
public:
	char pad0[0x1c];
	char m_str1[0x100];
	char m_str2[0x100];
	int m_mode;
	int m_value;

	void sub_100ea1e0(char flag, char *pOut1, char *pOut2);	// converts each non-empty string through sub_1000f2cc (flags 0x100, or 0x102 for the first when flag is set and the mode allows)
	char sub_1000f2cc(const char *str, int flags);
};
