// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1016b050 size=0x1e
#include "VBarterFrameLabel.h"

// VC6 writes VBarterFrameLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VBarterFrameLabel *pcd_emit_1016b050(const VBarterFrameLabel &other) { return new VBarterFrameLabel(other); }

// TARGET: ??_GVBarterFrameLabel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1016b0b0 size=0x62
#include "VBarterFrameLabel.h"

int sub_100cd100();
extern double g_102273f0;

// TARGET: vfunc98
void VBarterFrameLabel::vfunc98()
{
	int a, b;
	sub_101a98c0(&a, &b);
	int n = sub_101ab1a0();
	if (m_n0b8)
		((CHUDSprite10059620 *)m_n0b8)->sub_10059620(a, b, (int)((sub_100cd100() * 0.0009765625) * g_102273f0), n);
}
// END FUNCTION
