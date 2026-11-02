// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102c6dd0 size=0x1
// TARGET: sub_102c6dd0
void sub_102c6dd0()
{
}
// END FUNCTION

// FUNCTION: 0x102c6e30 size=0x9
#include "CAI_Behavior.h"
// TARGET: CAI_Behavior<CAI_BaseNPC,100000>::vfunc14
int CAI_Behavior<CAI_BaseNPC,100000>::vfunc14(int a, int b, int c) { m_flag10 = 0; return 0; }
// END FUNCTION

// FUNCTION: 0x102c6e90 size=0x8
#include "CAI_Behavior.h"

// TARGET: sub_102c6e90
void __fastcall sub_102c6e90(CAI_Behavior<CAI_BaseNPC, 100000> *behavior)
{
	behavior->m_pOuter->vfunc1();
}
// END FUNCTION

// FUNCTION: 0x102c6eb0 size=0x76
#include "CAI_Behavior.h"
#include "CUnknown10936b68.h"
extern CUnknown10936b68 g_10936b68;
extern "C" __declspec(dllimport) void Warning(const char *fmt, ...);

struct CAI_BehaviorView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual CAI_NPCScheduleRef *vfunc6();
	virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
	virtual const char *vfunc19();
};

int CAI_Behavior<CAI_BaseNPC, 100000>::vfunc18(int condition)
{
	CAI_BehaviorView *pView = (CAI_BehaviorView *)this;
	if (pView->vfunc6()->m_id == -1) {
		Warning("ERROR: %s missing schedule!\n", pView->vfunc19());
		return g_10936b68.sub_1030f300(1);
	}
	if (condition < 1000000000 || condition == -1) {
		CAI_NPCScheduleRef *p = pView->vfunc6();
		condition = p->sub_102ea2d0(condition);
		if (condition == -1)
			return 0;
	}
	return g_10936b68.sub_1030f300(condition);
}
// END FUNCTION

// FUNCTION: 0x102c6f70 size=0x8
struct OuterStub;
struct OuterStubVtbl { void (__fastcall *f[16])(OuterStub *); };
struct OuterStub { OuterStubVtbl *vt; };
struct BehaviorStub { char pad[0x14]; OuterStub *outer; };

void __fastcall sub_102c6f70(BehaviorStub *b)
{
	b->outer->vt->f[2](b->outer);
}
// END FUNCTION

// FUNCTION: 0x102c6fb0 size=0x9
#include "CAI_Behavior.h"
// TARGET: CAI_Behavior<CAI_BaseNPC,100000>::vfunc24
char CAI_Behavior<CAI_BaseNPC,100000>::vfunc24(int a) { m_flag10 = 0; return 0; }
// END FUNCTION

// FUNCTION: 0x102c6fd0 size=0x9
#include "CAI_Behavior.h"
// TARGET: CAI_Behavior<CAI_BaseNPC,100000>::vfunc25
char CAI_Behavior<CAI_BaseNPC,100000>::vfunc25(int a) { m_flag10 = 0; return 1; }
// END FUNCTION

// FUNCTION: 0x102c71f0 size=0x1
// TARGET: sub_102c71f0
void sub_102c71f0()
{
}
// END FUNCTION

// FUNCTION: 0x102c7210 size=0x1
// TARGET: sub_102c7210
void sub_102c7210()
{
}
// END FUNCTION

// FUNCTION: 0x102c7230 size=0x1
// TARGET: sub_102c7230
void sub_102c7230() {
}
// END FUNCTION

// FUNCTION: 0x102c7250 size=0x1
// TARGET: sub_102c7250
void sub_102c7250()
{
}
// END FUNCTION

// FUNCTION: 0x102c7270 size=0x1
// TARGET: sub_102c7270
void sub_102c7270() {
}
// END FUNCTION

// FUNCTION: 0x102c7290 size=0x1
// TARGET: sub_102c7290
void sub_102c7290()
{
}
// END FUNCTION

// FUNCTION: 0x102c72b0 size=0x1
// TARGET: sub_102c72b0
void sub_102c72b0() {
}
// END FUNCTION

// FUNCTION: 0x102c8a10 size=0xb
#include "CAI_Behavior.h"
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) H(c) H(d) H(e) T(f0) T(f1) T(f2) T(f3) T(f4) T(f5) T(f6) T(f7)
	virtual void target();
};

// TARGET: CAI_Behavior<CAI_BaseNPC,100000>::vfunc6
void CAI_Behavior<CAI_BaseNPC,100000>::vfunc6()
{
	((CSlots *)m_p0004)->target();
}
// END FUNCTION
