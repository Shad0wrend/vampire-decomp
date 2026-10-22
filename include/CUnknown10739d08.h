// CUnknown10739d08: the global object at 0x10739d08 (a tuning / convar-like block); only the float getter at +0x3c8 is
// known, and slot 5 (a float lookup keyed by a stat level).
#pragma once

class CBaseCombatCharacter;

struct CSkillOutcome	// a one dword result the skill tests return through a hidden pointer (the class has a constructor)
{
	int m_nOutcome;
	CSkillOutcome() : m_nOutcome(0) {}
};

class CUnknown10739d08
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual float vfunc5(int level);	// the tuning value for a stat level

	float sub_101e7d90();	// returns the float at +0x3c8 (stub 0x10006f0f)
	float sub_101e8820(CBaseCombatCharacter *pChar);	// the character's stat 0x1a divided by the (truncated) tuning value of its stat 1 level minus one (stub 0x10004c91)
	float sub_101e8640(void *pChar);	// a float derived from the character's stats (stub 0x1000b3d9)
	float sub_101e9020();	// a tuning value as a float (stub 0x10004615)
	float *sub_101e8da0();	// the address of the block at +0x2bc (stub 0x10008e7c): floats at +0x64 / +0x68 are the base and the per-step delay
	CSkillOutcome sub_101e7ea0(void *pPlayer, void *pSkill, char bFlag);	// the outcome of a vampire skill test of kind 1 for the player (stub 0x10010b9f, ret 0x10)
	CSkillOutcome sub_101e8100(void *pPlayer, void *pSkill, char bFlag);	// like sub_101e7ea0, for the skill kind 2 (stub 0x10005ac4)
	int sub_101e8430(CBaseCombatCharacter *pChar, int a, unsigned char b);	// the number of dice for a roll of the character (stub 0x1000db7a)
	int sub_101e8ec0(CBaseCombatCharacter *pChar);	// the difficulty of a roll of the character (stub 0x1000b2e4)
};
