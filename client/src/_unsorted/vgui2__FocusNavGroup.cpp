// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c2df0 size=0x31
#include "vgui2__FocusNavGroup.h"
// TARGET: vgui2::FocusNavGroup::FocusNavGroup
vgui2::FocusNavGroup::FocusNavGroup(vgui2::Panel *panel) : m_unk4(-1), m_pPanel(panel)
{
	m_hCurrent.sub_101ac6b0(0);
	m_bFlag = false;
}
// END FUNCTION

// FUNCTION: 0x101c3100 size=0xa
#include "vgui2__FocusNavGroup.h"
bool vgui2::FocusNavGroup::vfunc8(char a0)
{
    *(char *)((char *)this + 0x10) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101c31f0 size=0x8
#include "vgui2__FocusNavGroup.h"
namespace lifted {
struct C101ac670 { int sub_101ac670(); };
}
int vgui2::FocusNavGroup::vfunc2()
{
    return ((lifted::C101ac670 *)((int)this + 4))->sub_101ac670();
}
// END FUNCTION

// FUNCTION: 0x101c3200 size=0x4d
#include "vgui2__Panel.h"
#include "vgui2__FocusNavGroup.h"

int vgui2::FocusNavGroup::vfunc3(int arg)
{
	for (int i = 0; i < this->m_pPanel->vfunc36(); i++)
	{
		int r = this->m_pPanel->vfunc37(i)->vfunc72(arg);
		if (r)
			return r;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101c32a0 size=0x8
#include "vgui2__FocusNavGroup.h"
namespace lifted {
struct C101ac670 { int sub_101ac670(); };
}
int vgui2::FocusNavGroup::vfunc6()
{
    return ((lifted::C101ac670 *)((int)this + 0xc))->sub_101ac670();
}
// END FUNCTION

// FUNCTION: 0x101c32b0 size=0x8
#include "vgui2__FocusNavGroup.h"
namespace lifted {
struct C101ac6b0 { int sub_101ac6b0(); };
}
int vgui2::FocusNavGroup::vfunc7()
{
    return ((lifted::C101ac6b0 *)((int)this + 0xc))->sub_101ac6b0();
}
// END FUNCTION
