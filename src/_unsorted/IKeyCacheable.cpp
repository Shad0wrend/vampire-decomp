// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101f2010 size=0x20
#include "IKeyCacheable.h"

struct DummyKeyCacheable : IKeyCacheable
{
	void vfunc0() {}
	void vfunc1() {}
};

DummyKeyCacheable g_dummyKC;
// TARGET: ??_GIKeyCacheable@@UAEPAXI@Z
// END FUNCTION
