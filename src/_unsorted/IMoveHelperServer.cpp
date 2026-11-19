// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1013ede0 size=0x20
#include "IMoveHelper.h"

// The game has two copies of this code: 0x1013ee10 in IMoveHelper's vtable (0x1046afbc) and this one in
// IMoveHelperServer's (0x1046af64, slot 14); this one was matched first, under IMoveHelper's name.
struct DummyMoveHelper : IMoveHelper
{
	const char *vfunc0(unsigned int) const { return 0; }
	void vfunc1() {}
	bool vfunc2(const void *, const float *) { return false; }
	void vfunc3() {}
	void vfunc4(int, const char *, ...) {}
	void vfunc5(const float *, int, const char *, float, int, int, int) {}
	void vfunc6(int, int, int, int, int, int, int, int, int, int, int, int) {}
	bool vfunc7() { return false; }
	void vfunc8(int) {}
	int vfunc9() { return 0; }
	bool vfunc10(const unsigned int *) { return false; }
	void vfunc11() {}
	void vfunc12() {}
	float vfunc13(int) { return 0.0f; }
};

DummyMoveHelper g_dummy;
// TARGET: ??_GIMoveHelper@@UAEPAXI@Z
// END FUNCTION
