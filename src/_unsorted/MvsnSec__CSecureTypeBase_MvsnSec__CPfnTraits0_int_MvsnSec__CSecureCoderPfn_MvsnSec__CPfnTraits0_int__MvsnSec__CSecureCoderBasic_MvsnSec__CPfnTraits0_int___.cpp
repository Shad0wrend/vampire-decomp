// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10390060 size=0x660
struct SecTmp {
	unsigned char a; unsigned char b; unsigned v;
	unsigned sub_103908c0(unsigned);
};
unsigned sub_10390900(unsigned);
int sub_10390920(unsigned);
struct CUnknown10390860 { void sub_10390860(SecTmp *); };
struct CUnknown10390890 { void sub_10390890(SecTmp *); };
struct SecOut : CUnknown10390860 {};
static inline int Dec(unsigned x) { return sub_10390920((((x & 0x710935) ^ 0x148739) + 0x4094ab & 0x18ef6ca) ^ x ^ 0x412a96ec); }
#define CASE(n, expr) \
	case 0x707dca01 + n: { SecTmp &tt = t[n]; unsigned res = tt.sub_103908c0(sub_10390900(expr)); unsigned char cb = tt.b; r.v = res; unsigned char ca = tt.a; r.b = cb; r.a = ca; break; }
// TARGET: sub_10390060
SecOut *__stdcall sub_10390060(SecOut *out, unsigned *op, SecTmp *pa, SecTmp *pb)
{
	SecTmp r;
	SecTmp t[11];
	r.v = r.sub_103908c0(sub_10390900(0));
	switch (*op) {
	CASE(0, Dec(pa->v) + Dec(pb->v))
	CASE(1, Dec(pa->v) - Dec(pb->v))
	CASE(2, Dec(pa->v) * Dec(pb->v))
	CASE(3, Dec(pa->v) / Dec(pb->v))
	CASE(4, Dec(pa->v) % Dec(pb->v))
	CASE(5, Dec(pa->v) << Dec(pb->v))
	CASE(6, Dec(pa->v) >> Dec(pb->v))
	CASE(7, (unsigned)Dec(pa->v) & (unsigned)Dec(pb->v))
	CASE(8, (unsigned)Dec(pa->v) | (unsigned)Dec(pb->v))
	CASE(9, (unsigned)Dec(pa->v) ^ (unsigned)Dec(pb->v))
	default: { t[10].v = t[10].sub_103908c0(sub_10390900(Dec(pb->v))); ((CUnknown10390890 *)&r)->sub_10390890(&t[10]); }
	}
	((CUnknown10390860 *)out)->sub_10390860(&r);
	return out;
}
// END FUNCTION
