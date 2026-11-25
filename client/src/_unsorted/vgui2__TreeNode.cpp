// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101bcda0 size=0x6e
#include "vgui2__TreeNode.h"

namespace vgui2
{
class ISchemeView
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual int vfunc9(const char *name, int a);
};

void TreeNode::vfunc101()
{
	Panel::vfunc101();

	int inset = ( ((ISchemeView *)m_p58)->vfunc9("SelectedImage", 0) || ((ISchemeView *)m_p58)->vfunc9("Image", 0) ) ? 0x28 : 0x14;

	((Panel *)*(void **)((char *)this + 0x64))->sub_101a9890(inset, 0);

	int a, b;
	((Panel *)*(void **)((char *)this + 0x64))->sub_101a9920(&a, &b);

	sub_101a98f0(a + inset, 0x14);
}
}
// END FUNCTION

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

// FUNCTION: 0x101bce70 size=0xab
#include "vgui2__TreeNode.h"

struct V0_101bce70
{
	virtual void vfunc0();
};

struct Child_101bce70
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
	virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
	virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64();
	virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
	virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74();
	virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
	virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84();
	virtual void v85(); virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89();
	virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94();
	virtual void v95(); virtual void v96(); virtual void v97();
	virtual void vfunc98();
	virtual void v99(); virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103();
	virtual void v104(); virtual void v105(); virtual void v106();
	virtual void vfunc107(int);
};

struct Surf_101bce70
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual int vfunc3();
};

struct Input_101bce70
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual bool vfunc20(int a, int b);
};

struct Scheme_101bce70
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual int vfunc9(const char *name, int a);
};

struct Cache_101bce70
{
	int sub_101bd770(int);
};

extern Surf_101bce70 *sub_101ac8b0();
extern Input_101bce70 *sub_101ac900();

