// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10356330 size=0x20
extern int g_10471730;

struct Helper
{
	void* sub_10356330(unsigned char flags);
};

// TARGET: Helper::sub_10356330
void* Helper::sub_10356330(unsigned char flags)
{
	*(void**)this = &g_10471730;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103563a0 size=0x37
#include "CHLPlayerMove.h"

void __stdcall sub_10007883(int a1, int a2, int a3, int a4);

struct CPlayerMoveSinkView
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7(int a1, int a2, int a3, int a4);
};

// TARGET: CHLPlayerMove::vfunc1
void CHLPlayerMove::vfunc1(int a1, int a2, int a3, int a4)
{
	sub_10007883(a1, a2, a3, a4);
	CPlayerMoveSinkView *pSink = *(CPlayerMoveSinkView **)((char *)a1 + 0x20fc);
	if (pSink)
	{
		pSink->vfunc7(a1, a2, a3, a4);
	}
}
// END FUNCTION

// FUNCTION: 0x103563f0 size=0x2f
#include "CHLPlayerMove.h"
// TARGET: vfunc2

struct CUnknownMoveSlots
{
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9(int a1, int a2, int a3);
};

void CHLPlayerMove::vfunc2(int a1, int a2, int a3)
{
    sub_1000637f(a1, a2, a3);
    CUnknownMoveSlots *p = *(CUnknownMoveSlots **)((char *)a1 + 0x20fc);
    if (p != 0)
    {
        p->s9(a1, a2, a3);
    }
}
// END FUNCTION
