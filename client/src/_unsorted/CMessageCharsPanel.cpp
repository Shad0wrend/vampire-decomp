// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101681f0 size=0x5
#include "CMessageCharsPanel.h"
bool CMessageCharsPanel::vfunc25(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10168200 size=0x1e
#include "CMessageCharsPanel.h"

// VC6 writes CMessageCharsPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CMessageCharsPanel *pcd_emit_10168200(const CMessageCharsPanel &other) { return new CMessageCharsPanel(other); }

// TARGET: ??_GCMessageCharsPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10168230 size=0x22
#include "CMessageCharsPanel.h"
namespace lifted {
extern char g_102862f0;
struct C101ab490 { int sub_101ab490(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual int f4(int); };
}
int CMessageCharsPanel::vfunc74(int a0)
{
    ((lifted::C101ab490 *)this)->sub_101ab490(a0);
    *(int *)((char *)this + 0x58) = ((lifted::V *)a0)->f4((int)&lifted::g_102862f0);
    return *(int *)((char *)this + 0x58);
}
// END FUNCTION

// FUNCTION: 0x10168430 size=0x49
#include "CMessageCharsPanel.h"
struct GObj;
struct GTab { char pad[0x3c]; int (__cdecl *f15)(GObj *, int, int); };
struct GObj { GTab *tab; };
extern GObj *g_104a5820;
struct PSrc {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
	virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
	virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62();
	virtual int vf63(int);
};
PSrc *sub_101ac8d0();
// TARGET: ?vfunc108@CMessageCharsPanel@@UAEXHPAH0H@Z
void CMessageCharsPanel::vfunc108(int a, int *b, int *c, int d)
{
	if (!a) {
		sub_101a9af0();
		a = (int)m_p58;
	}
	*b = g_104a5820->tab->f15(g_104a5820, a, d);
	*c = sub_101ac8d0()->vf63(a);
}
// END FUNCTION

// FUNCTION: 0x10168480 size=0x15
#include "CMessageCharsPanel.h"
struct PanelView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(int a);
	virtual void v22(); virtual void v23(); virtual void v24();
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
	virtual void v95(); virtual void v96(); virtual void v97(); virtual void v98(); virtual void v99();
	virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103(); virtual void v104();
	virtual void v105(); virtual void v106(); virtual void v107(); virtual void v108(); virtual int v109();
};
// TARGET: CMessageCharsPanel::sub_10168480
void CMessageCharsPanel::sub_10168480()
{
	PanelView *p = (PanelView *)this;
	p->v21(p->v109());
}
// END FUNCTION

// FUNCTION: 0x101684a0 size=0xc
#include "CMessageCharsPanel.h"
// TARGET: CMessageCharsPanel::vfunc109
bool CMessageCharsPanel::vfunc109() { int *p = *(int **)((char *)this + 0x10705c); if (p) return true; return false; }
// END FUNCTION

// FUNCTION: 0x101684b0 size=0xb9
#include "CMessageCharsPanel.h"
struct SurfTab_101684b0
{
	void *pad[12];
	void (__cdecl *fn12)(void *self, int a, int b, int c, int d, int e, int f, int g, const char *s);
};
struct GObj_101684b0 { SurfTab_101684b0 *tab; };
struct IEng_101684b0
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
	virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
	virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
	virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual double Time(int a);
};
extern GObj_101684b0 *g_104a5820;
extern IEng_101684b0 *g_104a57d4;
struct MsgNode_101684b0
{
	MsgNode_101684b0 *m_pNext;
	int m_4;
	int m_8;
	unsigned char m_c, m_d, m_e, m_f;
	char m_text[0x400];
	int m_410;
	float m_414;
};
struct PanelView_101684b0
{
	char pad[0x10705c];
	MsgNode_101684b0 *m_pHead;
	MsgNode_101684b0 *m_pFree;
};
void CMessageCharsPanel::vfunc98()
{
	PanelView_101684b0 *v = (PanelView_101684b0 *)this;
	MsgNode_101684b0 *n;
	for (n = v->m_pHead; n; n = n->m_pNext)
		g_104a5820->tab->fn12(g_104a5820, n->m_410, n->m_4, n->m_8, n->m_c, n->m_d, n->m_e, n->m_f, n->m_text);
	MsgNode_101684b0 *prev = 0;
	n = v->m_pHead;
	while (n)
	{
		if (n->m_414 <= g_104a57d4->Time(0))
		{
			if (!prev)
				v->m_pHead = n->m_pNext;
			else
				prev->m_pNext = n->m_pNext;
			MsgNode_101684b0 *next = n->m_pNext;
			n->m_pNext = v->m_pFree;
			v->m_pFree = n;
			n = next;
		}
		else
		{
			prev = n;
			n = n->m_pNext;
		}
	}
}
// END FUNCTION
