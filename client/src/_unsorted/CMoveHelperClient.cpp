// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010f180 size=0x1
// TARGET: sub_1010f180
void sub_1010f180()
{
}
// END FUNCTION

// FUNCTION: 0x1010f190 size=0x1
#include "CMoveHelperClient.h"

// TARGET: CMoveHelperClient::vfunc12
void CMoveHelperClient::vfunc12()
{
}
// END FUNCTION

// FUNCTION: 0x1010f1a0 size=0x1e
#include "CMoveHelperClient.h"

// VC6 writes CMoveHelperClient's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CMoveHelperClient *pcd_emit_1010f1a0() { return new CMoveHelperClient; }

// TARGET: ??_GCMoveHelperClient@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1010f1c0 size=0x5f
#include "CMoveHelperClient.h"
#include "utlvector.h"

// TARGET: CMoveHelperClient::~CMoveHelperClient
extern int g_104df784;
extern char vt_10235714;

CMoveHelperClient::~CMoveHelperClient()
{
	g_104df784 = 0;
	((CUtlVector<int> *)((char *)this + 0xc))->~CUtlVector<int>();
	*(void **)this = &vt_10235714;
}
// END FUNCTION

// FUNCTION: 0x1010f260 size=0x8
#include "CMoveHelperClient.h"

// TARGET: CMoveHelperClient::vfunc1
void CMoveHelperClient::vfunc1()
{
	m_unk18 = 0;
}
// END FUNCTION

// FUNCTION: 0x1010f3e0 size=0x1
#include "CMoveHelperClient.h"

// TARGET: CMoveHelperClient::vfunc3
void CMoveHelperClient::vfunc3()
{
}
// END FUNCTION

// FUNCTION: 0x1010f670 size=0x3
// TARGET: sub_1010f670
void __stdcall sub_1010f670(int, int, int, int, int, int, int, int, int, int, int, int)
{
}
// END FUNCTION

// FUNCTION: 0x1010f680 size=0x6
#include "CPhysicsIfaces.h"

extern CPhysSurfacePropsIface *g_104e0c94;

// TARGET: sub_1010f680
CPhysSurfacePropsIface *sub_1010f680()
{
	return g_104e0c94;
}
// END FUNCTION

// FUNCTION: 0x1010f690 size=0x64
#include <stdarg.h>
#include "CMoveHelperClient.h"

extern int (__cdecl *g_101e31a8)(char *, int, const char *, va_list);
extern int (__cdecl *g_101e3118)(int, const char *, ...);
extern int (__cdecl *g_101e3108)(const char *, ...);

// TARGET: vfunc15
void CMoveHelperClient::vfunc15(bool bDevMsg, const char *fmt, ...)
{
	char buf[0x2000];
	va_list args;
	va_start(args, fmt);
	g_101e31a8(buf, 0x2000, fmt, args);
	va_end(args);
	if (bDevMsg)
		g_101e3118(1, buf);
	else
		g_101e3108(buf);
}
// END FUNCTION

// FUNCTION: 0x1010f700 size=0x4c
#include "CMoveHelperClient.h"
#include <stdarg.h>
extern "C" __declspec(dllimport) int __cdecl Q_vsnprintf(char *, unsigned int, const char *, va_list);
struct EngV { void **vt; };
extern EngV *g_104a57d4;
void CMoveHelperClient::vfunc4(int idx, const char *fmt, ...)
{
	char msg[8192];
	va_list args;
	va_start(args, fmt);
	Q_vsnprintf(msg, sizeof(msg), fmt, args);
	va_end(args);
	((void (__cdecl *)(EngV *, int, char *))g_104a57d4->vt[60])(g_104a57d4, idx, msg);
}
// END FUNCTION

// FUNCTION: 0x1010f750 size=0xe
struct IV { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
 virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
 virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
 virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
 virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
 virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); };
extern IV *g_104a57d4;
struct CView { void sub_1010f750(); };
// TARGET: ?sub_1010f750@CView@@QAEXXZ
void CView::sub_1010f750() { g_104a57d4->v75(); }
// END FUNCTION

// FUNCTION: 0x1010f760 size=0xb
struct IMI { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); };
extern IMI *g_104a57f8;
struct CView { void sub_1010f760(); };
// TARGET: ?sub_1010f760@CView@@QAEXXZ
void CView::sub_1010f760() { g_104a57f8->v6(); }
// END FUNCTION

// FUNCTION: 0x1010f770 size=0xb
#include "CMoveHelperClient.h"
struct IView_104a57f8 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); };
extern IView_104a57f8 *g_104a57f8;
// TARGET: CMoveHelperClient::vfunc19
void CMoveHelperClient::vfunc19()
{
	g_104a57f8->v3();
}
// END FUNCTION

// FUNCTION: 0x1010f780 size=0x6a
#include "CMoveHelperClient.h"
#include "FileSystemViews.h"

extern "C" void *__cdecl malloc(unsigned int);

void *CMoveHelperClient::vfunc20(const char *name, int *pSize)
{
	int h = g_104a580c->vfunc0(name, "rb", 0);
	if ( h )
	{
		int size = g_104a580c->vfunc6(h);
		if ( pSize )
			*pSize = size;
		void *buf = malloc(size);
		g_104a580c->vfunc2(buf, size, h);
		g_104a580c->vfunc1(h);
		return buf;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1010f7f0 size=0xe
extern "C" void free(void *);
struct CView { void sub_1010f7f0(void *); };
// TARGET: ?sub_1010f7f0@CView@@QAEXPAX@Z
void CView::sub_1010f7f0(void *p) { free(p); }
// END FUNCTION

// FUNCTION: 0x1010f800 size=0x3
#include "CMoveHelperClient.h"

// TARGET: CMoveHelperClient::vfunc7
bool CMoveHelperClient::vfunc7()
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x1010f810 size=0x3
// TARGET: sub_1010f810
void __stdcall sub_1010f810(int)
{
}
// END FUNCTION

// FUNCTION: 0x1010f820 size=0x7
// TARGET: sub_1010f820
double __stdcall sub_1010f820(int x)
{
	return x;
}
// END FUNCTION

// FUNCTION: 0x1010f830 size=0x3d
struct G { int u0; void *p; int idx; };
extern G *g_102b8e9c;
struct H {
	unsigned long m;
	bool operator==(const H &o) const { return m == o.m; }
};
static inline H Cur()
{
	H r;
	if (g_102b8e9c->p)
		r.m = g_102b8e9c->idx << 13;
	else
		r.m = 0xFFFFFFFF;
	return r;
}
bool __stdcall sub_1010f830(const H *h)
{
	return *h == Cur();
}
// END FUNCTION
