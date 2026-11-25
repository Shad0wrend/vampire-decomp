// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10164c20 size=0x5
#include "CCenterStringPanel.h"
bool CCenterStringPanel::vfunc25(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10164c30 size=0x1e
#include "CCenterStringPanel.h"

// VC6 writes CCenterStringPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CCenterStringPanel *pcd_emit_10164c30(const CCenterStringPanel &other) { return new CCenterStringPanel(other); }

// TARGET: ??_GCCenterStringPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10164c60 size=0x22
#include "CCenterStringPanel.h"
namespace lifted {
extern char g_102cdb34;
struct C101ab490 { int sub_101ab490(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int); };
}
int CCenterStringPanel::vfunc74(int a0)
{
    ((lifted::C101ab490 *)this)->sub_101ab490(a0);
    *(int *)((char *)this + 0x58) = ((lifted::V *)a0)->f4((int)&lifted::g_102cdb34);
    return *(int *)((char *)this + 0x58);
}
// END FUNCTION

// FUNCTION: 0x10164dd0 size=0x2b
#include "CCenterStringPanel.h"
int CCenterStringPanel::vfunc108(int a0, int a1, int a2, int a3)
{
    *(int *)((char *)this + 0x470) = a0;
    *(int *)((char *)this + 0x474) = a1;
    *(int *)((char *)this + 0x478) = a2;
    *(int *)((char *)this + 0x47c) = a3;
    return a2;
}
// END FUNCTION

// FUNCTION: 0x10164e00 size=0xaa
#include "CCenterStringPanel.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

struct IA10164e00 { virtual void v0(); virtual bool v1(); char pad[0x28 - 4]; float m_f28; };
struct IB10164e00
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
	virtual float v39(int a);
};
extern IA10164e00 *g_105faa84;
extern IB10164e00 *g_104a57d4;
extern char *(__cdecl *g_101e3188)(char *, const char *, int);

struct View10164e00
{
	int vt;
	char pad[0x5c - 4];
	char m_szText[0x400];
	float m_f45c;
	float m_f460;
	int m_nLines;
};

void CCenterStringPanel::vfunc109(const char *fmt, ...)
{
	char buf[1024];
	va_list args;
	va_start(args, fmt);
	_vsnprintf(buf, sizeof(buf), fmt, args);
	View10164e00 *v = (View10164e00 *)this;
	g_101e3188(v->m_szText, buf, 1023);
	v->m_f460 = g_105faa84->v1() ? 0.0f : g_105faa84->m_f28;
	v->m_f45c = g_104a57d4->v39(0);
	v->m_nLines = 1;
	char *p = v->m_szText;
	char c = *p;
	while (c)
	{
		if (c == '\n')
			v->m_nLines++;
		c = *++p;
	}
}
// END FUNCTION

// FUNCTION: 0x10164eb0 size=0x3b
#include "CCenterStringPanel.h"
#include <stdarg.h>
void CCenterStringPanel::vfunc110(int a, int b, int c, int d, const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	vfunc108(a, b, c, d);
	vfunc109(fmt, args);
}
// END FUNCTION

// FUNCTION: 0x10164ef0 size=0xc
#include "CCenterStringPanel.h"
int CCenterStringPanel::vfunc111()
{
    *(char *)((char *)this + 0x5c) = 0;
    *(int *)((char *)this + 0x460) = 0;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10164f00 size=0x15
#include "CCenterStringPanel.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(int); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual int f107(); };
}
void CCenterStringPanel::vfunc2()
{
    ((lifted::V *)this)->f21(((lifted::V *)this)->f107());
}
// END FUNCTION
