// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10029560 size=0x1
#include "ClientModeHLNormal.h"

// TARGET: ClientModeHLNormal::Viewport::vfunc97
void ClientModeHLNormal::Viewport::vfunc97()
{
}
// END FUNCTION

// FUNCTION: 0x10029570 size=0x1
#include "ClientModeHLNormal.h"

// TARGET: ClientModeHLNormal::Viewport::vfunc107
void ClientModeHLNormal::Viewport::vfunc107()
{
}
// END FUNCTION

// FUNCTION: 0x10029580 size=0x27
#include "ClientModeHLNormal.h"
struct CObj_105f99d8 { virtual int v0(); };
struct CGlobal_105f99d8 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
	virtual bool v19(); virtual CObj_105f99d8 *v20();
};
extern CGlobal_105f99d8 *g_105f99d8;
int ClientModeHLNormal::Viewport::vfunc17()
{
	if (g_105f99d8->v19()) {
		CObj_105f99d8 *p = g_105f99d8->v20();
		if (p)
			return p->v0();
	}
	return 0;
}
// END FUNCTION
