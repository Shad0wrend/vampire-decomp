// CScriptedSentence: declared by pcdecomp transplant for 0x101ab160 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CScriptedSentence
{
public:
	CScriptedSentence *vfunc5(unsigned int flags);
	void vfunc103();	// slot 103 "CScriptedSentence::Spawn": SetSolid(SOLID_NONE) scope trace, byte at +0x470 = 1, without a name schedules the think function 0x1000880a one second ahead, maps the delay type at +0x468 (1 / 2 / 3 / other) to the volume-like value at +0x464 (0x46 / 0x4b / 0 / 0x3c), clears +0x468, resets a non-positive float at +0x46c to 1.0f, then CBaseEntity::sub_100b3b00()
};
