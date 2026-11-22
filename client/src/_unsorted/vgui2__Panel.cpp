// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101a9460 size=0x1e
#include "vgui2__Panel.h"

// VC6 writes vgui2::Panel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Panel *pcd_emit_101a9460() { return new vgui2::Panel; }

// TARGET: ??_GPanel@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101a9f00 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc98()
{
}
// END FUNCTION

// FUNCTION: 0x101a9f10 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc103()
{
}
// END FUNCTION

// FUNCTION: 0x101aa620 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc83()
{
}
// END FUNCTION

// FUNCTION: 0x101aa640 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc85()
{
}
// END FUNCTION

// FUNCTION: 0x101aa650 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc86()
{
}
// END FUNCTION

// FUNCTION: 0x101aad70 size=0x1
#include "vgui2__Panel.h"
void vgui2::Panel::vfunc79()
{
}
// END FUNCTION