void vgui2::TreeNode::vfunc98()
{
	if (m_h80 > 0)
		(*(V0_101bce70 **)((char *)this + 0x68))->vfunc0();
	int a = sub_101ac8b0()->vfunc3();
	int img;
	bool sel = vfunc56();
	if (!sel && a)
		sel = sub_101ac900()->vfunc20(a, vfunc0());
	if (sel)
		img = (*(Scheme_101bce70 **)((char *)this + 0x58))->vfunc9("SelectedImage", 0);
	else
		img = (*(Scheme_101bce70 **)((char *)this + 0x58))->vfunc9("Image", 0);
	if (img)
	{
		int x = (*(Cache_101bce70 **)((char *)this + 0x88))->sub_101bd770(img);
		if (x)
			(*(Child_101bce70 **)((char *)this + 0x6c))->vfunc107(x);
		(*(Child_101bce70 **)((char *)this + 0x6c))->vfunc98();
	}
	(*(Child_101bce70 **)((char *)this + 0x64))->vfunc98();
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

// FUNCTION: 0x101bd260 size=0xf6
#include "vgui2__TreeNode.h"

class V27_2
{
public:
	virtual void d00(); virtual void d01(); virtual void d02(); virtual void d03(); virtual void d04();
	virtual void d05(); virtual void d06(); virtual void d07(); virtual void d08(); virtual void d09();
	virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14();
	virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
	virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24();
	virtual void d25(); virtual void d26();
	virtual void m27(int *a, int *b);
};

class V27_S
{
public:
	virtual void d00(); virtual void d01(); virtual void d02(); virtual void d03(); virtual void d04();
	virtual void d05(); virtual void d06(); virtual void d07(); virtual void d08(); virtual void d09();
	virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14();
	virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
	virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24();
	virtual void d25(); virtual void d26();
	virtual void m27(const char *s);
};

class VTree
{
public:
	virtual void d000(); virtual void d001(); virtual void d002(); virtual void d003(); virtual void d004();
	virtual void d005(); virtual void d006(); virtual void d007(); virtual void d008(); virtual void d009();
	virtual void d010(); virtual void d011(); virtual void d012(); virtual void d013(); virtual void d014();
	virtual void d015(); virtual void d016(); virtual void d017(); virtual void d018(); virtual void d019();
	virtual void d020(); virtual void d021(); virtual void d022(); virtual void d023(); virtual void d024();
	virtual void d025(); virtual void d026(); virtual void d027(); virtual void d028(); virtual void d029();
	virtual void d030(); virtual void d031(); virtual void d032(); virtual void d033(); virtual void d034();
	virtual void d035(); virtual void d036(); virtual void d037(); virtual void d038(); virtual void d039();
	virtual void d040(); virtual void d041(); virtual void d042(); virtual void d043(); virtual void d044();
	virtual void d045(); virtual void d046(); virtual void d047(); virtual void d048(); virtual void d049();
	virtual void d050(); virtual void d051(); virtual void d052(); virtual void d053(); virtual void d054();
	virtual void d055(); virtual void d056();
	virtual void t57(int a, int b);
	virtual void d058(); virtual void d059(); virtual void d060(); virtual void d061(); virtual void d062();
	virtual void d063(); virtual void d064(); virtual void d065(); virtual void d066(); virtual void d067();
	virtual void d068(); virtual void d069(); virtual void d070(); virtual void d071(); virtual void d072();
	virtual void d073(); virtual void d074(); virtual void d075(); virtual void d076(); virtual void d077();
	virtual void d078(); virtual void d079(); virtual void d080(); virtual void d081(); virtual void d082();
	virtual void d083(); virtual void d084(); virtual void d085(); virtual void d086(); virtual void d087();
	virtual void d088(); virtual void d089(); virtual void d090(); virtual void d091(); virtual void d092();
	virtual void d093(); virtual void d094(); virtual void d095(); virtual void d096(); virtual void d097();
	virtual void d098(); virtual void d099(); virtual void d100(); virtual void d101(); virtual void d102();
	virtual void d103(); virtual void d104(); virtual void d105(); virtual void d106(); virtual void d107();
	virtual void d108(); virtual void d109(); virtual void d110(); virtual void d111(); virtual void d112();
	virtual void d113(); virtual void d114(); virtual void d115();
	virtual void t116(int a);
	virtual int t117();
};

int sub_101ac8b0();

// TARGET: vgui2::TreeNode::vfunc87
void vgui2::TreeNode::vfunc87(int a)
{
	int w, h;
	void *sc = (void *)sub_101ac8b0();
	((V27_2 *)sc)->m27(&w, &h);
	((V27_2 *)this)->m27(&w, &h);
	if ( w < 0x14 )
	{
		char old = *(char *)((char *)this + 0x70);
		char ne = (old == 0);
		*(char *)((char *)this + 0x70) = ne;
		if ( ne )
			((V27_S *)*(void **)((char *)this + 0x68))->m27("-");
		else
		{
			((V27_S *)*(void **)((char *)this + 0x68))->m27("+");
			int sel = ((VTree *)*(void **)((char *)this + 0x88))->t117();
			if ( sel != -1 )
			{
				int *item = (int *)((char *)*(void **)((char *)*(void **)((char *)this + 0x88) + 0x78) + sel * 12);
				int *p = (int *)*(void **)((char *)item[0] + 0x60);
				while ( p )
				{
					if ( p == (int *)this )
					{
						((VTree *)*(void **)((char *)this + 0x88))->t116(*(int *)((char *)this + 0x5c));
						break;
					}
					p = (int *)*(void **)((char *)p + 0x60);
				}
			}
		}
		((VTree *)*(void **)((char *)this + 0x88))->t57(0, 0);
	}
	else
	{
		*(char *)((char *)this + 0x70) = 1;
		((V27_S *)*(void **)((char *)this + 0x68))->m27("-");
		((VTree *)*(void **)((char *)this + 0x88))->t57(0, 0);
		((VTree *)*(void **)((char *)this + 0x88))->t116(*(int *)((char *)this + 0x5c));
	}
}
// END FUNCTION
