// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10178850 size=0x1e
#include "CharEditEquipPanel.h"

// VC6 writes CharEditEquipPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditEquipPanel *pcd_emit_10178850(const CharEditEquipPanel &other) { return new CharEditEquipPanel(other); }

// TARGET: ??_GCharEditEquipPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017a690 size=0x3
#include "CharEditEquipPanel.h"
void CharEditEquipPanel::vfunc124(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1017a7b0 size=0x6
#include "CharEditEquipPanel.h"
namespace lifted {
extern char g_102d0e80;
}
int CharEditEquipPanel::vfunc102()
{
    return (int)&lifted::g_102d0e80;
}
// END FUNCTION

// FUNCTION: 0x1017a7d0 size=0x1
#include "CharEditEquipPanel.h"
void CharEditEquipPanel::vfunc119()
{
}
// END FUNCTION

// FUNCTION: 0x1017ab90 size=0x21
#include "CharEditEquipPanel.h"
int sub_1016a6b0();
void CharEditEquipPanel::vfunc123()
{
	int n = sub_1016a6b0();
	vfunc33(n);
	sub_101aa0a0(1000);
}
// END FUNCTION

// FUNCTION: 0x1017abc0 size=0x28
#include "CharEditEquipPanel.h"
namespace lifted {
struct C1017ac30 { int sub_1017ac30(); };
struct C1017ac40 { int sub_1017ac40(); };
struct C101a99f0 { int sub_101a99f0(int); };
}
int CharEditEquipPanel::vfunc21(int a0)
{
    int t0 = ((lifted::C101a99f0 *)this)->sub_101a99f0(a0);
    if (((char)a0) != 0) {
        return ((lifted::C1017ac40 *)this)->sub_1017ac40();
    }
    return ((lifted::C1017ac30 *)this)->sub_1017ac30();
}
// END FUNCTION

// FUNCTION: 0x1017ac00 size=0x28
#include "CharEditEquipPanel.h"
struct IEngine_104a57d4 {
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
	virtual void v55(); virtual void v56(); virtual int v57();
};
extern IEngine_104a57d4 *g_104a57d4;
extern int g_104a0d50;
void CharEditEquipPanel::vfunc3()
{
	if (g_104a57d4->v57() && g_104a0d50)
		sub_10179850();
}
// END FUNCTION
