// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b9c50 size=0x4d
#include "CBreakableSurfaceProxy.h"
#include "C_BreakableSurface.h"

struct MaterialVar_100b9c50
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
	virtual void v19(void *);
};

// TARGET: CBreakableSurfaceProxy::vfunc4
void CBreakableSurfaceProxy::vfunc4(C_BaseEntity *pEntity)
{
	C_BreakableSurface *pSurf = dynamic_cast<C_BreakableSurface *>(pEntity);
	if (pSurf)
	{
		MaterialVar_100b9c50 *var1 = *(MaterialVar_100b9c50 **)((char *)this + 4);
		var1->v19(*(void **)((char *)pSurf + 0x444));
		MaterialVar_100b9c50 *var2 = *(MaterialVar_100b9c50 **)((char *)this + 8);
		var2->v19(*(void **)((char *)pSurf + 0x444));
	}
}
// END FUNCTION

// FUNCTION: 0x10124ae0 size=0xc
struct IV { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(int); };
struct CView { void sub_10124ae0(); };
// TARGET: ?sub_10124ae0@CView@@QAEXXZ
void CView::sub_10124ae0() { IV *p = (IV *)this; if (p) p->v3(1); }
// END FUNCTION

// FUNCTION: 0x10124af0 size=0x26
#include "CBreakableSurfaceProxy.h"
struct R10124af0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void *v6(); };
struct Q10124af0 { virtual R10124af0 *v0(); };
void CBreakableSurfaceProxy::vfunc1(int a)
{
	Q10124af0 *q = (Q10124af0 *)a;
	if (q) {
		void *p = q->v0()->v6();
		if (p)
			vfunc4((C_BaseEntity *)p);
	}
}
// END FUNCTION
