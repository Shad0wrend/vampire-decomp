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
	void sub_10049f90(unsigned short idx);
};
