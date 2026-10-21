// CLogicLineToEntity (logic_lineto): CLogicalEntity -> CBaseEntity, only what matched code needs.
#pragma once

#include "CBaseEntity.h"

class CLogicLineToEntity : public CBaseEntity
{
public:
	virtual void vfunc113();	// slot 113 (Activate): after the base, resolves the target name (+0x20c) to the handle at +0x470 and the source name (+0x468) to the handle at +0x46c; warns "logic_lineto: Target / Source not found or has no edict" and falls back to this entity's own handle

	char m_padLine[0x468 - 0x3e0];
	const char *m_pszSource;	// 0x0468
	unsigned int m_hSource;	// 0x046c
	unsigned int m_hTarget;	// 0x0470
};
