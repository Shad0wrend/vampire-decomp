// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103835f0 size=0x660
#include "MvsnSec.h"
unsigned int sub_10383e90(unsigned int x);
unsigned int sub_10383eb0(unsigned int x);

struct CSecVal4
{
	char m_b0;
	char m_b1;
	int m_Value;

	int sub_10383e50(unsigned int x);
	__forceinline CSecVal4() {}
	__forceinline CSecVal4(int v) { m_Value = sub_10383e50(sub_10383e90(v)); }
	__forceinline int Get() const { unsigned int v = m_Value; return sub_10383eb0((((v & 0x3f3c1135) ^ 0x544222df) + 0x4ba5398d & 0xc0c3eeca) ^ v ^ 0x151a77f8); }
	__forceinline void Copy(const CSecVal4 &o) { m_Value = o.m_Value; m_b1 = o.m_b1; m_b0 = o.m_b0; }	// the inline form of 0x101841f0
};

struct CSecAssign4View { void sub_10383e20(const CSecVal4 *p); };
struct CSecCopy4View { void sub_10383df0(const CSecVal4 *p); };

struct CSecureInt4View
{
	MvsnSec::CSecureResult *sub_103835f0(MvsnSec::CSecureResult *pOut, int *pOp, CSecureInt4View *pA, CSecureInt4View *pB);
};

// TARGET: CSecureInt4View::sub_103835f0
MvsnSec::CSecureResult *CSecureInt4View::sub_103835f0(MvsnSec::CSecureResult *pOut, int *pOp, CSecureInt4View *pA, CSecureInt4View *pB)
{
	CSecVal4 res(0);
	CSecVal4 *a = (CSecVal4 *)pA;
	CSecVal4 *b = (CSecVal4 *)pB;
	switch (*pOp) {
	case 0x707dca01: res.Copy(CSecVal4(a->Get() + b->Get())); break;
	case 0x707dca02: res.Copy(CSecVal4(a->Get() - b->Get())); break;
	case 0x707dca03: res.Copy(CSecVal4(a->Get() * b->Get())); break;
	case 0x707dca04: res.Copy(CSecVal4(a->Get() / b->Get())); break;
	case 0x707dca05: res.Copy(CSecVal4(a->Get() % b->Get())); break;
	case 0x707dca06: res.Copy(CSecVal4(a->Get() << b->Get())); break;
	case 0x707dca07: res.Copy(CSecVal4(a->Get() >> b->Get())); break;
	case 0x707dca08: res.Copy(CSecVal4((unsigned int)a->Get() & (unsigned int)b->Get())); break;
	case 0x707dca09: res.Copy(CSecVal4((unsigned int)a->Get() | (unsigned int)b->Get())); break;
	case 0x707dca0a: res.Copy(CSecVal4((unsigned int)a->Get() ^ (unsigned int)b->Get())); break;
	default:
		((CSecAssign4View *)&res)->sub_10383e20(&CSecVal4(b->Get()));
		break;
	}
	((CSecCopy4View *)pOut)->sub_10383df0(&res);
	return pOut;
}
// END FUNCTION
