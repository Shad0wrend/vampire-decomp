// CUnknown102ef350: an interface sub-object (class not known) of an object whose primary part is the tracker
// CUnknown102ef3e0. ecx = outer + 0x10; the outer's pointer at +4 (this - 0xc) is the owner object, whose
// sink sub-object at +0x19b0 is asked first (slot 3 / slot 7); the tracker is the outer (this - 0x10).
// Used by 0x102ef350 (slot-3-like handler, ret 12) and 0x102ef6d0 (ret 16).
#pragma once
#include "CUnknown102ef3e0.h"

struct CUnknown102ef350Item	// the first argument of 0x102ef350: +0x28 receives the second argument, +0x38 gets bit 1, +0x44 is the tracker's argument struct
{
	char m_pad0000[0x28];
	int m_n28;	// 0x28
	char m_pad002c[0x38 - 0x2c];
	unsigned int m_flags38;	// 0x38
	char m_pad003c[0x44 - 0x3c];
	CUnknown102ef3e0Arg m_Arg44;	// 0x44 (the tracker's argument: holder pointer at +0x1c inside it)
};

class CUnknown102ef350Sink	// the sub-object at owner + 0x19b0
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual bool vfunc3(CUnknown102ef350Item *pItem, int a, int *pOut);	// slot 3: the owner's first try
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual bool vfunc7(int a, int b, int type, int *pOut);	// slot 7: used by 0x102ef6d0
};

class CUnknown102ef350Owner	// the object the outer's pointer at +4 refers to
{
public:
	char m_pad0000[0x19b0];
	CUnknown102ef350Sink m_Sink19b0;	// 0x19b0
};

class CUnknown102ef350Outer : public CUnknown102ef3e0	// the primary part (tracker members at 0x51..0x68)
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();	// slot 8 (+0x20), called by 0x102ef6d0 on type 4
};
