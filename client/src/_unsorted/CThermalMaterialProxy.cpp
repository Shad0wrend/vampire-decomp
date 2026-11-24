// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004b070 size=0xc
#include "CThermalMaterialProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CThermalMaterialProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x1004b0d0 size=0x9b
#include "CThermalMaterialProxy.h"
struct IMatView { virtual void v0(){} virtual void v1(){} virtual void v2(){} virtual void v3(){} virtual void v4(){} virtual void v5(){} virtual void v6(){} virtual void v7(){} virtual void v8(){} virtual void v9(){} virtual void v10(){} virtual void *FindVar(const char *, bool *, bool); };
// TARGET: CThermalMaterialProxy::vfunc0
bool CThermalMaterialProxy::vfunc0(void *p, void *kv)
{
	IMatView *pMaterial = (IMatView *)p;
	bool foundVar;
	m_ThermalVar = pMaterial->FindVar("$color", &foundVar, false);
	if (!foundVar) { m_ThermalVar = 0; return false; }
	m_ThermalPeriod = pMaterial->FindVar("$ThermalPeriod", &foundVar, false);
	if (!foundVar) m_ThermalPeriod = 0;
	m_ThermalMax = pMaterial->FindVar("$ThermalMax", &foundVar, false);
	if (!foundVar) m_ThermalMax = 0;
	m_ThermalMin = pMaterial->FindVar("$ThermalMin", &foundVar, false);
	if (!foundVar) m_ThermalMin = 0;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1004b170 size=0x3
#include "CThermalMaterialProxy.h"
void CThermalMaterialProxy::vfunc1(int a0)
{
}
// END FUNCTION
