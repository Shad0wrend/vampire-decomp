// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10115330 size=0x2c
#include "ParticleSphereProxy.h"
struct IMat_10115330 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void *FindVar(const char *name, void *found, bool complain); };
#pragma optimize("", off)
bool ParticleSphereProxy::vfunc0(void *pMaterial, void *pKeyValues)
{
	m_pLights = ((IMat_10115330 *)pMaterial)->FindVar("$lights", 0, false);
	return true;
}
// END FUNCTION
