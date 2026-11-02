// CExpressionTable: expression table (no vtable). Only what decompiled code touches.
#pragma once

#include "CUnknown1024b2d0.h"

class CExpressionTable
{
public:
	int m_field00;	// base address of the 400-byte expression records
	int m_field04;
	int m_field08;
	int m_field0c;
	int m_field10;
	CUnknown1024b2d0 m_list;	// +0x14

	CExpressionTable();
	~CExpressionTable();	// scope trace, destroys m_list, then purges the memory block twice (utl-vector destructor)
	bool IsValidExpression(int index);	// 0 <= index < m_field0c
	const char *sub_10105090(int index);	// "CExpressionTable::GetExpressionName": scope trace, the name of the expression (id at +0x18a of its 400 byte record, looked up in m_list), "Invalid Expression" for an invalid index
	int sub_101051b0(int index);	// "CExpressionTable::GetExpressionData": scope trace, address of record index (0 when out of range)
	void sub_10104f20();	// "CExpressionTable::FlushTable": scope trace, clears m_list, empties the record vector (frees the block unless the grow size is -1) and rewinds the cached pointer to the base
	void sub_10104ea0();	// "CExpressionTable::InitTable": scope trace around sub_10104f20
	int sub_10105870(int a, int b);	// "CExpressionTable::LookupExpression": scope trace, key = sub_10105270(a, b); the index of the record whose dword at +0x188 equals the key, -1 when none
	void sub_10105170();	// \"CExpressionTable::DumpExpressionNames\"-like: Msg of a ruler, \"[Expression names]:\", the names in m_list, the ruler again
	int sub_10105270(int a, int b);	// key lookup (called through the stub at 0x1000f13c)
};
