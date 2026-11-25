// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101871f0 size=0x1e
#include "VMapFrameLabel.h"

// VC6 writes VMapFrameLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VMapFrameLabel *pcd_emit_101871f0(const VMapFrameLabel &other) { return new VMapFrameLabel(other); }

// TARGET: ??_GVMapFrameLabel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10187260 size=0x6d
#include "VMapFrameLabel.h"

int sub_100cd0f0();
struct PMethod { int sub_101ab130(); };

// TARGET: vfunc98
void VMapFrameLabel::vfunc98()
{
	int a, b;
	sub_101a98c0(&a, &b);

	int w = ((PMethod *)this)->sub_101ab130();
	sub_101ab1a0();

	if (m_n0b8)
		((CHUDSprite10059620 *)m_n0b8)->sub_10059620(a, b, w, (int)((sub_100cd0f0() * 0.0013020833333333333) * 768.0));
}
// END FUNCTION
