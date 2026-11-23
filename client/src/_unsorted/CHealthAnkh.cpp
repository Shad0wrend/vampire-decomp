// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10050f80 size=0xca
#include "CHealthAnkh.h"
extern CHealthAnkh *g_103ede9c;
// TARGET: ??0CHealthAnkh@@QAE@H@Z
CHealthAnkh::CHealthAnkh(int parent) : CManagedHudElement(parent, (int)"HealthAnkh")
{
	sub_10051100();
	vfunc63(0);
	sub_101a9890(m_unk178, m_unk17c);
	sub_101a98f0(m_unk180, m_unk184);
	m_unk18c = 1;
	m_unk18d = 1;
	m_unk18e = 0;
	m_unk188 = 0;
	vfunc114(100);
	vfunc64(1);
	g_103ede9c = this;
	m_unk198 = -1;
	m_unk19c = -1;
	m_unk1a0 = 0;
	m_unk1a4 = 0;
	m_unk1a8 = 0;
	m_unk1ac = 0;
	m_unk190 = 0;
	m_unk194 = 0;
}
// END FUNCTION

// FUNCTION: 0x100511b0 size=0x20
#include "CHealthAnkh.h"
namespace lifted {
int sub_10167af0();
}
void CHealthAnkh::vfunc114(int a0)
{
    if (a0 < (*(int *)((char *)this + 0x190))) {
        lifted::sub_10167af0();
    }
    *(int *)((char *)this + 0x190) = a0;
}
// END FUNCTION

// FUNCTION: 0x10051ad0 size=0x1
#include "CHealthAnkh.h"
void CHealthAnkh::vfunc97()
{
}
// END FUNCTION
