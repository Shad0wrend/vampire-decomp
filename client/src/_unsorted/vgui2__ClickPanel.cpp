// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101aecb0 size=0x4e
#include "vgui2__ClickPanel.h"

struct CUnknown101b56c0
{
	CUnknown101b56c0 *sub_101b56c0(const char *setName, const char *key, int value);
};

void *sub_101b6840(int size);

void vgui2::ClickPanel::vfunc87(int arg)
{
	if (arg)
		return;
	CUnknown101b56c0 *kv = (CUnknown101b56c0 *)sub_101b6840(0x1c);
	this->vfunc43(kv ? kv->sub_101b56c0("ClickPanel", "index", (int)this->m_p58) : 0);
}
// END FUNCTION

// FUNCTION: 0x101aed00 size=0x1e
#include "vgui2__ClickPanel.h"

// VC6 writes vgui2::ClickPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::ClickPanel *pcd_emit_101aed00(const vgui2::ClickPanel &other) { return new vgui2::ClickPanel(other); }

// TARGET: ??_GClickPanel@vgui2@@UAEPAXI@Z
// END FUNCTION
