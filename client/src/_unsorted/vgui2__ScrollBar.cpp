// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101beee0 size=0x1e
#include "vgui2__ScrollBar.h"

// VC6 writes vgui2::ScrollBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ScrollBar *pcd_emit_101beee0(const vgui2::ScrollBar &other) { return new vgui2::ScrollBar(other); }

// TARGET: ??_GScrollBar@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101bef00 size=0x31
#include "vgui2__ScrollBar.h"
struct KVView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual int *v6(int *, const char *);
};
// TARGET: ?vfunc74@ScrollBar@vgui2@@UAEHH@Z
int vgui2::ScrollBar::vfunc74(int a)
{
	Panel::vfunc74(a);
	KVView *kv = (KVView *)a;
	int c;
	return vfunc50(*kv->v6(&c, "ScrollBar/BgColor"));
}
// END FUNCTION

// FUNCTION: 0x101bef40 size=0x1a
#include "vgui2__ScrollBar.h"
struct SBView_101bef40 { char pad[0x60]; vgui2::Panel *m_p; };
// TARGET: vgui2::ScrollBar::vfunc62
bool vgui2::ScrollBar::vfunc62(char c)
{
	vgui2::Panel *p = ((SBView_101bef40 *)this)->m_p;
	if (p)
		return p->vfunc62(c);
}
// END FUNCTION

// FUNCTION: 0x101bef60 size=0x1a
#include "vgui2__ScrollBar.h"
struct SBView_101bef60 { char pad[0x60]; vgui2::Panel *m_p; };
// TARGET: vgui2::ScrollBar::vfunc63
bool vgui2::ScrollBar::vfunc63(char c)
{
	vgui2::Panel *p = ((SBView_101bef60 *)this)->m_p;
	if (p)
		return p->vfunc63(c);
}
// END FUNCTION

// FUNCTION: 0x101bef80 size=0x1a
#include "vgui2__ScrollBar.h"
struct SBView_101bef80 { char pad[0x60]; vgui2::Panel *m_p; };
// TARGET: vgui2::ScrollBar::vfunc64
bool vgui2::ScrollBar::vfunc64(char c)
{
	vgui2::Panel *p = ((SBView_101bef80 *)this)->m_p;
	if (p)
		return p->vfunc64(c);
}
// END FUNCTION

// FUNCTION: 0x101befa0 size=0xdb
#include "vgui2__ScrollBar.h"

struct ChildV
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
	virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
	virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
	virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
	virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
	virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
	virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
	virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
	virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
	virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
	virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
	virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83();
	virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87();
	virtual void v88(); virtual void v89(); virtual void v90(); virtual void v91();
	virtual void v92(); virtual void v93(); virtual void v94(); virtual void v95();
	virtual void v96(); virtual void v97(); virtual void v98(); virtual void v99();
	virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103();
	virtual void v104(); virtual void v105(); virtual void v106(); virtual void v107();
	virtual void v108();
	virtual bool v109();
	void sub_101a9950(int, int, int, int);
};

void vgui2::ScrollBar::vfunc101()
{
	if ( *(void **)((char *)this + 0x60) )
	{
		int wide, tall;
		this->vfunc65(wide, tall);

		if ( ((ChildV *)*(void **)((char *)this + 0x60))->v109() )
		{
			((ChildV *)*(void **)((char *)this + 0x60))->sub_101a9950(0, wide, wide, tall - 2 * wide + 1);
			((ChildV *)*(void **)((char *)this + 0x58))->sub_101a9950(0, 0, wide - 1, wide);
			((ChildV *)*(void **)((char *)this + 0x5c))->sub_101a9950(0, tall - wide, wide - 1, wide);
		}
		else
		{
			((ChildV *)*(void **)((char *)this + 0x60))->sub_101a9950(tall, -1, wide - 2 * tall + 1, tall + 1);
			((ChildV *)*(void **)((char *)this + 0x58))->sub_101a9950(0, 0, tall, tall);
			((ChildV *)*(void **)((char *)this + 0x5c))->sub_101a9950(wide - tall, 0, tall, tall);
		}
	}
	this->Panel::vfunc101();
}
// END FUNCTION

// FUNCTION: 0x101bf080 size=0xb
#include "vgui2__ScrollBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual int f107(); };
}
int vgui2::ScrollBar::vfunc107()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x60)))->f107();
}
// END FUNCTION

// FUNCTION: 0x101bf090 size=0xb
#include "vgui2__ScrollBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual int f108(); };
}
int vgui2::ScrollBar::vfunc108()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x60)))->f108();
}
// END FUNCTION

