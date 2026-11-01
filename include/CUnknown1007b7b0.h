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
	char m_pad00ac[0x130 - 0xac];	// (the channel vector of CUnknown100735a0 * sits at +0x28: memory +0x28, alloc count +0x2c, grow size +0x30, size +0x34, element pointer +0x38; sub_10079f50, a __fastcall free function in the matched source, new's a 0x9c byte CUnknown100735a0 and appends it)
	int m_nFps130;	// 0x130: the frames per second, 10..240

	CUnknown1007a060Elem *sub_1007b7b0();	// parses one "{ ... }" record: new record, its name, then a loop over "channel", "faceposermodel", "bonerename" and "active" entries until "}"; returns the record
	void sub_1007bbc0(CUnknown1007a060Elem *pElem);	// "channel" entry (stub 0x10002a68)
	void sub_1007baf0(CUnknown1007a060Elem *pElem);	// "faceposermodel" entry (stub 0x1000d0e9)
	bool sub_1007bd70(CUnknown1007bb30Reader *pReader);	// parses the whole text with the reader: the tokens "event" (sub_1007ab40(0, 0, 0)), "actor" (sub_1007b7b0), "mapname" (sub_1007b9e0), "fps" (sub_1007ba30) and "snap" (sub_1007baa0) until the text ends, an unknown token reports "unexpected token: %s"; then sub_1007e5f0 and true
	void sub_1007ab40(int a, int b, int c);	// "event" entry (stub 0x10010ccb)
	void sub_1007b9e0();	// "mapname" entry (stub 0x10004c87)
	void sub_1007ba30();	// "fps" entry (stub 0x10001708)
	void sub_1007baa0();	// "snap" entry (stub 0x10004999)
	void sub_1007e5f0();	// run after the parse (stub 0x1000cfcc)
};
