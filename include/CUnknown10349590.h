// CUnknown10349590: "melee_dice_roll_result" record (dice counts); real class name not yet known.
#pragma once

class CUnknown10349590
{
public:
	int m_pad0000;
	int m_nTotal;	// 0x0004
	int m_nB;	// 0x0008
	int m_nA;	// 0x000c

	bool sub_10349590();	// "melee_dice_roll_result::AttackHit": (float)(m_nTotal - m_nA - m_nB) > 0
};
