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

// FUNCTION: 0x101c3110 size=0xdf
#include "vgui2__FocusNavGroup.h"
#include "vgui2__Panel.h"

extern void *sub_101b6840(int);
extern void *sub_101ac8f0();

struct NavHandle
{
	vgui2::Panel *sub_101ac670();
	void sub_101ac6b0(vgui2::Panel *p);
};

struct KVBuild
{
	void *sub_101b56c0(const char *, const char *, int);
};

struct IVGuiView
{
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3();
	virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7();
	virtual void g8(); virtual void g9(); virtual void g10(); virtual void g11();
	virtual void g12(); virtual void g13(); virtual void g14(); virtual void g15();
	virtual void g16(); virtual void g17(); virtual void g18(); virtual void g19();
	virtual void g20(int, void *, int, int);
};

void vgui2::FocusNavGroup::vfunc1(vgui2::Panel *newFocus)
{
	NavHandle *h = (NavHandle *)((char *)this + 4);
	if ( newFocus == h->sub_101ac670() )
		return;

	if ( h->sub_101ac670() )
	{
		void *kv = sub_101b6840(0x1c);
		if ( kv )
			kv = ((KVBuild *)kv)->sub_101b56c0("SetAsDefaultButton", "state", 0);
		else
			kv = 0;
		((IVGuiView *)(void *)sub_101ac8f0())->g20(h->sub_101ac670()->vfunc0(), kv, 0, 0);
	}

	h->sub_101ac6b0(newFocus);

	if ( h->sub_101ac670() )
	{
		void *kv = sub_101b6840(0x1c);
		if ( kv )
			kv = ((KVBuild *)kv)->sub_101b56c0("SetAsDefaultButton", "state", 1);
		else
			kv = 0;
		((IVGuiView *)(void *)sub_101ac8f0())->g20(h->sub_101ac670()->vfunc0(), kv, 0, 0);
	}
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

// FUNCTION: 0x101c3250 size=0x4e
#include "vgui2__FocusNavGroup.h"
#include "vgui2__Panel.h"

vgui2::Panel *vgui2::FocusNavGroup::vfunc0()
{
	for (int i = 0; i < m_pPanel->vfunc36(); i++)
	{
		if (m_pPanel->vfunc37(i)->vfunc30() == 1)
			return m_pPanel->vfunc37(i);
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
