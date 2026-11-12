// CUnknown103065d0: ring buffer of 50 debug line records (0x28 bytes each, allocated lazily), next free index in the global at 0x1093414c; real name not yet known.
#pragma once

struct CUnknown103065d0Vec
{
	int x, y, z;
	CUnknown103065d0Vec &operator=(const CUnknown103065d0Vec &o)
	{
		x = o.x;
		y = o.y;
		z = o.z;
		return *this;
	}
};

struct CUnknown103065d0Line
{
	CUnknown103065d0Vec m_start;	// 0x00
	CUnknown103065d0Vec m_end;	// 0x0c
	int m_a;	// 0x18
	int m_b;	// 0x1c
	int m_c;	// 0x20
	char m_flag;	// 0x24
	char m_active;	// 0x25
	char m_pad[2];
};

class CUnknown103065d0
{
public:
	CUnknown103065d0Line **m_pLines;	// 0x00: array of 50 record pointers

	void sub_103065d0(const CUnknown103065d0Vec *pStart, const CUnknown103065d0Vec *pEnd, int a, int b, int c, char flag);
	void sub_10306280(const CUnknown103065d0Vec *pA, const CUnknown103065d0Vec *pB, const CUnknown103065d0Vec *pC, const int *t1, const int *t2, unsigned int color);	// stores a new line record at the current ring index (allocating the buffer on first use), marks it active and advances the index
};
