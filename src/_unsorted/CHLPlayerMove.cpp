// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
