// CUnknown101c2770: damage-info-like object (CTakeDamageInfo family) whose first dword points to the CVDmg_t it was
// built from; real name not yet known. Only what decompiled code needs.
#pragma once

class CVDmg_t;

class CUnknown101c2770
{
public:
	CVDmg_t *m_pDmg;	// 0x00

	CUnknown101c2770 *sub_101c2770(CVDmg_t *pDmg);	// constructor: resolves the entity of the damage record's index (field 0x34, through CBaseEntity::Instance), then sub_101c2910(entity, entity, &vec3_origin, &vec3_origin, (float)GetDmg, the record's field 0x10, 0, -1) and stores pDmg; returns this
	void sub_101c2910(void *pAttacker, void *pInflictor, const float *pForce, const float *pPosition, float flDamage, int bitsDamageType, int a, int b);	// called through the stub at 0x1000f16e
};
