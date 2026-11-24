// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016a760 size=0x5
#include "CTextMessagePanel.h"
int CTextMessagePanel::vfunc7(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1016a770 size=0x1e
#include "CTextMessagePanel.h"

// VC6 writes CTextMessagePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTextMessagePanel *pcd_emit_1016a770(const CTextMessagePanel &other) { return new CTextMessagePanel(other); }

// TARGET: ??_GCTextMessagePanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1016a8c0 size=0x20
#include "CTextMessagePanel.h"
namespace lifted {
int sub_1016a870();
}
int CTextMessagePanel::vfunc107(int a0, int a1)
{
    int t0 = lifted::sub_1016a870();
    if (t0 != 0) {
        *(int *)((char *)t0) = 1;
        *(int *)((char *)t0 + 8) = a0;
        *(int *)((char *)t0 + 0xc) = a1;
    }
    return t0;
}
// END FUNCTION

// FUNCTION: 0x1016a8e0 size=0x35
#include "CTextMessagePanel.h"
namespace lifted {
int sub_1016a870();
}
int CTextMessagePanel::vfunc108(int a0, int a1, int a2, int a3, char a4)
{
    int t0 = lifted::sub_1016a870();
    if (t0 != 0) {
        *(int *)((char *)t0 + 0x10) = a0;
        *(int *)((char *)t0 + 0x14) = a1;
        *(int *)((char *)t0 + 0x18) = a2;
        *(int *)((char *)t0) = 2;
        *(int *)((char *)t0 + 0x1c) = a3;
        *(char *)((char *)t0 + 0x20) = a4;
    }
    return t0;
}
// END FUNCTION

// FUNCTION: 0x1016a920 size=0x3d
#include "CTextMessagePanel.h"
struct GObj;
struct GTab { void *f[15]; int (__cdecl *f15)(GObj *, int, int); };
struct GObj { GTab *tab; };
struct IObjB { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62(); virtual int f63(int); };
extern GObj *g_104a5820;
IObjB *sub_101ac8d0();
void CTextMessagePanel::vfunc109(int *a1, int *a2, int a3)
{
	*a1 = g_104a5820->tab->f15(g_104a5820, *(int *)((char *)this + 0x58), a3);
	*a2 = sub_101ac8d0()->f63(*(int *)((char *)this + 0x58));
}
// END FUNCTION

// FUNCTION: 0x1016a960 size=0x23
#include "CTextMessagePanel.h"
namespace lifted {
int sub_1016a870();
}
int CTextMessagePanel::vfunc110(int a0)
{
    *(int *)((char *)this + 0x58) = a0;
    int t0 = lifted::sub_1016a870();
    if (t0 != 0) {
        *(int *)((char *)t0) = 3;
        *(int *)((char *)t0 + 0x24) = *(int *)((char *)this + 0x58);
    }
    return t0;
}
// END FUNCTION

// FUNCTION: 0x1016a990 size=0xd
#include "CTextMessagePanel.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual int f110(int); };
}
int CTextMessagePanel::vfunc111()
{
    return ((lifted::V *)this)->f110(*(int *)((char *)this + 0x5c));
}
// END FUNCTION

// FUNCTION: 0x1016a9a0 size=0x15
#include "CTextMessagePanel.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(int); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual int f112(); };
}
void CTextMessagePanel::vfunc2()
{
    ((lifted::V *)this)->f21(((lifted::V *)this)->f112());
}
// END FUNCTION

// FUNCTION: 0x1016a9c0 size=0xc
struct V_1016a9c0 { int m_unk[0x14060 / 4]; int m_n14060; };
// TARGET: sub_1016a9c0
bool __fastcall sub_1016a9c0(V_1016a9c0 *self)
{
	return self->m_n14060 ? true : false;
}
// END FUNCTION
