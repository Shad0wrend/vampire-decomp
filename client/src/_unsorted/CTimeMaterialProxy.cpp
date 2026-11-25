// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1013ba50 size=0x22
#include "CTimeMaterialProxy.h"

struct IEngineView
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14();
	virtual void v15();
	virtual void v16();
	virtual void v17();
	virtual void v18();
	virtual void v19();
	virtual void v20();
	virtual void v21();
	virtual void v22();
	virtual void v23();
	virtual void v24();
	virtual void v25();
	virtual void v26();
	virtual void v27();
	virtual void v28();
	virtual void v29();
	virtual void v30();
	virtual void v31();
	virtual void v32();
	virtual void v33();
	virtual void v34();
	virtual void v35();
	virtual void v36();
	virtual void v37();
	virtual void v38();
	virtual float v39(int);
};

extern void *g_104a57d4;

// TARGET: CTimeMaterialProxy::vfunc1
void CTimeMaterialProxy::vfunc1(int)
{
	sub_100e33c0(((IEngineView *)g_104a57d4)->v39(0));
}
// END FUNCTION

// FUNCTION: 0x1013bae0 size=0x1e
#include "CTimeMaterialProxy.h"

// VC6 writes CTimeMaterialProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTimeMaterialProxy *pcd_emit_1013bae0() { return new CTimeMaterialProxy; }

// TARGET: ??_GCTimeMaterialProxy@@UAEPAXI@Z
// END FUNCTION
