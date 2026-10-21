// CUnknown1007b7b0: a script block parser with a text reader at +0xa8 (the object also owns the vector of
// CUnknown1007a060 records at +0x14); real name not yet known.
#pragma once

#include "CUnknown1007a060.h"
#include "CUnknown1007bb30.h"

class CUnknown1007b7b0
{
public:
	char m_pad0000[0xa8];
	CUnknown1007bb30Reader *m_pReader;	// 0xa8

	CUnknown1007a060Elem *sub_1007b7b0();	// parses one "{ ... }" record: new record, its name, then a loop over "channel", "faceposermodel", "bonerename" and "active" entries until "}"; returns the record
	void sub_1007bbc0(CUnknown1007a060Elem *pElem);	// "channel" entry (stub 0x10002a68)
	void sub_1007baf0(CUnknown1007a060Elem *pElem);	// "faceposermodel" entry (stub 0x1000d0e9)
};
