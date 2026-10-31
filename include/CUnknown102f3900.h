// CUnknown102f3900: stand-in for the class that owns sub_102f3900 / sub_102f39a0 (a helper taking an entity and two
// positions by value); real name not yet known. The entity is only used for its view offset at +0x184.
#pragma once

#include "Vector.h"

struct CUnknown102f3900Ent
{
	char m_pad0000[0x184];
	Vector m_vecViewOffset;	// 0x184
	char m_pad0190[0x224 - 0x190];
	unsigned int m_nFlags0224;	// 0x224
};

class CUnknown102f3900
{
public:
	void sub_102f3900(CUnknown102f3900Ent *pEnt, Vector vecA, Vector vecB, int nFlag);	// forwards (pEnt, vecA, vecB + the entity's view offset, nFlag) to sub_102f39a0
	bool sub_102f39a0(CUnknown102f3900Ent *pEnt, Vector vecA, Vector vecB, int nFlag);	// stub 0x10010816: traces from vecA to vecB past pEnt, stores whether a solid was met in the byte nFlag points to, true when the way is clear (draws debug lines otherwise)
};
