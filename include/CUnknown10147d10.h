// CUnknown10147d10: entity-like object with an input handler storing a value at +0x20c; real name not yet known.
#pragma once

struct CInputData10147d10
{
	char pad0[8];
	int m_value;	// 0x08
	char pad1[0xc];
	int m_type;		// 0x18
};

struct CPair10147d50
{
	int m_a;
	int m_b;
};

struct CSub100cd660
{
	void sub_100cd660(int a, int b, int c);
};

class CUnknown10147d10
{
public:
	char pad0[0x20c];
	int m_unk20c;
	char pad210[0x454 - 0x210];
	CSub100cd660 m_sub454;

	void sub_10147d10(CInputData10147d10 *data);
	void sub_10147d50(CPair10147d50 *p);
};
