// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10182610 size=0xdf
#include "VHotkeysUI.h"
class IVScheme { public: virtual int v0(); virtual void *LoadScheme(const char *); };
IVScheme *sub_101ac8c0();
extern char g_102de300[];
extern char g_105fb760;
extern void (*g_101e3108)(const char *pMsg, ...);
// TARGET: ??0VHotkeysUI@@QAE@H@Z
VHotkeysUI::VHotkeysUI(int a)
    : CBasePanel(0, a), CHudElement(a), m_Label(this, "BkgFrame", g_102de300)
{
	VHotkeysTail *t = Tail();
	t->m_b1e14 = 0;
	void *scheme = sub_101ac8c0()->LoadScheme("Resource/VampireScheme.res");
	if (!scheme)
		g_101e3108("Error loading '%s'\n", "Resource/VampireScheme.res");
	CBasePanel::sub_101aa230(scheme);
	vfunc21(0);
	vfunc39(0);
	m_Label.sub_101aa230(scheme);
	vfunc54(2);
	g_105fb760 = 1;
	t->m_n1d44 = 0;
	t->m_n1d48 = 0;
	t->m_n1d40 = 0;
	for (int i = 0; i < 10; i++) {
		t->m_arr[i].f2 = 0;
		t->m_arr[i].f3 = 0;
		t->m_arr[i].f4 = 0;
		t->m_arr[i].f0 = 0;
		t->m_arr[i].f1 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x101826f0 size=0x1e
#include "VHotkeysUI.h"

// VC6 writes VHotkeysUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VHotkeysUI *pcd_emit_101826f0(const VHotkeysUI &other) { return new VHotkeysUI(other); }

// TARGET: ??_GVHotkeysUI@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10182710 size=0x36
#include "VHotkeysUI.h"
// TARGET: ??1VHotkeysUI@@UAE@XZ
VHotkeysUI::~VHotkeysUI()
{
	sub_10183aa0();
}
// END FUNCTION

// FUNCTION: 0x101839a0 size=0x28
#include "VHotkeysUI.h"
namespace lifted {
struct C10177ea0 { int sub_10183ad0(); };
struct C10177eb0 { int sub_10183af0(); };
struct C101a99f0 { int sub_101a99f0(int); };
}
int VHotkeysUI::vfunc21(int a0)
{
    int t0 = ((lifted::C101a99f0 *)this)->sub_101a99f0(a0);
    if (((char)a0) != 0) {
        return ((lifted::C10177eb0 *)this)->sub_10183af0();
    }
    return ((lifted::C10177ea0 *)this)->sub_10183ad0();
}
// END FUNCTION
