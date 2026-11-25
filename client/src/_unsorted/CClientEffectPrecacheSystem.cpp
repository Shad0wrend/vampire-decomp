// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d0710 size=0x31
#include "CClientEffectPrecacheSystem.h"
struct XEff { virtual void d(int); };
struct XMS { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
virtual void v40(); virtual void v41(); };
extern XMS *g_104a57ec;
struct XCEP { int u0; XEff **m_pList; char u1[8]; int m_n; };
// TARGET: CClientEffectPrecacheSystem::vfunc2
void CClientEffectPrecacheSystem::vfunc2()
{
	XCEP *p = (XCEP *)this;
	for (int i = 0; i < p->m_n; i++)
		p->m_pList[i]->d(1);
	g_104a57ec->v41();
}
// END FUNCTION

// FUNCTION: 0x100d0750 size=0x1
#include "CClientEffectPrecacheSystem.h"
void CClientEffectPrecacheSystem::vfunc4()
{
}
// END FUNCTION

// FUNCTION: 0x100d0760 size=0x24
#include "CClientEffectPrecacheSystem.h"
struct E100d0760 { virtual void v0(int); };
void CClientEffectPrecacheSystem::vfunc5()
{
	E100d0760 **p = *(E100d0760 ***)((char *)this + 4);
	for (int i = 0; i < *(int *)((char *)this + 0x10); i++)
		(*(E100d0760 ***)((char *)this + 4))[i]->v0(0);
}
// END FUNCTION

// FUNCTION: 0x100d0890 size=0x3
#include "CClientEffectPrecacheSystem.h"
bool CClientEffectPrecacheSystem::vfunc0()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100d08a0 size=0x1
#include "CClientEffectPrecacheSystem.h"
void CClientEffectPrecacheSystem::vfunc3()
{
}
// END FUNCTION

// FUNCTION: 0x100d08b0 size=0x3
// TARGET: sub_100d08b0
void __stdcall sub_100d08b0(int)
{
}
// END FUNCTION

// FUNCTION: 0x100d08c0 size=0x1
#include "CClientEffectPrecacheSystem.h"
void CClientEffectPrecacheSystem::vfunc6()
{
}
// END FUNCTION

// FUNCTION: 0x100d08d0 size=0x6e
#include "CClientEffectPrecacheSystem.h"

// TARGET: ??_GCClientEffectPrecacheSystem@@UAEPAXI@Z
CClientEffectPrecacheSystem *pcd_emit_100d08d0()
{
	return new CClientEffectPrecacheSystem;
}
// END FUNCTION
