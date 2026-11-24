// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101872d0 size=0xc8
#include "VMapScreenUI.h"
class IVScheme { public: virtual int v0(); virtual void *LoadScheme(const char *); };
IVScheme *sub_101ac8c0();
extern int g_102de300;
extern char g_105fb874;
extern void (*g_101e3108)(const char *pMsg, ...);
// TARGET: ??0VMapScreenUI@@QAE@H@Z
VMapScreenUI::VMapScreenUI(int a)
    : CHudElement(a), CBasePanel(0, a), m_bkg(this, "BkgFrame", &g_102de300, 0)
{
    void *scheme;
    m_b278 = 0;
    scheme = sub_101ac8c0()->LoadScheme("Resource/VampireScheme.res");
    if (!scheme)
        g_101e3108("Error loading '%s'\n", "Resource/VampireScheme.res");
    CBasePanel::sub_101aa230(scheme);
    CBasePanel::sub_10187a90(0);
    CBasePanel::vfunc39(0);
    CBasePanel::vfunc54(2);
    m_b180 = 0;
    m_n184 = 1;
    m_bkg.sub_101aa230(scheme);
    g_105fb874 = 1;
}
// END FUNCTION

// FUNCTION: 0x101873a0 size=0x1e
#include "VMapScreenUI.h"

// VC6 writes VMapScreenUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VMapScreenUI *pcd_emit_101873a0(const VMapScreenUI &other) { return new VMapScreenUI(other); }

// TARGET: ??_GVMapScreenUI@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101873c0 size=0x33
#include "VMapScreenUI.h"
#include "VMapFrameLabel.h"
VMapScreenUI::~VMapScreenUI()
{
	sub_10187860();
	((VMapFrameLabel *)((char *)this + 0x188))->VMapFrameLabel::~VMapFrameLabel();
}
// END FUNCTION

// FUNCTION: 0x10187980 size=0x25
#include "VMapScreenUI.h"
int sub_1016a6b0();
void VMapScreenUI::sub_10187980()
{
	int n = sub_1016a6b0();
	((CBasePanel *)((char *)this + 0x10))->vfunc33(n);
	((CBasePanel *)((char *)this + 0x10))->sub_101aa0a0(0x76c);
}
// END FUNCTION
