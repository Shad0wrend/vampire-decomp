// CUnknown102ee120: object with a pointer at +0x30 to a structure holding dwords at +0x20, +0x28, +0x2c and a CUnknown10319f70 at +0x24; real name not yet known.
#pragma once

#include "CUnknown10319f70.h"
#include "CUnknown1030bc20.h"

struct CUnknown102ee120_Target
{
	char pad0[0x20];
	int m_unk20;
	CUnknown10319f70 m_unk24;
	char pad25[3];
	int m_unk28;
	int m_unk2c;
};

class CUnknown102ee120
{
public:
	char pad0[0x30];
	CUnknown102ee120_Target *m_unk30;

	void sub_102ee120(int a, int b, int c);
	void sub_102ee1c0(int value);
	void sub_102ee250(int value);
	void sub_102f2fe0(int value);
	int sub_102ee3f0();	// current value (called through the stub at 0x10011f77)
	CUnknown1030bc20_Record *sub_102ee5e0();
	void sub_102ecd20(const void *pGoal, int a);	// hands a navigation goal (8 dwords) to the navigator (stub 0x1000ce64)
};
