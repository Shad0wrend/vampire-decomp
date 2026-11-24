// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005f2a0 size=0x1e
#include "CMoneyBar.h"

// VC6 writes CMoneyBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CMoneyBar *pcd_emit_1005f2a0(const CMoneyBar &other) { return new CMoneyBar(other); }

// TARGET: ??_GCMoneyBar@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005f2c0 size=0x22
#include "CMoneyBar.h"
CMoneyBar::~CMoneyBar()
{
	sub_101a9ff0(0);
}
// END FUNCTION

// FUNCTION: 0x1005f2f0 size=0x23
#include "CMoneyBar.h"
bool sub_10163bf0();
struct IUnkG286860 { virtual void v0(); virtual void v1(); virtual bool Check(int); };
extern IUnkG286860 *g_10286860;
bool CMoneyBar::vfunc107()
{
	return sub_10163bf0() && !g_10286860->Check(0);
}
// END FUNCTION

// FUNCTION: 0x1005f320 size=0x12
#include "CMoneyBar.h"
struct CMoneyBarSub
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5(int a);
};
void CMoneyBar::vfunc112()
{
	((CMoneyBarSub *)((char *)this + 0x170))->v5(0);
}
// END FUNCTION

// FUNCTION: 0x1005f540 size=0x1
#include "CMoneyBar.h"
void CMoneyBar::vfunc97()
{
}
// END FUNCTION
