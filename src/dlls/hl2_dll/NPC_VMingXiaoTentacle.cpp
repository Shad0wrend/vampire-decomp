// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1039e970 size=0xbc
#include "CNPC_VMingXiaoTentacle.h"

#define TENTACLE_FILE "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiaoTentacle.cpp"

void CNPC_VMingXiaoTentacle::sub_1039e970()
{
	switch ((unsigned int)m_n6670) {
	case 0:
		goto L_default;
	case 1:
		goto L_default;
	case 2:
		m_pszFile1b30 = TENTACLE_FILE;
		m_nLine1b34 = 0x590;
		sub_102ae750(0x16a, 1);
		break;
	case 3:
		if (sub_10295460(0x1d, 0) != -1) {
			m_pszFile1b30 = TENTACLE_FILE;
			m_nLine1b34 = 0x598;
			sub_102ae750(0x16a, 1);
		} else {
			m_pszFile1b30 = TENTACLE_FILE;
			m_nLine1b34 = 0x59d;
			sub_102ae750(0x16c, 1);
		}
		break;
	default:
	L_default:
		sub_1039f310();
		m_pszFile1b30 = TENTACLE_FILE;
		m_nLine1b34 = 0x589;
		sub_102ae750(0x16b, 1);
		break;
	}
	m_nTakeDamage = 1;
	m_b6699 = 1;
	m_b63d8 = 1;
}
// END FUNCTION
