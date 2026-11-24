// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10170f90 size=0xa9
#include "CharEditPanel.h"
#include "vgui2__Label.h"
#include "vgui2__CGrid.h"
#include "CLabelHeader.h"
extern int g_105fb14c;
struct CUnknown10170d80 { void sub_10170d80(); };
struct CUnknown1018cc70 { void sub_1018cc70(); };
typedef vgui2::Label VLabel;
typedef vgui2::CGrid VGrid;
CharEditPanel::~CharEditPanel()
{
	char *p = (char *)this;
	sub_101740e0(0);
	g_105fb14c = 0;
	char *e = p + 0xcf0;
	int n = 9;
	do {
		e -= 0xd4;
		((CLabelHeader *)e)->CLabelHeader::~CLabelHeader();
	} while (--n);
	((VGrid *)(p + 0x4fc))->VGrid::~VGrid();
	((VLabel *)(p + 0x408))->VLabel::~VLabel();
	((VLabel *)(p + 0x350))->VLabel::~VLabel();
	((CUnknown10170d80 *)(p + 0x298))->sub_10170d80();
	((VLabel *)(p + 0x1bc))->VLabel::~VLabel();
	((CUnknown1018cc70 *)(p + 0x104))->sub_1018cc70();
}
// END FUNCTION

// FUNCTION: 0x10171370 size=0x1e
#include "CharEditPanel.h"

// VC6 writes CharEditPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditPanel *pcd_emit_10171370(const CharEditPanel &other) { return new CharEditPanel(other); }

// TARGET: ??_GCharEditPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10172ae0 size=0x2d
#include "CharEditPanel.h"
#include "vgui2__Panel.h"
int sub_1016a6b0();
struct CUnknown10172ad0 { void sub_10172ad0(); };
void CharEditPanel::sub_10172ae0()
{
	int n = sub_1016a6b0();
	((vgui2::Panel *)((char *)this + 0x10))->vfunc33(n);
	((vgui2::Panel *)((char *)this + 0x10))->sub_101aa0a0(0x3e8);
	((CUnknown10172ad0 *)this)->sub_10172ad0();
}
// END FUNCTION

// FUNCTION: 0x10174650 size=0x12
#include "CharEditPanel.h"
namespace lifted {
extern int g_105fb14c;
struct C10181ad0 { int sub_101733d0(int); };
}
void CharEditPanel::vfunc3()
{
    if (lifted::g_105fb14c != 0) {
        ((lifted::C10181ad0 *)lifted::g_105fb14c)->sub_101733d0(0x0);
    }
}
// END FUNCTION

// FUNCTION: 0x10174670 size=0x12
#include "CharEditPanel.h"
namespace lifted {
extern int g_105fb14c;
struct C10181ad0 { int sub_101733d0(int); };
}
void CharEditPanel::vfunc4()
{
    if (lifted::g_105fb14c != 0) {
        ((lifted::C10181ad0 *)lifted::g_105fb14c)->sub_101733d0(0x0);
    }
}
// END FUNCTION

// FUNCTION: 0x10174690 size=0x12
#include "CharEditPanel.h"
namespace lifted {
extern int g_105fb14c;
struct C10181ad0 { int sub_101733d0(int); };
}
void CharEditPanel::vfunc7()
{
    if (lifted::g_105fb14c != 0) {
        ((lifted::C10181ad0 *)lifted::g_105fb14c)->sub_101733d0(0x0);
    }
}
// END FUNCTION
