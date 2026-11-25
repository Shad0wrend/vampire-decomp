// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010d0b0 size=0x9c
#include "CSineProxy.h"
#include "CClampProxy.h"
#include "CFunctionProxy.h"

extern "C" double sin(double);
#pragma intrinsic(sin)

struct EngineView {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38();
    virtual double v39(int);
};

extern EngineView *g_104a57d4;

struct SineView {
    void *vt;
    int m_unk04;
    int m_unk08;
    CClampProxy::CInput m_SinePeriod;     // 0xc
    CClampProxy::CInput m_SineMax;        // 0x18
    CClampProxy::CInput m_SineMin;        // 0x24
    CClampProxy::CInput m_SineTimeOffset; // 0x30
};

// TARGET: CSineProxy::vfunc1
void CSineProxy::vfunc1(int)
{
    SineView *p = (SineView *)this;
    float flTimeOffset = p->m_SineTimeOffset.sub_100e3270();
    float flMax = p->m_SineMax.sub_100e3270();
    float flMin = p->m_SineMin.sub_100e3270();
    float flPeriod = p->m_SinePeriod.sub_100e3270();
    if (flPeriod == 0.0f)
        flPeriod = 1.0f;
    double flSine = sin((g_104a57d4->v39(0) - flTimeOffset) * 6.283185307179586 / flPeriod);
    flSine *= 0.5;
    flSine += 0.5;
    float flResult = (flMax - flMin) * flSine + flMin;
    ((CFunctionProxy *)this)->sub_100e33c0(flResult);
}
// END FUNCTION

// FUNCTION: 0x1010d1b0 size=0x1e
#include "CSineProxy.h"

// VC6 writes CSineProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSineProxy *pcd_emit_1010d1b0() { return new CSineProxy; }

// TARGET: ??_GCSineProxy@@UAEPAXI@Z
// END FUNCTION
