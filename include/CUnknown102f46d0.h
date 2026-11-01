// CUnknown102f46d0: array of pointers to objects (count at +0, data at +4); real name not yet known.
#pragma once

#include "Vector.h"

class CUnknown102f46d0Elem
{
public:
	Vector sub_102fb0d0(int a);	// called through the stub at 0x1000d99a

	char m_pad0000[8];
	Vector m_vOrigin;	// 0x0008
	float m_fHeight[22];	// 0x0014: per-index heights (type 2)
	float m_fAngle;	// 0x006c: yaw in degrees
	int m_nType;	// 0x0070
	unsigned int m_nFlags;	// 0x0074
};

class CUnknown102f46d0
{
public:
	int m_count;	// 0x0000
	CUnknown102f46d0Elem **m_pData;	// 0x0004

	Vector sub_102f46d0(void *pObj, int index);	// the vector of element [index] for the given object (its dword at +0x156c); the default vector (global at 0x1070d1b0) without data, object or when the index is out of range
};
