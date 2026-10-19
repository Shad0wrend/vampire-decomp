// CUnknown10258b00: a large state object whose reset routine (sub_10258b00) re-initialises two arrays of 0x1093c byte
// records and three arrays of 0xec84 byte records; real name not yet known.
#pragma once

struct CUnknown10258b00_A	// 0x1093c bytes
{
	int m_n00;	// 0x00: -1
	char m_pad04[4];
	int m_n08;	// 0x08
	int m_n0c;	// 0x0c
	float m_f10;	// 0x10: 1.0
	char m_b14;	// 0x14
	char m_pad15[0x114 - 0x15];
	int m_n114;	// 0x114: -1
	char m_b118;	// 0x118
	char m_pad119[0x198 - 0x119];
	char m_b198;	// 0x198
	char m_pad199[0x1093c - 0x199];
};

struct CUnknown10258b00_C	// 0x88 bytes
{
	int m_n00;	// 0x00
	char m_b04;	// 0x04
	char m_pad05[0x84 - 0x05];
	int m_n84;	// 0x84
};

struct CUnknown10258b00_B	// 0xec84 bytes
{
	int m_nIndex;	// 0x00
	char m_b04;	// 0x04
	char m_pad05[0x104 - 0x05];
	int m_n104;	// 0x104: -1
	int m_n108;	// 0x108: -1
	int m_n10c;	// 0x10c: -1
	char m_pad110[0x25c - 0x110];
	int m_n25c;	// 0x25c: -1
	char m_pad260[0x274 - 0x260];
	CUnknown10258b00_C m_C[2];	// 0x274
	char m_pad384[0x3c0 - 0x384];
	int m_n3c0;	// 0x3c0
	char m_pad3c4[0xec84 - 0x3c4];
};

class CUnknown10258b00
{
public:
	char m_pad0000[0x24d0];
	int m_n24d0;	// 0x24d0
	char m_pad24d4[0x2554 - 0x24d4];
	int m_n2554;	// 0x2554
	char m_pad2558[0x25e0 - 0x2558];
	int m_n25e0;	// 0x25e0
	char m_pad25e4[0x2664 - 0x25e4];
	int m_n2664;	// 0x2664
	CUnknown10258b00_A m_A[2];	// 0x2668
	CUnknown10258b00_B m_B[3];	// 0x238e0
	char m_pad4fe6c[4];
	int m_n4fe70;	// 0x4fe70 .. 0x4fe84
	int m_n4fe74;
	int m_n4fe78;
	int m_n4fe7c;
	int m_n4fe80;
	int m_n4fe84;
};

void sub_10258b00(CUnknown10258b00 *p);	// resets the arrays and the fields at +0x24d0.. and +0x4fe70..
