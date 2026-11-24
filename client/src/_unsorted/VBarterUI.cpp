// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016b720 size=0x1e
#include "VBarterUI.h"

// VC6 writes VBarterUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VBarterUI *pcd_emit_1016b720(const VBarterUI &other) { return new VBarterUI(other); }

// TARGET: ??_GVBarterUI@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1016b740 size=0x48
#include "VBarterUI.h"
struct VBarterChild { virtual ~VBarterChild(); };
// TARGET: ??1VBarterUI@@UAE@XZ
VBarterUI::~VBarterUI()
{
    sub_1016cdc0();
    VBarterChild *a = *(VBarterChild **)((char *)this + 0x4e0);
    if (a)
        delete a;
    VBarterChild *b = *(VBarterChild **)((char *)this + 0x4e4);
    if (b)
        delete b;
}
// END FUNCTION

// FUNCTION: 0x1016edf0 size=0xae
#include "VBarterUI.h"

extern int sub_100cd100();
extern int sub_100cd0f0();

namespace lifted {
struct C101a9950 { void sub_101a9950(int x, int y, int w, int h); };
struct C101aa0a0 { void sub_101aa0a0(int z); };
}

#define XRES(x) (x * ((float)sub_100cd100() / 1024.0))
#define YRES(y) (y * ((float)sub_100cd0f0() / 768.0))

// TARGET: VBarterUI::sub_1016edf0
void VBarterUI::sub_1016edf0()
{
	sub_1016cdc0();
	CBasePanel *pPanel = (CBasePanel *)((char *)this + 0x10);
	((lifted::C101a9950 *)pPanel)->sub_101a9950(
		(int)(sub_100cd100() - XRES(1024)),
		0,
		(int)XRES(1024),
		(int)YRES(768)
	);
	pPanel->vfunc54(2);
	((lifted::C101aa0a0 *)pPanel)->sub_101aa0a0(0x76c);
	sub_1016b790();
}
// END FUNCTION
