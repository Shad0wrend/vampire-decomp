// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1003c920 size=0x20
#include "IEntityDataInstantiator.h"

struct DummyInstantiator : IEntityDataInstantiator
{
	void vfunc1(unsigned int) {}
	void *vfunc2(unsigned int) { return 0; }
	void vfunc3(unsigned int) {}
};

DummyInstantiator g_dummyInstantiator;
// TARGET: ??_GIEntityDataInstantiator@@UAEPAXI@Z
// END FUNCTION
