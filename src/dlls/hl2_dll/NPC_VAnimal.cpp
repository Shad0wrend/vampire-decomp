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
