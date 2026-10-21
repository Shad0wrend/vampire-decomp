// CUnknown1040cb60: an object holding an entity handle at +0x14c, per-physics-object parameters at +0x4c and an engine handle at +0x178; real name not yet known.
#pragma once

#include "Vector.h"

class CBaseEntity;

class CUnknown1040cb60
{
public:
	char m_pad0000[4];
	float m_vPos[3];	// 0x04
	char m_pad0010[0x24 - 0x10];
	float m_f24;	// 0x24
	char m_pad0028[0x38 - 0x28];
	float m_f38;	// 0x38
	float m_f3c;	// 0x3c
	float m_f40;	// 0x40
	char m_pad0044[1];
	char m_bFlag45;	// 0x45: transform by the rotation of the entity's slot 194 angles only (not its absolute matrix)
	char m_pad0046[0x14c - 0x46];
	unsigned int m_hEntity;	// 0x14c
	char m_pad0150[0x178 - 0x150];
	int m_hEngine;	// 0x178

	void sub_1040cb60();	// releases the physics objects of the entity behind m_hEntity (restores each object's state from the parameters at +0x4c), then clears the handle and frees the engine handle
	void sub_1040bfc0(const float *a, const float *b);	// stores the two vectors at +4 / +0x10 and the frame counter at +0x34; when the entity behind m_hEntity has a physics object (+0x36c) calls its slot 2, else releases (sub_1040cb60)
	Vector *sub_1040c430(Vector *pOut, const Vector *pIn, CBaseEntity *pEnt);	// writes pIn transformed by the entity's matrix to pOut and returns pOut: the rotation of its slot 194 angles (x cleared) when the flag at +0x45 is set, else its absolute matrix at +0x130
	float sub_1040c080();	// the blend of the distance to the carried object's physics position into m_f3c over m_f38
	void sub_1040c5d0(CBaseEntity *pPlayer, CBaseEntity *pObject, int nPhysics);	// starts carrying pObject for the player (stub 0x1000f3d5)
};
