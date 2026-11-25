// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101ba940 size=0xac
#include "CheckImage.h"
struct CheckPanelView : public vgui2::Panel
{
	virtual void d107(); virtual void d108(); virtual void d109(); virtual void d110(); virtual void d111(); virtual void d112();
	virtual void d113(); virtual void d114(); virtual void d115(); virtual void d116(); virtual void d117(); virtual void d118();
	virtual void d119(); virtual void d120(); virtual void d121(); virtual void d122(); virtual void d123(); virtual void d124();
	virtual void d125(); virtual void d126(); virtual void d127(); virtual void d128(); virtual void d129(); virtual void d130();
	virtual void d131(); virtual void d132(); virtual void d133(); virtual void d134(); virtual void d135(); virtual void d136();
	virtual void d137(); virtual void d138(); virtual void d139(); virtual void d140(); virtual void d141(); virtual void d142();
	virtual void d143();
	virtual bool vfunc144();
};
struct CheckImageView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual int vfunc16(int);
};
// TARGET: CheckImage::vfunc0
int CheckImage::vfunc0()
{
	((CheckImageView *)this)->vfunc16(m_n30);
	if (m_pPanel->vfunc47()) {
		vfunc18(*(Color4b *)&m_n2c);
	} else {
		int tmp;
		vfunc18(*(Color4b *)m_pPanel->vfunc52((int)&tmp));
	}
	vfunc22(0, 1, 0x67);
	vfunc18(*(Color4b *)&m_n20);
	vfunc22(0, 1, 0x65);
	vfunc18(*(Color4b *)&m_n24);
	vfunc22(0, 1, 0x66);
	if (((CheckPanelView *)m_pPanel)->vfunc144()) {
		vfunc18(*(Color4b *)&m_n28);
		return vfunc22(0, 2, 0x62);
	}
}
// END FUNCTION

// FUNCTION: 0x101ba9f0 size=0x1e
#include "CheckImage.h"

// VC6 writes CheckImage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CheckImage *pcd_emit_101ba9f0() { return new CheckImage; }

// TARGET: ??_GCheckImage@@UAEPAXI@Z
// END FUNCTION