// FUNCTION: 0x101bf0a0 size=0xb
#include "vgui2__ScrollBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual int f110(); };
}
int vgui2::ScrollBar::vfunc109()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x60)))->f110();
}
// END FUNCTION

// FUNCTION: 0x101bf0b0 size=0x47
#include "vgui2__ScrollBar.h"
struct KV101b56c0 { KV101b56c0 *sub_101b56c0(const char *, const char *, int); };
void *sub_101b6840(int);
// TARGET: ?vfunc120@ScrollBar@vgui2@@UAEHH@Z
int vgui2::ScrollBar::vfunc120(int a)
{
	KV101b56c0 *kv = (KV101b56c0 *)sub_101b6840(0x1c);
	return vfunc43(kv ? kv->sub_101b56c0("ScrollBarSliderMoved", "position", a) : 0);
}
// END FUNCTION

// FUNCTION: 0x101bf100 size=0x8
#include "vgui2__ScrollBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual int f120(); };
}
int vgui2::ScrollBar::vfunc121()
{
    return ((lifted::V *)this)->f120();
}
// END FUNCTION

// FUNCTION: 0x101bf110 size=0xb
#include "vgui2__ScrollBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual int f109(); };
}
int vgui2::ScrollBar::vfunc112()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x60)))->f109();
}
// END FUNCTION

// FUNCTION: 0x101bf120 size=0xb
#include "vgui2__ScrollBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual int f116(); };
}
int vgui2::ScrollBar::vfunc113()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x60)))->f116();
}
// END FUNCTION

// FUNCTION: 0x101bf130 size=0x78
#include "vgui2__ScrollBar.h"
#include "vgui2__Button.h"
#include "vgui2__KeyValues.h"

void vgui2::ScrollBar::vfunc114(vgui2::Button *pButton, int index)
{
	if (*(vgui2::Button **)((char *)this + index * 4 + 0x58))
		(*(vgui2::Button **)((char *)this + index * 4 + 0x58))->vfunc32(0);
	*(vgui2::Button **)((char *)this + index * 4 + 0x58) = pButton;
	(*(vgui2::Button **)((char *)this + index * 4 + 0x58))->vfunc33((int)this);
	(*(vgui2::Button **)((char *)this + index * 4 + 0x58))->vfunc41((int)this);
	(*(vgui2::Button **)((char *)this + index * 4 + 0x58))->vfunc161((int)new vgui2::KeyValues("ScrollButtonPressed", "index", index));
	vfunc119();
}
// END FUNCTION

// FUNCTION: 0x101bf1b0 size=0xb
#include "vgui2__ScrollBar.h"
// TARGET: vgui2::ScrollBar::vfunc115
int vgui2::ScrollBar::vfunc115(int i) { return ((int *)this)[0x16 + i]; }
// END FUNCTION

// FUNCTION: 0x101bf1c0 size=0x3e
#include "vgui2__ScrollBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual int f32(int); virtual int f33(int); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual int f41(int); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual int f119(); };
}
int vgui2::ScrollBar::vfunc116(int a0)
{
    if ((*(int *)((char *)this + 0x60)) != 0) {
        ((lifted::V *)(*(int *)((char *)this + 0x60)))->f32(0);
    }
    *(int *)((char *)this + 0x60) = a0;
    ((lifted::V *)a0)->f41((int)this);
    ((lifted::V *)(*(int *)((char *)this + 0x60)))->f33((int)this);
    return ((lifted::V *)this)->f119();
}
// END FUNCTION

// FUNCTION: 0x101bf200 size=0x4
#include "vgui2__ScrollBar.h"
int vgui2::ScrollBar::vfunc117()
{
    return *(int *)((char *)this + 0x60);
}
// END FUNCTION

// FUNCTION: 0x101bf210 size=0x7f
#include "vgui2__ScrollBar.h"
#include "vgui2__Button.h"
struct ISys4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual int GetTime(); };
ISys4 *sub_101ac8e0();
void vgui2::ScrollBar::vfunc96()
{
	int dir;
	if ((*(vgui2::Button **)((char *)this + 0x58))->vfunc140()) {
		dir = -1;
	} else if ((*(vgui2::Button **)((char *)this + 0x5c))->vfunc140()) {
		dir = 1;
	} else {
		int t = sub_101ac8e0()->GetTime() + 400;
		*(bool *)((char *)this + 0x6c) = true;
		*(int *)((char *)this + 0x68) = t;
		return;
	}
	vfunc122(dir);
	if (*(int *)((char *)this + 0x68) < sub_101ac8e0()->GetTime()) {
		int t = sub_101ac8e0()->GetTime() + 50;
		*(bool *)((char *)this + 0x6c) = true;
		*(int *)((char *)this + 0x68) = t;
	} else {
		*(bool *)((char *)this + 0x6c) = false;
	}
}
// END FUNCTION

