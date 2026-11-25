// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8c80 size=0x1e
#include "CVGuiScreenPanel.h"

// VC6 writes CVGuiScreenPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVGuiScreenPanel *pcd_emit_100c8c80(const CVGuiScreenPanel &other) { return new CVGuiScreenPanel(other); }

// TARGET: ??_GCVGuiScreenPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c8d60 size=0x62
#include <stddef.h>
#include "CVGuiScreenPanel.h"
#include "CBitmapButton.h"

void *sub_101ac650(size_t size);
extern int (*g_101e31bc)(const char *, const char *, int);

// TARGET: sub_100c8d60
vgui2::Panel *CVGuiScreenPanel::sub_100c8d60(vgui2::Panel *parent, const char *controlName)
{
	if (!g_101e31bc(controlName, "MaterialButton", 20))
	{
		CBitmapButton *p = (CBitmapButton *)sub_101ac650(0x224);
		if (p)
			return p->sub_10164210(parent, "BitmapButton", "");
		return 0;
	}
	return sub_101b5230(parent, controlName);
}
// END FUNCTION
