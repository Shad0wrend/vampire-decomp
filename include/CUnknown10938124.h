// CUnknown10938124.h: a pair of an int and a float; the globals 0x10938124 {1, 12.5} and 0x1093812c {2, 0.555} are
// built by its constructor. Nothing else in the sources names it.
#pragma once
#ifdef PCD_INITIALIZERS
struct CUnknown10938124
{
	CUnknown10938124(int n, float fl) { m_n = n; m_fl = fl; }
	int m_n;
	float m_fl;
};
#endif
