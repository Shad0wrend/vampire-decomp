// CTriTol: a record with two vectors (0xc, 0x24) and a flag (0x30); stand-in fields named by offset.
#pragma once

struct CTriTol
{
	int m_unk0; int m_unk4; int m_unk8;
	float m_a[3];
	int m_unk18; int m_unk1c; int m_unk20;
	float m_b[3];
	bool m_bFlag30;
};
