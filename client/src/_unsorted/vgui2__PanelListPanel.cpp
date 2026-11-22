// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101ca820 size=0x1e
#include "vgui2__PanelListPanel.h"

// VC6 writes vgui2::PanelListPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::PanelListPanel *pcd_emit_101ca820() { return new vgui2::PanelListPanel; }

// TARGET: ??_GPanelListPanel@vgui2@@UAEPAXI@Z
// END FUNCTION
