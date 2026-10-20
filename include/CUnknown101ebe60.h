// CUnknown101ebe60: object holding three keys at +0xc (indexed by a level 1..3); each key selects a record (CEntryX) of the global table at 0x1073a2c4;
// real name not yet known.
#pragma once

#include "CEntryX.h"

class CUnknown101ebe60
{
public:
	char pad0[0xc];
	int m_keys[3];	// 0x0c

	void sub_101ebe60(int arg, int level);	// forwards arg to the record the key of `level` (1-based, clamped to 3; nothing below 1) selects, or to the static default record (key -1)
};
