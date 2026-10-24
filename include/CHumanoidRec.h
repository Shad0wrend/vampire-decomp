// CHumanoidRec: the 0x24 byte record of the vector at +0x5f88 of CAI_BaseHumanoid (a position that is remembered
// for a while: type, position, start time, end time, rate, value). Its constructor (0x10260980) sets +4 to -1.
#pragma once

#include "Vector.h"

struct CHumanoidRec
{
	int m_n0;	// 0x00
	int m_n4;	// 0x04: -1 after construction
	Vector m_vecPos;	// 0x08
	float m_flStart;	// 0x14
	float m_flEnd;	// 0x18
	float m_flRate;	// 0x1c
	float m_flValue;	// 0x20

	CHumanoidRec();	// 0x10260980
	CHumanoidRec *sub_10260980();	// the same function called directly (Construct without a placement new)
};

// The vector's Construct for this record: the game's insert does `test ecx; je; call the constructor`.
inline CHumanoidRec *Construct(CHumanoidRec *pMemory)
{
	if (pMemory)
		pMemory->sub_10260980();
	return pMemory;
}
