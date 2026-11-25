// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c3a40 size=0x1e
#include "vgui2__BuildModeDialog.h"

// VC6 writes vgui2::BuildModeDialog's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::BuildModeDialog *pcd_emit_101c3a40(const vgui2::BuildModeDialog &other) { return new vgui2::BuildModeDialog(other); }

// TARGET: ??_GBuildModeDialog@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101c4a20 size=0x52
#include "vgui2__BuildModeDialog.h"

struct Obj { bool sub_101aab50(); };
struct P {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20();
	virtual void v21();
};

struct V {
virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();
virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();
virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();
virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();virtual void v30();virtual void v31();
virtual void v32();virtual void v33();virtual void v34();virtual void v35();virtual void v36();virtual void v37();virtual void v38();virtual void v39();
virtual void v40();virtual void v41();virtual void v42();virtual void v43();virtual void v44();virtual void v45();virtual void v46();virtual void v47();
virtual void v48();virtual void v49();virtual void v50();virtual void v51();virtual void v52();virtual void v53();virtual void v54();virtual void v55();
virtual void v56();virtual void v57();virtual void v58();virtual void v59();virtual void v60();virtual void v61();virtual void v62();virtual void v63();
virtual void v64();virtual void v65();virtual void v66();virtual void v67();virtual void v68();virtual void v69();virtual void v70();virtual void v71();
virtual void v72();virtual void v73();virtual void v74();virtual void v75();virtual void v76();virtual void v77();virtual void v78();virtual void v79();
virtual void v80();virtual void v81();virtual void v82();virtual void v83();virtual void v84();virtual void v85();virtual void v86();virtual void v87();
virtual void v88();virtual void v89();virtual void v90();virtual void v91();virtual void v92();virtual void v93();virtual void v94();virtual void v95();
virtual void v96();virtual void v97();virtual void v98();virtual void v99();virtual void v100();virtual void v101();virtual void v102();virtual void v103();
virtual void v104();virtual void v105();virtual void v106();virtual void v107();virtual void v108();virtual void v109();virtual void v110();virtual void v111();
virtual void v112();virtual void v113();virtual void v114();virtual void v115();virtual void v116();virtual void v117();virtual void v118();virtual void v119();
virtual void v120();virtual void v121();virtual void v122();virtual void v123();virtual void v124();virtual void v125();virtual void v126();virtual void v127();
virtual void v128();virtual void v129();virtual void v130();virtual void v131();virtual void v132();virtual void v133();virtual void v134();virtual void v135();
virtual void v136();virtual void v137();virtual void v138();virtual void v139();virtual void v140();virtual void v141();virtual void v142();virtual void v143();
virtual void v144();virtual void v145();virtual void v146();virtual void v147();
virtual void *v148();
};

// TARGET: vgui2::BuildModeDialog::sub_101c4a20
void vgui2::BuildModeDialog::sub_101c4a20()
{
	bool b = ((Obj *)*(void **)((char *)this + 0xe4))->sub_101aab50();
	P *p = *(P **)((char *)this + 0x12c);
	if (!b) {
		if (p)
			p->v21();
		*(P **)((char *)this + 0x12c) = 0;
	} else {
		if (p) {
			p->v21();
			*(P **)((char *)this + 0x12c) = 0;
		}
		*(void **)((char *)this + 0x12c) = ((V *)this)->v148();
	}
}
// END FUNCTION

// FUNCTION: 0x101c4be0 size=0xe8
#include "vgui2__BuildModeDialog.h"
#include "vgui2__Panel.h"
#include "vgui2__KeyValues.h"

extern "C" int __cdecl atoi(const char *);

#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();

struct IA
{
	V10(u0) V10(u1) V10(u2) V10(u3) V10(u4) V10(u5) V10(u6) V10(u7) V10(u8) V10(u9)
	virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107();
	virtual void vfunc108(int, char *, int);
};

struct ElemView { int m_unk0; IA *m_pObj; int m_unk8; char m_name[0x40]; int m_nType; };
struct SList { ElemView *m_pData; int m_unk4; int m_unk8; int m_nCount; int m_unk10; void *m_pA; };
#define LST (*(SList **)((char *)this + 0xe8))

vgui2::KeyValues *vgui2::BuildModeDialog::vfunc148()
{
	vgui2::KeyValues *kv = new vgui2::KeyValues((*(vgui2::Panel **)((char *)this + 0xe4))->vfunc18());
	char buf[0x100];
	for (int i = 0; i < LST->m_nCount; i++)
	{
		char *name = LST->m_pData[i].m_name;
		IA *obj = LST->m_pData[i].m_pObj;
		obj->vfunc108(0, buf, 0xff);
		int type = LST->m_pData[i].m_nType;
		if (type >= 4 && type <= 5)
			kv->vfunc15((int)name, atoi(buf));
		else
			kv->vfunc14(name, buf);
	}
	return kv;
}
// END FUNCTION

// FUNCTION: 0x101c4cd0 size=0x1a
#include "vgui2__BuildModeDialog.h"
struct BMD_101c4cd0 {
	void sub_101c4810();
};
void vgui2::BuildModeDialog::vfunc92(int code)
{
	if (code == 0x40)
		((BMD_101c4cd0 *)this)->sub_101c4810();
	else
		this->sub_101b9740(code);
}
// END FUNCTION

// FUNCTION: 0x101c54d0 size=0x6
#include "vgui2__BuildModeDialog.h"
namespace lifted {
extern char g_102d9fc8;
}
int vgui2::BuildModeDialog::vfunc102()
{
    return (int)&lifted::g_102d9fc8;
}
// END FUNCTION
