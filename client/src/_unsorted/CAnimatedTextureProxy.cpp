// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10079410 size=0x24
#include "CAnimatedTextureProxy.h"
// TARGET: ??_GCAnimatedTextureProxy@@UAEPAXI@Z
CAnimatedTextureProxy *pcd_emit_10079410() { return new CAnimatedTextureProxy; }
// END FUNCTION

// FUNCTION: 0x10079440 size=0x2b
#include "CAnimatedTextureProxy.h"
struct EngTimeView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
	virtual float v39(int a);
};
extern EngTimeView *g_104a57d4;
bool CAnimatedTextureProxy::vfunc0(void *a, void *b)
{
	*(float *)((char *)this + 0x14) = g_104a57d4->v39(0);
	return CBaseAnimatedTextureProxy::vfunc0(a, b);
}
// END FUNCTION

// FUNCTION: 0x10079470 size=0x6
#include "CAnimatedTextureProxy.h"
float CAnimatedTextureProxy::vfunc4(int a0)
{
    return *(float *)((char *)this + 0x14);
}
// END FUNCTION
