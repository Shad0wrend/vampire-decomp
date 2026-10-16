// CUnknown102ee120: object with a pointer at +0x30 to a structure holding a CUnknown10319f70 at +0x24 and values at +0x28, +0x2c; real name not yet known.
#pragma once

#include "CUnknown10319f70.h"

struct CUnknown102ee120_Target
{
	char pad0[0x24];
	CUnknown10319f70 m_unk24;
	char pad25[3];
	int m_unk28;
	int m_unk2c;
	void SetUnk2c(int value) { m_unk2c = value; }
};

class CUnknown102ee120
{
public:
	char pad0[0x30];
	CUnknown102ee120_Target *m_unk30;

	void sub_102ee120(int a, int b, int c);
	void sub_102ee1c0(int value);
	void sub_102ee250(int value);
};
