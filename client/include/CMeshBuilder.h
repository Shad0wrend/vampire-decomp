#pragma once
#include "Vector.h"
class CMeshBuilder
{
public:
	void sub_10081820(const float *v);
	int m_unk0[0x2c / 4];
	int m_i2c;
	int m_unk30[(0x3c - 0x30) / 4];
	unsigned short m_wIndexOffset;
	short m_unk3e;
	int m_unk40[(0x70 - 0x40) / 4];
	char *m_p70;
	int m_unk74[(0x7c - 0x74) / 4];
	unsigned short *m_pIndices;
	int m_unk80[(0x94 - 0x80) / 4];
	int m_nCurrentIndex;
	int m_i98;
	int m_nIndexCount;
	int m_unka0[(0xc0 - 0xa0) / 4];
	unsigned char *m_pCurrColor;
	void sub_10049f90(unsigned short idx);
	void sub_10059af0(const float *rgb);
	void sub_100428d0(const float *rgba);
	void sub_1004afc0(float r, float g, float b, float a);
};
