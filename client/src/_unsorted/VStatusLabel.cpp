// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1018cc50 size=0x1e
#include "VStatusLabel.h"

// VC6 writes VStatusLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VStatusLabel *pcd_emit_1018cc50(const VStatusLabel &other) { return new VStatusLabel(other); }

// TARGET: ??_GVStatusLabel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1018cc80 size=0x27
#include "VStatusLabel.h"
struct Col1018cc80 { unsigned char r, g, b, a; };
struct L1018cc80 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
	virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual int v50(Col1018cc80);
};
int VStatusLabel::vfunc74(int)
{
	Col1018cc80 c;
	c.r = 0; c.g = 0; c.b = 0; c.a = 255;
	return ((L1018cc80 *)this)->v50(c);
}
// END FUNCTION
