// CBaseFlex: entity with flex animation (CBaseAnimatingOverlay -> CBaseAnimating -> ... -> CBaseEntity). Bases flattened.
#pragma once
#include "CBaseEntity.h"

class CBaseFlex : public CBaseEntity
{
public:
	void sub_100b5b00(const float *v);	// slot 277 override: stores three floats at +0x848
	void sub_100b5ce0();	// slot 276 override: toggles the int at +0x854

	char m_pad03e0[0x848 - 0x3e0];
	float m_vec848[3];
	int m_toggle854;
	CBaseFlex *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100152ad();	// as in CPhysForce (transplant)
	CBaseFlex *sub_100b58d0();	// as in CKeepUpright (transplant)
};
