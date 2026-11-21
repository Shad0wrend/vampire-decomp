// CUnknown100353c0: a 0x38 byte plain struct with a hand-written copy (class name unknown).
#pragma once

struct CUnknown100353c0Inner
{
	int m_a;
	int m_b;
	int m_c;
	int m_d;
	char m_e;
	char m_f;
	char m_g[2];

	CUnknown100353c0Inner &operator=(const CUnknown100353c0Inner &o)
	{
		m_a = o.m_a;
		m_b = o.m_b;
		m_c = o.m_c;
		m_d = o.m_d;
		m_e = o.m_e;
		m_f = o.m_f;
		for (unsigned int i = 0; i < 2; i++)
			m_g[i] = o.m_g[i];
		return *this;
	}
};

class CUnknown100353c0
{
public:
	CUnknown100353c0 *sub_100eb150(const CUnknown100353c0 *pOther);	// member-wise copy, returns this

	int m_w[6];	// 0x00
	CUnknown100353c0Inner m_inner;	// 0x18
	int m_x;	// 0x2c
	int m_y;	// 0x30
	short m_z;	// 0x34
	char m_p;	// 0x36
	char m_q;	// 0x37
};
