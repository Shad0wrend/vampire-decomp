// CUnknown102e12c0: AI helper component (the CAI_Component pattern) with the owning NPC pointer at +4; real name not yet known.
#pragma once

#include "CAI_BaseNPC.h"

class CUnknown102e12c0
{
public:
	char pad0[4];
	CAI_BaseNPC *m_pOuter;
	char pad8[0x30 - 8];
	float m_f30;	// 0x30

	void sub_102e12c0();
	void sub_102e2750();
	void sub_102e7e20();
	void sub_10264450();
	void sub_10264450(int a);	// the same function seen by its callers: it tail-jumps to slot 310 (+0x4d8) of the owner with its own argument
	void sub_102e7e60();
	void sub_102c6d90();
};
