// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10050160 size=0x9e
#include "CFeedBar.h"
CFeedBar::CFeedBar(int a) : CManagedHudElement(a, (int)"FeedBar")
{
	sub_10050270();
	vfunc63(0);
	sub_101a9890(m_unk178, m_unk17c);
	sub_101a98f0(m_unk18c, m_unk190);
	m_b1a4 = 0;
	m_b1a6 = 0;
	m_b1a5 = 0;
	m_unk1a0 = 0xff;
	m_pChild2 = 0;
	m_pChild1 = 0;
	sub_100503d0(15, 0);
	sub_10050530();
}
// END FUNCTION

// FUNCTION: 0x10050200 size=0x1e
#include "CFeedBar.h"

// VC6 writes CFeedBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CFeedBar *pcd_emit_10050200(const CFeedBar &other) { return new CFeedBar(other); }

// TARGET: ??_GCFeedBar@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10050220 size=0x42
#include "CFeedBar.h"
// TARGET: ??1CFeedBar@@UAE@XZ
CFeedBar::~CFeedBar()
{
	sub_101a9ff0(0);
	delete m_pChild1;
	delete m_pChild2;
}
// END FUNCTION

// FUNCTION: 0x10050500 size=0x23
#include "CFeedBar.h"
bool sub_10163bf0();
struct IUnkG286860 { virtual void v0(); virtual void v1(); virtual bool Check(int); };
extern IUnkG286860 *g_10286860;
bool CFeedBar::vfunc107()
{
	return sub_10163bf0() && !g_10286860->Check(0);
}
// END FUNCTION

// FUNCTION: 0x10050530 size=0x1c
struct S0530 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(int a); };
struct V0530 { char pad[0x170]; S0530 sub; char pad2[0x1b4 - 0x174]; int flag; void sub_10050530(); };
void V0530::sub_10050530() { flag = 0; sub.v5(0); }
// END FUNCTION

// FUNCTION: 0x10050550 size=0x8
#include "CFeedBar.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual int f112(); };
}
void CFeedBar::vfunc113()
{
    ((lifted::V *)this)->f112();
}
// END FUNCTION

// FUNCTION: 0x10050920 size=0x1
#include "CFeedBar.h"
void CFeedBar::vfunc97()
{
}
// END FUNCTION
