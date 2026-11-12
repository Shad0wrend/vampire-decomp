// CFireBulletsInfo: the shot description handed to CBaseEntity::FireBullets (slot 185, 0x10268900) and to the
// per-shot worker CBaseEntity::sub_10267b60 (the SDK's FireBulletsInfo_t plus the result block the worker fills).
// Layout read from both functions; the names are provisional, the offsets are certain.
#pragma once

#include "Vector.h"
#include "CVDmg_t.h"

class CBaseEntity;

// FireBullets' per-shot tally (CBaseEntity::vfunc185): an entity hit and how many pellets hit it; the element of
// its local CUtlVector (8 bytes). Its copy constructor is out of line at 0x1027fc10.
struct CFireBulletsHit
{
	EHANDLE m_hEnt;
	int m_nHits;

	CFireBulletsHit() {}
	CFireBulletsHit(const CFireBulletsHit &other);
};

struct CFireBulletsInfo
{
	int m_iShots;	// 0x00: the number of shots (outer loop of FireBullets)
	int m_iPellets;	// 0x04: pellets per shot (inner loop; also divides the damage record's value)
	Vector m_vecSrc;	// 0x08: where the shot starts
	Vector m_vecDirShooting;	// 0x14: the aim direction
	Vector m_vecDir;	// 0x20: the direction of the current pellet (spread applied; written by FireBullets)
	Vector m_vecEnd;	// 0x2c: the end point = src + dir * distance (written by FireBullets)
	Vector m_vecSpread;	// 0x38
	float m_flDistance;	// 0x44
	CVDmg_t m_Dmg;	// 0x48: the damage record (0x44 bytes, copied by value with rep movsd)
	int m_iAmmoType;	// 0x8c: -1 = none (the worker returns -1 at once)
	int m_iTracerFreq;	// 0x90: a tracer every N shots (global counter 0x1092054c)
	CBaseEntity *m_pAttacker;	// 0x94: set to the shooter when null
	void *m_pWeapon98;	// 0x98: the weapon object (CLethalUnit::sub_10258290 asks it for an attachment)
	int m_n9c;	// 0x9c
	unsigned char m_bFlagsA0;	// 0xa0: bit 0 = ...
	char m_padA1[3];
	float m_flA4;	// 0xa4: damage scale, divided by the table at 0x104994c8 for the player's skill
	void *m_pA8;	// 0xa8
	int m_nAC;	// 0xac
	int m_nB0;	// 0xb0
	int m_nB4;	// 0xb4
	int m_nB8;	// 0xb8
	CBaseEntity *m_pHitEntity;	// 0xbc: the entity the worker hit (null = none), used by FireBullets for its per-entity hit tally
	int m_nC0;	// 0xc0: cleared by the worker
	char m_Result[0x54];	// 0xc4: a copy of the worker's trace (CGameTrace-sized) written back at its end
};
