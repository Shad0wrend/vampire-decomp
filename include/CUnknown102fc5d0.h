// CUnknown102fc5d0: an object built from a value, a vector and two more arguments, with a small CUtlVector<int> (4 slots
// allocated up front) at +0x7c; real name not yet known.
#pragma once

#include "CUtlVector4.h"

class CUnknown102fc5d0
{
public:
	int m_field00;	// 0x00
	int m_field04;	// 0x04
	float m_vecX;	// 0x08
	float m_vecY;	// 0x0c
	float m_vecZ;	// 0x10
	char m_pad14[0x58];	// 0x14 .. 0x6b (zeroed)
	int m_field6c;	// 0x6c
	int m_field70;	// 0x70
	int m_field74;	// 0x74
	int m_field78;	// 0x78
	CUtlVector4 m_list;	// 0x7c
	int m_field90;	// 0x90
	int m_field94;	// 0x94
	int m_field98;	// 0x98
	int m_field9c;	// 0x9c
	int m_fieldA0;	// 0xa0
	int m_fieldA4;	// 0xa4

	CUnknown102fc5d0 *sub_102fc5d0(int a, int b, const float *pVec, int c);	// constructor
};
