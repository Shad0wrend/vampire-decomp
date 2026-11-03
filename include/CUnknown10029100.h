// CUnknown10029100: a small 0x10 byte physics parameters block (frame = 1.0f at +0, two zero dwords, byte 1 at +0xc);
// its initializer is called on a stack object by CPhysSlideConstraint::vfunc241 and CPhysMotor::vfunc113.
#pragma once

class CUnknown10029100
{
public:
	void sub_10029100();	// initializer (ctor-like)

	float m_fl0000;	// 0x00: 1.0f
	int m_n0004;	// 0x04: 0
	int m_n0008;	// 0x08: 0
	char m_b000c;	// 0x0c: 1
};
