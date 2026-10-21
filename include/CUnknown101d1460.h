// CUnknown101d1460: 64 byte helper object (class not known yet; a 4x4 matrix); only what matched code needs.
#pragma once

class CBaseEntity;

class CUnknown101d1460
{
public:
	float m_m[16];

	void sub_101d1460(int index);	// "CBaseEntity::Instance" scope trace, resolves the entity of the edict index (0 gives the first edict through engine slot 38), then sub_101d1530(entity, 0)
	void sub_101d1530(CBaseEntity *pEnt, int a);	// called through the stub at 0x10013e44: sets the matrix to the entity's attachment a (when it has one) or else its absolute origin and angles; the identity for a null entity
	CUnknown101d1460 *sub_1024cef0(const CUnknown101d1460 *pOther);	// assignment (copies the 16 dwords); same address as CBlock64_t::sub_1024cef0
	void sub_1024ddf0(const float *pOrigin, const float *pAngles);	// stub 0x10005a51: builds the matrix from an origin and angles (degrees)
};
