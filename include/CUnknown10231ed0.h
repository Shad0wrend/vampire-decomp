// CUnknown10231ed0: object with a flags dword at +0x464; real name not yet known.
#pragma once

class CUnknown10231ed0
{
public:
	char pad0[0x1b1];
	char m_b1b1;
	char pad1[0x464 - 0x1b2];
	unsigned int m_flags464;

	unsigned int sub_10231ed0();
	void sub_10231ef0(bool bOn);
};
