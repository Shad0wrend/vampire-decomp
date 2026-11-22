// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b46c0 size=0x1e
#include "vgui2__EditablePanel.h"

// VC6 writes vgui2::EditablePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::EditablePanel *pcd_emit_101b46c0() { return new vgui2::EditablePanel; }

// TARGET: ??_GEditablePanel@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b4d60 size=0xa
#include "vgui2__EditablePanel.h"
namespace lifted {
struct V { virtual int f0(int); };
}
int vgui2::EditablePanel::vfunc108()
{
    return ((lifted::V *)(*(int *)((char *)this + 0x58)))->f0(1);
}
// END FUNCTION

// FUNCTION: 0x101b4d70 size=0x8
#include "vgui2__EditablePanel.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(); };
}
void vgui2::EditablePanel::vfunc107()
{
    ((lifted::V *)(*(int *)((char *)this + 0x58)))->f3();
}
// END FUNCTION

// FUNCTION: 0x101b4e70 size=0x4
#include "vgui2__EditablePanel.h"
int vgui2::EditablePanel::vfunc109()
{
    return *(int *)((char *)this + 0x58);
}
// END FUNCTION

// FUNCTION: 0x101b4e80 size=0x4
#include "vgui2__EditablePanel.h"
char * vgui2::EditablePanel::vfunc116()
{
    return (char *)this + 0x5c;
}
// END FUNCTION

// FUNCTION: 0x101b5650 size=0x6
#include "vgui2__EditablePanel.h"
namespace lifted {
extern char g_102d8c88;
}
int vgui2::EditablePanel::vfunc102()
{
    return (int)&lifted::g_102d8c88;
}
// END FUNCTION
