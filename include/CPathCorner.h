// CPathCorner: path corner entity. Declared standalone (the vtable pointer at +0 is not modelled):
// only the members the matched functions touch.
#pragma once

class CPathCorner
{
public:
	char m_pad0000[0x20c];
	const char *m_pszTarget;	// 0x20c: the name of the next corner
	char m_pad0210[0x224 - 0x210];
	unsigned char m_fTextOverlayFlags;	// 0x224: bit 0 = text overlay shown
	char m_pad0225[0x2e0 - 0x225];
	int m_pEdict;	// 0x2e0

	int vfunc124();	// slot 124 "CPathCorner::DrawDebugTextOverlays": the base's line offset, plus one line "Target: <name>" ("Target:   -  " without one) when the text overlay bit is set
	int sub_100018cf();	// CBaseEntity::vfunc124 (stub 0x100018cf), called directly
};
