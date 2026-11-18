// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10156630 size=0x42
#include "CRagdollPropAttached.h"
struct SPhysEnv { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(void *p); };
extern SPhysEnv *g_10723940;
extern char vt_1046e23c[];
void sub_100aa7b0(void *p);
CBaseEntity *CRagdollPropAttached::vfunc5(unsigned int flags)
{
    *(int *)this = (int)vt_1046e23c;
    g_10723940->v23(m_pPhysObj1060);
    m_pPhysObj1060 = 0;
    sub_10014317();
    if (flags & 1)
        sub_100aa7b0(this);
    return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x10156710 size=0x6
#include "CRagdollPropAttached.h"
namespace lifted {
extern char g_10723278;
}
int CRagdollPropAttached::vfunc80()
{
    return (int)&lifted::g_10723278;
}
// END FUNCTION

// FUNCTION: 0x10156730 size=0x3
#include "CRagdollPropAttached.h"
int CRagdollPropAttached::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101569a0 size=0x6
#include "datamap.h"
#include "CRagdollPropAttached.h"
namespace lifted {
extern char g_1057e860;
}
datamap_t * CRagdollPropAttached::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057e860);
}
// END FUNCTION

// FUNCTION: 0x10156d50 size=0x29
struct CUnit10156d50 {
    void sub_10156d50(int a);
    void sub_10006c2b();
    void sub_10001aeb(int a);
};

void CUnit10156d50::sub_10156d50(int a)
{
    if (*((char *)this + 0x105c) != 0) {
        sub_10006c2b();
        *((char *)this + 0x105c) = 0;
    }
    sub_10001aeb(a);
}
// END FUNCTION
