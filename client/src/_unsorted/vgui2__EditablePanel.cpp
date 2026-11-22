// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b46c0 size=0x1e
#include "vgui2__EditablePanel.h"

// VC6 writes vgui2::EditablePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::EditablePanel *pcd_emit_101b46c0() { return new vgui2::EditablePanel; }

// TARGET: ??_GEditablePanel@vgui2@@UAEPAXI@Z
// END FUNCTION
