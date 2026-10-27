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
	Vector sub_102e7060(const Vector &startPos, const Vector &endPos, float flGravity, float *pminHeight, float maxHorzVelocity, Vector *pvecApex);	// stub 0x100020a4: the launch velocity of a jump from startPos to endPos (Source's CalcJumpLaunchVelocity; does not use this); *pminHeight is raised to the height the jump needs, pvecApex receives the apex
	void sub_102c6d90();
};
