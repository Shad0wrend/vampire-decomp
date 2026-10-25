// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103830e0 size=0x37
#include "CBaseAnimating.h"

struct CUnknown103830e0
{
	char m_pad0000[0x1b30];
	const char *m_pszFile1b30;
	int m_nLine1b34;

	void sub_103830e0();
	void sub_102ae750(int a, int b);
};

// TARGET: CUnknown103830e0::sub_103830e0
void CUnknown103830e0::sub_103830e0()
{
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHengeyokai.cpp";
	m_nLine1b34 = 0x985;
	sub_102ae750(0x16e, 0);
	((CBaseAnimating *)this)->sub_1008d5f0(0.0f);
	((CBaseAnimating *)this)->sub_1008d6d0(1);
}
// END FUNCTION
