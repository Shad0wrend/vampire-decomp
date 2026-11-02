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

struct CPfnTraits4 {};

// The CPfnTraits4 instance (vftable 0x104b73dc, one slot 0x103835f0) used by CNPC_VHengeyokai at +0x6698: the value sits at +0x08
// (after two bytes the constructor copies from uninitialised locals to +0x04 / +0x05). The constructor sets vptr, then
// m_Value = Scramble(sub_10430080(0x1e)), see CNPC_VHengeyokai 0x1037e680.
unsigned int sub_10430080(unsigned int x);	// the first scrambling step of Traits4 (cdecl; stub 0x100043e5 -> 0x10383e90 -> 0x1001150e)

template <>
struct CSecureTypeBase<CPfnTraits4, int, CSecureCoderPfn<CPfnTraits4, int>, CSecureCoderBasic<CPfnTraits4, int> >
{
	virtual void vfunc0();	// slot 0 (0x103835f0)

	char m_b04;	// 0x04
	char m_b05;	// 0x05
	int m_Value;	// 0x08: the scrambled value

	static int Scramble(unsigned int a)
	{
		return (((a & 0x3f3c1135) ^ 0x415a33ef) + 0x4ba5398d & 0xc0c3eeca) ^ a ^ 0x151a77f8;
	}
};

typedef CSecureTypeBase<CPfnTraits4, int, CSecureCoderPfn<CPfnTraits4, int>, CSecureCoderBasic<CPfnTraits4, int> > CSecureInt4;

typedef CSecureTypeBase<CPfnTraits3, int, CSecureCoderPfn<CPfnTraits3, int>, CSecureCoderBasic<CPfnTraits3, int> > CSecureInt3;

}
