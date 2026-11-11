// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100ea7b0 size=0x660
unsigned int sub_100eb0a0(unsigned int x);
unsigned int sub_100eb0c0(unsigned int x);

struct CUnknown100eb000
{
	char b0;
	char b1;
	int v;
	CUnknown100eb000() {}
	__forceinline CUnknown100eb000(int x) { v = sub_100eb060(sub_100eb0a0(x)); }
	__forceinline CUnknown100eb000 &operator=(const CUnknown100eb000 &o) { v = o.v; b1 = o.b1; b0 = o.b0; return *this; }
	__forceinline int Get() const { unsigned int x = v; return sub_100eb0c0(((((x & 0x98b2235) ^ 0xc80e68e3) + 0x4e242ee1) & 0xf674ddca) ^ x ^ 0x10ade2d8); }
	void sub_100eb000(CUnknown100eb000 *p);
	unsigned int sub_100eb060(unsigned int x);
};
struct CUnknown100eb030 { char b0; char b1; int v; void sub_100eb030(const CUnknown100eb000 *p); };

CUnknown100eb000 * __stdcall sub_100ea7b0(CUnknown100eb000 *out, int *op, CUnknown100eb000 *pa, CUnknown100eb000 *pb)
{
	CUnknown100eb000 res(0);
	switch (*op) {
	case 0x707dca01: res = CUnknown100eb000(pa->Get() + pb->Get()); break;
	case 0x707dca02: res = CUnknown100eb000(pa->Get() - pb->Get()); break;
	case 0x707dca03: res = CUnknown100eb000(pa->Get() * pb->Get()); break;
	case 0x707dca04: res = CUnknown100eb000(pa->Get() / pb->Get()); break;
	case 0x707dca05: res = CUnknown100eb000(pa->Get() % pb->Get()); break;
	case 0x707dca06: res = CUnknown100eb000(pa->Get() << pb->Get()); break;
	case 0x707dca07: res = CUnknown100eb000(pa->Get() >> pb->Get()); break;
	case 0x707dca08: res = CUnknown100eb000(pa->Get() & pb->Get()); break;
	case 0x707dca09: res = CUnknown100eb000(pa->Get() | pb->Get()); break;
	case 0x707dca0a: res = CUnknown100eb000(pa->Get() ^ pb->Get()); break;
	default: ((CUnknown100eb030 *)&res)->sub_100eb030(&CUnknown100eb000(pb->Get())); break;
	}
	out->sub_100eb000(&res);
	return out;
}
// END FUNCTION
