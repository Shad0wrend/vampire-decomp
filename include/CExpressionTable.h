// CExpressionTable: expression table (no vtable). Only what decompiled code touches.
#pragma once

#include "CUnknown1024b2d0.h"

class CExpressionTable
{
public:
	int m_field00;
	int m_field04;
	int m_field08;
	int m_field0c;
	int m_field10;
	CUnknown1024b2d0 m_list;	// +0x14

	CExpressionTable();
	bool IsValidExpression(int index);	// 0 <= index < m_field0c
};
