// TestBit: the entity flag test as the game's code compiles it. A constant mask or shift would be folded by VC6 into
// `test ah, N`; a bit number passed through an inline function gives the game's `shr eax, N ; test al, 1`.
#pragma once

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}
