// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e3460 size=0x16
#include "CFunctionProxy.h"
// TARGET: ??0CFunctionProxy@@QAE@XZ
CResultProxy::CResultProxy()
{
	*(int *)((char *)this + 4) = 0;
}
CFunctionProxy::CFunctionProxy()
{
	m_unk0c = 0;
	m_unk10 = 0;
}
// END FUNCTION

// FUNCTION: 0x100e3480 size=0x1e
#include "CFunctionProxy.h"

// VC6 writes CFunctionProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFunctionProxy *pcd_emit_100e3480(const CFunctionProxy &other) { return new CFunctionProxy(other); }

// TARGET: ??_GCFunctionProxy@@UAEPAXI@Z
// END FUNCTION
