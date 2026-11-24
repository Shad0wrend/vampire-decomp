// CRoll_10145660: dice roll record (class name is a placeholder; no RTTI). Only what decompiled code needs.
#pragma once
#include "CVDmg_t.h"

class C_BaseEntity;

struct CRoll_10145660
{
	int m_unk0; int m_unk4; int m_unk8; int m_unkC; int m_unk10; int m_unk14; int m_unk18;
	CVDmgBlock16_t m_b1c;
	int m_unk2c; int m_unk30; int m_unk34; int m_unk38;
	CRoll_10145660(C_BaseEntity *a, C_BaseEntity *b, int c, int d);
	void sub_10145660(C_BaseEntity *a, C_BaseEntity *b, CVDmgBlock16_t *p, int c, int d, int e);
};
