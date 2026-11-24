// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e1900 size=0x1d
#include "CDummyMaterialProxy.h"
extern "C++" __declspec(dllimport) void DevMsg(int, const char *, ...);
// TARGET: CDummyMaterialProxy::CDummyMaterialProxy
CDummyMaterialProxy::CDummyMaterialProxy()
{
	DevMsg(1, "CDummyMaterialProxy::CDummyMaterialProxy()\n");
}
// END FUNCTION

// FUNCTION: 0x100e1920 size=0xc
#include "CDummyMaterialProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CDummyMaterialProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100e1930 size=0x1e
#include "CDummyMaterialProxy.h"

// VC6 writes CDummyMaterialProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CDummyMaterialProxy *pcd_emit_100e1930(const CDummyMaterialProxy &other) { return new CDummyMaterialProxy(other); }

// TARGET: ??_GCDummyMaterialProxy@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100e1980 size=0x2d
#include "CDummyMaterialProxy.h"
struct XMat { virtual const char *GetName(); };
#define V(n) virtual void h##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
struct XEng60 { V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) virtual void Msg(int level, const char *fmt, ...); };
extern XEng60 *g_104a57d4;
// TARGET: CDummyMaterialProxy::vfunc0
bool CDummyMaterialProxy::vfunc0(void *pMaterial, void *pKeyValues)
{
	g_104a57d4->Msg(0, "CDummyMaterialProxy::Init( material = \"%s\" )\n", ((XMat *)pMaterial)->GetName());
	return true;
}
// END FUNCTION
