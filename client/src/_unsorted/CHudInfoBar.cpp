// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10056130 size=0x92
#include "CHudInfoBar.h"
extern CHudInfoBar *g_103eea74;
// TARGET: ??0CHudInfoBar@@QAE@H@Z
CHudInfoBar::CHudInfoBar(int parent) : CManagedHudElement(parent, (int)"InfoBar")
{
	m_unk1a4 = 0;
	sub_100565b0();
	g_103eea74 = this;
	vfunc63(0);
	vfunc64(1);
	m_unk178 = 0;
}
// END FUNCTION

// FUNCTION: 0x100561d0 size=0x1e
#include "CHudInfoBar.h"

// VC6 writes CHudInfoBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudInfoBar *pcd_emit_100561d0(const CHudInfoBar &other) { return new CHudInfoBar(other); }

// TARGET: ??_GCHudInfoBar@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10056300 size=0xa3
#include "CHudInfoBar.h"
#include "utlvector.h"

struct HudInfoBarEntry { char m_data[0x88]; };

// TARGET: CHudInfoBar::vfunc112
void CHudInfoBar::vfunc112()
{
    m_unk178 = 1;
    CUtlVector<HudInfoBarEntry> *v1 = (CUtlVector<HudInfoBarEntry> *)((char *)this + 0x1ac);
    while (m_unk1b8.v > 2)
        v1->Remove(0);
    CUtlVector<HudInfoBarEntry> *v2 = (CUtlVector<HudInfoBarEntry> *)((char *)this + 0x1c0);
    while (m_unk1cc.v > 2)
        v2->Remove(0);
}
// END FUNCTION

// FUNCTION: 0x100563b0 size=0xa3
#include "CHudInfoBar.h"
#include "utlvector.h"

struct HudInfoBarEntry { char m_data[0x88]; };

// TARGET: CHudInfoBar::vfunc113
void CHudInfoBar::vfunc113()
{
    m_unk178 = 1;
    CUtlVector<HudInfoBarEntry> *v1 = (CUtlVector<HudInfoBarEntry> *)((char *)this + 0x1ac);
    while (m_unk1b8.v > 2)
        v1->Remove(0);
    CUtlVector<HudInfoBarEntry> *v2 = (CUtlVector<HudInfoBarEntry> *)((char *)this + 0x1c0);
    while (m_unk1cc.v > 2)
        v2->Remove(0);
}
// END FUNCTION

// FUNCTION: 0x100568b0 size=0x5d
#include "CHudInfoBar.h"

struct SubView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual bool v6();
};

struct CreditsView
{
	char m_pad170[0x170];
	SubView m_sub;
};

struct InfoBarView
{
	char m_pad1b8[0x1b8];
	int m_n1b8;
	bool sub_10163bf0();
};

struct IUnkG286860
{
	virtual void v0();
	virtual void v1();
	virtual bool Check(int);
};

extern int sub_1004dc30();
extern IUnkG286860 *g_10286860;

bool CHudInfoBar::vfunc107()
{
	InfoBarView *v = (InfoBarView *)this;
	if (!v->m_n1b8)
		return false;
	if (sub_1004dc30() && ((CreditsView *)sub_1004dc30())->m_sub.v6())
		return false;
	return v->sub_10163bf0() && !g_10286860->Check(0);
}
// END FUNCTION

// FUNCTION: 0x10056b20 size=0x14
#include "CHudInfoBar.h"
namespace lifted {
struct C10056bc0 { int sub_10056bc0(int, int, int); };
}
int CHudInfoBar::vfunc116(int a0, int a1)
{
    return ((lifted::C10056bc0 *)this)->sub_10056bc0(a0, a1, 0);
}
// END FUNCTION

// FUNCTION: 0x10056b40 size=0x14
#include "CHudInfoBar.h"
namespace lifted {
struct C10056bc0 { int sub_10056bc0(int, int, int); };
}
int CHudInfoBar::vfunc115(int a0, int a1)
{
    return ((lifted::C10056bc0 *)this)->sub_10056bc0(a0, 0, a1);
}
// END FUNCTION

// FUNCTION: 0x10056b60 size=0x54
#include "CHudInfoBar.h"

int sub_10114660(int, int);
int sub_10114690();
int sub_101146c0();
char *sub_101146e0();

// TARGET: CHudInfoBar::vfunc114
int CHudInfoBar::vfunc114(int a, int b, int c)
{
	sub_10114660(c, b);
	int x = sub_10114690();
	int y = sub_10114690();
	if (!x)
	{
		int id = sub_101146c0();
		return sub_10056bc0(y, id, 0);
	}
	return sub_10056bc0(y, 0, sub_101146e0());
}
// END FUNCTION
