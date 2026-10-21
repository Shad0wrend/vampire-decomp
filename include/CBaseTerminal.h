// CBaseTerminal: computer terminal entity. Only slots that decompiled code needs are declared, as plain members.
#pragma once

class CBaseTerminal
{
public:
	void vfunc71();
	char sub_102180c0(int a);	// slot 32 "CBaseTerminal::CanUse"-like: false unless the byte at +0x80c is set and a (an entity with an edict at +0xa8) is given; when the user handle at +0x8c resolves to a different entity also false, else sub_10218710(a) != 0
	CBaseTerminal *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
	char sub_10218710(int a);	// called through the stub at 0x10007dba
	void vfunc42(void *pPlayer);	// slot 42 "CBaseTerminal::StopUse"-like: closes the terminal screen for the user (sub_10218820(2, 0)), re-enables the player's input (sub_1015ef60, sub_101815b0(1) / (8)), clears the in-use byte at +0x80d, tells the global at 0x1070b248 about the terminal's edict index, then the CBaseVampireSkillEntity version
};
