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
