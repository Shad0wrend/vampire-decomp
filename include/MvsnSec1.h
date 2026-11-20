// MvsnSec::CSecureTypeBase, the primary template: the game's CPfnTraits1 instance (CBasePlayer's scrambled criminal
// level at +0x1cd0, vftable 0x10470484, no base class in the game's RTTI): vptr, the coded record at +0x04, the
// scrambled value at +0x08. The other
// instances are explicit specializations (MvsnSec.h: Traits3 / Traits4, MvsnSec0.h: Traits0).
#pragma once

struct CSecureCodedLocal
{
	int m_n0;
	int m_n4;
	int sub_10184220(unsigned int v);
};

struct CUnknown101841f0
{
	int m_n0;
	CUnknown101841f0 *sub_101841f0(CSecureCodedLocal *p);
};

unsigned int sub_10184260(unsigned int v);

namespace MvsnSec {
struct CPfnTraits1;
template<class Tr, class T> struct CSecureCoderPfn;
template<class Tr, class T> struct CSecureCoderBasic;

// The Traits1 value record (CSecureTypeBase's member at +0x04): its constructor clears the value before the
// owner's vptr is stored.
struct CSecureValueStorage
{
	CUnknown101841f0 m_coded;	// +0x00: the coded record
	unsigned int m_value;	// +0x04: the scrambled value
	CSecureValueStorage() { m_value = 0; }
};

template<class Tr, class T, class C1, class C2>
struct CSecureTypeBase
{
	virtual struct CSecureResult *vfunc0(struct CSecureResult *pOut, int *pOp, CSecureTypeBase *pA, CSecureTypeBase *pB);	// slot 0 of the Traits1 instance (0x101839a0): the operator dispatcher
	CSecureValueStorage m_Data;	// 0x04
	__forceinline void Set(unsigned int v)
	{
		CSecureCodedLocal loc;
		loc.m_n4 = loc.sub_10184220(sub_10184260(v));
		m_Data.m_coded.sub_101841f0(&loc);
	}
	__forceinline CSecureTypeBase() { Set(0); }
};
}
