// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bc620 size=0x53
#include "vgui2__TreeViewSubPanel.h"

struct Color { int c; };
struct ISchemeView {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual Color GetColorD(const char *name, Color def);
    virtual Color GetColorN(const char *name);
};

int vgui2::TreeViewSubPanel::vfunc74(int scheme)
{
    Panel::vfunc74(scheme);
    vfunc60(0);
    ISchemeView *p = (ISchemeView *)scheme;
    return vfunc50(p->GetColorD("ListBgColor", p->GetColorN("WindowDisabledBgColor")).c);
}
// END FUNCTION

// FUNCTION: 0x101bc6e0 size=0x1e
#include "vgui2__TreeViewSubPanel.h"

// VC6 writes vgui2::TreeViewSubPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TreeViewSubPanel *pcd_emit_101bc6e0(const vgui2::TreeViewSubPanel &other) { return new vgui2::TreeViewSubPanel(other); }

// TARGET: ??_GTreeViewSubPanel@vgui2@@UAEPAXI@Z
// END FUNCTION
