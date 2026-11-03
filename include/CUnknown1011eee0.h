// CUnknown1011eee0: the "is dead" test the movement code calls with its own this (a CGameMovement*).
// It reads the moved entity ([this+8]) and answers whether its health (+0x210) is at most 0.
#pragma once

class CUnknown1011eee0
{
public:
	char sub_1011eee0();	// 0x1011eee0 (matched): true when [this+8]->+0x210 (health) <= 0
};
