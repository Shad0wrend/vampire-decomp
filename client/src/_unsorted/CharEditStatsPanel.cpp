// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017d6e0 size=0x4c
#include "CharEditStatsPanel.h"
extern int g_105fb6e4;
CharEditStatsPanel::~CharEditStatsPanel()
{
	sub_1017f640();
	g_105fb6e4 = 0;
	((CStatsSub1017f860 *)((char *)this + 0x1a4))->sub_1017f860();
	((CStatsSub1017f860 *)((char *)this + 0x158))->sub_1017f860();
	((CStatsSub1017f860 *)((char *)this + 0x10c))->sub_1017f860();
	((CStatsSub1017f860 *)((char *)this + 0xc0))->sub_1017f860();
}
// END FUNCTION

// FUNCTION: 0x1017d730 size=0x1e
#include "CharEditStatsPanel.h"

// VC6 writes CharEditStatsPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditStatsPanel *pcd_emit_1017d730(const CharEditStatsPanel &other) { return new CharEditStatsPanel(other); }

// TARGET: ??_GCharEditStatsPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10182330 size=0x21
#include "CharEditStatsPanel.h"
int sub_1016a6b0();
void CharEditStatsPanel::vfunc123()
{
	int n = sub_1016a6b0();
	vfunc33(n);
	sub_101aa0a0(1000);
}
// END FUNCTION

// FUNCTION: 0x10182360 size=0xc4
#include "CharEditStatsPanel.h"
typedef vgui2::Panel PanelT;
bool sub_101713e0();
// TARGET: ?vfunc21@CharEditStatsPanel@@UAEHH@Z
int CharEditStatsPanel::vfunc21(int bShow)
{
	((PanelT *)this)->sub_101a99f0(bShow);
	if ((char)bShow)
	{
		sub_10182460();
		if (sub_101713e0())
		{
			m_p2d8->vfunc21(1);
			m_p2bc->vfunc21(0);
			m_p2c0->vfunc21(0);
			m_p2c4->vfunc21(0);
			m_p2c8->vfunc21(0);
			return sub_1017f290();
		}
		m_p2d8->vfunc21(0);
		m_p2bc->vfunc21(1);
		m_p2c0->vfunc21(1);
		m_p2c4->vfunc21(1);
		m_p2c8->vfunc21(1);
		return sub_1017f290();
	}
	return sub_10182450();
}
// END FUNCTION

// FUNCTION: 0x10182440 size=0x1
#include "CharEditStatsPanel.h"
void CharEditStatsPanel::vfunc3()
{
}
// END FUNCTION

// FUNCTION: 0x101824d0 size=0x6
#include "CharEditStatsPanel.h"
namespace lifted {
extern char g_102d1750;
}
int CharEditStatsPanel::vfunc102()
{
    return (int)&lifted::g_102d1750;
}
// END FUNCTION
