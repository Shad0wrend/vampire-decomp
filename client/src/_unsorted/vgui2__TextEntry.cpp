// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101acd90 size=0x1e
#include "vgui2__TextEntry.h"

// VC6 writes vgui2::TextEntry's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TextEntry *pcd_emit_101acd90() { return new vgui2::TextEntry; }

// TARGET: ??_GTextEntry@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101ace00 size=0xf9
struct Color {
	int c;
	Color() {}
};
struct IBorder;
struct IScheme {
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual IBorder *GetBorder(const char *name);
	virtual void v4();
	virtual Color GetColor(const char *name);
	virtual Color GetColor(const char *name, Color def);
};
struct TEV {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void SetBgColor(Color c);
	virtual void SetFgColor(Color c);
	virtual void v52();
	virtual Color GetFgColor();
	virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void SetBorder(IBorder *b);
	char pad[0xb8 - 4];
	Color m_cursor;
	Color m_disFg;
	Color m_disBg;
	Color m_selBg;
	Color m_selFg;
	void sub_101ab490(IScheme *);
	void sub_101ace00(IScheme *s);
};
// TARGET: TEV::sub_101ace00
void TEV::sub_101ace00(IScheme *s)
{
	sub_101ab490(s);
	SetFgColor(s->GetColor("WindowFgColor"));
	SetBgColor(s->GetColor("WindowBgColor"));
	m_cursor = s->GetColor("TextCursorColor");
	m_disFg = s->GetColor("WindowDisabledFgColor");
	m_disBg = s->GetColor("WindowDisabledBgColor");
	m_selFg = s->GetColor("SelectionFgColor", GetFgColor());
	m_selBg = s->GetColor("SelectionBgColor");
	SetBorder(s->GetBorder("ButtonDepressedBorder"));
}
// END FUNCTION

// FUNCTION: 0x101af140 size=0x8
#include "vgui2__TextEntry.h"
void vgui2::TextEntry::vfunc85()
{
    *(char *)((char *)this + 0x8d) = 0;
}
// END FUNCTION

// FUNCTION: 0x101b1c60 size=0x6
#include "vgui2__TextEntry.h"
namespace lifted {
extern char g_102d8650;
}
int vgui2::TextEntry::vfunc102()
{
    return (int)&lifted::g_102d8650;
}
// END FUNCTION
