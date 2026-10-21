// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10281730 size=0x6d
#include "CAI_BaseNPC.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CNpcSlotView {
    S100(a0) S100(a1) S100(a2) S100(a3)
    S10(b0) S10(b1) S10(b2)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
    virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8();
    virtual int vfunc439(int a, int b, int c);
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6();
    virtual int vfunc447(int a);
};
struct CNpcScheduleUnit {
    int *sub_10005f1a();
    void sub_102cc1f0(int a);
    void sub_10281730();
};

void CNpcScheduleUnit::sub_10281730()
{
    char *p = (char *)this;
    CNpcSlotView *v = (CNpcSlotView *)this;
    int nClass;
    int *pTarget;
    int nId;
    if (*(int **)(p + 0x5c38))
        nClass = v->vfunc447(*(int *)(*(int *)(p + 0x5c38) + 0x1c));
    else
        nClass = 0;
    pTarget = sub_10005f1a();
    nId = pTarget ? *pTarget : 0;
    int r = v->vfunc439(nClass, nId, *(int *)(p + 0x5c50));
    *(int *)(p + 0x1b2c) = 1;
    *(const char **)(p + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC_Schedule.cpp";
    *(int *)(p + 0x1b34) = 0x2aa;
    sub_102cc1f0(r);
}
// END FUNCTION

// FUNCTION: 0x1028a2a0 size=0xaa
#include "CAI_BaseNPC.h"

extern char g_105cde88[];	// "E:\\Vampire\\main\\dlls\\AI_BaseNPC_Schedule.cpp"

int CAI_BaseNPC::vfunc437()
{
	*(int *)((char *)this + 0x1b2c) = 1;
	if (sub_10269aa0(0x73)) {
		*(float *)((char *)this + 0x3ec) = 1.0f;
		vfunc208(0);
	}
	if (sub_10269aa0(0x75)) {
		*(const char **)((char *)this + 0x1b30) = g_105cde88;
		*(int *)((char *)this + 0x1b34) = 0xe2b;
		return 0x3a;
	}
	if (sub_10269aa0(0x30)) {
		*(const char **)((char *)this + 0x1b30) = g_105cde88;
		*(int *)((char *)this + 0x1b34) = 0xe32;
		return 0x151;
	}
	if (sub_10269aa0(0x73)) {
		*(const char **)((char *)this + 0x1b30) = g_105cde88;
		*(int *)((char *)this + 0x1b34) = 0xe37;
		return 0x3e;
	}
	return 0;
}
// END FUNCTION
