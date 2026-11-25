// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101070f0 size=0xc
#include "CLampBeamProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CLampBeamProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x10107130 size=0x23
#include "CLampBeamProxy.h"
struct IMatV { virtual int v0(); virtual int v1(); virtual int v2(); virtual int v3(); virtual int v4(); virtual int v5(); virtual int v6(); virtual int v7(); virtual int v8(); virtual int v9(); virtual int v10(); virtual int FindVar(const char *, void *, bool); };
// TARGET: CLampBeamProxy::vfunc0
bool CLampBeamProxy::vfunc0(void *a, void *b) { IMatV *m = (IMatV *)a; m_unk4 = m->FindVar("$alpha", &a, true); return *(bool *)&a; }
// END FUNCTION

// FUNCTION: 0x10107160 size=0x7c
#include "CLampBeamProxy.h"
#include "Vector.h"
extern "C" double fabs(double);
#pragma intrinsic(fabs)
extern Vector g_105fbee4;
struct IRend { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual const Vector &GetRenderOrigin(); };
struct IMatVar { virtual void v0(); virtual void v1(); virtual void SetFloatValue(float f); };
void CLampBeamProxy::vfunc1(int pEnt)
{
	if (!m_unk4) return;
	if (!pEnt) return;
	IRend *r = (IRend *)(pEnt - 4);
	if (!r) return;
	Vector d;
	d = r->GetRenderOrigin() - g_105fbee4;
	VectorNormalize(d);
	((IMatVar *)m_unk4)->SetFloatValue(1.0f - fabs(d.z));
}
// END FUNCTION
