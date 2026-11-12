// MvsnSec::CSecureTypeBase<CPfnTraits0, int, ...>: the scrambled value type of CNPC_VManBat's mode (+0x6668).
#pragma once

namespace MvsnSec {

template <class Traits, class T> struct CSecureCoderPfn;
template <class Traits, class T> struct CSecureCoderBasic;
template <class Traits, class T, class Coder, class Basic> struct CSecureTypeBase;

struct CPfnTraits0 {};
}

unsigned int sub_10390900(int x);	// the Traits0 encoder (cdecl, stub 0x10015be0 -> 0x10390900)

namespace MvsnSec {

// The Traits0 value record: two bytes and the scrambled value (+0x04); CNPC_VManBat holds one at +0x666c.
struct CSecureValue0
{
	char m_b0;
	char m_b1;
	unsigned int m_Value;
	unsigned int sub_103908c0(unsigned int x);	// the second scramble (0x103908c0, ecx unused)
	void sub_10390890(const CSecureValue0 *p);	// copy (0x10390890)
};

struct CSecureValueInit0 : CSecureValue0
{
	CSecureValueInit0() { m_Value = 0; }
};

// vftable 0x104bc684, slot 0 = 0x10390060
template <>
struct CSecureTypeBase<CPfnTraits0, int, CSecureCoderPfn<CPfnTraits0, int>, CSecureCoderBasic<CPfnTraits0, int> >
{
	virtual void vfunc0();
	CSecureValueInit0 m_Data;	// 0x04

	void Init(int v)
	{
		CSecureValue0 r;
		r.m_Value = r.sub_103908c0(::sub_10390900(v));
		m_Data.sub_10390890(&r);
	}
	void Set(int v);
};

typedef CSecureTypeBase<CPfnTraits0, int, CSecureCoderPfn<CPfnTraits0, int>, CSecureCoderBasic<CPfnTraits0, int> > CSecureInt0;

inline void CSecureInt0::Set(int v)
{
	CSecureInt0 tmp;
	tmp.Init(v);
	m_Data.sub_10390890(&tmp.m_Data);
}

}
