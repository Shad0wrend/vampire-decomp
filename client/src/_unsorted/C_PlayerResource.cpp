// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100bce40 size=0x3
#include "C_PlayerResource.h"
int C_PlayerResource::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100bd2f0 size=0x5
#include "C_PlayerResource.h"
int C_PlayerResource::vfunc135(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100bd300 size=0x5
#include "C_PlayerResource.h"
int C_PlayerResource::vfunc136(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100bd310 size=0x9
#include "C_PlayerResource.h"
namespace lifted {
extern float g_101e34f0;
}
float C_PlayerResource::vfunc137(int a0)
{
    return lifted::g_101e34f0;
}
// END FUNCTION

// FUNCTION: 0x100bd320 size=0x3
#include "C_PlayerResource.h"
void C_PlayerResource::vfunc138(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100bd330 size=0x1e
#include "C_PlayerResource.h"

// VC6 writes C_PlayerResource's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_PlayerResource *pcd_emit_100bd330() { return new C_PlayerResource; }

// TARGET: ??_GC_PlayerResource@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100bd4c0 size=0x28
#define V8(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7();
class PRView {
public:
	V8(a) V8(b) V8(c) V8(d) V8(e) V8(f) V8(g) V8(h) V8(i) V8(j) V8(k) V8(l) V8(m) V8(n) V8(o) V8(p)
	virtual void z0(); virtual void z1(); virtual void z2(); virtual void z3(); virtual void z4();
	virtual bool IsConnected(int i);
	char pad[0x6a4 - 4];
	int m6a4[1];
	int sub_100bd4c0(int i);
};
int PRView::sub_100bd4c0(int i)
{
	if (!IsConnected(i))
		return 0;
	return m6a4[i];
}
// END FUNCTION
