// CUnk102ee940: the class the tool gave to 0x102ee940 — the out-of-line 2D length of a difference vector
// (it reads only the first two floats). Built as a plain 2-float helper so the call can be reproduced
// with `this` in ecx; the saved symbol is ?sub_102ee940@CUnk102ee940@@QAEMXZ.
#pragma once

struct CUnk102ee940
{
	float x;	// 0x00
	float y;	// 0x04

	float sub_102ee940();	// 0x102ee940 (thiscall, no args, result in st0): sqrt(x*x + y*y)
};
