// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b69c0 size=0x6
#include "C_FuncAreaPortalWindow.h"
namespace lifted {
extern char g_102b3b74;
}
int C_FuncAreaPortalWindow::vfunc16()
{
    return (int)&lifted::g_102b3b74;
}
// END FUNCTION

// FUNCTION: 0x100b69d0 size=0x3
#include "C_FuncAreaPortalWindow.h"
int C_FuncAreaPortalWindow::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b6aa0 size=0x1e
#include "C_FuncAreaPortalWindow.h"

// VC6 writes C_FuncAreaPortalWindow's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_FuncAreaPortalWindow *pcd_emit_100b6aa0() { return new C_FuncAreaPortalWindow; }

// TARGET: ??_GC_FuncAreaPortalWindow@@UAEPAXI@Z
// END FUNCTION
