// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10164190 size=0x1e
#include "CHudLabel.h"

// VC6 writes CHudLabel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudLabel *pcd_emit_10164190(const CHudLabel &other) { return new CHudLabel(other); }

// TARGET: ??_GCHudLabel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101641b0 size=0x5e
#include "CHudLabel.h"

class Color_101641b0 {
public:
	int m_v;
	Color_101641b0() {}
	Color_101641b0(const Color_101641b0 &o) { m_v = o.m_v; }
};

struct ISchemeV_101641b0 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5();
	virtual Color_101641b0 GetColor(const char *name);
};

struct PanelBaseV_101641b0 {
	void sub_101ab490(int pScheme);
};

int CHudLabel::vfunc74(int pScheme)
{
	((PanelBaseV_101641b0 *)this)->sub_101ab490(pScheme);

	ISchemeV_101641b0 *s = (ISchemeV_101641b0 *)pScheme;
	if (*(char *)((char *)this + 0xb8))
		return vfunc50(s->GetColor("HudStatusSelectedBgColor").m_v);
	else
		return vfunc50(s->GetColor("HudStatusBgColor").m_v);
}
// END FUNCTION
