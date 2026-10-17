// CUnknown102cad10: entity-like object with a schedule lookup by name; real name not yet known.
#pragma once

#include "CBaseEntity.h"

struct CUnknown102cad10Schedule
{
	char pad0[0x40];
	const char *m_pName;
};

class CUnknown102cad10 : public CBaseEntity
{
public:
	CUnknown102cad10Schedule *sub_102cad10(const char *name, CUnknown102cad10Schedule **list, int count);
};
