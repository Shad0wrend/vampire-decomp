// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035f650 size=0x249
#include "CNPC_VTzimisce.h"
#include "CNPC_VAnimal.h"
#include "CAI_BaseNPC.h"
#include "CAI_Navigator.h"
#include "CEntityVSlots.h"

extern int g_1093a4a0;
extern Vector g_10934060;
extern float g_104a8730;
float sub_102d61b0(int a);

struct CAnimalMove { void sub_102ee1c0(float f); };

struct AINavGoal4
{
	AINavGoal4(int type, const Vector &dest, int activity = -1, float tolerance = g_104a8730, unsigned flags = 0, int pTarget = g_1093a4a0);
	int type;
	Vector dest;
	int destNode;
	int activity;
	int arrivalActivity;
	int arrivalSequence;
	float tolerance;
	unsigned flags;
	int pTarget;
	Vector m_vec2c;
	int m_i38;
	int m_i3c;
};

inline AINavGoal4::AINavGoal4(int type, const Vector &dest, int activity, float tolerance, unsigned flags, int pTarget)
 :	type(type), dest(dest), destNode(-1), activity(activity), tolerance(tolerance), flags(flags), pTarget(pTarget),
	arrivalActivity(-1), arrivalSequence(-1), m_vec2c(g_10934060), m_i38(0), m_i3c(0)
{
}

struct CNavGoalView : CAI_Navigator { bool SetGoal(const AINavGoal4 &goal, unsigned flags = 0) { return sub_102ecd20((void *)&goal, flags); } };

struct CAnimalView
{
	char m_pad0000[0x1568];
	int m_n1568;
	char m_pad156c[0x1b44 - 0x156c];
	const char *m_pszFile;
	int m_nLine;
	char m_pad1b4c[0x5d34 - 0x1b4c];
	CAI_Navigator *m_pNav;
	char m_pad5d38[0x5d9c - 0x5d38];
	float m_f5d9c;
	char m_pad5da0[0x62ec - 0x5da0];
	void *m_p62ec;
	Vector m_vec;

	void TaskFailAt(const char *pszFile, int nLine, int code)
	{
		m_pszFile = pszFile;
		m_nLine = nLine;
		((CEntityVSlots *)this)->slot448(code);
	}
};

struct CAnimalWeapon { char m_pad[0x8c0]; float m_f8c0; };

// TARGET: CNPC_VAnimal::sub_1035f650
void CNPC_VAnimal::sub_1035f650(int *pTask)
{
	CAnimalView *v = (CAnimalView *)this;
	switch (pTask[0]) {
	case 0x9f:
		if (sub_1032e7b0()) {
			CAnimalMove *pMove = (CAnimalMove *)v->m_pNav;
			float f = sub_102d61b0(v->m_n1568) * 2;
			pMove->sub_102ee1c0(((CAnimalWeapon *)sub_1032e7b0())->m_f8c0 * *(const float *)&pTask[1] + f);
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			return;
		}
		v->TaskFailAt("E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp", 0x165, 3);
		return;
	case 0x89:
		v->m_f5d9c = gpGlobals->curtime;
		((CAI_BaseNPC *)this)->sub_10289ee0(0x4b);
		return;
	case 0x8a:
		v->m_f5d9c = gpGlobals->curtime;
		((CAI_BaseNPC *)this)->sub_10289ee0(0x4b);
		return;
	case 0x8b:
		((CAI_BaseNPC *)this)->sub_10289ee0(0x50);
		return;
	case 0x8e:
		((CAI_BaseNPC *)this)->sub_10289ee0(0x52);
		return;
	case 0xa5:
		break;
	default:
		sub_102a1910(pTask);
		return;
	}
	if (v->m_p62ec) {
		if (((CNavGoalView *)v->m_pNav)->SetGoal(AINavGoal4(9, v->m_vec), 0)) {
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			return;
		}
		v->TaskFailAt("E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp", 0x199, 0xc);
		return;
	}
	v->TaskFailAt("E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp", 0x19e, 0x22);
}
// END FUNCTION

// FUNCTION: 0x1035fb50 size=0xd5
#include "CNPC_VAnimal.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_Navigator.h"

struct AnimalTarget {
	int m_n00;
	int m_nSchedule;
};

struct AnimalView {
	char m_pad0000[0x14b8];
	unsigned int m_flags14b8;
	char m_pad14bc[0x1b2c - 0x14bc];
	int m_n1b2c;
	const char *m_pszFile;
	int m_nLine;
	char m_pad1b38[0x5cc0 - 0x1b38];
	int m_nState;
	char m_pad5cc4[0x5d34 - 0x5cc4];
	CAI_Navigator *m_pNav;
	char m_pad5d38[0x62ec - 0x5d38];
	int m_n62ec;
	char m_pad62f0[0x63d9 - 0x62f0];
	char m_b63d9;
	char m_pad63da[0x6590 - 0x63da];
	AnimalTarget *m_pTarget;
};

