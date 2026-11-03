// Ray_t: the engine's trace ray (0x38 bytes): start, delta, extents, start offset, then the ray / swept flags.
#pragma once

#include "Vector.h"

extern float g_104454c4;	// the float 0.0f the game shares in its constant pool

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

	void Init(const Vector &start, const Vector &end)	// Ray_t::Init(start, end) as the game inlines it
	{
		m_Delta[0] = end.x - start.x;
		m_Delta[1] = end.y - start.y;
		m_Delta[2] = end.z - start.z;
		m_IsSwept = (m_Delta[0] * m_Delta[0] + m_Delta[1] * m_Delta[1] + m_Delta[2] * m_Delta[2]) != 0;
		m_StartOffset[0] = m_StartOffset[1] = m_StartOffset[2] = 0.0f;
		m_IsRay = true;
		m_Extents[0] = m_Extents[1] = m_Extents[2] = 0.0f;
		m_Start[0] = start.x;
		m_Start[1] = start.y;
		m_Start[2] = start.z;
		m_b32 = 0;
		m_n34 = 0;
		m_b33 = 0;
	}

	void sub_1004f7a0(const float *pStart, const float *pEnd);	// Ray_t::Init(start, end): delta = end - start, swept when the delta is not zero, the extents zeroed, IsRay set
	void sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b);	// Ray_t::Init(start, end, mins, maxs) (stub 0x1000c725), thiscall with six stack arguments (the last two are bytes)
};
