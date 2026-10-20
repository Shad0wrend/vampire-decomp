// CBaseAnimatingOverlay: declared by pcdecomp transplant for 0x10098a60 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once

struct CAnimationLayer	// 0x30 byte record
{
	int m_n00;
	int m_nSequence;	// 0x04
	int m_n08;
	float m_f0c;
	float m_f10;
	float m_f14;
	float m_f18;
	float m_f1c;
	int m_n20;
	char m_b24;
	int m_n28;
	char m_pad2c[4];
};

class CBaseAnimatingOverlay
{
public:
	CBaseAnimatingOverlay *vfunc5(unsigned int flags);
	void sub_10004c3c();
	void vfunc268(int index, int a, int sequence, char flag);	// slot 268: initialises the 0x30 byte animation overlay record [index] (array at +0x738) with the sequence, the weights and fade times; clears the fade weights again when the sequence's flag bit 1 is set
	char *sub_1008d990(int sequence);	// CBaseAnimating::sub_1008d990 (stub 0x1000b4f6): the sequence description, 0 when invalid
	void vfunc31(int a);	// slot 31 "CBaseAnimatingOverlay::DumpEntity"-like: 24 times the no-flinch byte (+0x730) and the record of the overlay layer (flags, finished, sequence, cycle, rate, weight, activity, auto kill) through the Dump helpers, then CBaseAnimating::vfunc31(a)
	void sub_1008b530(int a);	// CBaseAnimating::vfunc31 (stub 0x10007144), called directly

	char m_pad0000[0x738];
	CAnimationLayer m_Layers[15];	// 0x738
};
