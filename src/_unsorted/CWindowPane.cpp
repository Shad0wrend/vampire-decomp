// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010f6e0 size=0x13
#include "CWindowPane.h"
struct IEnginePrecache {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual int PrecacheModel(const char *name, int preload);
};
extern IEnginePrecache *g_1070b22c;

void CWindowPane::vfunc104()
{
	g_1070b22c->PrecacheModel("models/gibs/brokenglass_piece.mdl", 0);
}
// END FUNCTION

// FUNCTION: 0x10113590 size=0x1e
#include "CWindowPane.h"

void sub_100aa7b0(void *p);

// TARGET: CWindowPane::vfunc5
CWindowPane *CWindowPane::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
