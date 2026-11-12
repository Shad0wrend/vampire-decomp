// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102c5a90 size=0x660
extern "C" int sub_102c6330(int x);
extern "C" int sub_102c6350(int x);

struct CSecVal;
struct CSecValCopy
{
	void sub_102c6290(const CSecVal *pOther);	// copy constructor (out of line)
	void sub_102c62c0(const CSecVal *pOther);	// assignment (out of line)
};
struct CSecVal
{
	char m_a;
	char m_b;
	int m_v;
	unsigned int sub_102c62f0(unsigned int x);	// encode (thiscall, ignores this)
	__forceinline CSecVal(int x) { m_v = sub_102c62f0(sub_102c6330(x)); }
	CSecVal(const CSecVal &o) { ((CSecValCopy *)this)->sub_102c6290(&o); }
	__forceinline CSecVal &operator=(const CSecVal &o) { m_v = o.m_v; m_b = o.m_b; m_a = o.m_a; return *this; }
	__forceinline int Get() const
	{
		unsigned int v = m_v;
		return sub_102c6350(((((v & 0x68d8635) ^ 0xce9f66a) + 0xffa91d8) & 0x197279ca) ^ v ^ 0xa641cacd);
	}
};

// TARGET: sub_102c5a90
CSecVal __stdcall sub_102c5a90(const int &op, const CSecVal &a, const CSecVal &b)
{
	CSecVal r(0);
	switch (op)
	{
	case 0x707dca01: r = CSecVal(a.Get() + b.Get()); break;
	case 0x707dca02: r = CSecVal(a.Get() - b.Get()); break;
	case 0x707dca03: r = CSecVal(a.Get() * b.Get()); break;
	case 0x707dca04: r = CSecVal(a.Get() / b.Get()); break;
	case 0x707dca05: r = CSecVal(a.Get() % b.Get()); break;
	case 0x707dca06: r = CSecVal(a.Get() << b.Get()); break;
	case 0x707dca07: r = CSecVal(a.Get() >> b.Get()); break;
	case 0x707dca08: r = CSecVal(a.Get() & b.Get()); break;
	case 0x707dca09: r = CSecVal(a.Get() | b.Get()); break;
	case 0x707dca0a: r = CSecVal(a.Get() ^ b.Get()); break;
	default: ((CSecValCopy *)&r)->sub_102c62c0(&CSecVal(b.Get())); break;
	}
	return r;
}
// END FUNCTION
