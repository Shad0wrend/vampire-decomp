// CUnknown10290040: an NPC class (real name not yet known) that follows a target entity (handle at +0x5d24) and turns its
// motor (+0x5d44) toward the direction the target answers with.
#pragma once

#include "CAI_Motor.h"

class CBaseEntity;

class CUnknown10290040
{
public:
	char m_pad0000[0x5d24];
	unsigned int m_hTarget5d24;	// 0x5d24: entity handle of the target
	char m_pad5d28[0x5d30 - 0x5d28];
	char m_bFlag5d30;	// 0x5d30
	char m_pad5d31[0x5d44 - 0x5d31];
	CAI_Motor *m_pMotor5d44;	// 0x5d44
	char m_pad5d48[0x644c - 0x5d48];
	int m_nState644c;	// 0x644c: 2 once the turn is under way
	float m_flTime6450;	// 0x6450

	bool sub_10290040();	// asks the target (slot 246) for the direction to turn to, points the motor's ideal yaw there and, when sub_10278c80 holds, arms the state (2) with the next time (1 s ahead with the flag at +0x5d30, else 5 s ahead when sub_10298840 accepts the target); false when the target is gone or has no answer
	char sub_10278c80();	// stub 0x10010352
	char sub_10298840(CBaseEntity *pTarget);	// stub 0x1000dd73
};
