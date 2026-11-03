// AttachPos_t: the 0x2c-byte attachment description embedded four times in a camera shot record
// (CCameraShot_t: +0x24 "Start", +0x50 the unnamed one, +0x7c "Point1", +0xa8 "Point2") and filled by
// sub_10071e00. The default constructor the shot table calls (CUnknown100727a0::sub_100727a0) is a no-op
// returning `this`, so the struct has no members of its own.
#pragma once

#include "Vector.h"

class CKeyValuesX;

struct AttachPos_t
{
	unsigned int m_nFlags;		// 0x00: "Position" target kind bits 0/1/2/3 (1 Player, 2 DialogTarget, 4 other, 8 Named, 0x80000 GrappleVictim, 0x100000 GrappleAttacker) | "AttachPos" bits (0x10 default, 0x20 Center, 0x40 EyePosition, 0x80 Bottom, 0x100 unnamed key, 0x200 Bone:<name>, 0x400 Attachment:<name>, 0x800 AbsMin, 0x1000 AbsMax) | "AttachType" bits (0x2000 default, 0x4000 Follow, 0x8000 FollowNoAngles, 0x10000 FollowEntAngles) | 0x20000 OffsetOrigin non-zero | 0x40000 OffsetAngles non-zero
	char m_szName[0x10];		// 0x04: the bone / attachment name after "Bone:" / "Attachment:" (Q_trimspace into 16 bytes)
	Vector m_vecOffsetOrigin;	// 0x14: "OffsetOrigin" parsed by sub_10071cd0 (default "[0, 0, 0]")
	Vector m_vecOffsetAngles;	// 0x20: "OffsetAngles" parsed by sub_10071cd0 (default "[0, 0, 0]")
};

void __stdcall sub_10071e00(CKeyValuesX *pKV, AttachPos_t *pOut);	// parse one attachment block: GetString("Position","None"), GetString("AttachPos","None"), GetString("AttachType","None"), GetString("OffsetOrigin","[0, 0, 0]"), GetString("OffsetAngles","[0, 0, 0]"); __stdcall (the game's ret 8)
