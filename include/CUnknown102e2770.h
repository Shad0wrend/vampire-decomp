// CUnknown102e2770: holder forwarding a two-argument call to the object at +4; real name not yet known.
#pragma once

class CUnknown102e2770Target
{
public:
	void sub_1000a7c7(int a, int b);
};

class CUnknown102e2770
{
public:
	int m_unk0;
	CUnknown102e2770Target *m_pTarget;	// 0x0004

	void sub_102e2770(int a, int b);
};
