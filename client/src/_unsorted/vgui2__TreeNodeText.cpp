// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bcba0 size=0x10
#include "vgui2__TreeNodeText.h"
namespace lifted {
struct C101b1760 { int sub_101b1760(); };
struct C101b1840 { int sub_101b1840(); };
}
void vgui2::TreeNodeText::vfunc80()
{
    ((lifted::C101b1840 *)this)->sub_101b1840();
    ((lifted::C101b1760 *)this)->sub_101b1760();
}
// END FUNCTION

// FUNCTION: 0x101bcbb0 size=0x10
#include "vgui2__TreeNodeText.h"
namespace lifted {
struct C101acf10 { int sub_101acf10(); };
struct C101b1780 { int sub_101b1780(); };
}
void vgui2::TreeNodeText::vfunc81()
{
    ((lifted::C101acf10 *)this)->sub_101acf10();
    ((lifted::C101b1780 *)this)->sub_101b1780();
}
// END FUNCTION

// FUNCTION: 0x101bcc80 size=0x1e
#include "vgui2__TreeNodeText.h"

// VC6 writes vgui2::TreeNodeText's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TreeNodeText *pcd_emit_101bcc80() { return new vgui2::TreeNodeText; }

// TARGET: ??_GTreeNodeText@vgui2@@UAEPAXI@Z
// END FUNCTION
