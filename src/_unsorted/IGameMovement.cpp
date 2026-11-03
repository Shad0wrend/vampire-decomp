// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011e220 size=0x20
#include "IGameMovement.h"

struct DummyMovement : IGameMovement
{
	void vfunc1() {}
	void vfunc2() {}
	void vfunc3() {}
	void vfunc4() {}
};

DummyMovement g_dummyMovement;
// TARGET: ??_GIGameMovement@@UAEPAXI@Z
// END FUNCTION
