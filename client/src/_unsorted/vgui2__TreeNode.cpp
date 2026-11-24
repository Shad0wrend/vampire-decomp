// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bce10 size=0x51
// TARGET: sub_101bce10
struct PanelBase
{
	void sub_101a99f0(bool);
};

struct PanelVtbl
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14();
	virtual void v15();
	virtual void v16();
	virtual void v17();
	virtual void v18();
	virtual void v19();
	virtual void v20();
	virtual void v21(bool);
};

void __fastcall sub_101bce10(void *self, int edx, bool b)
{
	((PanelBase *)self)->sub_101a99f0(b);
	bool state = b && ((char *)self)[0x70];
	for ( int i = 0; i < *(int *)((char *)self + 0x80); i++ )
	{
		void *pChild = *(void **)(*(char **)((char *)self + 0x74) + i * 4);
		((PanelVtbl *)pChild)->v21(state);
	}
}
// END FUNCTION

// FUNCTION: 0x101bcf20 size=0x53
#include "vgui2__TreeNode.h"

struct TreeColor
{
	unsigned char c[4];
	TreeColor() {}
	operator int() const { return *(const int *)c; }
};

struct TreeScheme
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual TreeColor GetColor(const char *name);
	virtual TreeColor GetColor(const char *name, TreeColor def);
};

int vgui2::TreeNode::vfunc74(int nScheme)
{
	Panel::vfunc74(nScheme);
	vfunc60((void *)0);
	TreeScheme *pScheme = (TreeScheme *)nScheme;
	return vfunc50(pScheme->GetColor("ListBgColor",
		pScheme->GetColor("WindowDisabledBgColor")));
}
// END FUNCTION

// FUNCTION: 0x101bcf80 size=0xb
#include "vgui2__TreeNode.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual int f15(int); };
}
void vgui2::TreeNode::vfunc80()
{
    ((lifted::V *)(*(int *)((char *)this + 0x64)))->f15(0);
}
// END FUNCTION
