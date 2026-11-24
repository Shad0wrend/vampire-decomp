// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c3660 size=0x6
#include "C_BaseFlex.h"
namespace lifted {
extern char g_102b653c;
}
int C_BaseFlex::vfunc16()
{
    return (int)&lifted::g_102b653c;
}
// END FUNCTION

// FUNCTION: 0x100c3670 size=0x3
#include "C_BaseFlex.h"
int C_BaseFlex::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100c38f0 size=0x1e
#include "C_BaseFlex.h"

// VC6 writes C_BaseFlex's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseFlex *pcd_emit_100c38f0() { return new C_BaseFlex; }

// TARGET: ??_GC_BaseFlex@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c3910 size=0x98
#include "C_BaseFlex.h"
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
struct FlexVec { void *m_pMemory; int m_allocationCount; int m_growSize; int m_size; void *m_pElements; };
// TARGET: ??1C_BaseFlex@@UAE@XZ
C_BaseFlex::~C_BaseFlex()
{
	sub_100c40a0();
	FlexVec *v = (FlexVec *)((char *)this + 0xfb4);
	v->m_size = 0;
	if (v->m_growSize != -1) {
		if (v->m_pMemory) { Plat_Free(v->m_pMemory); v->m_pMemory = 0; }
		v->m_allocationCount = 0;
	}
	v->m_pElements = v->m_pMemory;
	if (v->m_growSize != -1) {
		if (v->m_pMemory) { Plat_Free(v->m_pMemory); v->m_pMemory = 0; }
		v->m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100c4110 size=0xe4
#include "C_BaseFlex.h"
#include "Vector.h"

struct FlexView
{
	char m_pad00[0x70];
	float m_flTime70;
	char m_pad74[0xb80 - 0x74];
	Vector m_viewtarget;
	char m_padB8C[0xd94 - 0xb8c];
	Vector m_prevviewtarget;
	char m_padDA0[0xfa8 - 0xda0];
	int m_iEyeUpdown;
	int m_iEyeRightleft;
};

struct EngineView
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15();
	virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23();
	virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27();
	virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31();
	virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35();
	virtual void s36(); virtual void s37(); virtual void s38();
	virtual float s39(int);
};

struct ModelRenderView
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual void SetViewTarget(const Vector &);
};

extern EngineView *g_104a57d4;
extern ModelRenderView *g_104a57d8;

void C_BaseFlex::vfunc145()
{
	FlexView *v = (FlexView *)this;
	float flBlend = (g_104a57d4->s39(0) - v->m_flTime70) * 10.0;
	Vector blended;
	blended = v->m_prevviewtarget * (1.0f - flBlend);
	blended += v->m_viewtarget * flBlend;
	Vector tmp = blended;
	if (v->m_iEyeUpdown == -1)
		v->m_iEyeUpdown = sub_100c4880("eyes_updown");
	if (v->m_iEyeRightleft == -1)
		v->m_iEyeRightleft = sub_100c4880("eyes_rightleft");
	g_104a57d8->SetViewTarget(tmp);
}
// END FUNCTION

// FUNCTION: 0x100c4200 size=0x6
#include "C_BaseFlex.h"
namespace lifted {
extern char g_102aea5c;
}
int C_BaseFlex::vfunc143()
{
    return (int)&lifted::g_102aea5c;
}
// END FUNCTION
