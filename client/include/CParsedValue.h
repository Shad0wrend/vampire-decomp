// CParsedValue: a 0x14 byte tagged value the stat data is parsed into (CVStatInfo_t holds five of them at +0x4c, +0x60,
// +0x74, +0x88 and +0x9c: Min, Max, MinSell, MaxBuy, Default). Layout from its setters: the type at +0 (-1 empty, 0 a plain
// number, 1 a CVDmgBlock16_t copy, 2 an index of the named stat list, 3 a function pointer), the payload from +4.
// The setters live in no header yet (the matched sources declare them locally): CUnknown10205710 (clear, 0x10205710),
// CUnknown102058e0 (number), CUnknown10205900 (block), CUnknown10205920 (named index), CUnknown10205940 (function).
#pragma once

#include "CVStatInfo_t.h"

class CParsedValue
{
public:
	int m_type;	// 0x00
	int m_data[4];	// 0x04: the payload

	void sub_101615d0(CVStatKV *pKV, const char *pszKey);	// stub 0x1000f5fb: loads the value from the key of the node (GetString(key, ""), lowercased by sub_10203d60) and parses it with sub_102059a0 (ret 8)
	void sub_10161600(const char *psz);	// stub 0x1000ded6: parses the text: empty clears (-1); a number or "-..." is a plain number; a stat name (sub_10204570) is a block or a named index; "ObfuscateCanInc" is the function sub_101467b0; else the number -1
	void sub_101616b0(void *pCtx, const char *psz);	// the same parse without the empty test, the fallback being sub_102025f0(pCtx, psz)
};

char *sub_1015fb60(const char *psz);	// copies psz into one of two 256 byte global buffers and lowercases it (cdecl, returns the buffer)
char *sub_1015fb10(const char *psz);
