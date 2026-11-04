// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002ac10 size=0x20
#include "IRecipientFilter.h"

struct DummyFilter : IRecipientFilter
{
	void vfunc1() {}
	int vfunc2() { return 0; }
	int vfunc3(int) { return 0; }
	char vfunc4() { return 0; }
	void vfunc5() {}
	void vfunc6() {}
	void vfunc7() {}
};

DummyFilter g_dummy;
// TARGET: ??_GIRecipientFilter@@UAEPAXI@Z
// END FUNCTION
