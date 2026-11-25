// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10165ee0 size=0xc4
#include "CFPSPanel.h"

int sub_100cd100();
int sub_101ac8d0();
int sub_101ac8f0();

struct PanelXD
{
	void sub_101a9890(int, int);
	void sub_101a98f0(int, int);
	void sub_101a99f0(int);
	void sub_101aaad0(int);
	void sub_101ab2a0(int);
	void sub_101ab060(int);
};

struct PV
{
	int sub_101ab130();
};

struct MgrS
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
	virtual void v60(); virtual void v61(); virtual void v62();
	virtual int vfunc63(int);
};

struct MgrViewD
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17();
	virtual void v18(int, int);
};

struct Color4D
{
	unsigned char r, g, b, a;
	Color4D(unsigned char R, unsigned char G, unsigned char B, unsigned char A) { r = R; g = G; b = B; a = A; }
};

CFPSPanel::CFPSPanel(vgui2::Panel *parent)
	: vgui2::Panel(parent, "CFPSPanel")
{
	double flScaled = sub_100cd100() * 0.0009765625;
	int nWidth = (int)(flScaled * 250.0);

	((PanelXD *)this)->sub_101a9890(((PV *)(void *)parent)->sub_101ab130() - nWidth, 0);
	((PanelXD *)this)->sub_101a99f0(0);
	((PanelXD *)this)->sub_101aaad0(0);

	Color4D c(0, 0, 0, 0xff);
	*(int *)((char *)this + 0x58) = 0;
	((PanelXD *)this)->sub_101ab2a0(*(int *)&c);
	((PanelXD *)this)->sub_101ab060(0);

	int nHeight = ((MgrS *)(void *)sub_101ac8d0())->vfunc63(*(int *)((char *)this + 0x58)) + 10;

	((PanelXD *)this)->sub_101a98f0(nWidth, nHeight);

	int vp = *(int *)((char *)this + 4);
	((MgrViewD *)(void *)sub_101ac8f0())->v18(vp, 250);
}
// END FUNCTION

// FUNCTION: 0x10165fb0 size=0x1e
#include "CFPSPanel.h"

// VC6 writes CFPSPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFPSPanel *pcd_emit_10165fb0(const CFPSPanel &other) { return new CFPSPanel(other); }

// TARGET: ??_GCFPSPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10165fe0 size=0x22
#include "CFPSPanel.h"
namespace lifted {
extern char g_102862f0;
struct C101ab490 { int sub_101ab490(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int); };
}
int CFPSPanel::vfunc74(int a0)
{
    ((lifted::C101ab490 *)this)->sub_101ab490(a0);
    *(int *)((char *)this + 0x58) = ((lifted::V *)a0)->f4((int)&lifted::g_102862f0);
    return *(int *)((char *)this + 0x58);
}
// END FUNCTION

// FUNCTION: 0x10166010 size=0x15
#include "CFPSPanel.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(int); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual int f107(); };
}
void CFPSPanel::vfunc2()
{
    ((lifted::V *)this)->f21(((lifted::V *)this)->f107());
}
// END FUNCTION
