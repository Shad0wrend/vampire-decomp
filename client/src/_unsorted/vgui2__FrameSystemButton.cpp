// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b8420 size=0x5
#include "vgui2__FrameSystemButton.h"
int vgui2::FrameSystemButton::vfunc164(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101b8540 size=0x49
#include "vgui2__FrameSystemButton.h"
struct MenuItemView { MenuItemView *sub_101b5670(const char *); };
void *sub_101b6840(int);
struct FSBView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22();
	virtual void v23(int);
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
	virtual void v29(); virtual void v30();
	virtual int v31(MenuItemView *, int);
};
struct FSBData { char pad[0x10c]; bool m_b10c; };
void vgui2::FrameSystemButton::vfunc88(int a)
{
	if (((FSBData *)this)->m_b10c && !a) {
		MenuItemView *p = (MenuItemView *)sub_101b6840(0x1c);
		MenuItemView *item = p ? p->sub_101b5670("Close") : 0;
		FSBView *v = (FSBView *)this;
		v->v23(v->v31(item, 0));
	}
}
// END FUNCTION

// FUNCTION: 0x101b8590 size=0x1e
#include "vgui2__FrameSystemButton.h"

// VC6 writes vgui2::FrameSystemButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::FrameSystemButton *pcd_emit_101b8590(const vgui2::FrameSystemButton &other) { return new vgui2::FrameSystemButton(other); }

// TARGET: ??_GFrameSystemButton@vgui2@@UAEPAXI@Z
// END FUNCTION
