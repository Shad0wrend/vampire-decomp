// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8e10 size=0x6
#include "C_VGuiScreen.h"

// TARGET: C_VGuiScreen::vfunc16
int C_VGuiScreen::vfunc16()
{
	return (int)"C_VGuiScreen";
}
// END FUNCTION

// FUNCTION: 0x100c9110 size=0x41
#include "C_VGuiScreen.h"
C_VGuiScreen *pcd_emit_100c9110() { return new C_VGuiScreen; }
// TARGET: ??_GC_VGuiScreen@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c9220 size=0x4e
#include "C_VGuiScreen.h"

struct ResV57
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
	virtual void v21();
	virtual void v22();
	virtual void v23();
	virtual void v24();
	virtual void v25();
	virtual void v26();
	virtual void v27();
	virtual void v28();
	virtual void v29();
	virtual void v30();
	virtual void v31();
	virtual void v32();
	virtual void v33();
	virtual void v34();
	virtual void v35();
	virtual void v36();
	virtual void v37();
	virtual void v38();
	virtual void v39();
	virtual void v40();
	virtual void v41();
	virtual void v42();
	virtual void v43();
	virtual void v44();
	virtual void v45();
	virtual void v46();
	virtual void v47();
	virtual void v48();
	virtual void v49();
	virtual void v50();
	virtual void v51();
	virtual void v52();
	virtual void v53();
	virtual void v54();
	virtual void v55();
	virtual void v56();
	virtual int vfunc57(int, int, int);
};

int C_VGuiScreen::vfunc64(int a1, int a2, int a3)
{
	C_BaseEntity *pEntity = (C_BaseEntity *)a1;
	C_BaseEntity *pRenderable = pEntity->GetBaseEntity();
	if (pRenderable && this->m_n43c > 0)
		return ((ResV57 *)pRenderable)->vfunc57(this->m_n43c, a2, a3);
	return C_BaseEntity::vfunc64(a1, a2, a3);
}
// END FUNCTION
