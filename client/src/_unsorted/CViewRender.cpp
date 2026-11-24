// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1018e860 size=0xe
struct CView { char pad[0x390]; int m390[1]; int sub_1018e860(int); };
// TARGET: ?sub_1018e860@CView@@QAEHH@Z
int CView::sub_1018e860(int i) { return m390[i]; }
// END FUNCTION

// FUNCTION: 0x1018e870 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc20()
{
    return *(int *)((char *)this + 0x3b0);
}
// END FUNCTION

// FUNCTION: 0x1018e880 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc21()
{
    return *(int *)((char *)this + 0x3b4);
}
// END FUNCTION

// FUNCTION: 0x1018e890 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc22()
{
    return *(int *)((char *)this + 0x3b8);
}
// END FUNCTION

// FUNCTION: 0x1018e8a0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc23()
{
    return *(int *)((char *)this + 0x3bc);
}
// END FUNCTION

// FUNCTION: 0x1018e8b0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc24()
{
    return *(int *)((char *)this + 0x3c0);
}
// END FUNCTION

// FUNCTION: 0x1018e8c0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc25()
{
    return *(int *)((char *)this + 0x3c4);
}
// END FUNCTION

// FUNCTION: 0x1018e8d0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc26()
{
    return *(int *)((char *)this + 0x3c8);
}
// END FUNCTION

// FUNCTION: 0x1018e8e0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc27()
{
    return *(int *)((char *)this + 0x3cc);
}
// END FUNCTION

// FUNCTION: 0x1018e8f0 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc28()
{
    return *(int *)((char *)this + 0x3d0);
}
// END FUNCTION

// FUNCTION: 0x1018e900 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc29()
{
    return *(int *)((char *)this + 0x3d4);
}
// END FUNCTION

// FUNCTION: 0x1018e910 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc30()
{
    return *(int *)((char *)this + 0x3d8);
}
// END FUNCTION

// FUNCTION: 0x1018e920 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc31()
{
    return *(int *)((char *)this + 0x3d8);
}
// END FUNCTION

// FUNCTION: 0x1018e930 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc32()
{
    return *(int *)((char *)this + 0x3e0);
}
// END FUNCTION

// FUNCTION: 0x1018e940 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc33()
{
    return *(int *)((char *)this + 0x3e4);
}
// END FUNCTION

// FUNCTION: 0x1018e950 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc34()
{
    return *(int *)((char *)this + 0x3e8);
}
// END FUNCTION

// FUNCTION: 0x1018e960 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc35()
{
    return *(int *)((char *)this + 0x3ec);
}
// END FUNCTION

// FUNCTION: 0x1018e970 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc36()
{
    return *(int *)((char *)this + 0x438);
}
// END FUNCTION

// FUNCTION: 0x1018e980 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc37()
{
    return *(int *)((char *)this + 0x43c);
}
// END FUNCTION

// FUNCTION: 0x1018e990 size=0x7
#include "CViewRender.h"
int CViewRender::vfunc38()
{
    return *(int *)((char *)this + 0x444);
}
// END FUNCTION

// FUNCTION: 0x1018e9a0 size=0x7
#include "CViewRender.h"
bool CViewRender::vfunc43()
{
    return *(bool *)((char *)this + 0x49c);
}
// END FUNCTION

// FUNCTION: 0x1018f9b0 size=0x7e
#include "CViewRender.h"
#include "ScopeTrace.h"

struct IViewEffects_1018f9b0
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
};

struct IClientShadowMgr_1018f9b0
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
};

extern IViewEffects_1018f9b0 *g_102d5050;
extern IClientShadowMgr_1018f9b0 *g_1028073c;

// TARGET: CViewRender::vfunc1
void CViewRender::vfunc1()
{
	ScopeTrace trace("CViewRender::LevelInit", g_102de300);

	g_102d5050->v2();
	g_1028073c->v3();

	*(int *)((char *)this + 0x374) = 0;
	*(int *)((char *)this + 0x378) = 0;
}
// END FUNCTION

// FUNCTION: 0x10191700 size=0x8
#include "CViewRender.h"
void CViewRender::vfunc16()
{
    *(char *)((char *)this + 0xa4) = 1;
}
// END FUNCTION

// FUNCTION: 0x10192850 size=0x1e
struct V2850 { char pad[0x450]; float m; int sub_10192850(); };
int V2850::sub_10192850() { return m > 0.0f; }
// END FUNCTION

// FUNCTION: 0x10192870 size=0x7
#include "CViewRender.h"
float CViewRender::vfunc45()
{
    return *(float *)((char *)this + 0x450);
}
// END FUNCTION

// FUNCTION: 0x10199590 size=0x7
#include "CViewRender.h"
char * CViewRender::vfunc11()
{
    return (char *)this + 0x22c;
}
// END FUNCTION

// FUNCTION: 0x101995a0 size=0x7
#include "CViewRender.h"
char * CViewRender::vfunc12()
{
    return (char *)this + 0x310;
}
// END FUNCTION

// FUNCTION: 0x1019e1f0 size=0x22
#include "CViewRender.h"
struct E1019e1f0 { int d[11]; };
void *CViewRender::vfunc6(int i)
{
	if (i >= 0 && i < 2)
		return &((E1019e1f0 *)((char *)this + 0x2b8))[i];
	return 0;
}
// END FUNCTION
