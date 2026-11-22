// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101acd90 size=0x1e
#include "vgui2__TextEntry.h"

// VC6 writes vgui2::TextEntry's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TextEntry *pcd_emit_101acd90() { return new vgui2::TextEntry; }

// TARGET: ??_GTextEntry@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101ace00 size=0xf9
struct Color {
	int c;
	Color() {}
};
struct IBorder;
struct IScheme {
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual IBorder *GetBorder(const char *name);
	virtual void v4();
	virtual Color GetColor(const char *name);
	virtual Color GetColor(const char *name, Color def);
};
struct TEV {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void SetBgColor(Color c);
	virtual void SetFgColor(Color c);
	virtual void v52();
	virtual Color GetFgColor();
	virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void SetBorder(IBorder *b);
	char pad[0xb8 - 4];
	Color m_cursor;
	Color m_disFg;
	Color m_disBg;
	Color m_selBg;
	Color m_selFg;
	void sub_101ab490(IScheme *);
	void sub_101ace00(IScheme *s);
};
// TARGET: TEV::sub_101ace00
void TEV::sub_101ace00(IScheme *s)
{
	sub_101ab490(s);
	SetFgColor(s->GetColor("WindowFgColor"));
	SetBgColor(s->GetColor("WindowBgColor"));
	m_cursor = s->GetColor("TextCursorColor");
	m_disFg = s->GetColor("WindowDisabledFgColor");
	m_disBg = s->GetColor("WindowDisabledBgColor");
	m_selFg = s->GetColor("SelectionFgColor", GetFgColor());
	m_selBg = s->GetColor("SelectionBgColor");
	SetBorder(s->GetBorder("ButtonDepressedBorder"));
}
// END FUNCTION

// FUNCTION: 0x101acf00 size=0xd
#include "vgui2__TextEntry.h"
int vgui2::TextEntry::vfunc137(int a0)
{
    *(int *)((char *)this + 0xc0) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101aef10 size=0xd
#include "vgui2__TextEntry.h"
bool vgui2::TextEntry::vfunc138(char a0)
{
    *(char *)((char *)this + 0xb1) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101aef20 size=0xd
#include "vgui2__TextEntry.h"
bool vgui2::TextEntry::vfunc141(char a0)
{
    *(char *)((char *)this + 0xf4) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101aefc0 size=0xd
#include "vgui2__TextEntry.h"
bool vgui2::TextEntry::vfunc139(char a0)
{
    *(char *)((char *)this + 0x8b) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101aefd0 size=0xd
#include "vgui2__TextEntry.h"
bool vgui2::TextEntry::vfunc134(char a0)
{
    *(char *)((char *)this + 0x8a) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101af110 size=0x7
#include "vgui2__TextEntry.h"
bool vgui2::TextEntry::vfunc135()
{
    return *(bool *)((char *)this + 0x8a);
}
// END FUNCTION

// FUNCTION: 0x101af140 size=0x8
#include "vgui2__TextEntry.h"
void vgui2::TextEntry::vfunc85()
{
    *(char *)((char *)this + 0x8d) = 0;
}
// END FUNCTION

// FUNCTION: 0x101af3c0 size=0x8
#include "vgui2__TextEntry.h"
void vgui2::TextEntry::vfunc79()
{
    *(char *)((char *)this + 0x8c) = 0;
}
// END FUNCTION

// FUNCTION: 0x101afac0 size=0xd
#include "vgui2__TextEntry.h"
int vgui2::TextEntry::vfunc143(int a0)
{
    *(int *)((char *)this + 0xac) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101afad0 size=0xd
#include "vgui2__TextEntry.h"
bool vgui2::TextEntry::vfunc144(char a0)
{
    *(char *)((char *)this + 0xf5) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101b1410 size=0xc
#include "vgui2__TextEntry.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(); };
}
int vgui2::TextEntry::vfunc168()
{
    *(char *)((char *)this + 0x100) = 1;
    return ((lifted::V *)this)->f6();
}
// END FUNCTION

// FUNCTION: 0x101b14c0 size=0x8
#include "vgui2__TextEntry.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual int f107(); };
}
void vgui2::TextEntry::vfunc167()
{
    ((lifted::V *)this)->f107();
}
// END FUNCTION

// FUNCTION: 0x101b16b0 size=0x23
#include "vgui2__TextEntry.h"
namespace lifted {
extern char g_102d8820;
extern char g_10678e00;
int sub_101ab860();
int sub_101d3192(int, int, int, int);
}
int vgui2::TextEntry::vfunc77()
{
    lifted::sub_101d3192((int)&lifted::g_10678e00, 0x400, (int)&lifted::g_102d8820, lifted::sub_101ab860());
    return (int)&lifted::g_10678e00;
}
// END FUNCTION

// FUNCTION: 0x101b1a20 size=0x1e
#include "vgui2__TextEntry.h"
int vgui2::TextEntry::vfunc151(int a0, int a1)
{
    *(char *)((char *)this + 0x11a) = 1;
    *(int *)((char *)this + 0x11c) = a0;
    *(int *)((char *)this + 0x120) = a1;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b1c60 size=0x6
#include "vgui2__TextEntry.h"
namespace lifted {
extern char g_102d8650;
}
int vgui2::TextEntry::vfunc102()
{
    return (int)&lifted::g_102d8650;
}
// END FUNCTION
