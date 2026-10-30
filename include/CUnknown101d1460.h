// CUnknown101d1460: 64 byte helper object (class not known yet; a 4x4 matrix); only what matched code needs.
#pragma once

class CBaseEntity;

class CUnknown101d1460
{
public:
	float m_m[16];

	void sub_101d1460(int index);	// "CBaseEntity::Instance" scope trace, resolves the entity of the edict index (0 gives the first edict through engine slot 38), then sub_101d1530(entity, 0)
	void sub_101d1530(CBaseEntity *pEnt, int a);	// called through the stub at 0x10013e44: sets the matrix to the entity's attachment a (when it has one) or else its absolute origin and angles; the identity for a null entity
	void sub_101d15f0(CBaseEntity *pEnt);	// sets the matrix to the entity's absolute origin (slot 220) and angles (slot 221) when it has an edict, else to the identity
	CUnknown101d1460 *sub_1024cef0(const CUnknown101d1460 *pOther);	// assignment (copies the 16 dwords); same address as CBlock64_t::sub_1024cef0
	void sub_10027fe0(float *pOut, const float *pIn);	// stub 0x1000e1ab: transforms the point pIn by the first three rows (VectorTransform)
	void sub_10028060(float *pOut, const float *pIn);	// stub 0x10001190: rotates the vector pIn by the first three rows (VectorRotate, no translation)
	void sub_100280e0(float *pOut, const float *pIn);	// stub 0x1000df8f: rotates the vector pIn by the transpose of the first three rows (VectorIRotate)
	void sub_1024ddf0(const float *pOrigin, const float *pAngles);	// stub 0x10005a51: builds the matrix from an origin and angles (degrees)
};
