// CUnknown101cccf0: the SDK's CEntitySphereQuery (the entities within a radius of a point, found once by the
// constructor 0x101cccf0 into a 256 entry list and walked by index). Callers: for (q(center, radius, 0, 0);
// (pEnt = q.sub_101ccd40()) != 0; ++q.m_nIndex). The constructor's last two arguments are unknown (pushed 0, 0).
#pragma once

class CBaseEntity;

class CUnknown101cccf0
{
public:
	int m_nIndex;	// 0x00: the current entry
	int m_nCount;	// 0x04: how many entries the sphere search found
	CBaseEntity *m_pList[256];	// 0x08

	CUnknown101cccf0 *sub_101cccf0(int pCenter, int flRadius, int a, int b);	// ctor body (ret 16): center vector pointer, radius as raw dword (callers push a float), flags, unknown
	CBaseEntity *sub_101ccd40();	// GetCurrentEntity: the entry at m_nIndex, 0 once past m_nCount
};
