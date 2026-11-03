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
	char m_pad4[0x3ac];
	float m_f3b0;
	float sub_101e90f0(CBaseCombatCharacter *pChar);	// base delay of the vampire heal over time, modified by the character's trait list (stub 0x1000951b)

	float sub_101e7d90();	// returns the float at +0x3c8 (stub 0x10006f0f)
	float sub_101e7d70();	// a tuning delay as a float (stub 0x10007e0f): the time between the random view punches of the player
	float sub_101e7dd0(float a);	// stub 0x100056dc (0x101e7dd0): a delay derived from a and the block at +0x3e0 / +0x3e4
	float sub_101e8820(CBaseCombatCharacter *pChar);	// the character's stat 0x1a divided by the (truncated) tuning value of its stat 1 level minus one (stub 0x10004c91)
	float sub_101e8640(void *pChar);	// a float derived from the character's stats (stub 0x1000b3d9)
	float sub_101e9020();	// a tuning value as a float (stub 0x10004615)
	float *sub_101e8da0();	// the address of the block at +0x2bc (stub 0x10008e7c): floats at +0x64 / +0x68 are the base and the per-step delay
	CSkillOutcome sub_101e7ea0(void *pPlayer, void *pSkill, char bFlag);	// the outcome of a vampire skill test of kind 1 for the player (stub 0x10010b9f, ret 0x10)
	CSkillOutcome sub_101e8100(void *pPlayer, void *pSkill, char bFlag);	// like sub_101e7ea0, for the skill kind 2 (stub 0x10005ac4)
	int sub_101e8430(CBaseCombatCharacter *pChar, int a, unsigned char b);	// the number of dice for a roll of the character (stub 0x1000db7a)
	int sub_101e8ec0(CBaseCombatCharacter *pChar);	// the difficulty of a roll of the character (stub 0x1000b2e4)
	float sub_101e8a90();	// a zombie tuning distance (stub 0x100145f6): the lower bound of the range in which the zombie attacks
	float sub_101e8ab0();	// a zombie tuning distance (stub 0x10014bf0): the upper bound of that range
	int sub_101e8b30();	// a zombie tuning percentage (stub 0x100136e7): the chance the zombie lunges (rolled against 0..99)
	float sub_101e8c10();	// a zombie tuning delay (stub 0x1000f85d): seconds until the zombie may lunge again
	int sub_101e9170(CBaseCombatCharacter *pChar, int a, int b);	// the cost scaled by the character's stat 0x20 (stub 0x1000b55a), see CUnknown101e9170
	int sub_101e9040();	// the dword at +0x398 (stub 0x100011a4): the interval of the occult regeneration
	int sub_101e9060();	// the dword after it in the tuning block (stub 0x1001095b): the maximum regeneration level
	int sub_101e9000();	// a tuning value as an int (stub 0x1000d008): scales the damage-to-time ratio in CAI_BaseNPC::sub_10182a90
};
