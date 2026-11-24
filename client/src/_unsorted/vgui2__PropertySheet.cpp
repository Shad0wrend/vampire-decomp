// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c84a0 size=0x1e
#include "vgui2__PropertySheet.h"

// VC6 writes vgui2::PropertySheet's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::PropertySheet *pcd_emit_101c84a0(const vgui2::PropertySheet &other) { return new vgui2::PropertySheet(other); }

// TARGET: ??_GPropertySheet@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c8780 size=0x35
#include "vgui2__PropertySheet.h"
struct PSView { char pad[0x58]; int m_n; int m_unk5c; int *m_data; };
// TARGET: vgui2::PropertySheet::vfunc108
void vgui2::PropertySheet::vfunc108(int panel)
{
    PSView *v = (PSView *)this;
    int i;
    for (i = 0; i < v->m_n; i++) {
        if (v->m_data[i] == panel) {
            if (i >= 0)
                vfunc127(i);
            return;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101c87c0 size=0x16
#include "vgui2__PropertySheet.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
int vgui2::PropertySheet::vfunc109(int a0)
{
    *(int *)((char *)this + 0x78) = a0;
    return ((lifted::V *)this)->f57(0, 0);
}
// END FUNCTION

// FUNCTION: 0x101c87e0 size=0x19
#include "vgui2__PropertySheet.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
int vgui2::PropertySheet::vfunc110(int a0)
{
    *(int *)((char *)this + 0x80) = a0;
    return ((lifted::V *)this)->f57(0, 0);
}
// END FUNCTION

// FUNCTION: 0x101c8800 size=0x3b
#include "vgui2__PropertySheet.h"
extern "C" char *strcpy(char *, const char *);
#pragma intrinsic(strcpy)
struct SheetView { char pad[0x84]; int m84; char m88[0x20]; char ma8; };
// TARGET: vgui2::PropertySheet::vfunc111
void vgui2::PropertySheet::vfunc111(const char *s, int a, char flag)
{
	SheetView *v = (SheetView *)this;
	v->m84 = a;
	strcpy(v->m88, s);
	v->ma8 = flag;
	vfunc57(0, 0);
}
// END FUNCTION

// FUNCTION: 0x101c89f0 size=0x4
#include "vgui2__PropertySheet.h"
int vgui2::PropertySheet::vfunc112()
{
    return *(int *)((char *)this + 0x70);
}
// END FUNCTION

// FUNCTION: 0x101c8a00 size=0x4
#include "vgui2__PropertySheet.h"
int vgui2::PropertySheet::vfunc119()
{
    return *(int *)((char *)this + 0x74);
}
// END FUNCTION

// FUNCTION: 0x101c8a10 size=0x4
#include "vgui2__PropertySheet.h"
int vgui2::PropertySheet::vfunc123()
{
    return *(int *)((char *)this + 0x58);
}
// END FUNCTION

// FUNCTION: 0x101c8a20 size=0xb
#include "vgui2__PropertySheet.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual int f109(); };
}
int vgui2::PropertySheet::vfunc120()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x74)))->f109();
}
// END FUNCTION

// FUNCTION: 0x101c8aa0 size=0xf
#include "vgui2__PropertySheet.h"
// TARGET: vgui2::PropertySheet::vfunc15
int vgui2::PropertySheet::vfunc15(int x) { vgui2::Panel *p = *(vgui2::Panel **)((char *)this + 0x70); if (p) return p->vfunc15(x); }
// END FUNCTION

// FUNCTION: 0x101c8d70 size=0x12
#include "vgui2__PropertySheet.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual int f129(int, int); };
}
int vgui2::PropertySheet::vfunc124(int a0)
{
    return ((lifted::V *)this)->f129(a0, 0);
}
// END FUNCTION

// FUNCTION: 0x101c8d90 size=0x12
#include "vgui2__PropertySheet.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual int f129(int, int); };
}
int vgui2::PropertySheet::vfunc125(int a0)
{
    return ((lifted::V *)this)->f129(a0, 1);
}
// END FUNCTION

// FUNCTION: 0x101c93f0 size=0x39
#include "vgui2__PropertySheet.h"
struct KV23 { KV23 *sub_101b5670(const char *); };
void *sub_101b6840(int);
struct PSV {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
  virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
  virtual void v40(); virtual void v41(); virtual void v42();
  virtual int v43(KV23 *);
};
// TARGET: vgui2::PropertySheet::vfunc128
int vgui2::PropertySheet::vfunc128()
{
  KV23 *kv = (KV23 *)sub_101b6840(0x1c);
  KV23 *msg = kv ? kv->sub_101b5670("OpenContextMenu") : 0;
  return ((PSV *)this)->v43(msg);
}
// END FUNCTION

// FUNCTION: 0x101c9520 size=0x6
#include "vgui2__PropertySheet.h"
namespace lifted {
extern char g_102dacf0;
}
int vgui2::PropertySheet::vfunc102()
{
    return (int)&lifted::g_102dacf0;
}
// END FUNCTION
