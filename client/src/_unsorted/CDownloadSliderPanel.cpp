// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10165b00 size=0x1e
#include "CDownloadSliderPanel.h"

// VC6 writes CDownloadSliderPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CDownloadSliderPanel *pcd_emit_10165b00(const CDownloadSliderPanel &other) { return new CDownloadSliderPanel(other); }

// TARGET: ??_GCDownloadSliderPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10165b30 size=0x15
#include "CDownloadSliderPanel.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(int); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual int f107(); };
}
void CDownloadSliderPanel::vfunc2()
{
    ((lifted::V *)this)->f21(((lifted::V *)this)->f107());
}
// END FUNCTION

// FUNCTION: 0x10165b50 size=0x59
#include "CDownloadSliderPanel.h"

class IGlobalA
{
public:
	virtual void a0() = 0;
	virtual void a1() = 0;
	virtual void a2() = 0;
	virtual void a3() = 0;
	virtual void a4() = 0;
	virtual void a5() = 0;
	virtual void a6() = 0;
	virtual void a7() = 0;
	virtual void a8() = 0;
	virtual void a9() = 0;
	virtual void a10() = 0;
	virtual void a11() = 0;
	virtual void a12() = 0;
	virtual void a13() = 0;
	virtual void a14() = 0;
	virtual void a15() = 0;
	virtual void a16() = 0;
	virtual void a17() = 0;
	virtual void a18() = 0;
	virtual void a19() = 0;
	virtual void a20() = 0;
	virtual void a21() = 0;
	virtual void a22() = 0;
	virtual void a23() = 0;
	virtual void a24() = 0;
	virtual void a25() = 0;
	virtual void a26() = 0;
	virtual void a27() = 0;
	virtual void a28() = 0;
	virtual void a29() = 0;
	virtual void a30() = 0;
	virtual void a31() = 0;
	virtual void a32() = 0;
	virtual void a33() = 0;
	virtual void a34() = 0;
	virtual bool a35() = 0;
};

class IGlobalB
{
public:
	virtual void b0() = 0;
	virtual void b1() = 0;
	virtual void b2() = 0;
	virtual void b3() = 0;
	virtual void b4() = 0;
	virtual void b5() = 0;
	virtual void b6() = 0;
	virtual void b7() = 0;
	virtual void b8() = 0;
	virtual void b9() = 0;
	virtual void b10() = 0;
	virtual void b11() = 0;
	virtual void b12() = 0;
	virtual void b13() = 0;
	virtual void b14() = 0;
	virtual void b15() = 0;
	virtual void b16() = 0;
	virtual void b17() = 0;
	virtual void b18() = 0;
	virtual void b19() = 0;
	virtual void b20() = 0;
	virtual void b21() = 0;
	virtual void b22() = 0;
	virtual void b23() = 0;
	virtual void b24() = 0;
	virtual void b25() = 0;
	virtual void b26() = 0;
	virtual void b27() = 0;
	virtual void b28() = 0;
	virtual void b29() = 0;
	virtual void b30() = 0;
	virtual void b31() = 0;
	virtual void b32() = 0;
	virtual void b33() = 0;
	virtual void b34() = 0;
	virtual void b35() = 0;
	virtual void b36() = 0;
	virtual void b37() = 0;
	virtual void b38() = 0;
	virtual void b39() = 0;
	virtual void b40() = 0;
	virtual void b41() = 0;
	virtual void b42() = 0;
	virtual void b43() = 0;
	virtual void b44() = 0;
	virtual void b45() = 0;
	virtual void b46() = 0;
	virtual void b47() = 0;
	virtual void b48() = 0;
	virtual void b49() = 0;
	virtual void b50() = 0;
	virtual void b51() = 0;
	virtual void b52() = 0;
	virtual void b53() = 0;
	virtual void b54() = 0;
	virtual void b55() = 0;
	virtual void b56() = 0;
	virtual void b57() = 0;
	virtual int b58() = 0;
};

extern IGlobalA *g_104a57e4;
extern IGlobalB *g_104a57d4;

class CDownloadChild
{
public:
	virtual void c0() = 0;
	virtual bool c1() = 0;
	char m_pad4[0x2c - 4];
	int m_i2c;
};

class CDownloadPanel
{
public:
	virtual void p0() = 0;
	virtual void p1() = 0;
	virtual void p2() = 0;
	virtual void p3() = 0;
	virtual void p4(int) = 0;
	CDownloadChild *m_pChild;
};

struct CDownloadSliderLayout
{
	char m_pad00[0x58];
	CDownloadPanel *m_pPanel;
};

// TARGET: CDownloadSliderPanel::vfunc107
bool CDownloadSliderPanel::vfunc107()
{
	CDownloadSliderLayout *s = (CDownloadSliderLayout *)this;
	CDownloadPanel *p = s->m_pPanel;
	if (!p)
		return false;
	if (!p->m_pChild->c1() && p->m_pChild->m_i2c < 0)
		return false;
	if (g_104a57e4->a35() || g_104a57d4->b58() == 0)
	{
		s->m_pPanel->p4(-1);
		return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10165bb0 size=0x1
#include "CDownloadSliderPanel.h"
void CDownloadSliderPanel::vfunc108()
{
}
// END FUNCTION
