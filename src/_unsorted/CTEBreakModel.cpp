// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1005e6d0 size=0x1e
#include "CTEBreakModel.h"

// TARGET: CTEBreakModel::vfunc2
CTEBreakModel *CTEBreakModel::vfunc2(unsigned int flags)
{
	sub_1000f53d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005e720 size=0x13
#include "CTEBreakModel.h"
struct IEnginePrecache {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual int PrecacheModel(const char *name, int preload);
};
extern IEnginePrecache *g_1070b22c;

void CTEBreakModel::vfunc5()
{
	g_1070b22c->PrecacheModel("models/gibs/hgibs.mdl", 0);
}
// END FUNCTION
