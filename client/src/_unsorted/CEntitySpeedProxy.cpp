// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10124ff0 size=0x51
#include "Vector.h"
#include "CEntitySpeedProxy.h"

struct EntityView {
	char pad[0xa4];
	Vector m_vec;
};
struct ResultVarView {
	virtual void v0();
	virtual void v1();
	virtual void v2SetFloatValue(float);
};

// TARGET: CEntitySpeedProxy::vfunc1
void CEntitySpeedProxy::vfunc1(int a)
{
	if (a) {
		Vector *v = &((EntityView *)a)->m_vec;
		((ResultVarView *)*(void **)((char *)this + 4))->v2SetFloatValue(v->Length());
	}
}
// END FUNCTION

// FUNCTION: 0x101250b0 size=0x1e
#include "CEntitySpeedProxy.h"

// VC6 writes CEntitySpeedProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CEntitySpeedProxy *pcd_emit_101250b0() { return new CEntitySpeedProxy; }

// TARGET: ??_GCEntitySpeedProxy@@UAEPAXI@Z
// END FUNCTION
