// CExpressionTable: expression table (no vtable). Only what decompiled code touches.
#pragma once

#include "CUnknown1024b2d0.h"

class CBaseCombatCharacter;
class CBaseAnimating;

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
	void sub_101053a0(CBaseCombatCharacter *pChar, CBaseAnimating *pModel, char bFlag);	// "CExpressionTable::PrecacheCharacter" (0x101053a0, ret 12): scope trace; needs a live model (sub_100952d0) and a valid animation (sub_100b62a0); for each of the model's +0x8c animation descriptors (+0x90 array, stride 0x18) that is type 1: sub_100b68d0, trimspace the +0x10 name, lowercase it, LookupExpression(sub_10106a40) and else sub_1024b5e0; builds a 0x190-byte expression record (weight at +4 must be > 0, position in the model's +0xa8 flex array, name 0x40, id at +8, flags) and appends it to the record vector at this+0 (base +0, allocation +4, count +0xc, cached pointer +0x10; records are 0x190 bytes, grow via Mem400::sub_10107550, insert via memmove); DevWarning "Too many flexes in %s" at 0x28 flexes and "Could not find expression weights %s for charac..." for a null record
	void sub_10104f20();	// "CExpressionTable::FlushTable": scope trace, clears m_list, empties the record vector (frees the block unless the grow size is -1) and rewinds the cached pointer to the base
	void sub_10104ea0();	// "CExpressionTable::InitTable": scope trace around sub_10104f20
	int sub_10105870(int a, int b);	// "CExpressionTable::LookupExpression": scope trace, key = sub_10105270(a, b); the index of the record whose dword at +0x188 equals the key, -1 when none
	void sub_10105170();	// \"CExpressionTable::DumpExpressionNames\"-like: Msg of a ruler, \"[Expression names]:\", the names in m_list, the ruler again
	int sub_10105270(int a, int b);	// key lookup (called through the stub at 0x1000f13c)
};
