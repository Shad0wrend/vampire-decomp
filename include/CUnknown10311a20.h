// CUnknown10311a20: a CUtlRBTree with 16-byte nodes (8 byte data: a key and a pointer to a record) and a context
// pointer at +0x18; real name not yet known. Its sentinel links live at 0x10936c48.
#pragma once

#include "CUtlRBTree16.h"

struct CUnknown10311a20_Record
{
	int m_Key;
	int m_pad[7];
};

struct CUnknown10311a20_Elem
{
	int m_Key;
	CUnknown10311a20_Record *m_pRecord;
};

class CUnknown10311a20 : public CUtlRBTree16At<0x10936c48UL>
{
public:
	int m_nContext;	// 0x18: remembered in the global at 0x109f076c when set

	unsigned short *sub_10313430(unsigned short i);	// the left child link of node i (stub 0x10002a86)
	void sub_10311a20(int key, int value);	// walks down to the node equal to key and, when there is one, stores value in field +4 of the record its data points to
	void *sub_103118e0(int key);	// the record pointer stored for key, or 0
	void sub_10313f70(int n);	// grows the node memory
	void sub_10312fb0(unsigned short i, unsigned short parent, bool left);	// links node i below parent and rebalances
	bool sub_10311710(const CUnknown10311a20_Record *rec);	// inserts a copy of rec keyed by its first int
};
