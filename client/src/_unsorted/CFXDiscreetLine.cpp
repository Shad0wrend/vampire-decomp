// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10044eb0 size=0x91
#include "CFXDiscreetLine.h"
#include "Vector.h"

struct IMat_10044eb0 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual IMatInst_10044eb0 *FindMaterial(const char *name, int a, int b);
};
extern IMat_10044eb0 *g_104a57ec;

CFXDiscreetLine::CFXDiscreetLine(const char *name, const Vector &start, const Vector &direction, float velocity, float length, float clipLength, float scale, float life, const char *shader)
	: CClientSideEffect((int)name)
{
	if (g_104a57ec) {
		m_pMaterial = g_104a57ec->FindMaterial(shader, 0, 1);
		m_pMaterial->v12(0);
		m_vStart = start;
		m_vDir = direction;
		m_flVelocity = velocity;
		m_flClip = clipLength;
		m_flScale = scale;
		m_flUnk10 = life;
		m_flUnk30 = 0;
		m_flLength = length;
	}
}
// END FUNCTION

// FUNCTION: 0x10044f50 size=0x1e
#include "CFXDiscreetLine.h"

// VC6 writes CFXDiscreetLine's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFXDiscreetLine *pcd_emit_10044f50(const CFXDiscreetLine &other) { return new CFXDiscreetLine(other); }

// TARGET: ??_GCFXDiscreetLine@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10045670 size=0x18
#include "CFXDiscreetLine.h"
bool CFXDiscreetLine::vfunc3()
{
	if (m_flUnk10 > 0.0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10045690 size=0x1a
#include "CFXDiscreetLine.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual int f13(int); };
}
void CFXDiscreetLine::vfunc4()
{
    if ((*(int *)((char *)this + 0xc)) != 0) {
        int t0 = ((lifted::V *)(*(int *)((char *)this + 0xc)))->f13(0);
        *(int *)((char *)this + 0xc) = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x100456b0 size=0x17
#include "CFXDiscreetLine.h"
void CFXDiscreetLine::vfunc5(double dt)
{
	m_flUnk30 += dt;
	m_flUnk10 -= dt;
}
// END FUNCTION
