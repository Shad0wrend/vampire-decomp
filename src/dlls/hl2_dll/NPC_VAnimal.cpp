// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
