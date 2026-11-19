// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1011e220 size=0x20
#include "IGameMovement.h"

struct DummyMovement : IGameMovement
{
	void vfunc1(void *, void *) {}
	float *vfunc2(char, int) { return 0; }
	float *slot3(char, char) { return 0; }
	float *slot4(int, char) { return 0; }
};

DummyMovement g_dummyMovement;
// TARGET: ??_GIGameMovement@@UAEPAXI@Z
// END FUNCTION
