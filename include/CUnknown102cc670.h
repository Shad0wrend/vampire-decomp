// CUnknown102cc670: an aggregate of eight 8-byte CUnknown102cc520 objects plus a trailing int at +0x40,
// constructed by 0x102cc670 (called twice by the CAI_BaseNPC constructor at this+0x1a9c and this+0x1ae0);
// real name not yet known. The element type is CUnknown102cc520 (constructor body sub_102cc520, first dword 0).
#pragma once

class CUnknown102cc520;

class CUnknown102cc670
{
public:
	char m_elems0000[0x40];	// eight CUnknown102cc520 objects (8 bytes each), built by sub_102cc520
	int m_n40;	// 0x40: set to 0 by the constructor

	CUnknown102cc670 *sub_102cc670();	// constructor body 0x102cc670 (returns this)
};
