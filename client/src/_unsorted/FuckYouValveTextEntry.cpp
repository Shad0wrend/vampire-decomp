// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10170e00 size=0x1e
#include "FuckYouValveTextEntry.h"

// VC6 writes FuckYouValveTextEntry's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
FuckYouValveTextEntry *pcd_emit_10170e00(const FuckYouValveTextEntry &other) { return new FuckYouValveTextEntry(other); }

// TARGET: ??_GFuckYouValveTextEntry@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10170e30 size=0x36
#include "FuckYouValveTextEntry.h"
struct IScheme {
	virtual void a0(); virtual void a1(); virtual void a2();
	virtual void *GetBorder(const char *name);
};
struct TEV : vgui2::TextEntry {
	void sub_101ace00(IScheme *s);
};
#pragma warning(disable:4716)
// TARGET: FuckYouValveTextEntry::vfunc74
int FuckYouValveTextEntry::vfunc74(int pScheme)
{
	IScheme *s = (IScheme *)pScheme;
	((TEV *)this)->sub_101ace00(s);
	void *b = s->GetBorder("DropDownHighlightBorder");
	vfunc60(b);
	vfunc62(1);
}
// END FUNCTION
