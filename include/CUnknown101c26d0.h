// CUnknown101c26d0: damage-info object (CTakeDamageInfo family), 0x4c bytes; real name not yet known.
#pragma once

#include "Vector.h"

class CUnknown101c26d0
{
public:
	int m_n0000;	// set by the constructor from its last argument
	Vector m_vecForce;	// 0x0004: the damage force
	char m_pad0010[0x1c - 0x10];
	Vector m_vec001c;
	char m_pad0028[0x4c - 0x28];

	CUnknown101c26d0 *sub_101c26d0(void *pAttacker, void *pInflictor, float flDamage, int bitsDamageType, int a, int b, int c);	// constructor (stub 0x10009656): returns this
};
