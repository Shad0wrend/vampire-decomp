// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c6530 size=0x1e
#include "vgui2__ProgressBar.h"

// VC6 writes vgui2::ProgressBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ProgressBar *pcd_emit_101c6530(const vgui2::ProgressBar &other) { return new vgui2::ProgressBar(other); }

// TARGET: ??_GProgressBar@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c6620 size=0x55
#include "vgui2__ProgressBar.h"

struct PBFloat
{
    char m_pad00[0x5c];
    float m_flProgress;   // +0x5c
};

void vgui2::ProgressBar::vfunc107(float val)
{
    PBFloat *self = (PBFloat *)this;
    if (val != self->m_flProgress) {
        if (val < 0.0f)
            val = 0.0f;
        else if (val > 1.0f)
            val = 1.0f;
        self->m_flProgress = val;
        vfunc6();
    }
}
// END FUNCTION

// FUNCTION: 0x101c6680 size=0x68
#include "vgui2__ProgressBar.h"

using vgui2::Panel;

struct SchemeColor
{
	unsigned char r, g, b, a;
	operator int() const { return *(const int *)this; }
};

struct ISchemeView
{
	virtual void d0();
	virtual void d1();
	virtual void d2();
	virtual void *GetBorder(const char *name);
	virtual void d4();
	virtual void d5();
	virtual SchemeColor GetColor(const char *name);
};

void vgui2::ProgressBar::sub_101c6680(int pScheme)
{
	Panel::vfunc74(pScheme);
	ISchemeView *scheme = (ISchemeView *)pScheme;
	vfunc51(scheme->GetColor("BrightControlText"));
	vfunc50(scheme->GetColor("WindowBgColor"));
	vfunc60(scheme->GetBorder("ButtonDepressedBorder"));
}
// END FUNCTION

// FUNCTION: 0x101c6760 size=0x6
#include "vgui2__ProgressBar.h"
namespace lifted {
extern char g_102da8d0;
}
int vgui2::ProgressBar::vfunc102()
{
    return (int)&lifted::g_102da8d0;
}
// END FUNCTION
