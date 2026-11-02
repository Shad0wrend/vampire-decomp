// MvsnSec: the game's scrambled ("secure") value types. A CSecureTypeBase holds one scrambled value after its vptr;
// the three-letter coders are only tags here. The only instance seen is <CPfnTraits3, int, CSecureCoderPfn, CSecureCoderBasic>
// (vftable 0x1045467c, one slot), used for the clan / discipline numbers of CDialog (0x100e65d0 compares them).
#pragma once

unsigned int sub_1042ff30(unsigned int x);	// the first scrambling step, cdecl (matched)

namespace MvsnSec {

struct CPfnTraits3 {};

template <class Traits, class T>
struct CSecureCoderPfn {};

template <class Traits, class T>
struct CSecureCoderBasic {};

template <class Traits, class T, class Coder, class Basic>
struct CSecureTypeBase
{
	virtual void vfunc0();	// slot 0 (0x10003869)

	T m_Value;	// 0x04: the scrambled value

	CSecureTypeBase *sub_100eafb0(unsigned int x)	// out-of-line setter (stub 0x10005835): x goes through sub_1042ff30, the result through the second scramble and is stored; returns this
	{
		unsigned int a = ::sub_1042ff30(x);
		m_Value = (((a & 0x98b2235) ^ 0xc8874af3) + 0x4e242ee1 & 0xf674ddca) ^ a ^ 0x10ade2d8;
		return this;
	}
};

typedef CSecureTypeBase<CPfnTraits3, int, CSecureCoderPfn<CPfnTraits3, int>, CSecureCoderBasic<CPfnTraits3, int> > CSecureInt3;

}
