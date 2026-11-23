// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

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
