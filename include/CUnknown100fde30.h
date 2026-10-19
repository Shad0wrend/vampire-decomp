// CUnknown100fde30: an object with two CUniformRandomStream members (+0x58, +0xe4) and two 0x24-byte records at +0x174 / +0x198; real name not yet known.
#pragma once

class __declspec(dllimport) CUniformRandomStream
{
public:
	CUniformRandomStream();
	char m_data[0x8c];
};

struct CUnknown100fde30Rec
{
	float m_a;	// -FLT_MAX
	float m_b;	// 10.0
	int m_c, m_d, m_e;
	unsigned short m_f, m_g, m_h;	// 0xffff
	short m_i, m_j;
	int m_k;

	CUnknown100fde30Rec()
	{
		m_b = 10.0f;
		m_c = 0;
		m_d = 0;
		m_e = 0;
		m_f = 0xffff;
		m_g = 0xffff;
		m_h = 0xffff;
		m_j = 0;
		m_i = 0;
		m_k = 0;
		m_a = -3.402823466e+38f;
	}
};

class CUnknown100fde30
{
public:
	char m_pad0000[0x58];
	CUniformRandomStream m_stream1;	// 0x58
	CUniformRandomStream m_stream2;	// 0xe4
	char m_pad0170[0x170 - 0xe4 - 0x8c];
	int m_field170;
	CUnknown100fde30Rec m_rec1;	// 0x174
	CUnknown100fde30Rec m_rec2;	// 0x198

	CUnknown100fde30 *sub_100fde30();	// constructor: builds both random streams and both records, clears +0x170; returns this
};
