// CSprayCan: declared by pcdecomp transplant for 0x10184420 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"

#include "Vector.h"
#include "QAngle.h"
#include "AITrace.h"

class CSprayCan : public CPointEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void sub_101714a0(class CBasePlayer *pOwner);	// the spray can's start (called by CBasePlayer::vfunc450 with the player): moves to the player's centre raised by a constant, takes the player's view angles (+0x206c) and the player as owner, clears +0x450, thinks again 0.1 seconds later and plays "player/sprayer.wav" to the players that can hear it
public:
	int vfunc117();
	void vfunc134();	// slot 134 (think, 0x101716b0): spray update, see the release note of that address

	float m_flSprayCount450;	// 0x450: the spray counter incremented by vfunc134
};

// Callees of CSprayCan::vfunc134 (free functions, game addresses).
void __cdecl sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);	// 0x10139610 AngleVectors (saved symbol ?sub_10139610@@YAXABVQAngle@@PAVVector@@11@Z)
void __cdecl sub_101cd940(char *pEntity);	// 0x101cd940 entity removal tail (?sub_101cd940@@YAXPAD@Z)
void __cdecl sub_101d0160(void *pTrace, int b, int index, char bRaw);	// 0x101d0160 decal placement (trace: fraction +0x2c, end position +0xc, entity +0x4c)
