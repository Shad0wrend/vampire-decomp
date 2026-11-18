// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101839a0 size=0x660
#include "MvsnSec.h"
#include "MvsnSec1.h"
unsigned int sub_10184260(unsigned int x);
unsigned int sub_10184280(unsigned int x);

struct CSecVal1
{
	char m_b0;
	char m_b1;
	int m_Value;

	int sub_10184220(unsigned int x);
	__forceinline CSecVal1() {}
	__forceinline CSecVal1(int v) { m_Value = sub_10184220(sub_10184260(v)); }
	__forceinline int Get() const { unsigned int v = m_Value; return sub_10184280((((v & 0x8a66e35) ^ 0x793f90) + 0x8b10412 & 0x175991ca) ^ v ^ 0x783682a9); }
	__forceinline void Copy(const CSecVal1 &o) { m_Value = o.m_Value; m_b1 = o.m_b1; m_b0 = o.m_b0; }	// the inline form of 0x101841f0
};

struct CUnknown101841c0 { void sub_101841c0(const CSecVal1 *p); };

namespace MvsnSec {

CSecureResult *CSecureInt1::vfunc0(CSecureResult *pOut, int *pOp, CSecureInt1 *pA, CSecureInt1 *pB)
{
	CSecVal1 res(0);
	CSecVal1 *a = (CSecVal1 *)pA;
	CSecVal1 *b = (CSecVal1 *)pB;
	switch (*pOp) {
	case 0x707dca01: res.Copy(CSecVal1(a->Get() + b->Get())); break;
	case 0x707dca02: res.Copy(CSecVal1(a->Get() - b->Get())); break;
	case 0x707dca03: res.Copy(CSecVal1(a->Get() * b->Get())); break;
	case 0x707dca04: res.Copy(CSecVal1(a->Get() / b->Get())); break;
	case 0x707dca05: res.Copy(CSecVal1(a->Get() % b->Get())); break;
	case 0x707dca06: res.Copy(CSecVal1(a->Get() << b->Get())); break;
	case 0x707dca07: res.Copy(CSecVal1(a->Get() >> b->Get())); break;
	case 0x707dca08: res.Copy(CSecVal1((unsigned int)a->Get() & (unsigned int)b->Get())); break;
	case 0x707dca09: res.Copy(CSecVal1((unsigned int)a->Get() | (unsigned int)b->Get())); break;
	case 0x707dca0a: res.Copy(CSecVal1((unsigned int)a->Get() ^ (unsigned int)b->Get())); break;
	default:
		((CUnknown101841f0 *)&res)->sub_101841f0((CSecureCodedLocal *)&CSecVal1(b->Get()));
		break;
	}
	((CUnknown101841c0 *)pOut)->sub_101841c0(&res);
	return pOut;
}

}
// END FUNCTION
