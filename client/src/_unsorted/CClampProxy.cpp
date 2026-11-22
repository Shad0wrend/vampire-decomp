// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010cdb0 size=0x58
#include "CClampProxy.h"
// TARGET: CClampProxy::vfunc0
bool CClampProxy::vfunc0(void *pMaterial, void *pKeyValues)
{
	if (!CFunctionProxy::sub_100e34b0(pMaterial, pKeyValues))
		return false;
	if (!m_flMin.sub_100e3140(pMaterial, pKeyValues, "min", 0.0f))
		return false;
	return m_flMax.sub_100e3140(pMaterial, pKeyValues, "max", 1.0f) ? true : false;
}
// END FUNCTION

// FUNCTION: 0x1010cff0 size=0x1e
#include "CClampProxy.h"

// VC6 writes CClampProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CClampProxy *pcd_emit_1010cff0() { return new CClampProxy; }

// TARGET: ??_GCClampProxy@@UAEPAXI@Z
// END FUNCTION
