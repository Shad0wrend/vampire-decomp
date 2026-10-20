// CUnknown101cf0a0: a 0x54 byte record built from a start / direction pair, a distance, a flag word and an entity (looked up
// from an edict with the inlined CBaseEntity::Instance); real name not yet known.
#pragma once

#include "Vector.h"
#include "CUnknown1070b22c.h"

class CBaseEntity;

struct CUnknown101cf0a0_Unknown	// the object at +0x40 of an edict
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual CBaseEntity *GetBaseEntity();	// slot 4
};

struct CUnknown1070b22c_Edict
{
	char m_pad0000[0x40];
	CUnknown101cf0a0_Unknown *m_pUnknown;	// 0x40
};

struct CUnknown101cf0a0_Source	// the start / direction pair handed in
{
	Vector m_vecStart;	// 0x00
	Vector m_vecDir;	// 0x0c
};

struct CUnknown101cf0a0
{
	Vector m_vecStart;	// 0x00
	Vector m_vecEnd;	// 0x0c: start + dir * distance
	Vector m_vecExtra;	// 0x18
	int m_nExtra;	// 0x24
	char m_pad0028[4];
	float m_flDistance;	// 0x2c
	int m_nValue30;	// 0x30
	char m_pad0034[3];
	char m_bZeroDistance;	// 0x37: the distance is zero
	char m_pad0038[4];
	const char *m_pszName;	// 0x3c
	int m_nValue40;	// 0x40
	int m_nValue44;	// 0x44
	char m_pad0048[4];
	CBaseEntity *m_pEntity;	// 0x4c: the entity of the edict
	char m_pad0050[4];
};

void sub_101cf0a0(CUnknown101cf0a0 *pOut, CUnknown101cf0a0_Source *pSource, CUnknown1070b22c_Edict *pEdict, float flDistance, int nValue44, int nValue30, const Vector *pExtra, int nExtra);	// fills pOut (cdecl): start, end = start + dir * distance, the extra vector / value, the entity of pEdict (the engine's edict 0 when null), the two values and the default name
