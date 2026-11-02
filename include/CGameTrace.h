// CGameTrace: the engine's trace result (0x54 bytes).
#pragma once

class CBaseEntity;

struct CGameTrace
{
	float m_startpos[3];	// 0x00
	float m_endpos[3];	// 0x0c
	float m_planeNormal[3];	// 0x18
	float m_planeDist;	// 0x24
	char m_planeType;	// 0x28
	char m_planeSignbits;	// 0x29
	short m_pad2a;
	float m_fraction;	// 0x2c
	int m_contents;	// 0x30
	short m_dispFlags;	// 0x34
	bool m_allsolid;	// 0x36
	bool m_startsolid;	// 0x37
	float m_fractionleftsolid;	// 0x38
	const char *m_surfaceName;	// 0x3c
	short m_surfaceProps;	// 0x40
	unsigned short m_surfaceFlags;	// 0x42
	int m_hitgroup;	// 0x44
	short m_physicsbone;	// 0x48
	char m_b4a;	// 0x4a: checked by the ground-snap helper sub_101cd250 (returns -1 when set)
	char m_pad4b;
	CBaseEntity *m_pEnt;	// 0x4c
	int m_hitbox;	// 0x50
};
