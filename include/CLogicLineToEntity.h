// CLogicLineToEntity (logic_lineto): CLogicalEntity -> CBaseEntity, only what matched code needs.
#pragma once

#include "CBaseEntity.h"
#include "COutputEvent.h"

class CLogicLineToEntity : public CBaseEntity
{
public:
	virtual void vfunc113();	// slot 113 (Activate): after the base, resolves the target name (+0x20c) to the handle at +0x470 and the source name (+0x468) to the handle at +0x46c; warns "logic_lineto: Target / Source not found or has no edict" and falls back to this entity's own handle
	virtual void vfunc103();	// slot 103: next think = curtime + 0.01
	void vfunc134();	// slot 134 (think): when both entities behind the handles (+0x470 target, +0x46c source) are live and have an edict fires the output (+0x450, a vector variant) with the absolute origin of the target minus the one of the source and thinks again in 0.01 s; else fires the zero vector and thinks again in 10 s

	char m_padLine[0x450 - 0x3e0];
	COutputEvent m_Output;	// 0x0450: the vector output (its variant is the first 0x14 bytes)
	const char *m_pszSource;	// 0x0468
	unsigned int m_hSource;	// 0x046c
	unsigned int m_hTarget;	// 0x0470
public:
    virtual datamap_t * vfunc82();
    virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
