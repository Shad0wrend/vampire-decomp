// CAI_BaseHumanoid: humanoid NPC base. Only the members and slots that decompiled code needs are declared (slots as plain members).
#pragma once

class CAI_BaseHumanoid
{
public:
	char pad0[0xfec];
	int m_state0fec;
	char pad1[0x5f94 - 0xff0];
	int m_unk5f94;

	bool vfunc586();
	float vfunc516();
};
