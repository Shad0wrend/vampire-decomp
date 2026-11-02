// CUnknown102d8a90: cached entity position. A flag at +0x0 (nonzero = already resolved), an entity handle at +0x4
// and the cached three floats at +0x8; real name not yet known.
#pragma once

struct SVec3 { float x, y, z; };

class CUnknown102d8a90
{
public:
	int m_nFlag;
	unsigned int m_hEntity;
	SVec3 m_vCached;

	SVec3 *sub_102d8a90();	// resolves the handle and caches the entity's slot 193 result (position-like vector); returns the cache
	bool sub_102d8a20(void *pEntity) const;
};