int CNPC_VAnimal::vfunc438()
{
	AnimalView *p = (AnimalView *)this;
	CAI_BaseNPCTroika *pNPC = (CAI_BaseNPCTroika *)this;
	unsigned int flags = p->m_flags14b8;
	p->m_n1b2c = 5;
	if ((flags & 2) == 2) {
		p->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp";
		p->m_flags14b8 = flags & ~2;
		p->m_nLine = 0x204;
		return 0x15d;
	}
	switch (p->m_nState) {
	case 1:
		if (p->m_pTarget)
			return p->m_pTarget->m_nSchedule;
		if (p->m_b63d9) {
			if (p->m_pNav->sub_102ee620() != 9 && p->m_n62ec == 0) {
				p->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp";
				p->m_nLine = 0x217;
				return 0x156;
			}
			p->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp";
			p->m_nLine = 0x213;
			return 0x157;
		}
		break;
	case 3: {
		int sched = pNPC->sub_102b8a60();
		if (sched)
			return sched;
		sched = pNPC->sub_102b9060();
		if (sched)
			return sched;
		break;
	}
	}
	return pNPC->sub_102af660();
}
// END FUNCTION

// FUNCTION: 0x1035fe80 size=0x204
#include "CNPC_VAnimal.h"
#include "engineiface.h"

struct CVAnimalView461
{
	char pad0000[0x1b38];
	int m_n1b38;
	const char *m_pszFile1b3c;
	int m_nLine1b40;
	char pad1b44[0x5cc0 - 0x1b44];
	int m_nState5cc0;
	volatile int m_nIdeal5cc4;
	char pad5cc8[0x65f6 - 0x5cc8];
	char m_b65f6;
};

extern void (__cdecl *g_109f3658)(int, const char *, ...);

int CNPC_VAnimal::vfunc461()
{
	CVAnimalView461 *p = (CVAnimalView461 *)this;
	bool bSet = false;
	p->m_n1b38 = 5;
	switch (p->m_nState5cc0) {
	case 10:
		if (sub_10269d30(0x44)) {
			p->m_nIdeal5cc4 = 8;
			int ret = p->m_nIdeal5cc4;
			p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp";
			p->m_nLine1b40 = 0x54d;
			return ret;
		}
		if (sub_10269d30(0x46)) {
			int r = enginerandom->vfunc2(0, 99);
			p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp";
			if (r < 30) {
				p->m_nIdeal5cc4 = 2;
				int ret = p->m_nIdeal5cc4;
				p->m_nLine1b40 = 0x555;
				return ret;
			}
			p->m_nIdeal5cc4 = 8;
			int ret2 = p->m_nIdeal5cc4;
			p->m_nLine1b40 = 0x55a;
			return ret2;
		}
		break;
	case 8:
		if (sub_10269d30(0x47)) {
			p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp";
			if (p->m_b65f6) {
				p->m_nIdeal5cc4 = 1;
				int ret = p->m_nIdeal5cc4;
				p->m_nLine1b40 = 0x53c;
				return ret;
			}
			p->m_nIdeal5cc4 = 3;
			int ret2 = p->m_nIdeal5cc4;
			p->m_nLine1b40 = 0x540;
			return ret2;
		}
		break;
	case 2:
		if (((int (__fastcall *)(CNPC_VAnimal *))(*(void ***)this)[167])(this) == 0) {
			if (sub_10269aa0(0x46)) {
				bSet = true;
				p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp";
				if (p->m_b65f6) {
					p->m_nLine1b40 = 0x519;
					p->m_nIdeal5cc4 = bSet;
				} else {
					p->m_nLine1b40 = 0x51d;
					p->m_nIdeal5cc4 = 3;
				}
			}
			g_109f3658(2, "***Combat state with no enemy!\n");
			if (bSet)
				return p->m_nIdeal5cc4;
		} else if (sub_10269d30(0x47)) {
			p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAnimal.cpp";
			if (p->m_b65f6) {
				p->m_nIdeal5cc4 = 1;
				int ret = p->m_nIdeal5cc4;
				p->m_nLine1b40 = 0x529;
				return ret;
			}
			p->m_nIdeal5cc4 = 3;
			int ret2 = p->m_nIdeal5cc4;
			p->m_nLine1b40 = 0x52d;
			return ret2;
		}
		break;
	}
	return sub_102ad660();
}
// END FUNCTION
