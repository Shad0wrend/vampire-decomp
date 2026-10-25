// CUnknown10268170: stand-in for the entity class that owns the shot spread helper sub_10268170 (AI_BaseNPC unit);
// real name not yet known. Only the object at +0xa8 (the player-like owner object) is declared.
#pragma once

#include "Vector.h"

class CUnknown10160680;

class CUnknown10268170
{
public:
	char m_pad0000[0xa8];
	CUnknown10160680 *m_pPlayer;	// 0xa8

	Vector sub_10268170(const Vector &vecSpread, const Vector &vecRight, const Vector &vecUp);	// the bullet spread offset: x, y from a rejection loop of two summed RandomFloat(-0.5, 0.5) pairs inside the unit disc, scaled by the spread (both components replaced by the owner's spread value when there is an owner at +0xa8) and applied along the right and up vectors; returns a vector by value
};
