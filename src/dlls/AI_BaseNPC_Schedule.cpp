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

// FUNCTION: 0x1028a380 size=0x6a8
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "CBaseEntity.h"
#include <math.h>
#include "CAI_Navigator.h"

typedef void (__cdecl *FnDevWarning)(int level, const char *fmt, ...);
extern FnDevWarning g_109f3658;
extern int g_1070d1b0;

#define NPC_I(off) (*(int *)((char *)this + (off)))
#define NPC_SCHED_RET(line, val) \
	do { NPC_I(0x1b34) = (line); *(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC_Schedule.cpp"; return (val); } while (0)

int CAI_BaseNPC::vfunc438()
{
	NPC_I(0x1b2c) = 1;
	switch (NPC_I(0x5cc0)) {
	case 0:
		g_109f3658(2, "NPC_STATE IS NONE!\n");
		break;
	case 6:
		NPC_SCHED_RET(0xe51, 1);
	case 1:
		if (sub_10269aa0(0x6a) || sub_10269aa0(0x6d) || sub_10269aa0(0x6e) || sub_10269aa0(0x70) || sub_10269aa0(0x6f))
			NPC_SCHED_RET(0xe5b, 6);
		if (sub_10269aa0(0x68))
			NPC_SCHED_RET(0xe60, 0x38);
		if (!((CAI_Navigator *)NPC_I(0x5d34))->sub_102ee620())
			NPC_SCHED_RET(0xe65, 1);
		if (sub_10269aa0(0x4c) && sub_1008dc40(0x49, -1) != -1) {
			*((char *)this + 0x5b80) = 0;
			NPC_SCHED_RET(0xe6b, 0x14);
		}
		NPC_SCHED_RET(0xe70, 2);
	case 3:
		if (sub_10269aa0(0x58) && sub_1008dc40(0x61, -1) != -1)
			NPC_SCHED_RET(0xe79, 8);
		if (!sub_10269aa0(0x4c) && !sub_10269aa0(0x4d)) {
			if (!sub_10269aa0(0x6a) && !sub_10269aa0(0x6f) && !sub_10269aa0(0x6e) && !sub_10269aa0(0x70) && !sub_10269aa0(0x6d))
				NPC_SCHED_RET(0xe95, 9);
			NPC_SCHED_RET(0xe91, 6);
		}
		*((char *)this + 0x5b80) = 0;
		if (fabs(((CAI_Motor *)NPC_I(0x5d44))->sub_102e1f90()) < (1.0 - *(float *)((char *)this + 0x1574)) * 60.0)
			NPC_SCHED_RET(0xe82, 0x19);
		if (sub_1008dc40(0x49, -1) != -1)
			NPC_SCHED_RET(0xe86, 7);
		NPC_SCHED_RET(0xe89, 6);
	case 2:
		if (sub_10269aa0(0x54))
			NPC_SCHED_RET(0xe9d, 5);
		if (sub_10269aa0(0x58)) {
			sub_10279a50(0);
			if (sub_10279dd0())
				sub_10269b50(0x58);
			else
				sub_1026e340(3);
			return sub_1028a260();
		}
		if ((sub_10269aa0(0x4c) || sub_10269aa0(0x4d)) && !(*(unsigned char *)((char *)this + 0x5d8c) & 0x40) && sub_1008dc40(0x49, -1) != -1) {
			*((char *)this + 0x5b80) = 0;
			NPC_SCHED_RET(0xeb4, 0x14);
		}
		if (vfunc404((CBaseEntity *)vfunc167()) == 2) {
			if (!sub_10269aa0(0x46) && !sub_10269aa0(0x4c) && !sub_10269aa0(0x4d))
				NPC_SCHED_RET(0xec5, 0xd);
			*((char *)this + 0x5b80) = 0;
			vfunc492();
			NPC_SCHED_RET(0xec1, 0x1b);
		}
		if (!sub_10269aa0(0x46)) {
			if (!sub_10269aa0(0x48))
				NPC_SCHED_RET(0xecf, 0xb);
			NPC_SCHED_RET(0xed4, 0xf);
		}
		if (sub_10269aa0(0x5f))
			NPC_SCHED_RET(0xed9, 0x15);
		if (sub_10269aa0(0x4f))
			NPC_SCHED_RET(0xee0, 0x21);
		if (sub_10269aa0(0x50))
			NPC_SCHED_RET(0xee4, 0x22);
		if (sub_10269aa0(0x51))
			NPC_SCHED_RET(0xee8, 0x1f);
		if (sub_10269aa0(0x52))
			NPC_SCHED_RET(0xeec, 0x20);
		if (sub_10269aa0(0x61))
			NPC_SCHED_RET(0xef0, 0xb);
		if (!sub_10269aa0(0x4f) && !sub_10269aa0(0x51))
			NPC_SCHED_RET(0xef6, 0xf);
		g_109f3658(2, "No suitable combat schedule!\n");
		break;
	case 7:
		if (sub_10090180(&g_1070d1b0, -1, 0))
			NPC_SCHED_RET(0xf04, 0x2c);
		NPC_SCHED_RET(0xf06, 0x2b);
	case 4:
		if (!((EHANDLE *)((char *)this + 0x5d74))->Get()) {
			g_109f3658(2, "Script failed for %s\n", sub_1009f200());
			sub_1027d170();
			NPC_SCHED_RET(0xf10, 1);
		}
		NPC_SCHED_RET(0xf13, 0x2e);
	case 12:
		NPC_SCHED_RET(0xf17, 1);
	default:
		g_109f3658(2, "Invalid State for SelectSchedule!\n");
		break;
	}
	NPC_SCHED_RET(0xf21, 0x43);
}
// END FUNCTION
