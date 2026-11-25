// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010d4c0 size=0x4d
#include "CLinearRampProxy.h"
#include "CClampProxy.h"
#include "CFunctionProxy.h"

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

struct LinRampView {
    void *vt;
    int m_unk04;
    int m_unk08;
    CClampProxy::CInput m_flRate;
    CClampProxy::CInput m_flInitialValue;
};

// TARGET: CLinearRampProxy::vfunc1
void CLinearRampProxy::vfunc1(int)
{
    float flValue = ((LinRampView *)this)->m_flRate.sub_100e3270() * g_104a57d4->v39(0)
        + ((LinRampView *)this)->m_flInitialValue.sub_100e3270();
    ((CFunctionProxy *)this)->sub_100e33c0(flValue);
}
// END FUNCTION

// FUNCTION: 0x1010d570 size=0x1e
#include "CLinearRampProxy.h"

// VC6 writes CLinearRampProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CLinearRampProxy *pcd_emit_1010d570() { return new CLinearRampProxy; }

// TARGET: ??_GCLinearRampProxy@@UAEPAXI@Z
// END FUNCTION
