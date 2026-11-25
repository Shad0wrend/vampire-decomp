// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10065840 size=0x1e
#include "CVMainMenu.h"

// VC6 writes CVMainMenu's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVMainMenu *pcd_emit_10065840(const CVMainMenu &other) { return new CVMainMenu(other); }

// TARGET: ??_GCVMainMenu@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10065860 size=0xe7
#include "CVMainMenu.h"

struct V665d0 { void sub_100665d0(int); };
struct V67520 { void sub_10067520(); };

CVMainMenu::~CVMainMenu()
{
	sub_10066250();
	((V665d0 *)this)->sub_100665d0(1);
	((V67520 *)this)->sub_10067520();
}
// END FUNCTION

// FUNCTION: 0x10065c40 size=0x4f
#include "CVMainMenu.h"

struct VSurface {
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
	virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
	virtual void d8(); virtual void d9(); virtual void d10();
	virtual void v11(int, int, int, int);
	virtual void v12(int, int, int, int);
};
struct VPanel_101a98f0 {
	void sub_101a98f0(int, int);
};
int sub_101ac8d0();

void CVMainMenu::vfunc97()
{
	((VSurface *)sub_101ac8d0())->v11(0, 0, 0, 0xff);
	((VPanel_101a98f0 *)this)->sub_101a98f0(*(int *)((char *)this + 0x184), *(int *)((char *)this + 0x188));
	((VSurface *)sub_101ac8d0())->v12(0, 0, *(int *)((char *)this + 0x184), *(int *)((char *)this + 0x188));
}
// END FUNCTION
