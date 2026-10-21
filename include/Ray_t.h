// Ray_t: the engine's trace ray (0x38 bytes): start, delta, extents, start offset, then the ray / swept flags.
#pragma once

struct Ray_t
{
	float m_Start[3];
	float m_Delta[3];
	float m_Extents[3];
	float m_StartOffset[3];
	bool m_IsRay;	// 0x30
	bool m_IsSwept;	// 0x31
	char m_b32;
	char m_b33;
	int m_n34;

	void sub_1004f7a0(const float *pStart, const float *pEnd);	// Ray_t::Init(start, end): delta = end - start, swept when the delta is not zero, the extents zeroed, IsRay set
};
