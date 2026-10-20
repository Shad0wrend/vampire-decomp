// melee_dice_roll_result: result of one melee dice roll (not a class of the game's RTTI; named after the
// scope-trace string "melee_dice_roll_result::AddBonus"). Only what decompiled code needs.
#pragma once

struct melee_dice_roll_result
{
	int m_field0;
	int m_field4;
	int m_field8;
	int m_nBonus;	// 0x0c: running total

	void sub_10349710(int a, int nRolls, int *pDice);	// "melee_dice_roll_result::AddBonus": scope trace, when the debug object (global 0x1074f04c) is not quiet but has output enabled prints "Rolling %d Bonus Soak Rolls", then adds sub_10011b9e(a, pDice[0], pDice[4], nRolls) to the total
};
