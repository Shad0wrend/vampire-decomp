// CEnvFloatingCamera: declared by pcdecomp transplant for 0x10103900 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"

struct datamap_t;

class CEnvFloatingCamera : public CPointEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	datamap_t * vfunc82();
	float m_flAmplitude;	// 0x0450
	float m_flFrequency;	// 0x0454
	float m_flDuration;	// 0x0458
	bool m_bEnabled;	// 0x045c
	char m_pad045d[0x460 - 0x45d];
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual void vfunc113();	// slot 113 (0x10103770): a tail call of CBaseEntity::vfunc113
};
