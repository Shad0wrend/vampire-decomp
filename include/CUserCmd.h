// CUserCmd (RTTI .?AVCUserCmd@@), 0x60 bytes, vtable 0x10462854 with one slot (the deleting destructor, 0x1000e9ee).
// Layout from the copy 0x1011ccc0 (CUserCmd::operator= + the delta read from a bf_read) and the reset 0x1011cc10.
// The constructor stores the vptr and calls the out-of-line reset; the destructor of a stack array is just the vptr
// store again (the loops at the end of 0x1011c8c0).
#pragma once

#include "Vector.h"

class CUserCmd
{
public:
	CUserCmd() { sub_1011cc10(); }
	virtual ~CUserCmd() {}

	void sub_1011cc10();	// 0x1011cc10 (SInit::sub_1011cc10 in the matched source): zeroes the members, the two bytes at +0x44 / +0x45 = 1

	int command_number;	// 0x04: copied +1 when the delta bit is clear, else read as 32 bits
	float m_fl08;	// 0x08: read as 8 bits
	int msec;	// 0x0c: 8 bits, clamped to 0..0xfa
	float frametime;	// 0x10: msec * 0.001f clamped to 0..0.25f
	Vector viewangles;	// 0x14: x / y read as 16 bit floats, z as 8 bit (0x14 / 0x18 / 0x1c)
	float forwardmove;	// 0x20: 16 bit signed
	float sidemove;	// 0x24
	float upmove;	// 0x28
	unsigned char m_b2c;	// 0x2c: 8 bits
	int buttons;	// 0x30: 32 bits
	int m_n34;	// 0x34
	unsigned char impulse;	// 0x38: 8 bits
	int m_n3c;	// 0x3c
	int m_n40;	// 0x40
	unsigned char m_b44;	// 0x44: a flag bit (1 after reset)
	unsigned char m_b45;	// 0x45: a flag bit (1 after reset)
	unsigned char m_b46;	// 0x46: 8 bits (the last field of the delta)
	unsigned char m_b47;	// 0x47: 8 bits
	int m_n48;	// 0x48
	int m_n4c;	// 0x4c: 5 bits
	Vector m_vec50;	// 0x50: bf_read::sub_100bea10 (read vector)
	unsigned char m_b5c;	// 0x5c
};
