// CPointHurt (point_hurt): CPointEntity -> CBaseEntity, only what matched code needs.
#pragma once

#include "CBaseEntity.h"

class CPointHurt : public CBaseEntity
{
public:
	CPointHurt *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	virtual void vfunc103();	// "CPointHurt::Spawn": clears the think and use functions, arms the think for the "start on" spawnflag, defaults the damage (2), the radius (128.0f) and the delay (0.1f), then slot 104

	char m_padHurt[0x450 - 0x3e0];
	int m_nDamage;	// 0x0450
	char m_pad0454[4];
	float m_flRadius;	// 0x0458
	float m_flDelay;	// 0x045c
	char m_pad0460[4];
	unsigned int m_hActivator;	// 0x0464
};