// FUNCTION: 0x101bf290 size=0x3e
#include "vgui2__ScrollBar.h"
struct ISliderV {
	virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9();
	virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
	virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29();
	virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39();
	virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49();
	virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59();
	virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63(); virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67(); virtual void p68(); virtual void p69();
	virtual void p70(); virtual void p71(); virtual void p72(); virtual void p73(); virtual void p74(); virtual void p75(); virtual void p76(); virtual void p77(); virtual void p78(); virtual void p79();
	virtual void p80(); virtual void p81(); virtual void p82(); virtual void p83(); virtual void p84(); virtual void p85(); virtual void p86(); virtual void p87(); virtual void p88(); virtual void p89();
	virtual void p90(); virtual void p91(); virtual void p92(); virtual void p93(); virtual void p94(); virtual void p95(); virtual void p96(); virtual void p97(); virtual void p98(); virtual void p99();
	virtual void p100(); virtual void p101(); virtual void p102(); virtual void p103(); virtual void p104(); virtual void p105(); virtual void p106();
	virtual void SetValue(int v);
	virtual int GetValue();
};
void vgui2::ScrollBar::vfunc122(int a)
{
	if (*(char *)((char *)this + 0x6c)) {
		ISliderV *s = *(ISliderV **)((char *)this + 0x60);
		int v = s->GetValue() + *(int *)((char *)this + 0x64) * a;
		(*(ISliderV **)((char *)this + 0x60))->SetValue(v);
		vfunc120(v);
	}
}
// END FUNCTION

// FUNCTION: 0x101bf2d0 size=0x2b
#include "vgui2__ScrollBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual int f57(int, int); };
}
void vgui2::ScrollBar::vfunc11(int a0, int a1)
{
    a1 = 0;
    a0 = 0;
    ((lifted::V *)this)->f57(0, 0);
    ((lifted::V *)(*(int *)((char *)this + 0x60)))->f57(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x101bf300 size=0xa
#include "vgui2__ScrollBar.h"
int vgui2::ScrollBar::vfunc118(int a0)
{
    *(int *)((char *)this + 0x64) = a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101bf310 size=0xb
#include "vgui2__ScrollBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual int f112(); };
}
int vgui2::ScrollBar::vfunc110()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x60)))->f112();
}
// END FUNCTION

// FUNCTION: 0x101bf320 size=0xb
#include "vgui2__ScrollBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual int f113(); };
}
int vgui2::ScrollBar::vfunc111()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x60)))->f113();
}
// END FUNCTION

// FUNCTION: 0x101bf330 size=0x67
#include "vgui2__ScrollBar.h"
#include "vgui2__Panel.h"

class PanelBoolView
{
public:
	virtual void u00(); virtual void u01(); virtual void u02(); virtual void u03();
	virtual void u04(); virtual void u05(); virtual void u06(); virtual void u07();
	virtual void u08(); virtual void u09(); virtual void u10(); virtual void u11();
	virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15();
	virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19();
	virtual void u20(); virtual void u21();
	virtual bool vfunc22();
	int sub_101ab1a0();
	int sub_101ab130();
};

class ChildView : public vgui2::Panel
{
public:
	virtual void c107();
	virtual void c108();
	virtual bool vfunc109();
	virtual void c110();
	virtual void c111();
	virtual void c112();
	virtual void c113();
	virtual void c114();
	virtual void c115();
	virtual void c116();
	virtual void vfunc117(int);
};

struct SBView
{
	char m_pad58[0x58];
	PanelBoolView *m_pButtons[2];
	ChildView *m_pChild;
};

void vgui2::ScrollBar::vfunc119()
{
	SBView *v = (SBView *)this;
	if ( v->m_pChild )
	{
		int sum = 0;
		for ( int i = 0; i < 2; i++ )
		{
			if ( v->m_pButtons[i] && v->m_pButtons[i]->vfunc22() )
			{
				if ( v->m_pChild->vfunc109() )
					sum += v->m_pButtons[i]->sub_101ab1a0();
				else
					sum += v->m_pButtons[i]->sub_101ab130();
			}
		}
		v->m_pChild->vfunc117( sum );
	}
}
// END FUNCTION

// FUNCTION: 0x101bf410 size=0x6
#include "vgui2__ScrollBar.h"
namespace lifted {
extern char g_102d9788;
}
int vgui2::ScrollBar::vfunc102()
{
    return (int)&lifted::g_102d9788;
}
// END FUNCTION
